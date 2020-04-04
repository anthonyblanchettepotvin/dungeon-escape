// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleImplementation.h"

APuzzleImplementation::APuzzleImplementation()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APuzzleImplementation::BeginPlay()
{
	Super::BeginPlay();

	bConditionsOK = CheckConditionsImplementation();
	bRewardsOK = CheckRewardsImplementation();

	if (!bConditionsOK)
	{
		UE_LOG(LogTemp, Error, TEXT("APuzzleImplementation %s: Not all conditions implement IPuzzleCondition."), *GetName());
	}

	if (!bRewardsOK)
	{
		UE_LOG(LogTemp, Error, TEXT("APuzzleImplementation %s: Not all rewards implement IPuzzleReward."), *GetName());
	}

	if (Trigger)
	{
		if (!SubscribeToTrigger_Implementation(Trigger))
		{
			UE_LOG(LogTemp, Error, TEXT("APuzzleImplementation %s: Could not subscribe to Trigger."), *GetName());
		}
	}

	if (bConditionsOK)
	{
		for (AActor* Condition : Conditions)
		{
			IPuzzleCondition::Execute_RegisterPuzzle(Condition, this);
		}
	}
}

void APuzzleImplementation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool APuzzleImplementation::CheckConditionsImplementation()
{
	for (AActor* Condition : Conditions)
	{
		bool bImplementsInterface = Condition->GetClass()->ImplementsInterface(UPuzzleCondition::StaticClass()); 
		if (!bImplementsInterface)
		{
			return false;
		}
	}

	return true;	
}

bool APuzzleImplementation::CheckRewardsImplementation()
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

void APuzzleImplementation::UnlockAllRewards()
{
	for (AActor* Reward : Rewards)
	{
		// We already know that all the actors implement the necessary interface(s)
		IPuzzleReward::Execute_UnlockReward(Reward);
	}
}

void APuzzleImplementation::LockAllRewards()
{
	for (AActor* Reward : Rewards)
	{
		// We already know that all the actors implement the necessary interface(s)
		IPuzzleReward::Execute_LockReward(Reward);
	}
}

bool APuzzleImplementation::AreConditionsMet_Implementation()
{
	if (!bConditionsOK || !bRewardsOK) { return false; }

	for (AActor* Condition : Conditions)
	{
		// We already know that all the actors implement the necessary interface(s)
		if (!IPuzzleCondition::Execute_Evaluate(Condition))
		{
			return false;
		}
	}

	return true;
}

bool APuzzleImplementation::ConditionStateChanged_Implementation(AActor* Condition, bool State)
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("APuzzleImplementation %s: Condition %s state changed to %s"),
			*GetName(),
			*Condition->GetName(),
			State ? TEXT("true") : TEXT("false"))
	}

	if (!Trigger || !State) { ActOnConditionsMet(); }

	return true;
}

void APuzzleImplementation::OnConditionsMet_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("APuzzleImplementation %s: OnConditionsMet"), *GetName())
	}
}

void APuzzleImplementation::OnConditionsUnmet_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("APuzzleImplementation %s: OnConditionsUnmet"), *GetName())
	}
}

bool APuzzleImplementation::ReactToTrigger_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("APuzzleImplementation %s: Triggered"), *GetName())
	}

	ActOnConditionsMet();

	return true;
}

bool APuzzleImplementation::SubscribeToTrigger_Implementation(UObject* Trigger)
{
	bool bImplementsInterface = Trigger->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass());
	if (bImplementsInterface)
	{
		return IPuzzleTrigger::Execute_Subscribe(Trigger, this);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("APuzzleImplementation %s: Trigger %s doesn't implement IPuzzleTrigger"), *GetName(), *Trigger->GetName())
		return false;
	}
}

bool APuzzleImplementation::UnsubscribeFromTrigger_Implementation(UObject* Trigger)
{
	bool bImplementsInterface = Trigger->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass());
	if (bImplementsInterface)
	{
		return IPuzzleTrigger::Execute_Unsubscribe(Trigger, this);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("APuzzleImplementation %s: Trigger %s doesn't implement IPuzzleTrigger"), *GetName(), *Trigger->GetName())
		return false;
	}
}

void APuzzleImplementation::ActOnConditionsMet()
{
	bool bConditionsAlreadyMet = bConditionsMet;
	bConditionsMet = AreConditionsMet_Implementation();

	if (bConditionsMet && !bConditionsAlreadyMet)
	{
		// The conditions turned from met to unmet
		bConditionsAlreadyMet = true;
		OnConditionsMet_Implementation();
		UnlockAllRewards();
		return;
	}

	if (!bConditionsMet && bConditionsAlreadyMet)
	{
		// The conditions turned from unmet to met
		bConditionsAlreadyMet = false;
		OnConditionsUnmet_Implementation();
		LockAllRewards();
		return;
	}
}
