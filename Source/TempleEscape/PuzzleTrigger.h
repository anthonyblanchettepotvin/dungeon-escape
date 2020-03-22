// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PuzzleTrigger.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UPuzzleTrigger : public UInterface
{
	GENERATED_BODY()
};

/** Interface that should be implemented by all puzzle trigger actors. */
class TEMPLEESCAPE_API IPuzzleTrigger
{
	GENERATED_BODY()

public:
	/**
	 * Called when the trigger is triggered.
	 * @return True if the triggering was successful, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	bool Trigger();

	/**
	 * Subscribe a puzzle to the trigger.
	 * @param Puzzle Puzzle to subscribe to the trigger (must implement IPuzzle)
	 * @return True if the action was successful, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	bool Subscribe(AActor* Puzzle);

	/**
	 * Unsubscribe a puzzle from the trigger.
	 * @param Puzzle Puzzle to unsubscribe from the trigger (must implement IPuzzle)
	 * @return True if the action was successful, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	bool Unsubscribe(AActor* Puzzle);
};
