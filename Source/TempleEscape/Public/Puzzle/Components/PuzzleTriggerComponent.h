// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PuzzleComponent.h"
#include "PuzzleTriggerComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TEMPLEESCAPE_API UPuzzleTriggerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPuzzleTriggerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Functions
	/** Register a puzzle to this puzzle condition.
	 * @param Puzzle The puzzle to register
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void RegisterPuzzle(UPuzzleComponent* Puzzle);

	/** Unregister a puzzle from this puzzle condition.
	 * @param Puzzle The puzzle to unregister
	 */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void UnregisterPuzzle(UPuzzleComponent* Puzzle);

protected:
	// Properties
	/** Puzzles registered to this puzzle condition. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Puzzle, AdvancedDisplay)
		TArray<UPuzzleComponent*> RegisteredPuzzles;

	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Puzzle, AdvancedDisplay)
		bool bDebug = false;

	// Functions
	/** Notify every registered puzzle that this puzzle trigger has been triggered. */
	UFUNCTION(BlueprintCallable, Category = Puzzle)
		void NotifyTriggered();

	// TODO: Multicast delegate: OnTriggered()
};
