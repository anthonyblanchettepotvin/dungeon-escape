// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/GrabberComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabberComponent() {}
// Cross Module References
	TEMPLEESCAPE_API UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UGrabberComponent_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UGrabberComponent();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UInteractComponent();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UGrabberComponent_Grab();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UGrabberComponent_Release();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GrabberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TempleEscape, nullptr, "OnReleaseSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GrabberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TempleEscape, nullptr, "OnGrabSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UGrabberComponent_Grab = FName(TEXT("Grab"));
	void UGrabberComponent::Grab()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrabberComponent_Grab),NULL);
	}
	static FName NAME_UGrabberComponent_Release = FName(TEXT("Release"));
	void UGrabberComponent::Release()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGrabberComponent_Release),NULL);
	}
	void UGrabberComponent::StaticRegisterNativesUGrabberComponent()
	{
		UClass* Class = UGrabberComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Grab", &UGrabberComponent::execGrab },
			{ "Release", &UGrabberComponent::execRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrabberComponent_Grab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabberComponent_Grab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabber Component" },
		{ "Comment", "/** Grab the focused actor. */" },
		{ "ModuleRelativePath", "GrabberComponent.h" },
		{ "ToolTip", "Grab the focused actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabberComponent_Grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabberComponent, nullptr, "Grab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabberComponent_Grab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabberComponent_Grab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabberComponent_Grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabberComponent_Grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrabberComponent_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrabberComponent_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabber Component" },
		{ "Comment", "/** Release the grabbed actor. */" },
		{ "ModuleRelativePath", "GrabberComponent.h" },
		{ "ToolTip", "Release the grabbed actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrabberComponent_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrabberComponent, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrabberComponent_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrabberComponent_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrabberComponent_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrabberComponent_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrabberComponent_NoRegister()
	{
		return UGrabberComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrabberComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRelease_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRelease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGrab_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsHandleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsHandleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabberComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrabberComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrabberComponent_Grab, "Grab" }, // 2522716198
		{ &Z_Construct_UFunction_UGrabberComponent_Release, "Release" }, // 2554893345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabberComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GrabberComponent.h" },
		{ "ModuleRelativePath", "GrabberComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnRelease_MetaData[] = {
		{ "Category", "GrabberComponent" },
		{ "Comment", "/** Event that happens when an actor has been released. */" },
		{ "ModuleRelativePath", "GrabberComponent.h" },
		{ "ToolTip", "Event that happens when an actor has been released." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnRelease = { "OnRelease", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabberComponent, OnRelease), Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnRelease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnGrab_MetaData[] = {
		{ "Category", "GrabberComponent" },
		{ "Comment", "/** Event that happens when an actor has been grabbed. */" },
		{ "ModuleRelativePath", "GrabberComponent.h" },
		{ "ToolTip", "Event that happens when an actor has been grabbed." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnGrab = { "OnGrab", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabberComponent, OnGrab), Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnGrab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnGrab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabberComponent_Statics::NewProp_PhysicsHandleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrabberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabberComponent_Statics::NewProp_PhysicsHandleComponent = { "PhysicsHandleComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabberComponent, PhysicsHandleComponent), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabberComponent_Statics::NewProp_PhysicsHandleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberComponent_Statics::NewProp_PhysicsHandleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabberComponent_Statics::NewProp_GrabbedActor_MetaData[] = {
		{ "Category", "Grabber Component" },
		{ "ModuleRelativePath", "GrabberComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrabberComponent_Statics::NewProp_GrabbedActor = { "GrabbedActor", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGrabberComponent, GrabbedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGrabberComponent_Statics::NewProp_GrabbedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberComponent_Statics::NewProp_GrabbedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrabberComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnRelease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabberComponent_Statics::NewProp_OnGrab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabberComponent_Statics::NewProp_PhysicsHandleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrabberComponent_Statics::NewProp_GrabbedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabberComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabberComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabberComponent_Statics::ClassParams = {
		&UGrabberComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGrabberComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrabberComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrabberComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabberComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabberComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabberComponent, 650763271);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UGrabberComponent>()
	{
		return UGrabberComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabberComponent(Z_Construct_UClass_UGrabberComponent, &UGrabberComponent::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UGrabberComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabberComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
