// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PuzzlePressurePlate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzlePressurePlate() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzlePressurePlate_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzlePressurePlate();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APressurePlate();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleCondition_NoRegister();
// End Cross Module References
	void APuzzlePressurePlate::StaticRegisterNativesAPuzzlePressurePlate()
	{
	}
	UClass* Z_Construct_UClass_APuzzlePressurePlate_NoRegister()
	{
		return APuzzlePressurePlate::StaticClass();
	}
	struct Z_Construct_UClass_APuzzlePressurePlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredPuzzles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredPuzzles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredPuzzles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzlePressurePlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APressurePlate,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzlePressurePlate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PuzzlePressurePlate.h" },
		{ "ModuleRelativePath", "PuzzlePressurePlate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzlePressurePlate_Statics::NewProp_RegisteredPuzzles_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Puzzles registered to this puzzle condition. */" },
		{ "ModuleRelativePath", "PuzzlePressurePlate.h" },
		{ "ToolTip", "Puzzles registered to this puzzle condition." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzlePressurePlate_Statics::NewProp_RegisteredPuzzles = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00200c0000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzlePressurePlate, RegisteredPuzzles), METADATA_PARAMS(Z_Construct_UClass_APuzzlePressurePlate_Statics::NewProp_RegisteredPuzzles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzlePressurePlate_Statics::NewProp_RegisteredPuzzles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzlePressurePlate_Statics::NewProp_RegisteredPuzzles_Inner = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzlePressurePlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzlePressurePlate_Statics::NewProp_RegisteredPuzzles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzlePressurePlate_Statics::NewProp_RegisteredPuzzles_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APuzzlePressurePlate_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPuzzleCondition_NoRegister, (int32)VTABLE_OFFSET(APuzzlePressurePlate, IPuzzleCondition), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzlePressurePlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzlePressurePlate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzlePressurePlate_Statics::ClassParams = {
		&APuzzlePressurePlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuzzlePressurePlate_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzlePressurePlate_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzlePressurePlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzlePressurePlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzlePressurePlate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzlePressurePlate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzlePressurePlate, 1925749916);
	template<> TEMPLEESCAPE_API UClass* StaticClass<APuzzlePressurePlate>()
	{
		return APuzzlePressurePlate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzlePressurePlate(Z_Construct_UClass_APuzzlePressurePlate, &APuzzlePressurePlate::StaticClass, TEXT("/Script/TempleEscape"), TEXT("APuzzlePressurePlate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzlePressurePlate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
