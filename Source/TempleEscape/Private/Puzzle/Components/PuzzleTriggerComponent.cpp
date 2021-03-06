// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleTriggerComponent.h"

UPuzzleTriggerComponent::UPuzzleTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPuzzleTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UPuzzleTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// Functions
void UPuzzleTriggerComponent::NotifyTriggered()
{
    for (UPuzzleComponent* Puzzle : RegisteredPuzzles)
    {
        if (!Puzzle) {
            UE_LOG(LogTemp, Error,
				TEXT("UPuzzleTriggerComponent %s - NotifyTriggered - Puzzle is None (ignored)"),
				*GetOwner()->GetName())
            
            continue;
        }

		Puzzle->TriggerTriggered(this);

        if (bDebug)
        {
            UE_LOG(LogTemp, Warning,
				TEXT("UPuzzleTriggerComponent %s - NotifyTriggered - Puzzle %s notified"),
				*GetOwner()->GetName(),
				*Puzzle->GetOwner()->GetName())
        }
    }
}

void UPuzzleTriggerComponent::RegisterPuzzle(UPuzzleComponent* Puzzle)
{
	if (!Puzzle) { return; } // TODO: Throw exception ?

    if (!RegisteredPuzzles.Contains(Puzzle))
    {
        RegisteredPuzzles.Add(Puzzle);
    }

    if (bDebug)
    {
        UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleTriggerComponent %s - RegisterPuzzle - Puzzle %s registered"),
			*GetOwner()->GetName(),
			*Puzzle->GetOwner()->GetName())
    }
}

void UPuzzleTriggerComponent::UnregisterPuzzle(UPuzzleComponent* Puzzle)
{
	if (!Puzzle) { return; } // TODO: Throw exception ?

    if (RegisteredPuzzles.Contains(Puzzle))
    {
        RegisteredPuzzles.Remove(Puzzle);
    }

    if (bDebug)
    {
        UE_LOG(LogTemp, Warning,
			TEXT("UPuzzleTriggerComponent %s - UnregisterPuzzle - Puzzle %s Unregistered"),
			*GetOwner()->GetName(),
			*Puzzle->GetOwner()->GetName())
    }
}
