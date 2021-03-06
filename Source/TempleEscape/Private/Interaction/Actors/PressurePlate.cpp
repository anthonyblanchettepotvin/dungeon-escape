// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PressurePlate.h"

APressurePlate::APressurePlate()
{
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	Trigger->SetCollisionProfileName(TEXT("Trigger"));
	Trigger->SetupAttachment(Root);

	Trigger->OnComponentBeginOverlap.AddDynamic(this, &APressurePlate::OnOverlapBegin);
	Trigger->OnComponentEndOverlap.AddDynamic(this, &APressurePlate::OnOverlapEnd);
}

void APressurePlate::BeginPlay()
{
	Super::BeginPlay();

	SetTotalWeight(GetOverlappingActorsWeight());
}

void APressurePlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Getters/setters
void APressurePlate::SetTargetWeightReached(bool Value)
{
	if (!bTargetWeightReached && Value) {
		// TargetWeightReached turns from false to true.
		OnTargetReached();
	}
	else if (bTargetWeightReached && !Value) {
		// TargetWeightReached turns from true to false.
		OnTargetUnreached();
	}

	bTargetWeightReached = Value;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("APressurePlate %s - SetTargetWeightReached - TargetWeightReached changed to %s"),
			*GetName(),
			Value ? TEXT("true") : TEXT("false"));
	}
}

bool APressurePlate::GetTargetWeightReached()
{
	return bTargetWeightReached;
}

void APressurePlate::SetTargetWeight(float Value)
{
	TargetWeight = Value;

	SetTargetWeightReached(IsTargetWeightReached());
}

float APressurePlate::GetTargetWeight()
{
	return TargetWeight;
}

void APressurePlate::SetTotalWeight(float Value)
{
	TotalWeight = Value;
	
	SetTargetWeightReached(IsTargetWeightReached());
}

float APressurePlate::GetTotalWeight()
{
	return TotalWeight;
}

// Delegates
void APressurePlate::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("APressurePlate %s - OnOverlapBegin"), *GetName());
	}

	if (!OtherComp->IsSimulatingPhysics()) { return; }

	float NewWeight = GetTotalWeight() + OtherComp->GetMass();

	SetTotalWeight(NewWeight);
}

void APressurePlate::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("APressurePlate %s - OnOverlapEnd"), *GetName());
	}

	if (!OtherComp->IsSimulatingPhysics()) { return; }

	float NewWeight = GetTotalWeight() - OtherComp->GetMass();

	SetTotalWeight(NewWeight);
}

// Events
void APressurePlate::OnTargetReached_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("APressurePlate %s - OnTargetReached"),
			*GetName())
	}
}

void APressurePlate::OnTargetUnreached_Implementation()
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning,
			TEXT("APressurePlate %s - OnTargetUnreached"),
			*GetName())
	}
}

// Functions
bool APressurePlate::IsTargetWeightReached()
{
	return GetTotalWeight() >= GetTargetWeight();
}

float APressurePlate::GetOverlappingActorsWeight()
{
	float Weight = 0.0f;

	TArray<AActor*> OverlappingActors;
	Trigger->GetOverlappingActors(OverlappingActors);

	for (AActor* Actor : OverlappingActors)
	{
		UPrimitiveComponent* Component = Actor->FindComponentByClass<UPrimitiveComponent>();

		if (Component)
		{
			Weight += Component->GetMass();
		}
	}

	return Weight;
}
