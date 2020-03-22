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
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Pressure Plate", meta=(AllowPrivateAccess = "true"))
	USceneComponent* Root = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Pressure Plate", meta=(AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Pressure Plate", meta=(AllowPrivateAccess = "true"))
	UBoxComponent* Trigger = nullptr;

protected:
	// Properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter=SetTargetWeightReached, BlueprintGetter=GetTargetWeightReached, Category="Pressure Plate")
	bool bTargetWeightReached = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintSetter=SetTargetWeight, BlueprintGetter=GetTargetWeight, Category="Pressure Plate")
	float TargetWeight = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,BlueprintSetter=SetTotalWeight, BlueprintGetter=GetTotalWeight, Category="Pressure Plate")
	float TotalWeight = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Pressure Plate", AdvancedDisplay)
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

	// Functions
	UFUNCTION(BlueprintCallable, Category="Pressure Plate")
	virtual bool IsTargetWeightReached();
};
