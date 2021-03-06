// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractable : public UInterface
{
	GENERATED_BODY()
};

/** Interface that should be implemented by all interactable actors. */
class TEMPLEESCAPE_API IInteractable
{
	GENERATED_BODY()

public:
	/** Called when the actor is being interacted with. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Interaction)
		bool Interact();
};
