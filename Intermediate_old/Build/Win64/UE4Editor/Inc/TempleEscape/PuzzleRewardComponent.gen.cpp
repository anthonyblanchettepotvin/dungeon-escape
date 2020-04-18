// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/Public/Puzzle/Components/PuzzleRewardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleRewardComponent() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleRewardComponent_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleRewardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleRewardComponent_LockReward();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleComponent_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle();
// End Cross Module References
	static FName NAME_UPuzzleRewardComponent_LockReward = FName(TEXT("LockReward"));
	void UPuzzleRewardComponent::LockReward(UPuzzleComponent* Source)
	{
		PuzzleRewardComponent_eventLockReward_Parms Parms;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_UPuzzleRewardComponent_LockReward),&Parms);
	}
	static FName NAME_UPuzzleRewardComponent_UnlockReward = FName(TEXT("UnlockReward"));
	void UPuzzleRewardComponent::UnlockReward(UPuzzleComponent* Source)
	{
		PuzzleRewardComponent_eventUnlockReward_Parms Parms;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_UPuzzleRewardComponent_UnlockReward),&Parms);
	}
	void UPuzzleRewardComponent::StaticRegisterNativesUPuzzleRewardComponent()
	{
		UClass* Class = UPuzzleRewardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterPuzzle", &UPuzzleRewardComponent::execRegisterPuzzle },
			{ "UnregisterPuzzle", &UPuzzleRewardComponent::execUnregisterPuzzle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleRewardComponent_eventLockReward_Parms, Source), Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Called by a Puzzle component when all the conditions are unmet.\n\x09 * @param Source The Puzzle component at the origin of the call\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleRewardComponent.h" },
		{ "ToolTip", "Called by a Puzzle component when all the conditions are unmet.\n@param Source The Puzzle component at the origin of the call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleRewardComponent, nullptr, "LockReward", nullptr, nullptr, sizeof(PuzzleRewardComponent_eventLockReward_Parms), Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleRewardComponent_LockReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleRewardComponent_LockReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics
	{
		struct PuzzleRewardComponent_eventRegisterPuzzle_Parms
		{
			UPuzzleComponent* Puzzle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Puzzle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Puzzle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleRewardComponent_eventRegisterPuzzle_Parms, Puzzle), Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Register a puzzle to this puzzle reward.\n\x09 * @param Puzzle The puzzle to register\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleRewardComponent.h" },
		{ "ToolTip", "Register a puzzle to this puzzle reward.\n@param Puzzle The puzzle to register" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleRewardComponent, nullptr, "RegisterPuzzle", nullptr, nullptr, sizeof(PuzzleRewardComponent_eventRegisterPuzzle_Parms), Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleRewardComponent_eventUnlockReward_Parms, Source), Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Called by a Puzzle component when all the conditions are unmet.\n\x09 * @param Source The Puzzle component at the origin of the call\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleRewardComponent.h" },
		{ "ToolTip", "Called by a Puzzle component when all the conditions are unmet.\n@param Source The Puzzle component at the origin of the call" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleRewardComponent, nullptr, "UnlockReward", nullptr, nullptr, sizeof(PuzzleRewardComponent_eventUnlockReward_Parms), Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics
	{
		struct PuzzleRewardComponent_eventUnregisterPuzzle_Parms
		{
			UPuzzleComponent* Puzzle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Puzzle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Puzzle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleRewardComponent_eventUnregisterPuzzle_Parms, Puzzle), Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unregister a puzzle from this puzzle reward.\n\x09 * @param Puzzle The puzzle to unregister\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleRewardComponent.h" },
		{ "ToolTip", "Unregister a puzzle from this puzzle reward.\n@param Puzzle The puzzle to unregister" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleRewardComponent, nullptr, "UnregisterPuzzle", nullptr, nullptr, sizeof(PuzzleRewardComponent_eventUnregisterPuzzle_Parms), Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleRewardComponent_NoRegister()
	{
		return UPuzzleRewardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleRewardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredPuzzles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredPuzzles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredPuzzles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleRewardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleRewardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleRewardComponent_LockReward, "LockReward" }, // 2656277944
		{ &Z_Construct_UFunction_UPuzzleRewardComponent_RegisterPuzzle, "RegisterPuzzle" }, // 3754164890
		{ &Z_Construct_UFunction_UPuzzleRewardComponent_UnlockReward, "UnlockReward" }, // 1934647676
		{ &Z_Construct_UFunction_UPuzzleRewardComponent_UnregisterPuzzle, "UnregisterPuzzle" }, // 4034243004
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleRewardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Puzzle/Components/PuzzleRewardComponent.h" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleRewardComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_RegisteredPuzzles_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Puzzles registered to this puzzle condition. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleRewardComponent.h" },
		{ "ToolTip", "Puzzles registered to this puzzle condition." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_RegisteredPuzzles = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00200c800002001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleRewardComponent, RegisteredPuzzles), METADATA_PARAMS(Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_RegisteredPuzzles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_RegisteredPuzzles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_RegisteredPuzzles_Inner = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not debug messages should appear in the output log. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleRewardComponent.h" },
		{ "ToolTip", "Whether or not debug messages should appear in the output log." },
	};
#endif
	void Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UPuzzleRewardComponent*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPuzzleRewardComponent), &Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_bDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzleRewardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_RegisteredPuzzles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_RegisteredPuzzles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleRewardComponent_Statics::NewProp_bDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleRewardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleRewardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleRewardComponent_Statics::ClassParams = {
		&UPuzzleRewardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPuzzleRewardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleRewardComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleRewardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleRewardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleRewardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleRewardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleRewardComponent, 3185811164);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UPuzzleRewardComponent>()
	{
		return UPuzzleRewardComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleRewardComponent(Z_Construct_UClass_UPuzzleRewardComponent, &UPuzzleRewardComponent::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UPuzzleRewardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleRewardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
