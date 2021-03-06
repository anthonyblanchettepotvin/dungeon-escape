// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PuzzleComponent.h"
#include "PuzzleRewardComponent.generated.h"

// Delegate Signatures
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnlockRewardSignature, UPuzzleComponent*, Source);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLockRewardSignature, UPuzzleComponent*, Source);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TEMPLEESCAPE_API UPuzzleRewardComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPuzzleRewardComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Register a puzzle to this puzzle reward.
	 * @param Puzzle The puzzle to register
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void RegisterPuzzle(UPuzzleComponent* Puzzle);

	/** Unregister a puzzle from this puzzle reward.
	 * @param Puzzle The puzzle to unregister
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void UnregisterPuzzle(UPuzzleComponent* Puzzle);

	/** Called by a Puzzle component when all the conditions are unmet.
	 * @param Source The Puzzle component at the origin of the call
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void UnlockReward(UPuzzleComponent* Source);

	/** Called by a Puzzle component when all the conditions are unmet.
	 * @param Source The Puzzle component at the origin of the call
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void LockReward(UPuzzleComponent* Source);

protected:
	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Puzzle, AdvancedDisplay)
		bool bDebug = false;

	/** Puzzles registered to this puzzle reward. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Puzzle, AdvancedDisplay)
		TArray<UPuzzleComponent*> RegisteredPuzzles;

	/** Called when the reward is unlocked. */
	UPROPERTY(BlueprintAssignable, Category = Puzzle)
		FOnUnlockRewardSignature OnUnlockReward;

	/** Called when the reward is locked. */
	UPROPERTY(BlueprintAssignable, Category = Puzzle)
		FOnLockRewardSignature OnLockReward;
};
