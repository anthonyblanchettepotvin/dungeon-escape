// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/Public/Puzzle/Components/PuzzleConditionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleConditionComponent() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleConditionComponent_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleConditionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleComponent_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle();
// End Cross Module References
	void UPuzzleConditionComponent::StaticRegisterNativesUPuzzleConditionComponent()
	{
		UClass* Class = UPuzzleConditionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsMet", &UPuzzleConditionComponent::execGetIsMet },
			{ "NotifyStateChanged", &UPuzzleConditionComponent::execNotifyStateChanged },
			{ "RegisterPuzzle", &UPuzzleConditionComponent::execRegisterPuzzle },
			{ "UnregisterPuzzle", &UPuzzleConditionComponent::execUnregisterPuzzle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics
	{
		struct PuzzleConditionComponent_eventGetIsMet_Parms
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
	void Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleConditionComponent_eventGetIsMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleConditionComponent_eventGetIsMet_Parms), &Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Get bIsMet. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleConditionComponent.h" },
		{ "ToolTip", "Get bIsMet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleConditionComponent, nullptr, "GetIsMet", nullptr, nullptr, sizeof(PuzzleConditionComponent_eventGetIsMet_Parms), Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics
	{
		struct PuzzleConditionComponent_eventNotifyStateChanged_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::NewProp_State_SetBit(void* Obj)
	{
		((PuzzleConditionComponent_eventNotifyStateChanged_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleConditionComponent_eventNotifyStateChanged_Parms), &Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Notify every registered puzzle that the state of this puzzle condition has changed.\n\x09 * @param State The new state of the puzzle condition\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleConditionComponent.h" },
		{ "ToolTip", "Notify every registered puzzle that the state of this puzzle condition has changed.\n@param State The new state of the puzzle condition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleConditionComponent, nullptr, "NotifyStateChanged", nullptr, nullptr, sizeof(PuzzleConditionComponent_eventNotifyStateChanged_Parms), Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics
	{
		struct PuzzleConditionComponent_eventRegisterPuzzle_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleConditionComponent_eventRegisterPuzzle_Parms, Puzzle), Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Register a puzzle to this puzzle condition.\n\x09 * @param Puzzle The puzzle to register\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleConditionComponent.h" },
		{ "ToolTip", "Register a puzzle to this puzzle condition.\n@param Puzzle The puzzle to register" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleConditionComponent, nullptr, "RegisterPuzzle", nullptr, nullptr, sizeof(PuzzleConditionComponent_eventRegisterPuzzle_Parms), Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics
	{
		struct PuzzleConditionComponent_eventUnregisterPuzzle_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleConditionComponent_eventUnregisterPuzzle_Parms, Puzzle), Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unregister a puzzle from this puzzle condition.\n\x09 * @param Puzzle The puzzle to unregister\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleConditionComponent.h" },
		{ "ToolTip", "Unregister a puzzle from this puzzle condition.\n@param Puzzle The puzzle to unregister" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleConditionComponent, nullptr, "UnregisterPuzzle", nullptr, nullptr, sizeof(PuzzleConditionComponent_eventUnregisterPuzzle_Parms), Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleConditionComponent_NoRegister()
	{
		return UPuzzleConditionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleConditionComponent_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMet_MetaData[];
#endif
		static void NewProp_bIsMet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleConditionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleConditionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleConditionComponent_GetIsMet, "GetIsMet" }, // 2847542783
		{ &Z_Construct_UFunction_UPuzzleConditionComponent_NotifyStateChanged, "NotifyStateChanged" }, // 2945623217
		{ &Z_Construct_UFunction_UPuzzleConditionComponent_RegisterPuzzle, "RegisterPuzzle" }, // 3838181930
		{ &Z_Construct_UFunction_UPuzzleConditionComponent_UnregisterPuzzle, "UnregisterPuzzle" }, // 3570049160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleConditionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Puzzle/Components/PuzzleConditionComponent.h" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleConditionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_RegisteredPuzzles_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Puzzles registered to this puzzle condition. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleConditionComponent.h" },
		{ "ToolTip", "Puzzles registered to this puzzle condition." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_RegisteredPuzzles = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00200c800002001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleConditionComponent, RegisteredPuzzles), METADATA_PARAMS(Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_RegisteredPuzzles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_RegisteredPuzzles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_RegisteredPuzzles_Inner = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not debug messages should appear in the output log. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleConditionComponent.h" },
		{ "ToolTip", "Whether or not debug messages should appear in the output log." },
	};
#endif
	void Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UPuzzleConditionComponent*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPuzzleConditionComponent), &Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bIsMet_MetaData[] = {
		{ "BlueprintGetter", "GetIsMet" },
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not the condition is met. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleConditionComponent.h" },
		{ "ToolTip", "Whether or not the condition is met." },
	};
#endif
	void Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bIsMet_SetBit(void* Obj)
	{
		((UPuzzleConditionComponent*)Obj)->bIsMet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bIsMet = { "bIsMet", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPuzzleConditionComponent), &Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bIsMet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bIsMet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bIsMet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzleConditionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_RegisteredPuzzles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_RegisteredPuzzles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleConditionComponent_Statics::NewProp_bIsMet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleConditionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleConditionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleConditionComponent_Statics::ClassParams = {
		&UPuzzleConditionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPuzzleConditionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleConditionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleConditionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleConditionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleConditionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleConditionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleConditionComponent, 917311809);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UPuzzleConditionComponent>()
	{
		return UPuzzleConditionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleConditionComponent(Z_Construct_UClass_UPuzzleConditionComponent, &UPuzzleConditionComponent::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UPuzzleConditionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleConditionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
