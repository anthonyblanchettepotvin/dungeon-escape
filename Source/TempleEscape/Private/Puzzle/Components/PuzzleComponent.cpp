// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleComponent.h"

// Sets default values for this component's properties
UPuzzleComponent::UPuzzleComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UPuzzleComponent::BeginPlay()
{
	Super::BeginPlay();

	CheckConditionsActors();
	bRewardsOK = CheckRewardsActors();
	CheckTriggerActor();

	if (!bRewardsOK)
	{
		UE_LOG(LogTemp, Error,
			TEXT("UPuzzleComponent %s: Not all rewards implement IPuzzleReward."),
			*GetOwner()->GetName())
	}

	if (TriggerComponent)
	{
		TriggerComponent->RegisterPuzzle(this);
		// TODO: Do something if it doesn't exists anymore ?
	}
	
	for (UPuzzleConditionComponent* ConditionComponent : ConditionsComponents)
	{
		if (ConditionComponent)
		{
			ConditionComponent->RegisterPuzzle(this);
			// TODO: Do something if it doesn't exists anymore ?
		}
	}
}

// Called every frame
void UPuzzleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPuzzleComponent::CheckConditionsActors()
{
	for (AActor* Condition : Conditions)
	{
		if (!Condition)
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - CheckConditionsActors: Actor is None (ignored)"),
				*GetOwner()->GetName())
			
			continue;
		}

		UPuzzleConditionComponent* PuzzleConditionComponent = Condition->FindComponentByClass<UPuzzleConditionComponent>();
		if (!PuzzleConditionComponent)
		{
			UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - CheckConditionsActors: Actor %s doesn't have a PuzzleCondition component (ignored)"),
				*GetOwner()->GetName(),
				*Condition->GetName())
		}
		else
		{
			ConditionsComponents.Add(PuzzleConditionComponent);
		}
	}
}

bool UPuzzleComponent::CheckRewardsActors()
{
	for (AActor* Reward : Rewards)
	{
		bool bImplementsInterface = Reward->GetClass()->ImplementsInterface(UPuzzleReward::StaticClass()); 
		if (!bImplementsInterface)
		{
			return false;
		}
	}

	return true;
}

void UPuzzleComponent::CheckTriggerActor()
{
	if (!Trigger)
	{
		UE_LOG(LogTemp, Error,
			TEXT("UPuzzleComponent %s - CheckTriggerActor: Actor is None (ignored)"),
			*GetOwner()->GetName())
		
		return;
	}

	UPuzzleTriggerComponent* PuzzleTriggerComponent = Trigger->FindComponentByClass<UPuzzleTriggerComponent>();
	if (!PuzzleTriggerComponent)
	{
		UE_LOG(LogTemp, Error,
			TEXT("UPuzzleComponent %s - CheckTriggerActor: Actor %s doesn't have a PuzzleTrigger component (ignored)"),
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
	for (AActor* Reward : Rewards)
	{
		// We already know that all the actors implement the necessary interface(s)
		IPuzzleReward::Execute_UnlockReward(Reward);
	}
}

void UPuzzleComponent::LockAllRewards()
{
	for (AActor* Reward : Rewards)
	{
		// We already know that all the actors implement the necessary interface(s)
		IPuzzleReward::Execute_LockReward(Reward);
	}
}

void UPuzzleComponent::ActOnConditionsMet()
{
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
	if (!bRewardsOK) { return false; }

	for (UPuzzleConditionComponent* ConditionComponent : ConditionsComponents)
	{
		if (!ConditionComponent->GetIsMet())
		{
			return false;
		}
	}

	return true;
}

void UPuzzleComponent::ConditionStateChanged(UPuzzleConditionComponent* Source, bool State)
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s - ConditionStateChanged: Condition %s state changed to %s"),
			*GetOwner()->GetName(),
			*Source->GetOwner()->GetName(),
			State ? TEXT("true") : TEXT("false"))
	}

	if (!TriggerComponent || !State) { ActOnConditionsMet(); }
}

void UPuzzleComponent::TriggerTriggered(UPuzzleTriggerComponent* Source)
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s - TriggerTriggered: Trigger %s triggered"),
			*GetOwner()->GetName(),
			*Source->GetOwner()->GetName())
	}

	ActOnConditionsMet();
}

// Events
void UPuzzleComponent::OnConditionsMet_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s: OnConditionsMet"),
			*GetOwner()->GetName())
	}
}

void UPuzzleComponent::OnConditionsUnmet_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s: OnConditionsUnmet"),
			*GetOwner()->GetName())
	}
}
