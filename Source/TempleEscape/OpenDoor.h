// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEMPLEESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void OpenDoor(const float DeltaTime);
	void CloseDoor(const float DeltaTime);

private:
	UPROPERTY(EditAnywhere)
	ATriggerVolume* Trigger;
	UPROPERTY(EditAnywhere)
	AActor* TriggeringActor;

	FRotator InitialRotation;
	FRotator CurrentRotation;
	UPROPERTY(EditAnywhere)
	FRotator OpenRotation = {0.0f, 90.0f, 0.0f};
	UPROPERTY(EditAnywhere)
	FRotator CloseRotation = {0.0f, 0.0f, 0.0f};
	
	UPROPERTY(EditAnywhere)
	float TimeToOpen = 1.5f;
	float ElapsedTime = 0.0f;
	UPROPERTY(EditAnywhere)
	float TimeLastOpen = 3.0f;
	float ElapsedTimeOpened = 0.0f;

	bool bIsOpen = false;
	bool bIsMoving = false;
};
