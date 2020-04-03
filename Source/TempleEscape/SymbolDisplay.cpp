// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "SymbolDisplay.h"

ASymbolDisplay::ASymbolDisplay()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	SymbolDisplayMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SymbolDisplay"));
	SymbolDisplayMesh->SetMobility(EComponentMobility::Movable);
	SymbolDisplayMesh->SetCollisionProfileName("Interactable");
	SymbolDisplayMesh->SetupAttachment(Root);

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
	BaseMesh->SetMobility(EComponentMobility::Movable);
	BaseMesh->SetupAttachment(Root);
}

void ASymbolDisplay::BeginPlay()
{
	Super::BeginPlay();

	uint8 CurrentSymbolByte = (uint8)CurrentSymbol;
	SetNextTargetRotation(CurrentSymbolByte);

	SymbolDisplayMesh->SetRelativeRotation(TargetRotation);

	SetNextTargetRotation();
}

void ASymbolDisplay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsTurning) { return; }

	if (bIsTurning)
	{
		TurningAnimation(DeltaTime);

		if (ElapsedTime >= TurnDuration)
		{
			bIsTurning = false;
			ElapsedTime = 0.0f;

			SetNextTargetRotation();

			uint8 Byte = (uint8)CurrentSymbol;
			CurrentSymbol = static_cast<ESymbol>((Byte + 1) % (uint8)ESymbol::S_Count);

			OnTurnEnd();
		}
	}
}

// Functions
void ASymbolDisplay::Turn()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ASymbolDisplay %s: Turn"), *GetName());
	}
	
	bIsTurning = true;

	OnTurnStart();
}

void ASymbolDisplay::TurningAnimation(const float DeltaTime)
{
	ElapsedTime += DeltaTime;

	FRotator NewRotation = FMath::Lerp(InitialRotation, TargetRotation, ElapsedTime / TurnDuration);

	SymbolDisplayMesh->SetRelativeRotation(NewRotation);
}

void ASymbolDisplay::SetNextTargetRotation(const uint8 Offset)
{
	InitialRotation = SymbolDisplayMesh->GetRelativeRotation();
	float NewYaw = FMath::Fmod(InitialRotation.Yaw + 120.0f * Offset, 360.0f);
	TargetRotation = {0.0f, NewYaw, 0.0f};
}

// Events
void ASymbolDisplay::OnTurnStart_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ASymbolDisplay %s : OnTurnStart"), *GetName());
	}
}

void ASymbolDisplay::OnTurnEnd_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ASymbolDisplay %s : OnTurnEnd"), *GetName());
	}
}

// Getters/setters
void ASymbolDisplay::SetCurrentSymbol(ESymbol Value)
{
	CurrentSymbol = Value;
}

ESymbol ASymbolDisplay::GetCurrentSymbol()
{
	return CurrentSymbol;
}

// IInteractable implementation
bool ASymbolDisplay::Interact_Implementation()
{
	if (bIsTurning) { return false; }

	Turn();

	return true;
}
