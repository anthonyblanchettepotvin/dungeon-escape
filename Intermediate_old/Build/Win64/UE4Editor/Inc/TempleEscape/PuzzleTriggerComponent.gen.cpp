// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/Public/Puzzle/Components/PuzzleTriggerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleTriggerComponent() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleTriggerComponent_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleTriggerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleComponent_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle();
// End Cross Module References
	void UPuzzleTriggerComponent::StaticRegisterNativesUPuzzleTriggerComponent()
	{
		UClass* Class = UPuzzleTriggerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyTriggered", &UPuzzleTriggerComponent::execNotifyTriggered },
			{ "RegisterPuzzle", &UPuzzleTriggerComponent::execRegisterPuzzle },
			{ "UnregisterPuzzle", &UPuzzleTriggerComponent::execUnregisterPuzzle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Notify every registered puzzle that this puzzle trigger has been triggered. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleTriggerComponent.h" },
		{ "ToolTip", "Notify every registered puzzle that this puzzle trigger has been triggered." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTriggerComponent, nullptr, "NotifyTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics
	{
		struct PuzzleTriggerComponent_eventRegisterPuzzle_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleTriggerComponent_eventRegisterPuzzle_Parms, Puzzle), Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::NewProp_Puzzle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Register a puzzle to this puzzle condition.\n\x09 * @param Puzzle The puzzle to register\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleTriggerComponent.h" },
		{ "ToolTip", "Register a puzzle to this puzzle condition.\n@param Puzzle The puzzle to register" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTriggerComponent, nullptr, "RegisterPuzzle", nullptr, nullptr, sizeof(PuzzleTriggerComponent_eventRegisterPuzzle_Parms), Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics
	{
		struct PuzzleTriggerComponent_eventUnregisterPuzzle_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleTriggerComponent_eventUnregisterPuzzle_Parms, Puzzle), Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::NewProp_Puzzle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unregister a puzzle from this puzzle condition.\n\x09 * @param Puzzle The puzzle to unregister\n\x09 */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleTriggerComponent.h" },
		{ "ToolTip", "Unregister a puzzle from this puzzle condition.\n@param Puzzle The puzzle to unregister" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTriggerComponent, nullptr, "UnregisterPuzzle", nullptr, nullptr, sizeof(PuzzleTriggerComponent_eventUnregisterPuzzle_Parms), Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleTriggerComponent_NoRegister()
	{
		return UPuzzleTriggerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleTriggerComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UPuzzleTriggerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleTriggerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleTriggerComponent_NotifyTriggered, "NotifyTriggered" }, // 1014713574
		{ &Z_Construct_UFunction_UPuzzleTriggerComponent_RegisterPuzzle, "RegisterPuzzle" }, // 3577331885
		{ &Z_Construct_UFunction_UPuzzleTriggerComponent_UnregisterPuzzle, "UnregisterPuzzle" }, // 1668675415
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleTriggerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Puzzle/Components/PuzzleTriggerComponent.h" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleTriggerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_RegisteredPuzzles_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Puzzles registered to this puzzle condition. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleTriggerComponent.h" },
		{ "ToolTip", "Puzzles registered to this puzzle condition." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_RegisteredPuzzles = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00200c800002001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzleTriggerComponent, RegisteredPuzzles), METADATA_PARAMS(Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_RegisteredPuzzles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_RegisteredPuzzles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_RegisteredPuzzles_Inner = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPuzzleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Whether or not debug messages should appear in the output log. */" },
		{ "ModuleRelativePath", "Public/Puzzle/Components/PuzzleTriggerComponent.h" },
		{ "ToolTip", "Whether or not debug messages should appear in the output log." },
	};
#endif
	void Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UPuzzleTriggerComponent*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPuzzleTriggerComponent), &Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_bDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzleTriggerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_RegisteredPuzzles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_RegisteredPuzzles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzleTriggerComponent_Statics::NewProp_bDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleTriggerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleTriggerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleTriggerComponent_Statics::ClassParams = {
		&UPuzzleTriggerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPuzzleTriggerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTriggerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleTriggerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTriggerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleTriggerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleTriggerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleTriggerComponent, 3277134207);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UPuzzleTriggerComponent>()
	{
		return UPuzzleTriggerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleTriggerComponent(Z_Construct_UClass_UPuzzleTriggerComponent, &UPuzzleTriggerComponent::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UPuzzleTriggerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleTriggerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
