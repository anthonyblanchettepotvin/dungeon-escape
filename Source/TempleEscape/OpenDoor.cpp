// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved


#include "OpenDoor.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	InitialRotation = GetOwner()->GetActorRotation();
	TriggeringActor = GetWorld()->GetFirstPlayerController()->GetPawn();

	if (!Trigger)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s has the OpenDoor component, but the Trigger property is not set."), *GetOwner()->GetName());
	}

	if (!TriggeringActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s has the OpenDoor component, but the TriggeringActor property couldn't be set."), *GetOwner()->GetName());
	}
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!Trigger || !TriggeringActor)
	{
		return;
	}

	if (ElapsedTime > TimeToOpen)
	{
		ElapsedTime = 0.0f;
		bIsOpen = !bIsOpen;
		bIsMoving = false;
		InitialRotation = GetOwner()->GetActorRotation();
		return;
	}

	if (bIsOpen && !bIsMoving)
	{
		ElapsedTimeOpened += DeltaTime;

		if (ElapsedTimeOpened > TimeLastOpen)
		{
			ElapsedTimeOpened = 0.0f;
			bIsMoving = true;
		}
	}

	if (Trigger->IsOverlappingActor(TriggeringActor) && !bIsMoving)
	{
		bIsMoving = true;
	}

	if (bIsMoving && !bIsOpen)
	{
		OpenDoor(DeltaTime);
	}
	else if (bIsMoving && bIsOpen)
	{
		CloseDoor(DeltaTime);
	}
}

void UOpenDoor::OpenDoor(const float DeltaTime)
{
	ElapsedTime += DeltaTime;

	CurrentRotation = FMath::Lerp(InitialRotation, OpenRotation, ElapsedTime / TimeToOpen);

	GetOwner()->SetActorRotation(CurrentRotation);
}

void UOpenDoor::CloseDoor(const float DeltaTime)
{
	ElapsedTime += DeltaTime;

	CurrentRotation = FMath::Lerp(InitialRotation, CloseRotation, ElapsedTime / TimeToOpen);

	GetOwner()->SetActorRotation(CurrentRotation);
}
