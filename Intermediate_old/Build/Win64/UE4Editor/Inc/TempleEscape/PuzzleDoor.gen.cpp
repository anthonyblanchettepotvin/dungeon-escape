// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PuzzleDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleDoor() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzleDoor_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzleDoor();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_ADoor();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleReward_NoRegister();
// End Cross Module References
	void APuzzleDoor::StaticRegisterNativesAPuzzleDoor()
	{
	}
	UClass* Z_Construct_UClass_APuzzleDoor_NoRegister()
	{
		return APuzzleDoor::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoor,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PuzzleDoor is the base class for any door that is part of a puzzle.\n */" },
		{ "IncludePath", "PuzzleDoor.h" },
		{ "ModuleRelativePath", "PuzzleDoor.h" },
		{ "ToolTip", "PuzzleDoor is the base class for any door that is part of a puzzle." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APuzzleDoor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPuzzleReward_NoRegister, (int32)VTABLE_OFFSET(APuzzleDoor, IPuzzleReward), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleDoor_Statics::ClassParams = {
		&APuzzleDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleDoor, 4021057856);
	template<> TEMPLEESCAPE_API UClass* StaticClass<APuzzleDoor>()
	{
		return APuzzleDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleDoor(Z_Construct_UClass_APuzzleDoor, &APuzzleDoor::StaticClass, TEXT("/Script/TempleEscape"), TEXT("APuzzleDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
