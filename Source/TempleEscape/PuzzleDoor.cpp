// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#include "PuzzleDoor.h"

#define DEBUG true

void APuzzleDoor::BeginPlay()
{
    Super::BeginPlay();
}

void APuzzleDoor::Tick(float DeltaTime)
{
    if (bIsUnlocked || bIsOpening || bIsClosing)
    {
        Super::Tick(DeltaTime);
    }
}

bool APuzzleDoor::UnlockReward_Implementation()
{
    #if DEBUG
    UE_LOG(LogTemp, Warning, TEXT("PuzzleDoor [%s]: UnlockReward called."), *GetName());
    #endif

    UnlockDoor();
    OnRewardUnlocked_Implementation();

    return true;
}

bool APuzzleDoor::LockReward_Implementation()
{
    #if DEBUG
    UE_LOG(LogTemp, Warning, TEXT("PuzzleDoor [%s]: LockReward called."), *GetName());
    #endif

    LockDoor();
    OnRewardLocked_Implementation();

    return true;
}

void APuzzleDoor::OnRewardUnlocked_Implementation()
{
    #if DEBUG
    UE_LOG(LogTemp, Warning, TEXT("PuzzleDoor [%s]: OnRewardUnlocked event invoked."), *GetName());
    #endif
}

void APuzzleDoor::OnRewardLocked_Implementation()
{
    #if DEBUG
    UE_LOG(LogTemp, Warning, TEXT("PuzzleDoor [%s]: OnRewardLocked event invoked."), *GetName());
    #endif
}

bool APuzzleDoor::IsRewardUnlocked_Implementation()
{
    return bIsUnlocked;
}
