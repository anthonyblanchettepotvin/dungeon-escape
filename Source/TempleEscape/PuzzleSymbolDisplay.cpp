// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleSymbolDisplay.h"

bool APuzzleSymbolDisplay::Evaluate_Implementation()
{
    return CurrentSymbol == NeededSymbol;
}
