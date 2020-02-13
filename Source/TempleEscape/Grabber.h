// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEMPLEESCAPE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere)
	float Reach = 150.0f;

	UPhysicsHandleComponent* PhysicsHandleComponent = nullptr;
	UInputComponent* InputComponent = nullptr;

	FVector PlayerViewPointLocation = {0.0f, 0.0f, 0.0f};
	FRotator PlayerViewPointRotation = {0.0f, 0.0f, 0.0f};
	FVector GrabberLocation = {0.0f, 0.0f, 0.0f};

	/** Check if the owner has a PhysicsHandle component. */
	bool FindPhysicsHandleComponent();

	/** Check if the owner has an Input component. */
	bool FindInputComponent();

	/** Bind the Input component's actions to the corresponding Grabber methods. */
	void SetupInputComponent();

	/** Calls GetPlayerViewPoint and stores the result in to PlayerViewPointLocation and PlayerViewPointRotation.
	 * Gets called each tick.
	 */
	void FetchPlayerViewPoint();

	/** Calculate the position at which the Grabber will hold the grabbable actor.
	 * Gets called each tick.
	 */
	void CalculateGrabberLocation();

	/** Attach the grabbable actor within reach to the PhysicsHandle component. */
	void Grab();

	/** Detach the grabbable actor from the PhysicsHandle component. */
	void Release();

	/** Check if there's a grabbable actor within reach.
	 * @param OutHit 	First blocking hit on grabbable actor found
	 * @return 			TRUE if any hit on grabbable actor is found
	 */
	bool CheckForGrabbableActorWithinReach(FHitResult& OutHit) const;
};
