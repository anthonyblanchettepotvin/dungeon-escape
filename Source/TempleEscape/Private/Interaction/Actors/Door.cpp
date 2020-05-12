// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "Door.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	LeftDoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftDoor"));
	LeftDoorMesh->SetMobility(EComponentMobility::Movable);
	LeftDoorMesh->SetCollisionProfileName("Interactable");
	LeftDoorMesh->SetupAttachment(Root);

	RightDoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightDoor"));
	RightDoorMesh->SetMobility(EComponentMobility::Movable);
	RightDoorMesh->SetCollisionProfileName("Interactable");
	RightDoorMesh->SetupAttachment(Root);

	FrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Frame"));
	FrameMesh->SetMobility(EComponentMobility::Movable);
	FrameMesh->SetupAttachment(Root);

	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(Root);
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();

	CurrentRotation = LeftDoorMesh->GetRelativeRotation();
	CloseRotation = CurrentRotation;
	OpenRotation = CurrentRotation + AnimationAmount;
}

void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsOpening && !bIsClosing) { return; }

	if (!LeftDoorMesh) { return; }

	if (bIsOpening)
	{
		OpenDoorMovement(DeltaTime);

		if (ElapsedTime > OpenDuration)
		{
			bIsOpening = false;
			bIsOpen = true;
			ElapsedTime = 0.0f;

			OnDoorOpened();
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

			OnDoorClosed();
		}

		return;
	}
}

// Functions
void ADoor::OpenDoor()
{
	if (!LeftDoorMesh) { return; }

	CurrentRotation = LeftDoorMesh->GetRelativeRotation();
	ElapsedTime = CalculateAnimationProgress(CloseRotation, OpenRotation, CurrentRotation) * OpenDuration;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s: Open door"), *GetName());
	}

	bIsOpening = true;
	bIsClosing = false;

	PlayOpenSound();
}

void ADoor::OpenDoorMovement(const float DeltaTime)
{
	if (!LeftDoorMesh) { return; }

	ElapsedTime += DeltaTime;

	FRotator NewRotation = FMath::Lerp(CloseRotation, OpenRotation, ElapsedTime / OpenDuration);

	LeftDoorMesh->SetRelativeRotation(NewRotation);

	CurrentRotation = LeftDoorMesh->GetRelativeRotation();
}

void ADoor::CloseDoor()
{
	if (!LeftDoorMesh) { return; }

	CurrentRotation = LeftDoorMesh->GetRelativeRotation();
	ElapsedTime = CalculateAnimationProgress(OpenRotation, CloseRotation, CurrentRotation) * CloseDuration;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s: Close door"), *GetName());
	}

	bIsClosing = true;
	bIsOpening = false;

	PlayCloseSound();
}

void ADoor::CloseDoorMovement(const float DeltaTime)
{
	if (!LeftDoorMesh) { return; }

	ElapsedTime += DeltaTime;

	FRotator NewRotation = FMath::Lerp(OpenRotation, CloseRotation, ElapsedTime / CloseDuration);

	LeftDoorMesh->SetRelativeRotation(NewRotation);
	CurrentRotation = LeftDoorMesh->GetRelativeRotation();
}

void ADoor::UnlockDoor()
{
	if (!bIsOpen || bIsClosing)
	{
		OpenDoor();
	}

	if (bIsUnlocked) { return; }

	bIsUnlocked = true;
	OnDoorUnlocked();
}

void ADoor::LockDoor()
{
	if (bIsOpen || bIsOpening)
	{
		CloseDoor();
	}

	if (!bIsUnlocked) { return; }

	bIsUnlocked = false;
	OnDoorLocked();
}

void ADoor::PlayOpenSound() const
{
	if (!Audio) { return; }

	if (!OpenDoorSound) 
	{
		UE_LOG(LogTemp, Error, TEXT("ADoor %s: Open Door Sound is missing!"), *GetName());
		return;
	}

	Audio->SetSound(OpenDoorSound);
	Audio->Play();
}

void ADoor::PlayCloseSound() const
{
	if (!Audio) { return; }

	if (!CloseDoorSound) 
	{
		UE_LOG(LogTemp, Error, TEXT("Door %s : Close Door Sound is missing!"), *GetName());
		return;
	}

	Audio->SetSound(CloseDoorSound);
	Audio->Play();
}

float ADoor::CalculateAnimationProgress(const FRotator& StartRotation, const FRotator& EndRotation, const FRotator& CurrentRotation) const
{
	float CompleteAnimationRotation = FVector::Distance(StartRotation.Euler(), EndRotation.Euler());
	float AnimationRotationLeft = FVector::Distance(CurrentRotation.Euler(), EndRotation.Euler());
	float Progress = 1 - (AnimationRotationLeft / CompleteAnimationRotation);

	return Progress;
}

// Events
void ADoor::OnDoorOpened_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s: OnDoorOpened"), *GetName());
	}
}

void ADoor::OnDoorClosed_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s: OnDoorClosed"), *GetName());
	}
}

void ADoor::OnDoorUnlocked_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s: OnDoorUnlocked"), *GetName());
	}
}

void ADoor::OnDoorLocked_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s: OnDoorLocked"), *GetName());
	}
}

// IInteractable implementation
bool ADoor::Interact_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s: Interact"), *GetName());
	}

	if (!bIsUnlocked) { return false; }

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

	return true;
}
