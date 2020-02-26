// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "InteractComponent.h"

#define DEBUG false
#define TICK_DEBUG false
#define VISUAL_DEBUG false

UInteractComponent::UInteractComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UInteractComponent::BeginPlay()
{
	Super::BeginPlay();

	if (!FindInputComponent()) { return; }

	SetupInputComponent();

	#if DEBUG
	UE_LOG(LogTemp, Warning, TEXT("InteractComponent on %s : Initialized."), *GetOwner()->GetName());
	#endif
}

bool UInteractComponent::FindInputComponent()
{
	InputComponent = GetOwner()->InputComponent;

	if (!InputComponent)
	{
		UE_LOG(LogTemp, Error, TEXT("InteractComponent on %s : Input component required."), *GetOwner()->GetName());

		return false;
	}
	else
	{	
		#if DEBUG
		UE_LOG(LogTemp, Warning, TEXT("InteractComponent on %s : Input component found."), *GetOwner()->GetName());
		#endif

		return true;
	}
}

void UInteractComponent::SetupInputComponent()
{
	if (!InputComponent) { return; }
	
	InputComponent->BindAction("Interact", IE_Pressed, this, &UInteractComponent::Interact);
}

void UInteractComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!InputComponent) { return; }

	FetchPlayerViewPoint();

	InteractLineStart = GetInteractLineStart();
	InteractLineEnd = GetInteractLineEnd();
	FocusedActor = GetFocusedActor();

	#if VISUAL_DEBUG
	DrawDebugLine(GetWorld(), InteractLineStart, InteractLineEnd, FColor::Cyan, false, 0.0f, 1, 2.0f);
	#endif
}

void UInteractComponent::FetchPlayerViewPoint()
{
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);
}

FVector UInteractComponent::GetInteractLineStart() const
{
	FVector Result = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * MinReach;
	 
	#if TICK_DEBUG
	UE_LOG(LogTemp, Warning, TEXT("InteractComponent on %s : InteractLineStart : %s"), *GetOwner()->GetName(), *Result.ToString());
	#endif

	return Result;
}

FVector UInteractComponent::GetInteractLineEnd() const
{
	FVector Result = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * MaxReach;
	 
	#if TICK_DEBUG
	UE_LOG(LogTemp, Warning, TEXT("InteractComponent on %s : InteractLineEnd : %s"), *GetOwner()->GetName(), *Result.ToString());
	#endif

	return Result;
}

AActor* UInteractComponent::GetFocusedActor() const
{
	bool bHit = false;
	FHitResult Hit;

	bHit = GetWorld()->LineTraceSingleByObjectType(
		Hit,
		PlayerViewPointLocation,
		InteractLineEnd,
		FCollisionObjectQueryParams(Channel),
		FCollisionQueryParams(FName(TEXT("")), false, GetOwner())
	);

	if (bHit)
	{
		#if DEBUG
		UE_LOG(LogTemp, Warning, TEXT("InteractComponent on %s : Actor %s is within reach."), *GetOwner()->GetName(), *(Hit.GetActor()->GetName()));
		#endif
	}

	return bHit ? Hit.GetActor() : nullptr;
}

void UInteractComponent::Interact_Implementation()
{
	#if DEBUG
	UE_LOG(LogTemp, Warning, TEXT("InteractComponent on %s : Interact attempt."), *GetOwner()->GetName());
	#endif
	
	if (FocusedActor)
	{	
		if (FocusedActor->GetClass()->ImplementsInterface(UInteractable::StaticClass()))
		{	
			#if DEBUG
			UE_LOG(LogTemp, Warning, TEXT("InteractComponent on %s : Interacting with %s."), *GetOwner()->GetName(), *(Hit.GetActor()->GetName()));
			#endif

			IInteractable::Execute_Interact(FocusedActor);

			if (OnInteract.IsBound()) { OnInteract.Broadcast(); }
		}
		else
		{
			#if DEBUG
			UE_LOG(LogTemp, Error, TEXT("InteractComponent on %s : Actor %s doesn't implement IInteractable."), *GetOwner()->GetName(), *(Hit.GetActor()->GetName()));
			#endif
		}
	}
}
