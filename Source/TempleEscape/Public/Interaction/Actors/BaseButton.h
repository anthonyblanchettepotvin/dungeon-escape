// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "BaseButton.generated.h"

/**
 * BaseButton is the base class for any button that can be pressed, unpressed or toggled.
 */
UCLASS()
class TEMPLEESCAPE_API ABaseButton : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseButton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Button, meta = (AllowPrivateAccess = "true"))
		USceneComponent* Root = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Button, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* ButtonMesh = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Button, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* FrameMesh = nullptr;

protected:
	// Properties
	/** Target offset, relative to the current location, for the button to be pressed. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Button)
		FVector TargetOffset = { 0.0f, 0.0f, 10.0f };

	/** The location at which the button is considered pressed. */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Button)
		FVector PressedLocation = { 0.0f, 0.0f, 0.0f };

	/** The location at which the button is considered unpressed. */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Button)
		FVector UnpressedLocation = { 0.0f, 0.0f, 0.0f };

	/** Time it takes for the button to go from pressed to unpressed. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Button)
		float PressDuration = 0.5f;

	/** Time it takes for the button to go from unpressed to pressed. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Button)
		float UnpressDuration = 0.5f;

	/** Elapsed time since the button started pressing/unpressing. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Button)
		float ElapsedTime = 0.0f;

	/** Whether or not the button is a toggle. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Button)
		bool bIsToggle = false;

	/** Whether or not the button is pressed. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter = SetIsPressed, Category = Button)
		bool bIsPressed = false;

	/** Whether or not the button is going from unpressed to pressed. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Button)
		bool bIsPressing = false;

	/** Whether or not the button is going from pressed to unpressed. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Button)
		bool bIsUnpressing = false;

	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Button, AdvancedDisplay)
		bool bDebug = false;

	// Getters/setters
	UFUNCTION(BlueprintCallable, Category = Button)
		virtual void SetIsPressed(bool Value);

	// Functions
	/** Press the button. */
	UFUNCTION(BlueprintCallable, Category = Button)
		virtual void Press();

	/** Unpress the button. */
	UFUNCTION(BlueprintCallable, Category = Button)
		virtual void Unpress();

	/** Automatically press or unpress the button based on it's current state. */
	UFUNCTION(BlueprintCallable, Category = Button)
		virtual void PressUnpress();

	/**
	 * Create the button's press animation using linear interpolation.
	 * @param DeltaTime coming from the Tick member function
	 */
	virtual void ButtonPressAnimation(const float DeltaTime);

	/**
	 * Create the button's unpress animation using linear interpolation.
	 * @param DeltaTime coming from the Tick member function
	 */
	virtual void ButtonUnpressAnimation(const float DeltaTime);

	/** Calculate the progress of the current animation.
	 * @param StartLocation The start location of the current animation
	 * @param EndLocation The end location of the current animation
	 * @param CurrentLocation The current location of the actor
	 * @return The progress, in percentage, of the current animation
	 */
	float CalculateAnimationProgress(const FVector& StartLocation, const FVector& EndLocation, const FVector& CurrentLocation) const;

	// Events
	/** Event called when the button is pressed. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Button)
		void OnButtonPress();

	/** Event called when the button has been pressed. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Button)
		void OnButtonPressed();

	/** Event called when the button is unpressed. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Button)
		void OnButtonUnpress();

	/** Event called when the button has been unpressed. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Button)
		void OnButtonUnpressed();

	// IInteractable implementation
	virtual bool Interact_Implementation() override;
};
