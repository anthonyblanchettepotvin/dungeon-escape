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

	virtual bool Interact_Implementation() override;
};
