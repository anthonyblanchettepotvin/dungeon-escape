// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "DoorComponent.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "Sound/SoundBase.h"
#include "Door.generated.h"

/**
 * Door is the base class for any door that can be opened, closed, unlocked or locked.
 */
UCLASS()
class TEMPLEESCAPE_API ADoor : public AActor, public IInteractable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Door, meta = (AllowPrivateAccess = "true"))
		USceneComponent* Root = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Door, meta = (AllowPrivateAccess = "true"))
		UDoorComponent* LeftDoor = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Door, meta = (AllowPrivateAccess = "true"))
		UDoorComponent* RightDoor = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Door, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* FrameMesh = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Door, meta = (AllowPrivateAccess = "true"))
		UAudioComponent* Audio = nullptr;

protected:
	// Properties
	/** Sound played when the door is opened. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Door)
		USoundBase* OpenDoorSound = nullptr;

	/** Sound played when the door is closed. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Door)
		USoundBase* CloseDoorSound = nullptr;

	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Door, AdvancedDisplay)
		bool bDebug = false;

	// Functions
	/** Open the door. */
	UFUNCTION(BlueprintCallable, Category = Door)
		virtual void OpenDoor();

	/** Close the door. */
	UFUNCTION(BlueprintCallable, Category = Door)
		virtual void CloseDoor();

	/** Unlock the door. */
	UFUNCTION(BlueprintCallable, Category = Door)
		virtual void UnlockDoor();

	/** Lock the door. */
	UFUNCTION(BlueprintCallable, Category = Door)
		virtual void LockDoor();

	/** Play OpenDoorSound when the door is opened. */
	virtual void PlayOpenSound() const;

	/** Play CloseDoorSound when the door is closed. */
	virtual void PlayCloseSound() const;

	// Events
	/** Event called when the door started opening. */
	UFUNCTION(BlueprintNativeEvent, Category = Door)
		void OnDoorOpen();

	/** Event called when the door started closing. */
	UFUNCTION(BlueprintNativeEvent, Category = Door)
		void OnDoorClose();

	/** Event called when the door is opened. */
	UFUNCTION(BlueprintNativeEvent, Category = Door)
		void OnDoorOpened();

	/** Event called when the door is closed. */
	UFUNCTION(BlueprintNativeEvent, Category = Door)
		void OnDoorClosed();

	/** Event called when the door is unlocked. */
	UFUNCTION(BlueprintNativeEvent, Category = Door)
		void OnDoorUnlocked();

	/** Event called when the door is locked. */
	UFUNCTION(BlueprintNativeEvent, Category = Door)
		void OnDoorLocked();

	// IInteractable implementation
	virtual bool Interact_Implementation() override;
};
