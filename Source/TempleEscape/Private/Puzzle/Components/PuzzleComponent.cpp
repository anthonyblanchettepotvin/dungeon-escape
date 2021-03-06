// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleComponent.h"
#include "PuzzleRewardComponent.h"
#include "PuzzleConditionComponent.h"
#include "PuzzleTriggerComponent.h"

UPuzzleComponent::UPuzzleComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPuzzleComponent::BeginPlay()
{
	Super::BeginPlay();

	CheckConditionsActors();
	CheckRewardsActors();
	CheckTriggerActor();

	for (UPuzzleConditionComponent* ConditionComponent : ConditionsComponents)
	{
		if (ConditionComponent)
		{
			ConditionComponent->RegisterPuzzle(this);
		}
		else
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - BeginPlay - PuzzleCondition component doesn't exist anymore (ignored)"),
				*GetOwner()->GetName())
		}
	}

	for (UPuzzleRewardComponent* RewardComponent : RewardsComponents)
	{
		if (RewardComponent)
		{
			RewardComponent->RegisterPuzzle(this);
		}
		else
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - BeginPlay - PuzzleReward component doesn't exist anymore (ignored)"),
				*GetOwner()->GetName())
		}
	}

	if (TriggerComponent)
	{
		TriggerComponent->RegisterPuzzle(this);
	}
	else
	{
		UE_LOG(LogTemp, Error,
			TEXT("UPuzzleComponent %s - BeginPlay - PuzzleTrigger component doesn't exist anymore (ignored)"),
			*GetOwner()->GetName())
	}
}

void UPuzzleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// Functions
void UPuzzleComponent::CheckConditionsActors()
{
	for (AActor* Condition : Conditions)
	{
		if (!Condition)
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - CheckConditionsActors - Actor is None (ignored)"),
				*GetOwner()->GetName())
			
			continue;
		}

		UPuzzleConditionComponent* PuzzleConditionComponent = Condition->FindComponentByClass<UPuzzleConditionComponent>();
		if (!PuzzleConditionComponent)
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - CheckConditionsActors - Actor %s doesn't have a PuzzleCondition component (ignored)"),
				*GetOwner()->GetName(),
				*Condition->GetName())
		}
		else
		{
			ConditionsComponents.Add(PuzzleConditionComponent);
		}
	}
}

void UPuzzleComponent::CheckRewardsActors()
{
	for (AActor* Reward : Rewards)
	{
		if (!Reward)
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - CheckRewardsActors - Actor is None (ignored)"),
				*GetOwner()->GetName())
			
			continue;
		}

		UPuzzleRewardComponent* PuzzleRewardComponent = Reward->FindComponentByClass<UPuzzleRewardComponent>();
		if (!PuzzleRewardComponent)
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - CheckRewardsActors - Actor %s doesn't have a PuzzleReward component (ignored)"),
				*GetOwner()->GetName(),
				*Reward->GetName())
		}
		else
		{
			RewardsComponents.Add(PuzzleRewardComponent);
		}
	}
}

void UPuzzleComponent::CheckTriggerActor()
{
	if (!Trigger)
	{
		UE_LOG(LogTemp, Error,
			TEXT("UPuzzleComponent %s - CheckTriggerActor - Actor is None (ignored)"),
			*GetOwner()->GetName())
		
		return;
	}

	UPuzzleTriggerComponent* PuzzleTriggerComponent = Trigger->FindComponentByClass<UPuzzleTriggerComponent>();
	if (!PuzzleTriggerComponent)
	{
		UE_LOG(LogTemp, Error,
			TEXT("UPuzzleComponent %s - CheckTriggerActor - Actor %s doesn't have a PuzzleTrigger component (ignored)"),
			*GetOwner()->GetName(),
			*Trigger->GetName())
	}
	else
	{
		TriggerComponent = PuzzleTriggerComponent;
	}
}

void UPuzzleComponent::UnlockAllRewards()
{
	if (!bIsOperational) { return; }

	for (UPuzzleRewardComponent* RewardComponent : RewardsComponents)
	{
		if (RewardComponent)
		{
			RewardComponent->UnlockReward(this);
		}
		else
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - UnlockAllRewards - PuzzleReward component doesn't exist (ignored)"),
				*GetOwner()->GetName())
		}
	}
}

void UPuzzleComponent::LockAllRewards()
{
	if (!bIsOperational) { return; }

	for (UPuzzleRewardComponent* RewardComponent : RewardsComponents)
	{
		if (RewardComponent)
		{
			RewardComponent->LockReward(this);
		}
		else
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - LockAllRewards - PuzzleReward component doesn't exist (ignored)"),
				*GetOwner()->GetName())
		}
	}
}

void UPuzzleComponent::ActOnConditionsMet()
{
	if (!bIsOperational) { return; }

	bool bConditionsAlreadyMet = bConditionsMet;
	bConditionsMet = AreConditionsMet();

	if (bConditionsMet && !bConditionsAlreadyMet)
	{
		// The conditions turned from met to unmet
		bConditionsAlreadyMet = true;
		OnConditionsMet();

		UnlockAllRewards();

		return;
	}

	if (!bConditionsMet && bConditionsAlreadyMet)
	{
		// The conditions turned from unmet to met
		bConditionsAlreadyMet = false;
		OnConditionsUnmet();

		if (!bUnlockRewardsPermanently)
		{
			LockAllRewards();
		}

		return;
	}
}

bool UPuzzleComponent::AreConditionsMet()
{
	for (UPuzzleConditionComponent* ConditionComponent : ConditionsComponents)
	{
		if (!ConditionComponent->IsMet() || ConditionComponent->IsChangingState())
		{
			return false;
		}
	}

	return true;
}

void UPuzzleComponent::ConditionStateChanged(UPuzzleConditionComponent* Source, bool State)
{
	if (!bIsOperational) { return; }

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s - ConditionStateChanged - Condition %s state changed to %s"),
			*GetOwner()->GetName(),
			*Source->GetOwner()->GetName(),
			State ? TEXT("true") : TEXT("false"))
	}

	if (!TriggerComponent || !State) { ActOnConditionsMet(); }
}

void UPuzzleComponent::TriggerTriggered(UPuzzleTriggerComponent* Source)
{
	if (!bIsOperational) { return; }

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s - TriggerTriggered - Trigger %s triggered"),
			*GetOwner()->GetName(),
			*Source->GetOwner()->GetName())
	}

	ActOnConditionsMet();
}

// Getters/setters
bool UPuzzleComponent::GetIsOperational()
{
	return bIsOperational;
}

void UPuzzleComponent::SetIsOperational(bool Value)
{
	bIsOperational = Value;
}

// Events
void UPuzzleComponent::OnConditionsMet_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s - OnConditionsMet"),
			*GetOwner()->GetName())
	}
}

void UPuzzleComponent::OnConditionsUnmet_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s - OnConditionsUnmet"),
			*GetOwner()->GetName())
	}
}
