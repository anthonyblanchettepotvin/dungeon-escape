// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "GrabberComponent.h"
#include "Components/PrimitiveComponent.h"

UGrabberComponent::UGrabberComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UGrabberComponent::BeginPlay()
{
    Super::BeginPlay();

	FetchOwnerPhysicsHandleComponent();
}

void UGrabberComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PhysicsHandleComponent) { return; }

	UpdateGrabLocation();
	UpdateGrabbedActorTransform();
}

// Functions
void UGrabberComponent::FetchOwnerPhysicsHandleComponent()
{
	PhysicsHandleComponent = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if (!PhysicsHandleComponent)
	{
		UE_LOG(LogTemp, Error,
			TEXT("UGrabberComponent %s - FetchOwnerPhysicsHandleComponent - PhysicsHandle component not found"),
			*GetName());

		return;
	}

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("UGrabberComponent %s - FetchOwnerPhysicsHandleComponent - PhysicsHandle component found"),
			*GetName());
	}
}

void UGrabberComponent::Grab()
{	
	if (!PhysicsHandleComponent) { return; }

    if (PhysicsHandleComponent->GrabbedComponent) { return; }

	if (FocusedActor)
	{	
		UPrimitiveComponent* FocusedActorPrimitive = FocusedActor->FindComponentByClass<UPrimitiveComponent>();

		FRotator NewRotation = { 0.0f, PlayerViewPointRotation.Yaw + 90.0f, 0.0f };

		FocusedActorPrimitive->SetRelativeRotation(NewRotation);

		PhysicsHandleComponent->GrabComponentAtLocationWithRotation(
			FocusedActorPrimitive,
			NAME_None,
			FocusedActor->GetActorLocation(),
			NewRotation
		);

		GrabbedActor = FocusedActor;

		if (bDebug)
		{
			UE_LOG(LogTemp, Warning, TEXT("UGrabberComponent %s - Grab - Actor grabbed"), *GetName());
		}

		if (OnGrab.IsBound()) { OnGrab.Broadcast(); }
	}
}

void UGrabberComponent::Release()
{
	if (!PhysicsHandleComponent) { return; }

    if (!PhysicsHandleComponent->GrabbedComponent) { return; }

	PhysicsHandleComponent->ReleaseComponent();

	GrabbedActor = nullptr;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("UGrabberComponent %s - Release - Actor released"), *GetName());
	}

	if (OnRelease.IsBound()) { OnRelease.Broadcast(); }
}

void UGrabberComponent::UpdateGrabLocation()
{
	GrabLocation = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * GrabDistance;
}

void UGrabberComponent::UpdateGrabbedActorTransform()
{
	if (PhysicsHandleComponent->GrabbedComponent)
	{
		PhysicsHandleComponent->SetTargetLocationAndRotation(
			GrabLocation,
			{ 0.0f, PlayerViewPointRotation.Yaw + 90.0f, 0.0f }
		);
	}
}

// UInteractComponent overrides
void UGrabberComponent::SetupOwnerInputComponent()
{
	if (!InputComponent) { return; }

	InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabberComponent::Interact);
	InputComponent->BindAction("Grab", IE_Released, this, &UGrabberComponent::Interact);
}

void UGrabberComponent::Interact()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("UGrabberComponent %s - Interact"), *GetName());
	}

	if (!PhysicsHandleComponent) { return; }

	PhysicsHandleComponent->GrabbedComponent ? Release() : Grab();
}
