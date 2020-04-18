// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PuzzleImplementation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleImplementation() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzleImplementation_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzleImplementation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APuzzleImplementation_LockAllRewards();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzle_NoRegister();
// End Cross Module References
	void APuzzleImplementation::StaticRegisterNativesAPuzzleImplementation()
	{
		UClass* Class = APuzzleImplementation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckConditionsImplementation", &APuzzleImplementation::execCheckConditionsImplementation },
			{ "CheckRewardsImplementation", &APuzzleImplementation::execCheckRewardsImplementation },
			{ "LockAllRewards", &APuzzleImplementation::execLockAllRewards },
			{ "UnlockAllRewards", &APuzzleImplementation::execUnlockAllRewards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics
	{
		struct PuzzleImplementation_eventCheckConditionsImplementation_Parms
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
	void Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleImplementation_eventCheckConditionsImplementation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleImplementation_eventCheckConditionsImplementation_Parms), &Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Check if all the puzzle conditions' actor implements IPuzzleCondition.\n\x09 * @return True if all the puzzle conditions' actor implements IPuzzleCondition, false otherwise\n\x09 * @note Also set bConditionsOK\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Check if all the puzzle conditions' actor implements IPuzzleCondition.\n@return True if all the puzzle conditions' actor implements IPuzzleCondition, false otherwise\n@note Also set bConditionsOK" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleImplementation, nullptr, "CheckConditionsImplementation", nullptr, nullptr, sizeof(PuzzleImplementation_eventCheckConditionsImplementation_Parms), Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics
	{
		struct PuzzleImplementation_eventCheckRewardsImplementation_Parms
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
	void Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleImplementation_eventCheckRewardsImplementation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleImplementation_eventCheckRewardsImplementation_Parms), &Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Check if all the puzzle rewards' actor implements IPuzzleReward.\n\x09 * @return True if all the puzzle rewards' actor implements IPuzzleReward, false otherwise\n\x09 * @note Also set bRewardsOK\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Check if all the puzzle rewards' actor implements IPuzzleReward.\n@return True if all the puzzle rewards' actor implements IPuzzleReward, false otherwise\n@note Also set bRewardsOK" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleImplementation, nullptr, "CheckRewardsImplementation", nullptr, nullptr, sizeof(PuzzleImplementation_eventCheckRewardsImplementation_Parms), Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleImplementation_LockAllRewards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleImplementation_LockAllRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Lock all the puzzle rewards. */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Lock all the puzzle rewards." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleImplementation_LockAllRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleImplementation, nullptr, "LockAllRewards", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APuzzleImplementation_LockAllRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleImplementation_LockAllRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APuzzleImplementation_LockAllRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APuzzleImplementation_LockAllRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unlock all the puzzle rewards. */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Unlock all the puzzle rewards." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleImplementation, nullptr, "UnlockAllRewards", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APuzzleImplementation_NoRegister()
	{
		return APuzzleImplementation::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleImplementation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRewardsOK_MetaData[];
#endif
		static void NewProp_bRewardsOK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRewardsOK;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConditionsOK_MetaData[];
#endif
		static void NewProp_bConditionsOK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConditionsOK;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rewards;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Rewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleImplementation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APuzzleImplementation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APuzzleImplementation_CheckConditionsImplementation, "CheckConditionsImplementation" }, // 164852557
		{ &Z_Construct_UFunction_APuzzleImplementation_CheckRewardsImplementation, "CheckRewardsImplementation" }, // 294694642
		{ &Z_Construct_UFunction_APuzzleImplementation_LockAllRewards, "LockAllRewards" }, // 1066287296
		{ &Z_Construct_UFunction_APuzzleImplementation_UnlockAllRewards, "UnlockAllRewards" }, // 1646128450
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleImplementation.h" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bRewardsOK_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not all the puzzle rewards' actor implements IPuzzleReward. */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Whether or not all the puzzle rewards' actor implements IPuzzleReward." },
	};
#endif
	void Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bRewardsOK_SetBit(void* Obj)
	{
		((APuzzleImplementation*)Obj)->bRewardsOK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bRewardsOK = { "bRewardsOK", nullptr, (EPropertyFlags)0x00200c0000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APuzzleImplementation), &Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bRewardsOK_SetBit, METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bRewardsOK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bRewardsOK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsOK_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not all the puzzle conditions' actor implements IPuzzleCondition. */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Whether or not all the puzzle conditions' actor implements IPuzzleCondition." },
	};
#endif
	void Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsOK_SetBit(void* Obj)
	{
		((APuzzleImplementation*)Obj)->bConditionsOK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsOK = { "bConditionsOK", nullptr, (EPropertyFlags)0x00200c0000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APuzzleImplementation), &Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsOK_SetBit, METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsOK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsOK_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not debug messages should appear in the output log. */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Whether or not debug messages should appear in the output log." },
	};
#endif
	void Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((APuzzleImplementation*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APuzzleImplementation), &Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsMet_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not the puzzle conditions are all met. */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Whether or not the puzzle conditions are all met." },
	};
#endif
	void Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsMet_SetBit(void* Obj)
	{
		((APuzzleImplementation*)Obj)->bConditionsMet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsMet = { "bConditionsMet", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APuzzleImplementation), &Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsMet_SetBit, METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsMet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsMet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bUnlockRewardsPermanently_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not the puzzle rewards should be unlocked permanently. */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "Whether or not the puzzle rewards should be unlocked permanently." },
	};
#endif
	void Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bUnlockRewardsPermanently_SetBit(void* Obj)
	{
		((APuzzleImplementation*)Obj)->bUnlockRewardsPermanently = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bUnlockRewardsPermanently = { "bUnlockRewardsPermanently", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APuzzleImplementation), &Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bUnlockRewardsPermanently_SetBit, METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bUnlockRewardsPermanently_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bUnlockRewardsPermanently_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle trigger associated with the puzzle.\n\x09 * @note If a puzzle trigger is specified, the puzzle conditions will be evaluated only when the trigger is triggered.\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "The puzzle trigger associated with the puzzle.\n@note If a puzzle trigger is specified, the puzzle conditions will be evaluated only when the trigger is triggered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleImplementation, Trigger), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Rewards_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle rewards associated with the puzzle.\n\x09 * @note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked.\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "The puzzle rewards associated with the puzzle.\n@note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Rewards = { "Rewards", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleImplementation, Rewards), METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Rewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Rewards_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Rewards_Inner = { "Rewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** The puzzle conditions associated with the puzzle.\n\x09 * @note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked.\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleImplementation.h" },
		{ "ToolTip", "The puzzle conditions associated with the puzzle.\n@note All puzzle conditions must evaluate to true for the puzzle rewards to be unlocked." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleImplementation, Conditions), METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleImplementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bRewardsOK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsOK,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bConditionsMet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_bUnlockRewardsPermanently,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Rewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Rewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleImplementation_Statics::NewProp_Conditions_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APuzzleImplementation_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPuzzle_NoRegister, (int32)VTABLE_OFFSET(APuzzleImplementation, IPuzzle), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleImplementation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleImplementation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleImplementation_Statics::ClassParams = {
		&APuzzleImplementation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APuzzleImplementation_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleImplementation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleImplementation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleImplementation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleImplementation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleImplementation, 3662069313);
	template<> TEMPLEESCAPE_API UClass* StaticClass<APuzzleImplementation>()
	{
		return APuzzleImplementation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleImplementation(Z_Construct_UClass_APuzzleImplementation, &APuzzleImplementation::StaticClass, TEXT("/Script/TempleEscape"), TEXT("APuzzleImplementation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleImplementation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
