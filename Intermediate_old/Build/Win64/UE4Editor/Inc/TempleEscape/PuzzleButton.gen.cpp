// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PuzzleButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleButton() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzleButton_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APuzzleButton();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_ABaseButton();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleCondition_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleTrigger_NoRegister();
// End Cross Module References
	void APuzzleButton::StaticRegisterNativesAPuzzleButton()
	{
	}
	UClass* Z_Construct_UClass_APuzzleButton_NoRegister()
	{
		return APuzzleButton::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubscribedPuzzles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubscribedPuzzles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubscribedPuzzles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredPuzzles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredPuzzles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredPuzzles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjacentButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdjacentButtons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdjacentButtons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseButton,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PuzzleButton is the base class for any button that is part of a puzzle.\n */" },
		{ "IncludePath", "PuzzleButton.h" },
		{ "ModuleRelativePath", "PuzzleButton.h" },
		{ "ToolTip", "PuzzleButton is the base class for any button that is part of a puzzle." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleButton_Statics::NewProp_SubscribedPuzzles_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Puzzles subscribed to this puzzle trigger. */" },
		{ "ModuleRelativePath", "PuzzleButton.h" },
		{ "ToolTip", "Puzzles subscribed to this puzzle trigger." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleButton_Statics::NewProp_SubscribedPuzzles = { "SubscribedPuzzles", nullptr, (EPropertyFlags)0x00200c0000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleButton, SubscribedPuzzles), METADATA_PARAMS(Z_Construct_UClass_APuzzleButton_Statics::NewProp_SubscribedPuzzles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleButton_Statics::NewProp_SubscribedPuzzles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleButton_Statics::NewProp_SubscribedPuzzles_Inner = { "SubscribedPuzzles", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleButton_Statics::NewProp_RegisteredPuzzles_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Puzzles registered to this puzzle condition. */" },
		{ "ModuleRelativePath", "PuzzleButton.h" },
		{ "ToolTip", "Puzzles registered to this puzzle condition." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleButton_Statics::NewProp_RegisteredPuzzles = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x00200c0000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleButton, RegisteredPuzzles), METADATA_PARAMS(Z_Construct_UClass_APuzzleButton_Statics::NewProp_RegisteredPuzzles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleButton_Statics::NewProp_RegisteredPuzzles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleButton_Statics::NewProp_RegisteredPuzzles_Inner = { "RegisteredPuzzles", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleButton_Statics::NewProp_AdjacentButtons_MetaData[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Adjacent buttons to this button. */" },
		{ "ModuleRelativePath", "PuzzleButton.h" },
		{ "ToolTip", "Adjacent buttons to this button." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleButton_Statics::NewProp_AdjacentButtons = { "AdjacentButtons", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleButton, AdjacentButtons), METADATA_PARAMS(Z_Construct_UClass_APuzzleButton_Statics::NewProp_AdjacentButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleButton_Statics::NewProp_AdjacentButtons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleButton_Statics::NewProp_AdjacentButtons_Inner = { "AdjacentButtons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APuzzleButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleButton_Statics::NewProp_SubscribedPuzzles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleButton_Statics::NewProp_SubscribedPuzzles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleButton_Statics::NewProp_RegisteredPuzzles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleButton_Statics::NewProp_RegisteredPuzzles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleButton_Statics::NewProp_AdjacentButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleButton_Statics::NewProp_AdjacentButtons_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APuzzleButton_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPuzzleCondition_NoRegister, (int32)VTABLE_OFFSET(APuzzleButton, IPuzzleCondition), false },
			{ Z_Construct_UClass_UPuzzleTrigger_NoRegister, (int32)VTABLE_OFFSET(APuzzleButton, IPuzzleTrigger), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzleButton_Statics::ClassParams = {
		&APuzzleButton::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuzzleButton_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleButton_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzleButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzleButton, 3870631956);
	template<> TEMPLEESCAPE_API UClass* StaticClass<APuzzleButton>()
	{
		return APuzzleButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzleButton(Z_Construct_UClass_APuzzleButton, &APuzzleButton::StaticClass, TEXT("/Script/TempleEscape"), TEXT("APuzzleButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
