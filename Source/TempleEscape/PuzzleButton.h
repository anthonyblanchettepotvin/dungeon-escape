// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "BaseButton.h"
#include "PuzzleCondition.h"
#include "PuzzleButton.generated.h"

/**
 * 
 */
UCLASS()
class TEMPLEESCAPE_API APuzzleButton : public ABaseButton, public IPuzzleCondition
{
	GENERATED_BODY()

protected:
	virtual bool Evaluate_Implementation() override;
	virtual bool Interact_Implementation() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Puzzle")
	TArray<APuzzleButton*> AdjacentButtons;
};
