// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PuzzleSymbolDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleSymbolDisplay() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzleSymbolDisplay_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzleSymbolDisplay();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_ASymbolDisplay();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol();
	TEMPLEESCAPE_API UEnum* Z_Construct_UEnum_TempleEscape_ESymbol();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleCondition_NoRegister();
// End Cross Module References
	void APuzzleSymbolDisplay::StaticRegisterNativesAPuzzleSymbolDisplay()
	{
		UClass* Class = APuzzleSymbolDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetSymbol", &APuzzleSymbolDisplay::execGetTargetSymbol },
			{ "IsSymbolOnTarget", &APuzzleSymbolDisplay::execIsSymbolOnTarget },
			{ "SetTargetSymbol", &APuzzleSymbolDisplay::execSetTargetSymbol },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics
	{
		struct PuzzleSymbolDisplay_eventGetTargetSymbol_Parms
		{
			ESymbol ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleSymbolDisplay_eventGetTargetSymbol_Parms, ReturnValue), Z_Construct_UEnum_TempleEscape_ESymbol, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzleSymbolDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleSymbolDisplay, nullptr, "GetTargetSymbol", nullptr, nullptr, sizeof(PuzzleSymbolDisplay_eventGetTargetSymbol_Parms), Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics
	{
		struct PuzzleSymbolDisplay_eventIsSymbolOnTarget_Parms
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
	void Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleSymbolDisplay_eventIsSymbolOnTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleSymbolDisplay_eventIsSymbolOnTarget_Parms), &Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Check whether or not the current symbol is equal to the target symbol.\n\x09 * @return True if the current symbol is equal to the target symbol, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleSymbolDisplay.h" },
		{ "ToolTip", "Check whether or not the current symbol is equal to the target symbol.\n@return True if the current symbol is equal to the target symbol, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleSymbolDisplay, nullptr, "IsSymbolOnTarget", nullptr, nullptr, sizeof(PuzzleSymbolDisplay_eventIsSymbolOnTarget_Parms), Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics
	{
		struct PuzzleSymbolDisplay_eventSetTargetSymbol_Parms
		{
			ESymbol Value;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleSymbolDisplay_eventSetTargetSymbol_Parms, Value), Z_Construct_UEnum_TempleEscape_ESymbol, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::NewProp_Value_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Getters/setters\n" },
		{ "ModuleRelativePath", "PuzzleSymbolDisplay.h" },
		{ "ToolTip", "Getters/setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APuzzleSymbolDisplay, nullptr, "SetTargetSymbol", nullptr, nullptr, sizeof(PuzzleSymbolDisplay_eventSetTargetSymbol_Parms), Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APuzzleSymbolDisplay_NoRegister()
	{
		return APuzzleSymbolDisplay::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleSymbolDisplay_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetSymbol;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetSymbol_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleSymbolDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASymbolDisplay,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APuzzleSymbolDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APuzzleSymbolDisplay_GetTargetSymbol, "GetTargetSymbol" }, // 3502142430
		{ &Z_Construct_UFunction_APuzzleSymbolDisplay_IsSymbolOnTarget, "IsSymbolOnTarget" }, // 2157171878
		{ &Z_Construct_UFunction_APuzzleSymbolDisplay_SetTargetSymbol, "SetTargetSymbol" }, // 3036113283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleSymbolDisplay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PuzzleSymbolDisplay is the base class for any symbol display that is part of a puzzle.\n */" },
		{ "IncludePath", "PuzzleSymbolDisplay.h" },
		{ "ModuleRelativePath", "PuzzleSymbolDisplay.h" },
		{ "ToolTip", "PuzzleSymbolDisplay is the base class for any symbol display that is part of a puzzle." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_RegisteredPuzzles_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Puzzles registered to this puzzle condition. */" },
		{ "ModuleRelativePath", "PuzzleSymbolDisplay.h" },
		{ "ToolTip", "Puzzles registered to this puzzle condition." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_RegisteredPuzzles = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00200c0000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleSymbolDisplay, RegisteredPuzzles), METADATA_PARAMS(Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_RegisteredPuzzles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_RegisteredPuzzles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_RegisteredPuzzles_Inner = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_TargetSymbol_MetaData[] = {
		{ "BlueprintGetter", "GetTargetSymbol" },
		{ "BlueprintSetter", "SetTargetSymbol" },
		{ "Category", "Puzzle" },
		{ "Comment", "/** Target symbol for the condition to be met. */" },
		{ "ModuleRelativePath", "PuzzleSymbolDisplay.h" },
		{ "ToolTip", "Target symbol for the condition to be met." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_TargetSymbol = { "TargetSymbol", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleSymbolDisplay, TargetSymbol), Z_Construct_UEnum_TempleEscape_ESymbol, METADATA_PARAMS(Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_TargetSymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_TargetSymbol_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_TargetSymbol_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleSymbolDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_RegisteredPuzzles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_RegisteredPuzzles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_TargetSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleSymbolDisplay_Statics::NewProp_TargetSymbol_Underlying,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APuzzleSymbolDisplay_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPuzzleCondition_NoRegister, (int32)VTABLE_OFFSET(APuzzleSymbolDisplay, IPuzzleCondition), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleSymbolDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleSymbolDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleSymbolDisplay_Statics::ClassParams = {
		&APuzzleSymbolDisplay::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APuzzleSymbolDisplay_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleSymbolDisplay_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleSymbolDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleSymbolDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleSymbolDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleSymbolDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleSymbolDisplay, 1780133188);
	template<> TEMPLEESCAPE_API UClass* StaticClass<APuzzleSymbolDisplay>()
	{
		return APuzzleSymbolDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleSymbolDisplay(Z_Construct_UClass_APuzzleSymbolDisplay, &APuzzleSymbolDisplay::StaticClass, TEXT("/Script/TempleEscape"), TEXT("APuzzleSymbolDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleSymbolDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
