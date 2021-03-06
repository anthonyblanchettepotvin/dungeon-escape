// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "DoorComponent.h"

UDoorComponent::UDoorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UDoorComponent::BeginPlay()
{
	Super::BeginPlay();

	CloseRotation = GetRelativeRotation();
	OpenRotation = GetRelativeRotation() + AnimationAmount;

	if (bIsOpen)
	{
		OpenDoor();
	}
}

void UDoorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bIsOpening && !bIsClosing) { return; }

	if (bIsOpening)
	{
		OpenDoorMovement(DeltaTime);

		if (ElapsedTime > OpenDuration)
		{
			bIsOpening = false;
			bIsOpen = true;
			ElapsedTime = 0.0f;

			if (OnDoorOpened.IsBound())
			{
				OnDoorOpened.Broadcast();
			}
		}

		return;
	}

	if (bIsClosing)
	{
		CloseDoorMovement(DeltaTime);

		if (ElapsedTime > CloseDuration)
		{
			bIsClosing = false;
			bIsOpen = false;
			ElapsedTime = 0.0f;

			if (OnDoorClosed.IsBound())
			{
				OnDoorClosed.Broadcast();
			}
		}

		return;
	}
}

// Functions
void UDoorComponent::OpenDoor()
{
	ElapsedTime = CalculateAnimationProgress(
		CloseRotation,
		OpenRotation,
		GetRelativeRotation()) * OpenDuration;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("UDoorComponent %s - OpenDoor"), *GetName());
	}

	bIsOpening = true;
	bIsClosing = false;

	if (OnDoorOpen.IsBound())
	{
		OnDoorOpen.Broadcast();
	}
}

void UDoorComponent::OpenDoorMovement(const float DeltaTime)
{
	ElapsedTime += DeltaTime;

	float Alpha = ElapsedTime / CloseDuration;
	Alpha = FMath::Clamp<float>(Alpha, 0.0f, 1.0f);

	FRotator NewRotation = FMath::Lerp(CloseRotation, OpenRotation, Alpha);

	SetRelativeRotation(NewRotation);
}

void UDoorComponent::CloseDoor()
{
	ElapsedTime = CalculateAnimationProgress(
		OpenRotation,
		CloseRotation,
		GetRelativeRotation()) * CloseDuration;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("UDoorComponent %s - CloseDoor"), *GetName());
	}

	bIsClosing = true;
	bIsOpening = false;

	if (OnDoorClose.IsBound())
	{
		OnDoorClose.Broadcast();
	}
}

void UDoorComponent::CloseDoorMovement(const float DeltaTime)
{
	ElapsedTime += DeltaTime;

	float Alpha = ElapsedTime / CloseDuration;
	Alpha = FMath::Clamp<float>(Alpha, 0.0f, 1.0f);

	FRotator NewRotation = FMath::Lerp(OpenRotation, CloseRotation, Alpha);

	SetRelativeRotation(NewRotation);
}

void UDoorComponent::OpenCloseDoor()
{
	if (!bIsUnlocked) { return; }

	if (bIsOpening)
	{
		CloseDoor();
	}
	else if (bIsClosing)
	{
		OpenDoor();
	}
	else if (bIsOpen)
	{
		CloseDoor();
	}
	else
	{
		OpenDoor();
	}
}

void UDoorComponent::UnlockDoor()
{
	if (!bIsOpen || bIsClosing)
	{
		OpenDoor();
	}

	if (bIsUnlocked) { return; }

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("UDoorComponent %s - UnlockDoor"), *GetName());
	}

	bIsUnlocked = true;

	if (OnDoorUnlocked.IsBound())
	{
		OnDoorUnlocked.Broadcast();
	}
}

void UDoorComponent::LockDoor()
{
	if (bIsOpen || bIsOpening)
	{
		CloseDoor();
	}

	if (!bIsUnlocked) { return; }

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("UDoorComponent %s - LockDoor"), *GetName());
	}

	bIsUnlocked = false;
	
	if (OnDoorLocked.IsBound())
	{
		OnDoorLocked.Broadcast();
	}
}

float UDoorComponent::CalculateAnimationProgress(const FRotator& StartRotation, const FRotator& EndRotation, const FRotator& CurrentRotation) const
{
	float CompleteAnimationRotation = FVector::Distance(StartRotation.Euler(), EndRotation.Euler());
	float AnimationRotationLeft = FVector::Distance(CurrentRotation.Euler(), EndRotation.Euler());
	float Progress = 1 - (AnimationRotationLeft / CompleteAnimationRotation);

	Progress = FMath::Clamp<float>(Progress, 0.0f, 1.0f);

	return Progress;
}
