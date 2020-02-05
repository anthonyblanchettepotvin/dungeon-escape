// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved


#include "WorldPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();

	const AActor* Owner = GetOwner();
	const FString OwnerName = Owner->GetName();
	const FString OwnerPosition = Owner->GetActorLocation().ToString();

	UE_LOG(LogTemp, Warning, TEXT("%s is at position %s"), *OwnerName, *OwnerPosition);
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

