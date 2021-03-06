// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "BaseButton.h"

ABaseButton::ABaseButton()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	ButtonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Button"));
	ButtonMesh->SetMobility(EComponentMobility::Movable);
	ButtonMesh->SetCollisionProfileName("Interactable");
	ButtonMesh->SetupAttachment(Root);

	FrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Frame"));
	FrameMesh->SetMobility(EComponentMobility::Movable);
	FrameMesh->SetupAttachment(Root);
}

void ABaseButton::BeginPlay()
{
	Super::BeginPlay();

	PressedLocation = ButtonMesh->GetRelativeLocation() - TargetOffset;
	UnpressedLocation = ButtonMesh->GetRelativeLocation();

	if (bIsPressed)
	{
		Press();
	}
}

void ABaseButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsPressing && !bIsUnpressing) { return; }

	if (bIsPressing)
	{
		ButtonPressAnimation(DeltaTime);

		if (ElapsedTime > PressDuration)
		{
			bIsPressing = false;
			ElapsedTime = 0.0f;
			SetIsPressed(true);

			OnButtonPressed();

			if (!bIsToggle)
			{
				Unpress();
			}
		}

		return;
	}

	if (bIsUnpressing)
	{
		ButtonUnpressAnimation(DeltaTime);

		if (ElapsedTime > UnpressDuration)
		{
			bIsUnpressing = false;
			ElapsedTime = 0.0f;
			SetIsPressed(false);

			OnButtonUnpressed();
		}

		return;
	}
}

// Functions
void ABaseButton::Press()
{
	ElapsedTime = CalculateAnimationProgress(
		UnpressedLocation,
		PressedLocation,
		ButtonMesh->GetRelativeLocation()) * PressDuration;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ABaseButton %s - Press"), *GetName())
	}

	bIsPressing = true;
	bIsUnpressing = false;

	OnButtonPress();
}

void ABaseButton::ButtonPressAnimation(const float DeltaTime)
{
	ElapsedTime += DeltaTime;

	float Alpha = ElapsedTime / PressDuration;
	Alpha = FMath::Clamp<float>(Alpha, 0.0f, 1.0f);

	FVector NewLocation = FMath::Lerp(UnpressedLocation, PressedLocation, Alpha);

	ButtonMesh->SetRelativeLocation(NewLocation);
}

void ABaseButton::Unpress()
{
	ElapsedTime = CalculateAnimationProgress(
		PressedLocation,
		UnpressedLocation,
		ButtonMesh->GetRelativeLocation()) * UnpressDuration;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ABaseButton %s - Unpress"), *GetName())
	}

	bIsUnpressing = true;
	bIsPressing = false;

	OnButtonUnpress();
}

void ABaseButton::ButtonUnpressAnimation(const float DeltaTime)
{
	ElapsedTime += DeltaTime;

	float Alpha = ElapsedTime / PressDuration;
	Alpha = FMath::Clamp<float>(Alpha, 0.0f, 1.0f);

	FVector NewLocation = FMath::Lerp(PressedLocation, UnpressedLocation, Alpha);

	ButtonMesh->SetRelativeLocation(NewLocation);
}

float ABaseButton::CalculateAnimationProgress(const FVector& StartLocation, const FVector& EndLocation, const FVector& CurrentLocation) const
{
	float CompleteAnimationDistance = FVector::Distance(StartLocation, EndLocation);
	float AnimationDistanceLeft = FVector::Distance(CurrentLocation, EndLocation);
	float Progress = 1 - (AnimationDistanceLeft / CompleteAnimationDistance);

	Progress = FMath::Clamp<float>(Progress, 0.0f, 1.0f);
	
	return Progress;
}

void ABaseButton::PressUnpress()
{
	if (bIsPressing)
	{
		Unpress();
	}
	else if (bIsUnpressing)
	{
		Press();
	}
	else if (bIsPressed)
	{
		Unpress();
	}
	else
	{
		Press();
	}
}

// Events
void ABaseButton::OnButtonPress_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ABaseButton %s - OnButtonPress"), *GetName())
	}
}

void ABaseButton::OnButtonPressed_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ABaseButton %s - OnButtonPressed"), *GetName())
	}
}

void ABaseButton::OnButtonUnpress_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ABaseButton %s - OnButtonUnpress"), *GetName())
	}
}

void ABaseButton::OnButtonUnpressed_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ABaseButton %s - OnButtonUnpressed"), *GetName())
	}
}

// IInteractable implementatiom
bool ABaseButton::Interact_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("ABaseButton %s - Interact"), *GetName())
	}

	PressUnpress();

	return true;
}

// Getters/setters
void ABaseButton::SetIsPressed(bool Value)
{
	bIsPressed = Value;
}
