// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
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

/**
 * SymbolDisplay is the base class for any symbol display that can be turned and displays a symbol.
 */
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

private:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=SymbolDisplay, meta=(AllowPrivateAccess = "true"))
	USceneComponent* Root = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=SymbolDisplay, meta=(AllowPrivateAccess = "true"))
	UStaticMeshComponent* SymbolDisplayMesh = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=SymbolDisplay, meta=(AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh = nullptr;

protected:
	// Properties
	/** Current symbol the symbol display is on. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter=SetCurrentSymbol, BlueprintGetter=GetCurrentSymbol, Category=SymbolDisplay)
	ESymbol CurrentSymbol = ESymbol::S_Triangle;

	/** Time it takes for the symbol display to change symbol. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=SymbolDisplay)
	float TurnDuration = 1.0f;

	/** Elapsed time since the symbol display started turning. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=SymbolDisplay)
	float ElapsedTime = 0.0f;

	/** Initial rotation when the symbol display started to change symbol. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=SymbolDisplay)
	FRotator InitialRotation = {0.0f, 0.0f, 0.0f};

	/** Target rotation for the symbol display to change symbol. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=SymbolDisplay)
	FRotator TargetRotation = {0.0f, 0.0f, 0.0f};

	/** Whether or not the symbol display is turning. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=SymbolDisplay)
	bool bIsTurning = false;

	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=SymbolDisplay, AdvancedDisplay)
	bool bDebug = false;

	// Getters/setters
	UFUNCTION(BlueprintCallable)
	virtual void SetCurrentSymbol(ESymbol Value);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual ESymbol GetCurrentSymbol();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual uint8 GetCurrentSymbolByte();

	// Functions
	/** Turn the symbol display. */
	UFUNCTION(BlueprintCallable, Category=SymbolDisplay)
	virtual void Turn();

	/** Create the symbol display's turning animation using linear interpolation.
	 * @param DeltaTime The time between the previous and the current frame
	 */
	UFUNCTION(BlueprintCallable, Category=SymbolDisplay)
	virtual void TurningAnimation(const float DeltaTime);

	/** Set the next target rotation.
	 * @param Offset The offset (in number of symbols) to add to the next target rotation
	 * @note Also change the initial rotation with the actor's current rotation.
	 */
	UFUNCTION(BlueprintCallable, Category=SymbolDisplay)
	virtual void SetNextTargetRotation(const uint8 Offset = 1);

	// Events
	/** Event called when the symbol display has started turning. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=SymbolDisplay)
	void OnTurnStart();

	/** Event called when the symbol display has finished turning. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category=SymbolDisplay)
	void OnTurnEnd();

	// IInteractable implementation
	virtual bool Interact_Implementation() override;
};
