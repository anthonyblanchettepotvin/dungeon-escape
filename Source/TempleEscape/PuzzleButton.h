// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "BaseButton.h"
#include "Puzzle.h"
#include "PuzzleCondition.h"
#include "PuzzleTrigger.h"
#include "PuzzleButton.generated.h"

/**
 * PuzzleButton is the base class for any button that is part of a puzzle.
 */
UCLASS()
class TEMPLEESCAPE_API APuzzleButton : public ABaseButton, public IPuzzleCondition, public IPuzzleTrigger
{
	GENERATED_BODY()

protected:
	// Properties
	/** Adjacent buttons to this button. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Puzzle)
	TArray<APuzzleButton*> AdjacentButtons;

	/** Puzzles registered to this puzzle condition. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Puzzle, AdvancedDisplay)
	TArray<AActor*> RegisteredPuzzles;

	/** Puzzles subscribed to this puzzle trigger. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Puzzle, AdvancedDisplay)
	TArray<AActor*> SubscribedPuzzles;

	// ABaseButton overrides
	virtual void Press() override;

	virtual bool Interact_Implementation() override;

	virtual void SetIsPressed(bool Value) override;

	// IPuzzleCondition implementation
	virtual bool Evaluate_Implementation() override;

	virtual bool NotifyPuzzleStateChanged_Implementation() override;

	virtual bool RegisterPuzzle_Implementation(AActor* Puzzle) override;

	virtual bool UnregisterPuzzle_Implementation(AActor* Puzzle) override;

	// IPuzzleTrigger implementation
	virtual bool Trigger_Implementation() override;

	virtual bool Subscribe_Implementation(AActor* Puzzle) override;

	virtual bool Unsubscribe_Implementation(AActor* Puzzle) override;
};
