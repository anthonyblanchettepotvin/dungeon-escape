// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/Public/Puzzle/Components/PuzzleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleComponent() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleComponent_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleConditionComponent_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_LockAllRewards();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleTriggerComponent_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleRewardComponent_NoRegister();
// End Cross Module References
	static FName NAME_UPuzzleComponent_OnConditionsMet = FName(TEXT("OnConditionsMet"));
	void UPuzzleComponent::OnConditionsMet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPuzzleComponent_OnConditionsMet),NULL);
	}
	static FName NAME_UPuzzleComponent_OnConditionsUnmet = FName(TEXT("OnConditionsUnmet"));
	void UPuzzleComponent::OnConditionsUnmet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPuzzleComponent_OnConditionsUnmet),NULL);
	}
	void UPuzzleComponent::StaticRegisterNativesUPuzzleComponent()
	{
		UClass* Class = UPuzzleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreConditionsMet", &UPuzzleComponent::execAreConditionsMet },
			{ "CheckConditionsActors", &UPuzzleComponent::execCheckConditionsActors },
			{ "CheckRewardsActors", &UPuzzleComponent::execCheckRewardsActors },
			{ "CheckTriggerActor", &UPuzzleComponent::execCheckTriggerActor },
			{ "ConditionStateChanged", &UPuzzleComponent::execConditionStateChanged },
			{ "LockAllRewards", &UPuzzleComponent::execLockAllRewards },
			{ "OnConditionsMet", &UPuzzleComponent::execOnConditionsMet },
			{ "OnConditionsUnmet", &UPuzzleComponent::execOnConditionsUnmet },
			{ "TriggerTriggered", &UPuzzleComponent::execTriggerTriggered },
			{ "UnlockAllRewards", &UPuzzleComponent::execUnlockAllRewards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics
	{
		struct PuzzleComponent_eventAreConditionsMet_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleComponent_eventAreConditionsMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleComponent_eventAreConditionsMet_Parms), &Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Check if all conditions are met.\n\x09 * @return True if all conditions evaluate to true, false otherwise\n\x09 * @note Conditions must implement IPuzzleCondition.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Check if all conditions are met.\n@return True if all conditions evaluate to true, false otherwise\n@note Conditions must implement IPuzzleCondition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "AreConditionsMet", nullptr, nullptr, sizeof(PuzzleComponent_eventAreConditionsMet_Parms), Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Check if all the puzzle conditions' actor have the PuzzleCondition component.\n\x09 * @note Save all PuzzleCondition component into ConditionsComponents\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Check if all the puzzle conditions' actor have the PuzzleCondition component.\n@note Save all PuzzleCondition component into ConditionsComponents" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "CheckConditionsActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Check if all the puzzle rewards' actor have the PuzzleReward component.\n\x09 * @note Save all PuzzleCondition component into RewardsComponents\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Check if all the puzzle rewards' actor have the PuzzleReward component.\n@note Save all PuzzleCondition component into RewardsComponents" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "CheckRewardsActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Check if the puzzle trigger's actor have the PuzzleTrigger component.\n\x09 * @note Save the PuzzleCondition component into TriggerComponent\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Check if the puzzle trigger's actor have the PuzzleTrigger component.\n@note Save the PuzzleCondition component into TriggerComponent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "CheckTriggerActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics
	{
		struct PuzzleComponent_eventConditionStateChanged_Parms
		{
			UPuzzleConditionComponent* Source;
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_State_SetBit(void* Obj)
	{
		((PuzzleComponent_eventConditionStateChanged_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleComponent_eventConditionStateChanged_Parms), &Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleComponent_eventConditionStateChanged_Parms, Source), Z_Construct_UClass_UPuzzleConditionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Called when a condition has changed state.\n\x09 * @param Source The PuzzleCondition component that the state has changed\n\x09 * @param State The new state of the PuzzleCondition component\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Called when a condition has changed state.\n@param Source The PuzzleCondition component that the state has changed\n@param State The new state of the PuzzleCondition component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "ConditionStateChanged", nullptr, nullptr, sizeof(PuzzleComponent_eventConditionStateChanged_Parms), Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_LockAllRewards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_LockAllRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Lock all the puzzle rewards. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Lock all the puzzle rewards." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_LockAllRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "LockAllRewards", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_LockAllRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_LockAllRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_LockAllRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_LockAllRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Event called when all the conditions are met. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Event called when all the conditions are met." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "OnConditionsMet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Event called when all the conditions are unmet. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Event called when all the conditions are unmet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "OnConditionsUnmet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics
	{
		struct PuzzleComponent_eventTriggerTriggered_Parms
		{
			UPuzzleTriggerComponent* Source;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleComponent_eventTriggerTriggered_Parms, Source), Z_Construct_UClass_UPuzzleTriggerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Called when the trigger has been triggered.\n\x09 * @param Source The PuzzleTrigger component that has been triggered\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Called when the trigger has been triggered.\n@param Source The PuzzleTrigger component that has been triggered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "TriggerTriggered", nullptr, nullptr, sizeof(PuzzleComponent_eventTriggerTriggered_Parms), Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unlock all the puzzle rewards. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Unlock all the puzzle rewards." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleComponent, nullptr, "UnlockAllRewards", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleComponent_NoRegister()
	{
		return UPuzzleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConditionsMet_MetaData[];
#endif
		static void NewProp_bConditionsMet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConditionsMet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnlockRewardsPermanently_MetaData[];
#endif
		static void NewProp_bUnlockRewardsPermanently_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnlockRewardsPermanently;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardsComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardsComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionsComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConditionsComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConditionsComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleComponent_AreConditionsMet, "AreConditionsMet" }, // 2856647641
		{ &Z_Construct_UFunction_UPuzzleComponent_CheckConditionsActors, "CheckConditionsActors" }, // 1116764455
		{ &Z_Construct_UFunction_UPuzzleComponent_CheckRewardsActors, "CheckRewardsActors" }, // 4293762172
		{ &Z_Construct_UFunction_UPuzzleComponent_CheckTriggerActor, "CheckTriggerActor" }, // 2397043439
		{ &Z_Construct_UFunction_UPuzzleComponent_ConditionStateChanged, "ConditionStateChanged" }, // 3664120273
		{ &Z_Construct_UFunction_UPuzzleComponent_LockAllRewards, "LockAllRewards" }, // 1094001203
		{ &Z_Construct_UFunction_UPuzzleComponent_OnConditionsMet, "OnConditionsMet" }, // 3190414940
		{ &Z_Construct_UFunction_UPuzzleComponent_OnConditionsUnmet, "OnConditionsUnmet" }, // 3368420684
		{ &Z_Construct_UFunction_UPuzzleComponent_TriggerTriggered, "TriggerTriggered" }, // 1847761658
		{ &Z_Construct_UFunction_UPuzzleComponent_UnlockAllRewards, "UnlockAllRewards" }, // 1813584511
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Puzzle/Components/PuzzleComponent.h" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not debug messages should appear in the output log. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Whether or not debug messages should appear in the output log." },
	};
#endif
	void Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UPuzzleComponent*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPuzzleComponent), &Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bConditionsMet_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not the puzzle conditions are all met. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Whether or not the puzzle conditions are all met." },
	};
#endif
	void Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bConditionsMet_SetBit(void* Obj)
	{
		((UPuzzleComponent*)Obj)->bConditionsMet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bConditionsMet = { "bConditionsMet", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPuzzleComponent), &Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bConditionsMet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bConditionsMet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bConditionsMet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bUnlockRewardsPermanently_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not the puzzle rewards should be unlocked permanently. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "Whether or not the puzzle rewards should be unlocked permanently." },
	};
#endif
	void Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bUnlockRewardsPermanently_SetBit(void* Obj)
	{
		((UPuzzleComponent*)Obj)->bUnlockRewardsPermanently = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bUnlockRewardsPermanently = { "bUnlockRewardsPermanently", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPuzzleComponent), &Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bUnlockRewardsPermanently_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bUnlockRewardsPermanently_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bUnlockRewardsPermanently_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_TriggerComponent_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle trigger's PuzzleTrigger component.\n\x09 * \n\x09 * Used to avoid repetitive calls to FindComponentByType().\n     */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "The puzzle trigger's PuzzleTrigger component.\n\nUsed to avoid repetitive calls to FindComponentByType()." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_TriggerComponent = { "TriggerComponent", nullptr, (EPropertyFlags)0x00200c00000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleComponent, TriggerComponent), Z_Construct_UClass_UPuzzleTriggerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_TriggerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_TriggerComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle trigger associated with the puzzle.\n\x09 * @note If a puzzle trigger is specified, the puzzle conditions will be evaluated only when the trigger is triggered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "The puzzle trigger associated with the puzzle.\n@note If a puzzle trigger is specified, the puzzle conditions will be evaluated only when the trigger is triggered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleComponent, Trigger), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_RewardsComponents_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle rewards' PuzzleReward components.\n\x09 * \n\x09 * Used to avoid repetitive calls to FindComponentByType().\n     */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "The puzzle rewards' PuzzleReward components.\n\nUsed to avoid repetitive calls to FindComponentByType()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_RewardsComponents = { "RewardsComponents", nullptr, (EPropertyFlags)0x00200c800002001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleComponent, RewardsComponents), METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_RewardsComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_RewardsComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_RewardsComponents_Inner = { "RewardsComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPuzzleRewardComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Rewards_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle rewards associated with the puzzle.\n\x09 * @note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "The puzzle rewards associated with the puzzle.\n@note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleComponent, Rewards), METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Rewards_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_ConditionsComponents_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle conditions' PuzzleCondition components.\n\x09 * \n\x09 * Used to avoid repetitive calls to FindComponentByType().\n     */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "The puzzle conditions' PuzzleCondition components.\n\nUsed to avoid repetitive calls to FindComponentByType()." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_ConditionsComponents = { "ConditionsComponents", nullptr, (EPropertyFlags)0x00200c800002001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleComponent, ConditionsComponents), METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_ConditionsComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_ConditionsComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_ConditionsComponents_Inner = { "ConditionsComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPuzzleConditionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle conditions associated with the puzzle.\n\x09 * @note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleComponent.h" },
		{ "ToolTip", "The puzzle conditions associated with the puzzle.\n@note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleComponent, Conditions), METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bConditionsMet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_bUnlockRewardsPermanently,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_TriggerComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_RewardsComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_RewardsComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Rewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Rewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_ConditionsComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_ConditionsComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleComponent_Statics::NewProp_Conditions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleComponent_Statics::ClassParams = {
		&UPuzzleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPuzzleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleComponent, 2650615162);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UPuzzleComponent>()
	{
		return UPuzzleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleComponent(Z_Construct_UClass_UPuzzleComponent, &UPuzzleComponent::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UPuzzleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
