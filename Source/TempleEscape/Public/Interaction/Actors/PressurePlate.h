// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "PressurePlate.generated.h"

UCLASS()
class TEMPLEESCAPE_API APressurePlate : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APressurePlate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PressurePlate, meta = (AllowPrivateAccess = "true"))
		USceneComponent* Root = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PressurePlate, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* Mesh = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = PressurePlate, meta = (AllowPrivateAccess = "true"))
		UBoxComponent* Trigger = nullptr;

protected:
	// Properties
	/** Whether or not the target weight has been reached. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter = SetTargetWeightReached, BlueprintGetter = GetTargetWeightReached, Category = PressurePlate)
		bool bTargetWeightReached = false;

	/** The target weight for the pressure plate to be considered pressed. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter = SetTargetWeight, BlueprintGetter = GetTargetWeight, Category = PressurePlate)
		float TargetWeight = 0.0f;

	/** The total weight currently on the pressure plate. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter = SetTotalWeight, BlueprintGetter = GetTotalWeight, Category = PressurePlate)
		float TotalWeight = 0.0f;

	/** Whether or not debug messages should appear in the output log. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PressurePlate, AdvancedDisplay)
		bool bDebug = false;

	// Getters/setters
	UFUNCTION(BlueprintCallable)
		virtual void SetTargetWeightReached(bool Value);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		virtual bool GetTargetWeightReached();

	UFUNCTION(BlueprintCallable)
		virtual void SetTargetWeight(float Value);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		virtual float GetTargetWeight();

	UFUNCTION(BlueprintCallable)
		virtual void SetTotalWeight(float Value);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		virtual float GetTotalWeight();

	// Delegates
	UFUNCTION()
		virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	// Events
	/** Event called when the pressure plate's target weight has been reached. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = PressurePlate)
		void OnTargetReached();

	/** Event called when the pressure plate's target weight is no longer reached. */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = PressurePlate)
		void OnTargetUnreached();

	// Functions
	/** Check whether or not the target weight has been reached.
	 * @return True if the target weight has been reached, false otherwise
	 */
	UFUNCTION(BlueprintCallable, Category = PressurePlate)
		virtual bool IsTargetWeightReached();

	/** Calculate the total weight of the overlapping actors.
	 * @return The total weight of the overlapping actors.
	 */
	UFUNCTION(BlueprintCallable, Category = PressurePlate)
		virtual float GetOverlappingActorsWeight();
};
