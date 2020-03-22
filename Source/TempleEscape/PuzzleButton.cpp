// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleButton.h"

bool APuzzleButton::Evaluate_Implementation()
{
    return bIsPressed;
}

bool APuzzleButton::NotifyPuzzleStateChanged_Implementation()
{
    for (AActor* Puzzle : RegisteredPuzzles)
    {
        if (bDebug)
        {
            UE_LOG(LogTemp, Warning, TEXT("APuzzleButton %s: Notifying puzzle %s."), *GetName(), *Puzzle->GetName());
        }

        IPuzzle::Execute_ConditionStateChanged(Puzzle, this, bIsPressed);
    }

    return true;
}

bool APuzzleButton::RegisterPuzzle_Implementation(AActor* Puzzle)
{
    if (bDebug)
    {
        UE_LOG(LogTemp, Warning, TEXT("APuzzleButton %s: Puzzle %s registered."), *GetName(), *Puzzle->GetName());
    }

    bool bImplementsInterface = Puzzle->GetClass()->ImplementsInterface(UPuzzle::StaticClass());
    if (!bImplementsInterface) { return false; }

    if (!RegisteredPuzzles.Contains(Puzzle))
    {
        RegisteredPuzzles.Add(Puzzle);
    }

    return true;
}

bool APuzzleButton::UnregisterPuzzle_Implementation(AActor* Puzzle)
{
    if (bDebug)
    {
        UE_LOG(LogTemp, Warning, TEXT("APuzzleButton %s: Puzzle %s registered."), *Puzzle->GetName());
    }

    bool bImplementsInterface = Puzzle->GetClass()->ImplementsInterface(UPuzzle::StaticClass());
    if (!bImplementsInterface) { return false; }

    if (RegisteredPuzzles.Contains(Puzzle))
    {
        RegisteredPuzzles.Remove(Puzzle);
    }

    return true;
}

void APuzzleButton::Press()
{
    Super::Press();

    Trigger_Implementation();
}

bool APuzzleButton::Interact_Implementation()
{
    Super::Interact_Implementation();
    
    // TODO: This bit of code is repeated in ABaseButton, should probably be a function by itseft
    for (APuzzleButton* AdjacentButton : AdjacentButtons)
    {
        if (AdjacentButton->bIsPressing)
        {
            AdjacentButton->Unpress();
        }
        else if (AdjacentButton->bIsUnpressing)
        {
            AdjacentButton->Press();
        }
        else if (AdjacentButton->bIsPressed)
        {
            AdjacentButton->Unpress();
        }
        else if (!AdjacentButton->bIsPressed)
        {
            AdjacentButton->Press();
        }
    }
    
    return true;
}

bool APuzzleButton::Trigger_Implementation()
{
    if (bDebug)
    {
        UE_LOG(LogTemp, Warning, TEXT("APuzzleButton %s: Triggered."), *GetName())
    }

    for (AActor* Puzzle : SubscribedPuzzles)
    {
        IPuzzle::Execute_ReactToTrigger(Puzzle); // If the puzzle is subscribed, it implements IPuzzle
    }

    return true;
}

bool APuzzleButton::Subscribe_Implementation(AActor* Puzzle)
{
    IPuzzle* PuzzleInterface = Cast<IPuzzle>(Puzzle);
    if (PuzzleInterface)
    {
        SubscribedPuzzles.Add(Puzzle);
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("APuzzleButton %s: Puzzle %s doesn't implement IPuzzle."), *GetName(), *Puzzle->GetName());
        return false;
    }
}

bool APuzzleButton::Unsubscribe_Implementation(AActor* Puzzle)
{
    if (SubscribedPuzzles.Contains(Puzzle))
    {
        SubscribedPuzzles.Remove(Puzzle);
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("APuzzleButton %s: Puzzle %s not subscribed."), *GetName(), *Puzzle->GetName());
        return false;
    }
}

void APuzzleButton::SetIsPressed(bool Value)
{
    Super::SetIsPressed(Value);

    NotifyPuzzleStateChanged_Implementation();
}
