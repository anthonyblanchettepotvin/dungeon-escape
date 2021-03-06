// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "OptionDisplay.h"

AOptionDisplay::AOptionDisplay()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	OptionDisplayMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OptionDisplay"));
	OptionDisplayMesh->SetMobility(EComponentMobility::Movable);
	OptionDisplayMesh->SetCollisionProfileName("Interactable");
	OptionDisplayMesh->SetupAttachment(Root);

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
	BaseMesh->SetMobility(EComponentMobility::Movable);
	BaseMesh->SetupAttachment(Root);
}

void AOptionDisplay::BeginPlay()
{
	Super::BeginPlay();

	if (Options.Num() == 0)
	{
		UE_LOG(LogTemp, Error,
			TEXT("AOptionDisplay %s - BeginPlay - There is no options. The display won't be functionnal"),
			*GetName(),
			Options.Num() - 1)

			return;
	}

	if (CurrentOptionIndex > Options.Num() - 1)
	{
		UE_LOG(LogTemp, Error,
			TEXT("AOptionDisplay %s - BeginPlay - CurrentOptionIndex is greater than the number of options. Value clamped to %i"),
			*GetName(),
			Options.Num() - 1)
	}

	if (TargetOptionIndex > Options.Num() - 1)
	{
		UE_LOG(LogTemp, Error,
			TEXT("AOptionDisplay %s - BeginPlay - TargetOptionIndex is greater than the number of options. Value clamped to %i"),
			*GetName(),
			Options.Num() - 1)
	}

	CurrentOptionIndex = FMath::Clamp<int>(CurrentOptionIndex, 0, Options.Num() - 1);
	TargetOptionIndex = FMath::Clamp<int>(TargetOptionIndex, 0, Options.Num() - 1);

	OffsetRotation = { 0.0f, (float)(360 / Options.Num()), 0.0f};
	TargetRotation = OptionDisplayMesh->GetRelativeRotation();

	SetCurrentOption(CurrentOptionIndex);

	SetNextTargetRotation(CurrentOptionIndex);

	OptionDisplayMesh->SetRelativeRotation(TargetRotation);

	SetNextTargetRotation();

	SetIsOnTarget(IsOptionOnTarget());
}

void AOptionDisplay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Options.Num() == 0) { return; }

	if (!bIsTurning) { return; }

	if (bIsTurning)
	{
		TurningAnimation(DeltaTime);

		if (ElapsedTime >= TurnDuration)
		{
			bIsTurning = false;
			ElapsedTime = 0.0f;

			SetNextTargetRotation();
			SetCurrentOption(GetNextOption());
			SetIsOnTarget(IsOptionOnTarget());

			OnTurnEnd();

			if (GetPreviousOption() != GetTargetOption() && GetCurrentOption() == GetTargetOption())
			{
				// Symbol display went from "not on target" to "on target"
				OnTargetReached();
			}
		}
	}
}

// Functions
void AOptionDisplay::Turn()
{
	if (Options.Num() == 0) { return; }

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("AOptionDisplay %s - Turn"), *GetName());
	}
	
	bIsTurning = true;

	SetIsOnTarget(IsOptionOnTarget());

	OnTurnStart();

	if (GetCurrentOption() == GetTargetOption() && GetNextOption() != GetTargetOption())
	{
		// Symbol display is going from "on target" to "not on target"
		OnTargetUnreached();
	}
}

void AOptionDisplay::TurningAnimation(const float DeltaTime)
{
	ElapsedTime += DeltaTime;

	float Alpha = ElapsedTime / TurnDuration;
	Alpha = FMath::Clamp<float>(Alpha, 0.0f, 1.0f);

	FRotator NewRotation = FMath::Lerp(InitialRotation, TargetRotation, Alpha);

	OptionDisplayMesh->SetRelativeRotation(NewRotation);
}

void AOptionDisplay::SetNextTargetRotation(const int Offset)
{
	InitialRotation = TargetRotation;

	float NewPitch = FMath::Fmod(InitialRotation.Pitch + OffsetRotation.Pitch * Offset, 360.0f);
	float NewYaw = FMath::Fmod(InitialRotation.Yaw + OffsetRotation.Yaw * Offset, 360.0f);
	float NewRoll = FMath::Fmod(InitialRotation.Roll + OffsetRotation.Roll * Offset, 360.0f);

	TargetRotation = {NewPitch, NewYaw, NewRoll};
}

bool AOptionDisplay::IsOptionOnTarget()
{
	return GetCurrentOption() == GetTargetOption() && !bIsTurning;
}

// Events
void AOptionDisplay::OnTurnStart_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("AOptionDisplay %s - OnTurnStart"), *GetName());
	}
}

void AOptionDisplay::OnTurnEnd_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("AOptionDisplay %s - OnTurnEnd"), *GetName());
	}
}

void AOptionDisplay::OnTargetReached_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("AOptionDisplay %s - OnTargetReached"), *GetName());
	}
}

void AOptionDisplay::OnTargetUnreached_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("AOptionDisplay %s - OnTargetUnreached"), *GetName());
	}
}

// Getters/setters
void AOptionDisplay::SetCurrentOption(int Value)
{
	PreviousOptionIndex = CurrentOptionIndex;
	CurrentOptionIndex = Value;
	NextOptionIndex = (CurrentOptionIndex + 1) % Options.Num();
}

int AOptionDisplay::GetCurrentOption()
{
	return CurrentOptionIndex;
}

int AOptionDisplay::GetNextOption()
{
	return NextOptionIndex;
}

int AOptionDisplay::GetPreviousOption()
{
	return PreviousOptionIndex;
}

void AOptionDisplay::SetTargetOption(int Value)
{
	TargetOptionIndex = Value;
}

int AOptionDisplay::GetTargetOption()
{
	return TargetOptionIndex;
}

void AOptionDisplay::SetIsOnTarget(bool Value)
{
	bIsOnTarget = Value;
}

bool AOptionDisplay::IsOnTarget()
{
	return bIsOnTarget;
}

// IInteractable implementation
bool AOptionDisplay::Interact_Implementation()
{
	if (Options.Num() == 0) { return false; }

	if (bIsTurning) { return false; }

	Turn();

	return true;
}
