// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PuzzleComponent.h"
#include "PuzzleConditionComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEMPLEESCAPE_API UPuzzleConditionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPuzzleConditionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Register a puzzle to this puzzle condition.
	 * @param Puzzle The puzzle to register
	 */
	UFUNCTION(BlueprintCallable, Category=Puzzle)
	void RegisterPuzzle(UPuzzleComponent* Puzzle);
	
	/** Unregister a puzzle from this puzzle condition.
	 * @param Puzzle The puzzle to unregister
	 */
	UFUNCTION(BlueprintCallable, Category=Puzzle)
	void UnregisterPuzzle(UPuzzleComponent* Puzzle);

	// Getters/setters
	/** Get bIsMet. */
	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual bool GetIsMet();
	
protected:
	// Properties
	/** Whether or not the condition is met. */
	UPROPERTY(EditAnywhere, BlueprintGetter=GetIsMet, Category=Puzzle)
	bool bIsMet;

	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Puzzle, AdvancedDisplay)
	bool bDebug = false;

	/** Puzzles registered to this puzzle condition. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Puzzle, AdvancedDisplay)
	TArray<UPuzzleComponent*> RegisteredPuzzles;

	// Functions
	/** Notify every registered puzzle that the state of this puzzle condition has changed.
	 * @param State The new state of the puzzle condition
	 */ 
	UFUNCTION(BlueprintCallable, Category=Puzzle)
	void NotifyStateChanged(bool State);

	// TODO: Multicast delegate: OnStateChanged(bool State)
};
