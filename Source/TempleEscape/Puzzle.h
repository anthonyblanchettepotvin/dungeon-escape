// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Puzzle.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UPuzzle : public UInterface
{
	GENERATED_BODY()
};

/** Interface that should be implemented by all puzzle actors. */
class TEMPLEESCAPE_API IPuzzle
{
	GENERATED_BODY()

public:
	/** Check if all the puzzle conditions are met.
	 * @return True if all the puzzle conditions evaluate to true, false otherwise
	 * @note By "puzzle conditions", we mean actors that implement IPuzzleConditionInterface.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	bool ConditionsMet();

	/** Event called when all the conditions are met. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	void OnConditionsMet();

	/** Event called when all the conditions are unmet. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	void OnConditionsUnmet();
};
