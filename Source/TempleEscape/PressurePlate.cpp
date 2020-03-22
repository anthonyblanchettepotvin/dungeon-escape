// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PressurePlate.h"

APressurePlate::APressurePlate()
{
	PrimaryActorTick.bCanEverTick = true;

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
}

void APressurePlate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Getters/setters
void APressurePlate::SetTargetWeightReached(bool Value)
{
	bTargetWeightReached = Value;

	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("APressurePlate %s: TargetWeightReached changed to %s"), *GetName(), Value ? TEXT("true") : TEXT("false"));
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
		UE_LOG(LogTemp, Warning, TEXT("APressurePlate %s: OnOverlapBegin"), *GetName());
	}

	if (!OtherComp->IsSimulatingPhysics()) { return; }

	float NewWeight = GetTotalWeight() + OtherComp->GetMass();

	SetTotalWeight(NewWeight);
}

void APressurePlate::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (bDebug)
	{
		UE_LOG(LogTemp, Warning, TEXT("APressurePlate %s: OnOverlapEnd"), *GetName());
	}

	if (!OtherComp->IsSimulatingPhysics()) { return; }

	float NewWeight = GetTotalWeight() - OtherComp->GetMass();

	SetTotalWeight(NewWeight);
}

// Functions
bool APressurePlate::IsTargetWeightReached()
{
	return GetTotalWeight() >= GetTargetWeight();
}
