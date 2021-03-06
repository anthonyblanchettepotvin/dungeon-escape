// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PuzzleComponent.generated.h"

// Forward Declarations
class UPuzzleRewardComponent;
class UPuzzleConditionComponent;
class UPuzzleTriggerComponent;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TEMPLEESCAPE_API UPuzzleComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPuzzleComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	// Properties
	/** The puzzle conditions associated with the puzzle.
	 * @note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Puzzle)
		TArray<AActor*> Conditions;

	/** The puzzle conditions' PuzzleCondition components.
	 *
	 * Used to avoid repetitive calls to FindComponentByType().
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Puzzle, AdvancedDisplay)
		TArray<UPuzzleConditionComponent*> ConditionsComponents;

	/** The puzzle rewards associated with the puzzle.
	 * @note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Puzzle)
		TArray<AActor*> Rewards;

	/** The puzzle rewards' PuzzleReward components.
	 *
	 * Used to avoid repetitive calls to FindComponentByType().
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Puzzle, AdvancedDisplay)
		TArray<UPuzzleRewardComponent*> RewardsComponents;

	/** The puzzle trigger associated with the puzzle.
	 * @note If a puzzle trigger is specified, the puzzle conditions will be evaluated only when the trigger is triggered.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Puzzle)
		AActor* Trigger = nullptr;

	/** The puzzle trigger's PuzzleTrigger component.
	 *
	 * Used to avoid repetitive calls to FindComponentByType().
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Puzzle, AdvancedDisplay)
		UPuzzleTriggerComponent* TriggerComponent = nullptr;

	/** Whether or not the puzzle is operational. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Puzzle)
		bool bIsOperational = true;

	/** Whether or not the puzzle rewards should be unlocked permanently. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Puzzle)
		bool bUnlockRewardsPermanently = false;

	/** Whether or not the puzzle conditions are all met. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Puzzle)
		bool bConditionsMet = false;

	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Puzzle, AdvancedDisplay)
		bool bDebug = false;

	// Functions
	/** Check if all the puzzle conditions' actor have the PuzzleCondition component.
	 * @note Save all PuzzleCondition component into ConditionsComponents
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void CheckConditionsActors();

	/** Check if all the puzzle rewards' actor have the PuzzleReward component.
	 * @note Save all PuzzleCondition component into RewardsComponents
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void CheckRewardsActors();

	/** Check if the puzzle trigger's actor have the PuzzleTrigger component.
	 * @note Save the PuzzleCondition component into TriggerComponent
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void CheckTriggerActor();

	/** Unlock all the puzzle rewards. */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void UnlockAllRewards();

	/** Lock all the puzzle rewards. */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void LockAllRewards();

	/** Check the result of AreConditionsMet() and act based on its return value.
	 *
	 * If AreConditionsMet() returns true, unlocks all the rewards and invoke OnConditionsMet().
	 * If AreConditionsMet() returns false, locks all the rewards and invoke OnConditionsUnmet().
	 */
	void ActOnConditionsMet();

	/** Check if all conditions are met.
	 * @return True if all conditions evaluate to true, false otherwise
	 * @note Conditions must implement IPuzzleCondition.
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		bool AreConditionsMet();

	// Getters/setters
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Puzzle)
		virtual bool GetIsOperational();

	UFUNCTION(BlueprintCallable, Category = Puzzle)
		virtual void SetIsOperational(bool Value);

public:
	/** Called when a condition has changed state.
	 * @param Source The PuzzleCondition component that the state has changed
	 * @param State The new state of the PuzzleCondition component
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void ConditionStateChanged(UPuzzleConditionComponent* Source, bool State);

	/** Called when the trigger has been triggered.
	 * @param Source The PuzzleTrigger component that has been triggered
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void TriggerTriggered(UPuzzleTriggerComponent* Source);

	// Events
	/** Event called when all the conditions are met. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Puzzle)
		void OnConditionsMet(); // TODO: This should be a delegate multicast

	/** Event called when all the conditions are unmet. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Puzzle)
		void OnConditionsUnmet(); // TODO: This should be a delegate multicast
};
