// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Interactable.h"
#include "InteractComponent.generated.h"

// Delegate signatures
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractSignature);

/** Actor component that allow the owner to interact with an actor. */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TEMPLEESCAPE_API UInteractComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInteractComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Functions
	/** Interact with the focused actor. */
	UFUNCTION(BlueprintCallable, Category = InteractComponent)
		virtual void Interact();

protected:
	// Properties
	/** The minimum distance at which an actor can be interacted with. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractComponent)
		float MinInteractDistance = 0.0f;

	/** The maximum distance at which an actor can be interacted with. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractComponent)
		float MaxInteractDistance = 150.0f;

	/** The collision channel used to filter the interactable actors. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractComponent)
		TEnumAsByte<ECollisionChannel> Channel = ECollisionChannel::ECC_WorldDynamic;

	/** The actor that is currently focused. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InteractComponent)
		AActor* FocusedActor = nullptr;

	/** The player's current viewpoint location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InteractComponent)
		FVector PlayerViewPointLocation = { 0.0f, 0.0f, 0.0f };

	/** The player's current viewpoint rotation. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InteractComponent)
		FRotator PlayerViewPointRotation = { 0.0f, 0.0f, 0.0f };

	/** The closest location, perpendicular to the player's viewpoint, at which an interaction can occur. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InteractComponent)
		FVector InteractLineStart = { 0.0f, 0.0f, 0.0f };

	/** The farthest location, perpendicular to the player's viewpoint, at which an interaction can occur. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InteractComponent)
		FVector InteractLineEnd = { 0.0f, 0.0f, 0.0f };

	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = InteractComponent, AdvancedDisplay)
		bool bDebug = false;

	/** The pointer to the Input component of the owning actor. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = InteractComponent, AdvancedDisplay)
		UInputComponent* InputComponent = nullptr;

	// Functions
	/** Check if the owner has an Input component. */
	virtual void FetchOwnerInputComponent();

	/** Bind the Input component's actions to the corresponding member functions. */
	virtual void SetupOwnerInputComponent();

	/** Calls GetPlayerViewPoint and stores the result in to PlayerViewPointLocation and PlayerViewPointRotation. */
	virtual void FetchPlayerViewPoint();

	/** Update the interact line start. */
	virtual void UpdateInteractLineStart();

	/** Update the interact line end. */
	virtual void UpdateInteractLineEnd();

	/** Update the focused actor. */
	virtual void UpdateFocusedActor();
	
	// Events
	/** Event that happens when an actor is interacted with. */
	UPROPERTY(BlueprintAssignable, Category = InteractComponent)
		FOnInteractSignature OnInteract;
};
