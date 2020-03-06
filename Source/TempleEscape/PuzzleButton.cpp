// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleButton.h"

bool APuzzleButton::Evaluate_Implementation()
{
    return bIsPressed;
}

bool APuzzleButton::Interact_Implementation()
{
    Super::Interact_Implementation();
    
    for (auto &&AjdacentButton : AdjacentButtons)
    {
        if (AjdacentButton->bIsPressed)
        {
            AjdacentButton->Unpress();
        }
        else
        {
            AjdacentButton->Press();
        }
    }
    
    return true;
}
