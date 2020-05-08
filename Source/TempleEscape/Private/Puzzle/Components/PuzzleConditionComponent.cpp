// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleConditionComponent.h"

// Sets default values for this component's properties
UPuzzleConditionComponent::UPuzzleConditionComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

// Called when the game starts
void UPuzzleConditionComponent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UPuzzleConditionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPuzzleConditionComponent::NotifyStateChanged(bool State)
{
    bIsMet = State;

    for (UPuzzleComponent* Puzzle : RegisteredPuzzles)
    {
        if (!Puzzle) {
            UE_LOG(LogTemp, Error,
				TEXT("UPuzzleComponent %s - NotifyStateChanged: Puzzle is None (ignored)"),
				*GetOwner()->GetName())
            
            continue;
        }

		Puzzle->ConditionStateChanged(this, State);

        if (bDebug)
        {
            UE_LOG(LogTemp, Warning,
				TEXT("APuzzleButton %s - NotifyStateChanged: Puzzle %s notified"),
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
			TEXT("APuzzleButton %s - RegisterPuzzle: Puzzle %s registered"),
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
			TEXT("APuzzleButton %s - UnregisterPuzzle: Puzzle %s Unregistered"),
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
