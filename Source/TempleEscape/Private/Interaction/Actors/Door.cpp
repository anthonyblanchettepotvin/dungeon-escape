// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "Door.h"

ADoor::ADoor()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	LeftDoor = CreateDefaultSubobject<UDoorComponent>(TEXT("LeftDoor"));
	LeftDoor->SetMobility(EComponentMobility::Movable);
	LeftDoor->SetCollisionProfileName("Interactable");
	LeftDoor->SetupAttachment(Root);

	RightDoor = CreateDefaultSubobject<UDoorComponent>(TEXT("RightDoor"));
	RightDoor->SetMobility(EComponentMobility::Movable);
	RightDoor->SetCollisionProfileName("Interactable");
	RightDoor->SetupAttachment(Root);

	FrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Frame"));
	FrameMesh->SetMobility(EComponentMobility::Movable);
	FrameMesh->SetupAttachment(Root);

	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	Audio->SetupAttachment(Root);
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();

	FScriptDelegate OnLeftDoorOpenDelegate;
	OnLeftDoorOpenDelegate.BindUFunction(this, "OnDoorOpen");
	LeftDoor->OnDoorOpen.AddUnique(OnLeftDoorOpenDelegate);

	FScriptDelegate OnLeftDoorCloseDelegate;
	OnLeftDoorCloseDelegate.BindUFunction(this, "OnDoorClose");
	LeftDoor->OnDoorClose.AddUnique(OnLeftDoorCloseDelegate);
}

void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Functions
void ADoor::OpenDoor()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - OpenDoor"), *GetName());
	}

	if (LeftDoor)
	{
		LeftDoor->OpenDoor();
	}

	if (RightDoor)
	{
		RightDoor->OpenDoor();
	}
}

void ADoor::CloseDoor()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - CloseDoor"), *GetName());
	}

	if (LeftDoor)
	{
		LeftDoor->CloseDoor();
	}

	if (RightDoor)
	{
		RightDoor->CloseDoor();
	}
}

void ADoor::UnlockDoor()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - UnlockDoor"), *GetName());
	}

	if (LeftDoor)
	{
		LeftDoor->UnlockDoor();
	}

	if (RightDoor)
	{
		RightDoor->UnlockDoor();
	}
}

void ADoor::LockDoor()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - LockDoor"), *GetName());
	}

	if (LeftDoor)
	{
		LeftDoor->LockDoor();
	}

	if (RightDoor)
	{
		RightDoor->LockDoor();
	}
}

void ADoor::PlayOpenSound() const
{
	if (!Audio) { return; }

	if (!OpenDoorSound) 
	{
		UE_LOG(LogTemp, Error, TEXT("ADoor %s - PlayOpenSound - Open Door Sound is missing"), *GetName());
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
		UE_LOG(LogTemp, Error, TEXT("ADoor %s - PlayCloseSound - Close Door Sound is missing"), *GetName());
		return;
	}

	Audio->SetSound(CloseDoorSound);
	Audio->Play();
}

// Events
void ADoor::OnDoorOpen_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - OnDoorOpen"), *GetName());
	}

	PlayOpenSound();
}

void ADoor::OnDoorClose_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - OnDoorClose"), *GetName());
	}

	PlayCloseSound();
}

void ADoor::OnDoorOpened_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - OnDoorOpened"), *GetName());
	}
}

void ADoor::OnDoorClosed_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - OnDoorClosed"), *GetName());
	}
}

void ADoor::OnDoorUnlocked_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - OnDoorUnlocked"), *GetName());
	}
}

void ADoor::OnDoorLocked_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - OnDoorLocked"), *GetName());
	}
}

// IInteractable implementation
bool ADoor::Interact_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ADoor %s - Interact"), *GetName());
	}

	if (LeftDoor)
	{
		LeftDoor->OpenCloseDoor();
	}

	if (RightDoor)
	{
		RightDoor->OpenCloseDoor();
	}

	return true;
}
