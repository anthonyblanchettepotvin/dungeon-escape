// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PressurePlate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePressurePlate() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APressurePlate_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_APressurePlate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_GetTargetWeight();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_GetTargetWeightReached();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_GetTotalWeight();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_IsTargetWeightReached();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_OnOverlapEnd();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_SetTargetWeight();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_SetTargetWeightReached();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_APressurePlate_SetTotalWeight();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APressurePlate::StaticRegisterNativesAPressurePlate()
	{
		UClass* Class = APressurePlate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetWeight", &APressurePlate::execGetTargetWeight },
			{ "GetTargetWeightReached", &APressurePlate::execGetTargetWeightReached },
			{ "GetTotalWeight", &APressurePlate::execGetTotalWeight },
			{ "IsTargetWeightReached", &APressurePlate::execIsTargetWeightReached },
			{ "OnOverlapBegin", &APressurePlate::execOnOverlapBegin },
			{ "OnOverlapEnd", &APressurePlate::execOnOverlapEnd },
			{ "SetTargetWeight", &APressurePlate::execSetTargetWeight },
			{ "SetTargetWeightReached", &APressurePlate::execSetTargetWeightReached },
			{ "SetTotalWeight", &APressurePlate::execSetTotalWeight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics
	{
		struct PressurePlate_eventGetTargetWeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventGetTargetWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "GetTargetWeight", nullptr, nullptr, sizeof(PressurePlate_eventGetTargetWeight_Parms), Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_GetTargetWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_GetTargetWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics
	{
		struct PressurePlate_eventGetTargetWeightReached_Parms
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
	void Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PressurePlate_eventGetTargetWeightReached_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PressurePlate_eventGetTargetWeightReached_Parms), &Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "GetTargetWeightReached", nullptr, nullptr, sizeof(PressurePlate_eventGetTargetWeightReached_Parms), Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_GetTargetWeightReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_GetTargetWeightReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics
	{
		struct PressurePlate_eventGetTotalWeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventGetTotalWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "GetTotalWeight", nullptr, nullptr, sizeof(PressurePlate_eventGetTotalWeight_Parms), Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_GetTotalWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_GetTotalWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics
	{
		struct PressurePlate_eventIsTargetWeightReached_Parms
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
	void Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PressurePlate_eventIsTargetWeightReached_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PressurePlate_eventIsTargetWeightReached_Parms), &Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pressure Plate" },
		{ "Comment", "/** Check whether or not the target weight has been reached.\n\x09 * @return True if the target weight has been reached, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PressurePlate.h" },
		{ "ToolTip", "Check whether or not the target weight has been reached.\n@return True if the target weight has been reached, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "IsTargetWeightReached", nullptr, nullptr, sizeof(PressurePlate_eventIsTargetWeightReached_Parms), Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_IsTargetWeightReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_IsTargetWeightReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics
	{
		struct PressurePlate_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PressurePlate_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PressurePlate_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "PressurePlate.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(PressurePlate_eventOnOverlapBegin_Parms), Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics
	{
		struct PressurePlate_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnOverlapEnd_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::NewProp_OverlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(PressurePlate_eventOnOverlapEnd_Parms), Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics
	{
		struct PressurePlate_eventSetTargetWeight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventSetTargetWeight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "SetTargetWeight", nullptr, nullptr, sizeof(PressurePlate_eventSetTargetWeight_Parms), Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_SetTargetWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_SetTargetWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics
	{
		struct PressurePlate_eventSetTargetWeightReached_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((PressurePlate_eventSetTargetWeightReached_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PressurePlate_eventSetTargetWeightReached_Parms), &Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// TODO: GetIsPressed\n" },
		{ "ModuleRelativePath", "PressurePlate.h" },
		{ "ToolTip", "TODO: GetIsPressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "SetTargetWeightReached", nullptr, nullptr, sizeof(PressurePlate_eventSetTargetWeightReached_Parms), Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_SetTargetWeightReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_SetTargetWeightReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics
	{
		struct PressurePlate_eventSetTotalWeight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventSetTotalWeight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "SetTotalWeight", nullptr, nullptr, sizeof(PressurePlate_eventSetTotalWeight_Parms), Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_SetTotalWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_SetTotalWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APressurePlate_NoRegister()
	{
		return APressurePlate::StaticClass();
	}
	struct Z_Construct_UClass_APressurePlate_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTargetWeightReached_MetaData[];
#endif
		static void NewProp_bTargetWeightReached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetWeightReached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APressurePlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APressurePlate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APressurePlate_GetTargetWeight, "GetTargetWeight" }, // 1717303386
		{ &Z_Construct_UFunction_APressurePlate_GetTargetWeightReached, "GetTargetWeightReached" }, // 1387370878
		{ &Z_Construct_UFunction_APressurePlate_GetTotalWeight, "GetTotalWeight" }, // 2699999603
		{ &Z_Construct_UFunction_APressurePlate_IsTargetWeightReached, "IsTargetWeightReached" }, // 316839760
		{ &Z_Construct_UFunction_APressurePlate_OnOverlapBegin, "OnOverlapBegin" }, // 622260038
		{ &Z_Construct_UFunction_APressurePlate_OnOverlapEnd, "OnOverlapEnd" }, // 642639411
		{ &Z_Construct_UFunction_APressurePlate_SetTargetWeight, "SetTargetWeight" }, // 2851054407
		{ &Z_Construct_UFunction_APressurePlate_SetTargetWeightReached, "SetTargetWeightReached" }, // 1966076541
		{ &Z_Construct_UFunction_APressurePlate_SetTotalWeight, "SetTotalWeight" }, // 1031212112
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PressurePlate.h" },
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Pressure Plate" },
		{ "Comment", "/** Whether or not debug messages should appear in the output log. */" },
		{ "ModuleRelativePath", "PressurePlate.h" },
		{ "ToolTip", "Whether or not debug messages should appear in the output log." },
	};
#endif
	void Z_Construct_UClass_APressurePlate_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((APressurePlate*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APressurePlate), &Z_Construct_UClass_APressurePlate_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalWeight_MetaData[] = {
		{ "BlueprintGetter", "GetTotalWeight" },
		{ "BlueprintSetter", "SetTotalWeight" },
		{ "Category", "Pressure Plate" },
		{ "Comment", "/** The total weight currently on the pressure plate. */" },
		{ "ModuleRelativePath", "PressurePlate.h" },
		{ "ToolTip", "The total weight currently on the pressure plate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalWeight = { "TotalWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, TotalWeight), METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_TargetWeight_MetaData[] = {
		{ "BlueprintGetter", "GetTargetWeight" },
		{ "BlueprintSetter", "SetTargetWeight" },
		{ "Category", "Pressure Plate" },
		{ "Comment", "/** The target weight for the pressure plate to be considered pressed. */" },
		{ "ModuleRelativePath", "PressurePlate.h" },
		{ "ToolTip", "The target weight for the pressure plate to be considered pressed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_TargetWeight = { "TargetWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, TargetWeight), METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_TargetWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_TargetWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_bTargetWeightReached_MetaData[] = {
		{ "BlueprintGetter", "GetTargetWeightReached" },
		{ "BlueprintSetter", "SetTargetWeightReached" },
		{ "Category", "Pressure Plate" },
		{ "Comment", "/** Whether or not the target weight has been reached. */" },
		{ "ModuleRelativePath", "PressurePlate.h" },
		{ "ToolTip", "Whether or not the target weight has been reached." },
	};
#endif
	void Z_Construct_UClass_APressurePlate_Statics::NewProp_bTargetWeightReached_SetBit(void* Obj)
	{
		((APressurePlate*)Obj)->bTargetWeightReached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_bTargetWeightReached = { "bTargetWeightReached", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APressurePlate), &Z_Construct_UClass_APressurePlate_Statics::NewProp_bTargetWeightReached_SetBit, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_bTargetWeightReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_bTargetWeightReached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_Trigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pressure Plate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, Trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pressure Plate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pressure Plate" },
		{ "Comment", "// Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PressurePlate.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APressurePlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_TargetWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_bTargetWeightReached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APressurePlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APressurePlate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APressurePlate_Statics::ClassParams = {
		&APressurePlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APressurePlate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APressurePlate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APressurePlate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APressurePlate, 311832611);
	template<> TEMPLEESCAPE_API UClass* StaticClass<APressurePlate>()
	{
		return APressurePlate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APressurePlate(Z_Construct_UClass_APressurePlate, &APressurePlate::StaticClass, TEXT("/Script/TempleEscape"), TEXT("APressurePlate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APressurePlate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
