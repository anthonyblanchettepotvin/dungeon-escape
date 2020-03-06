// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "SymbolDisplay.h"

#define DEBUG true

ASymbolDisplay::ASymbolDisplay()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASymbolDisplay::BeginPlay()
{
	Super::BeginPlay();

	uint8 Byte = (uint8)Symbol;

	#if DEBUG
	UE_LOG(LogTemp, Warning, TEXT("SymbolDisplay %s : Symbol value = %i."), *GetName(), Byte);
	#endif

	FRotator CurrentRotation = GetActorRotation();
	FRotator InitialRotation(0.0f, CurrentRotation.Yaw + 120.0f * Byte, 0.0f);

	#if DEBUG
	UE_LOG(LogTemp, Warning, TEXT("SymbolDisplay %s : InitialRotation = %s."), *GetName(), *InitialRotation.ToString());
	#endif

	SetActorRotation(InitialRotation);
}

void ASymbolDisplay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ASymbolDisplay::Interact_Implementation()
{
	FRotator CurrentRotation = GetActorRotation();
	FRotator NewRotation = {0.0f, CurrentRotation.Yaw + 120.0f, 0.0f};

	SetActorRotation(NewRotation);

	uint8 Byte = (uint8)Symbol;
	Symbol = static_cast<ESymbol>((Byte + 1) % (uint8)ESymbol::S_Count);

	return true;
}
