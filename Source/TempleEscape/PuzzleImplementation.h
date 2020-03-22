// Copyright © 2019 Anthony Blanchette-Potvin All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Puzzle.h"
#include "PuzzleCondition.h"
#include "PuzzleReward.h"
#include "PuzzleTrigger.h"
#include "PuzzleImplementation.generated.h"

UCLASS()
class TEMPLEESCAPE_API APuzzleImplementation : public AActor, public IPuzzle
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APuzzleImplementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Puzzle")
	TArray<AActor*> Conditions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Puzzle")
	TArray<AActor*> Rewards;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Puzzle")
	AActor* Trigger = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Puzzle")
	bool bConditionsMet = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Puzzle", AdvancedDisplay)
	bool bDebug = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Puzzle", AdvancedDisplay)
	bool bConditionsOK = false;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Puzzle", AdvancedDisplay)
	bool bRewardsOK = false;

	UFUNCTION(BlueprintCallable, Category="Puzzle")
	bool CheckConditionsImplementation();
	UFUNCTION(BlueprintCallable, Category="Puzzle")
	bool CheckRewardsImplementation();

	UFUNCTION(BlueprintCallable, Category="Puzzle")
	void UnlockAllRewards();
	UFUNCTION(BlueprintCallable, Category="Puzzle")
	void LockAllRewards();

	virtual bool AreConditionsMet_Implementation() override;
	virtual bool ConditionStateChanged_Implementation(AActor* Condition, bool State) override;
	virtual void OnConditionsMet_Implementation() override;
	virtual void OnConditionsUnmet_Implementation() override;
	virtual bool ReactToTrigger_Implementation() override;
	virtual bool SubscribeToTrigger_Implementation(UObject* Trigger) override;
	virtual bool UnsubscribeFromTrigger_Implementation(UObject* Trigger) override;

private:
	/** Checks the result of AreConditionsMet() and act based on its return value.
	 * 
	 * If AreConditionsMet() returns true, unlocks all the rewards and invoke OnConditionsMet().
	 * If AreConditionsMet() returns false, locks all the rewards and invoke OnConditionsUnmet().
	 */
	void ActOnConditionsMet();
};
