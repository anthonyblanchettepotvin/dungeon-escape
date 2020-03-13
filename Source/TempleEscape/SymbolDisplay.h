// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.h"
#include "SymbolDisplay.generated.h"

UENUM(BlueprintType)
enum class ESymbol : uint8
{
	S_Triangle = 0 UMETA(DisplayName="Triangle"),
	S_Square = 1 UMETA(DisplayName="Square"),
	S_Circle = 2 UMETA(DisplayName="Circle"),
	S_Count = 3 UMETA(Hidden)
};

UCLASS()
class TEMPLEESCAPE_API ASymbolDisplay : public AActor, public IInteractable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASymbolDisplay();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Symbol Display")
	ESymbol Symbol = ESymbol::S_Triangle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Symbol Display")
	float TurnDuration = 1.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Symbol Display")
	float ElapsedTime = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Symbol Display")
	FRotator StartRotation = {0.0f, 0.0f, 0.0f};
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Symbol Display")
	FRotator EndRotation = {0.0f, 0.0f, 0.0f};

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Symbol Display")
	bool bIsTurning = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Symbol Display", AdvancedDisplay)
	bool bDebug = false;

	/**
	 * TODO: Turn() summary
	 * @return True if the symbol display will turn, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Symbol Display")
	bool Turn();

	/**
	 * Create the symbol display's turning animation using linear interpolation.
	 * @param DeltaTime The time between the previous and the current frame
	 * @return The normalized age of the animation
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Symbol Display")
	float TurningAnimation(const float DeltaTime);

	/**
	 * Event called when the symbol display has started turning.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Symbol Display")
	void OnTurnStart();

	/**
	 * Event called when the symbol display has finished turning.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Symbol Display")
	void OnTurnEnd();

	virtual bool Interact_Implementation() override;
};
