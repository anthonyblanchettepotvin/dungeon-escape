// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved


#include "Grabber.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Grabber component initialized for %s"), *GetOwner()->GetName());
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	FVector PlayerLocation;
	FRotator PlayerRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerLocation, PlayerRotation);

	FVector DebugLineEnd = PlayerLocation + PlayerRotation.Vector() * Reach;

	DrawDebugLine(
		GetWorld(),
		PlayerLocation,
		DebugLineEnd,
		FColor::Cyan,
		false,
		0.0f,
		0,
		3.0f
	);

	UE_LOG(LogTemp, Warning, TEXT("Current player's position: %s, rotation: %s"), *PlayerLocation.ToString(), *PlayerRotation.ToString());
}
