// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "BaseButton.generated.h"

/**
 * 
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

protected:
	/**
	 * Create the door's open movement using linear interpolation.
	 * @param DeltaTime coming from the Tick member function
	 */
	virtual void ButtonPressMovement(const float DeltaTime);

	/**
	 * Create the door's close movement using linear interpolation.
	 * @param DeltaTime coming from the Tick member function 
	 */
	virtual void ButtonUnpressMovement(const float DeltaTime);

	UFUNCTION(BlueprintCallable, Category="Button")
	virtual void Press();
	UFUNCTION(BlueprintCallable, Category="Button")
	virtual void Unpress();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Button")
	void OnButtonPressed();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Button")
	void OnButtonUnpressed();

	UFUNCTION(BlueprintCallable, Category="Button")
	virtual void SetIsPressed(bool Value);

	virtual bool Interact_Implementation() override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Button")
	FVector InitialLocation = {0.0f, 0.0f, 0.0f};
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Button")
	FVector PressedOffset = {0.0f, 0.0f, 10.0f};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Button")
	float PressDuration = 0.5f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Button")
	float UnpressDuration = 0.5f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Button")
	float ElapsedTime = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Button")
	bool bIsToggle = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter=SetIsPressed, Category="Button")
	bool bIsPressed = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Button")
	bool bIsPressing = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Button")
	bool bIsUnpressing = false;
};
