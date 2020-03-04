// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PuzzleReward.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UPuzzleReward : public UInterface
{
	GENERATED_BODY()
};

/** Interface that should be implemented by all puzzle rewards actors. */
class TEMPLEESCAPE_API IPuzzleReward
{
	GENERATED_BODY()

public:
	/** Unlocks the reward. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	bool UnlockReward();

	/** Locks the reward. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	bool LockReward();

	/** Event called when the puzzle reward is unlocked. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	void OnRewardUnlocked();

	/** Event called when the puzzle reward is locked. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	void OnRewardLocked();

	/** Is the reward unlocked or not.
	 * @return True if the reward is unlocked, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Puzzle")
	bool IsRewardUnlocked();
};
