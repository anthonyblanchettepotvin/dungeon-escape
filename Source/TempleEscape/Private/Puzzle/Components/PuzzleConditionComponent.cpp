// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleConditionComponent.h"

UPuzzleConditionComponent::UPuzzleConditionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPuzzleConditionComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPuzzleConditionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// Functions
void UPuzzleConditionComponent::NotifyStateChanged(bool State)
{
    bIsMet = State;

    for (UPuzzleComponent* Puzzle : RegisteredPuzzles)
    {
        if (!Puzzle) {
            UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - NotifyStateChanged - Puzzle is None (ignored)"),
				*GetOwner()->GetName())
            
            continue;
        }

		Puzzle->ConditionStateChanged(this, State);

        if (bDebug)
        {
            UE_LOG(LogTemp, Warning,
				TEXT("UPuzzleComponent %s - NotifyStateChanged - Puzzle %s notified"),
				*GetOwner()->GetName(),
				*Puzzle->GetOwner()->GetName())
        }
    }
}

void UPuzzleConditionComponent::RegisterPuzzle(UPuzzleComponent* Puzzle)
{
	if (!Puzzle) { return; } // TODO: Throw exception ?

    if (!RegisteredPuzzles.Contains(Puzzle))
    {
        RegisteredPuzzles.Add(Puzzle);
    }

    if (bDebug)
    {
        UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s - RegisterPuzzle - Puzzle %s registered"),
			*GetOwner()->GetName(),
			*Puzzle->GetOwner()->GetName())
    }
}

void UPuzzleConditionComponent::UnregisterPuzzle(UPuzzleComponent* Puzzle)
{
	if (!Puzzle) { return; } // TODO: Throw exception ?

    if (RegisteredPuzzles.Contains(Puzzle))
    {
        RegisteredPuzzles.Remove(Puzzle);
    }

    if (bDebug)
    {
        UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleComponent %s - UnregisterPuzzle - Puzzle %s Unregistered"),
			*GetOwner()->GetName(),
			*Puzzle->GetOwner()->GetName())
    }
}

// Getters/setters
bool UPuzzleConditionComponent::IsMet()
{
    return bIsMet;
}

void UPuzzleConditionComponent::SetIsChangingState(bool Value)
{
    bIsChangingState = Value;
}

bool UPuzzleConditionComponent::IsChangingState()
{
    return bIsChangingState;
}
