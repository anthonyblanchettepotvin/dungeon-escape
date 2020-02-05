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

	FVector GrabberLocation = {0.0f, 0.0f, 0.0f};

	bool FindPhysicsHandleComponent();
	bool FindInputComponent();
	void SetupInputComponent();

	void CalculateGrabberLocation();

	void Grab();
	void Release();

	FHitResult GetActorWithinReach() const;
};
