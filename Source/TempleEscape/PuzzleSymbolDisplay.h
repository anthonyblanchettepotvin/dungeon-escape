// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "SymbolDisplay.h"
#include "PuzzleCondition.h"
#include "PuzzleSymbolDisplay.generated.h"

/**
 * 
 */
UCLASS()
class TEMPLEESCAPE_API APuzzleSymbolDisplay : public ASymbolDisplay, public IPuzzleCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Puzzle")
	ESymbol NeededSymbol = ESymbol::S_Triangle;

private:
	bool Evaluate_Implementation() override;
};
