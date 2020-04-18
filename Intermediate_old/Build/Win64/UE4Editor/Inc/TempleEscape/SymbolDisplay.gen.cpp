// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/SymbolDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSymbolDisplay() {}
// Cross Module References
	TEMPLEESCAPE_API UEnum* Z_Construct_UEnum_TempleEscape_ESymbol();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_ASymbolDisplay_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_ASymbolDisplay();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ASymbolDisplay_OnTurnStart();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ASymbolDisplay_Turn();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ASymbolDisplay_TurningAnimation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	static UEnum* ESymbol_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TempleEscape_ESymbol, Z_Construct_UPackage__Script_TempleEscape(), TEXT("ESymbol"));
		}
		return Singleton;
	}
	template<> TEMPLEESCAPE_API UEnum* StaticEnum<ESymbol>()
	{
		return ESymbol_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESymbol(ESymbol_StaticEnum, TEXT("/Script/TempleEscape"), TEXT("ESymbol"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TempleEscape_ESymbol_Hash() { return 3093271102U; }
	UEnum* Z_Construct_UEnum_TempleEscape_ESymbol()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TempleEscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESymbol"), 0, Get_Z_Construct_UEnum_TempleEscape_ESymbol_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESymbol::S_Triangle", (int64)ESymbol::S_Triangle },
				{ "ESymbol::S_Square", (int64)ESymbol::S_Square },
				{ "ESymbol::S_Circle", (int64)ESymbol::S_Circle },
				{ "ESymbol::S_Count", (int64)ESymbol::S_Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "SymbolDisplay.h" },
				{ "S_Circle.DisplayName", "Circle" },
				{ "S_Circle.Name", "ESymbol::S_Circle" },
				{ "S_Count.Hidden", "" },
				{ "S_Count.Name", "ESymbol::S_Count" },
				{ "S_Square.DisplayName", "Square" },
				{ "S_Square.Name", "ESymbol::S_Square" },
				{ "S_Triangle.DisplayName", "Triangle" },
				{ "S_Triangle.Name", "ESymbol::S_Triangle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TempleEscape,
				nullptr,
				"ESymbol",
				"ESymbol",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_ASymbolDisplay_OnTurnEnd = FName(TEXT("OnTurnEnd"));
	void ASymbolDisplay::OnTurnEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASymbolDisplay_OnTurnEnd),NULL);
	}
	static FName NAME_ASymbolDisplay_OnTurnStart = FName(TEXT("OnTurnStart"));
	void ASymbolDisplay::OnTurnStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASymbolDisplay_OnTurnStart),NULL);
	}
	void ASymbolDisplay::StaticRegisterNativesASymbolDisplay()
	{
		UClass* Class = ASymbolDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentSymbol", &ASymbolDisplay::execGetCurrentSymbol },
			{ "GetCurrentSymbolByte", &ASymbolDisplay::execGetCurrentSymbolByte },
			{ "OnTurnEnd", &ASymbolDisplay::execOnTurnEnd },
			{ "OnTurnStart", &ASymbolDisplay::execOnTurnStart },
			{ "SetCurrentSymbol", &ASymbolDisplay::execSetCurrentSymbol },
			{ "SetNextTargetRotation", &ASymbolDisplay::execSetNextTargetRotation },
			{ "Turn", &ASymbolDisplay::execTurn },
			{ "TurningAnimation", &ASymbolDisplay::execTurningAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics
	{
		struct SymbolDisplay_eventGetCurrentSymbol_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SymbolDisplay_eventGetCurrentSymbol_Parms, ReturnValue), Z_Construct_UEnum_TempleEscape_ESymbol, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SymbolDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASymbolDisplay, nullptr, "GetCurrentSymbol", nullptr, nullptr, sizeof(SymbolDisplay_eventGetCurrentSymbol_Parms), Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics
	{
		struct SymbolDisplay_eventGetCurrentSymbolByte_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SymbolDisplay_eventGetCurrentSymbolByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SymbolDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASymbolDisplay, nullptr, "GetCurrentSymbolByte", nullptr, nullptr, sizeof(SymbolDisplay_eventGetCurrentSymbolByte_Parms), Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Event called when the symbol display has finished turning. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Event called when the symbol display has finished turning." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASymbolDisplay, nullptr, "OnTurnEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASymbolDisplay_OnTurnStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_OnTurnStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Event called when the symbol display has started turning. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Event called when the symbol display has started turning." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASymbolDisplay_OnTurnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASymbolDisplay, nullptr, "OnTurnStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_OnTurnStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_OnTurnStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASymbolDisplay_OnTurnStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASymbolDisplay_OnTurnStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics
	{
		struct SymbolDisplay_eventSetCurrentSymbol_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SymbolDisplay_eventSetCurrentSymbol_Parms, Value), Z_Construct_UEnum_TempleEscape_ESymbol, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::NewProp_Value_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Getters/setters\n" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Getters/setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASymbolDisplay, nullptr, "SetCurrentSymbol", nullptr, nullptr, sizeof(SymbolDisplay_eventSetCurrentSymbol_Parms), Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics
	{
		struct SymbolDisplay_eventSetNextTargetRotation_Parms
		{
			uint8 Offset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::NewProp_Offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SymbolDisplay_eventSetNextTargetRotation_Parms, Offset), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Set the next target rotation.\n\x09 * @param Offset The offset (in number of symbols) to add to the next target rotation\n\x09 * @note Also change the initial rotation with the actor's current rotation.\n\x09 */" },
		{ "CPP_Default_Offset", "1" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Set the next target rotation.\n@param Offset The offset (in number of symbols) to add to the next target rotation\n@note Also change the initial rotation with the actor's current rotation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASymbolDisplay, nullptr, "SetNextTargetRotation", nullptr, nullptr, sizeof(SymbolDisplay_eventSetNextTargetRotation_Parms), Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASymbolDisplay_Turn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_Turn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Turn the symbol display. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Turn the symbol display." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASymbolDisplay_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASymbolDisplay, nullptr, "Turn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASymbolDisplay_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASymbolDisplay_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics
	{
		struct SymbolDisplay_eventTurningAnimation_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SymbolDisplay_eventTurningAnimation_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::NewProp_DeltaTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Create the symbol display's turning animation using linear interpolation.\n\x09 * @param DeltaTime The time between the previous and the current frame\n\x09 */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Create the symbol display's turning animation using linear interpolation.\n@param DeltaTime The time between the previous and the current frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASymbolDisplay, nullptr, "TurningAnimation", nullptr, nullptr, sizeof(SymbolDisplay_eventTurningAnimation_Parms), Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASymbolDisplay_TurningAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASymbolDisplay_TurningAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASymbolDisplay_NoRegister()
	{
		return ASymbolDisplay::StaticClass();
	}
	struct Z_Construct_UClass_ASymbolDisplay_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTurning_MetaData[];
#endif
		static void NewProp_bIsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTurning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentSymbol;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentSymbol_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymbolDisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SymbolDisplayMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASymbolDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASymbolDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbol, "GetCurrentSymbol" }, // 1923334709
		{ &Z_Construct_UFunction_ASymbolDisplay_GetCurrentSymbolByte, "GetCurrentSymbolByte" }, // 2954415010
		{ &Z_Construct_UFunction_ASymbolDisplay_OnTurnEnd, "OnTurnEnd" }, // 378639712
		{ &Z_Construct_UFunction_ASymbolDisplay_OnTurnStart, "OnTurnStart" }, // 3492963906
		{ &Z_Construct_UFunction_ASymbolDisplay_SetCurrentSymbol, "SetCurrentSymbol" }, // 1661063371
		{ &Z_Construct_UFunction_ASymbolDisplay_SetNextTargetRotation, "SetNextTargetRotation" }, // 1199518232
		{ &Z_Construct_UFunction_ASymbolDisplay_Turn, "Turn" }, // 4113927385
		{ &Z_Construct_UFunction_ASymbolDisplay_TurningAnimation, "TurningAnimation" }, // 2641007682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SymbolDisplay is the base class for any symbol display that can be turned and displays a symbol.\n */" },
		{ "IncludePath", "SymbolDisplay.h" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "SymbolDisplay is the base class for any symbol display that can be turned and displays a symbol." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Whether or not debug messages should appear in the output log. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Whether or not debug messages should appear in the output log." },
	};
#endif
	void Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((ASymbolDisplay*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASymbolDisplay), &Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bIsTurning_MetaData[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Whether or not the symbol display is turning. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Whether or not the symbol display is turning." },
	};
#endif
	void Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bIsTurning_SetBit(void* Obj)
	{
		((ASymbolDisplay*)Obj)->bIsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bIsTurning = { "bIsTurning", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASymbolDisplay), &Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bIsTurning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bIsTurning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bIsTurning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Target rotation for the symbol display to change symbol. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Target rotation for the symbol display to change symbol." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASymbolDisplay, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_InitialRotation_MetaData[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Initial rotation when the symbol display started to change symbol. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Initial rotation when the symbol display started to change symbol." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASymbolDisplay, InitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_InitialRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_InitialRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Elapsed time since the symbol display started turning. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Elapsed time since the symbol display started turning." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASymbolDisplay, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TurnDuration_MetaData[] = {
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Time it takes for the symbol display to change symbol. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Time it takes for the symbol display to change symbol." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TurnDuration = { "TurnDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASymbolDisplay, TurnDuration), METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TurnDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TurnDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_CurrentSymbol_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentSymbol" },
		{ "BlueprintSetter", "SetCurrentSymbol" },
		{ "Category", "SymbolDisplay" },
		{ "Comment", "/** Current symbol the symbol display is on. */" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Current symbol the symbol display is on." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_CurrentSymbol = { "CurrentSymbol", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASymbolDisplay, CurrentSymbol), Z_Construct_UEnum_TempleEscape_ESymbol, METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_CurrentSymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_CurrentSymbol_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_CurrentSymbol_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SymbolDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASymbolDisplay, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_SymbolDisplayMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SymbolDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_SymbolDisplayMesh = { "SymbolDisplayMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASymbolDisplay, SymbolDisplayMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_SymbolDisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_SymbolDisplayMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SymbolDisplay" },
		{ "Comment", "// Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SymbolDisplay.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASymbolDisplay, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASymbolDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_bIsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_InitialRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_TurnDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_CurrentSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_CurrentSymbol_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_SymbolDisplayMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASymbolDisplay_Statics::NewProp_Root,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASymbolDisplay_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ASymbolDisplay, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASymbolDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASymbolDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASymbolDisplay_Statics::ClassParams = {
		&ASymbolDisplay::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASymbolDisplay_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASymbolDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASymbolDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASymbolDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASymbolDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASymbolDisplay, 1950026575);
	template<> TEMPLEESCAPE_API UClass* StaticClass<ASymbolDisplay>()
	{
		return ASymbolDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASymbolDisplay(Z_Construct_UClass_ASymbolDisplay, &ASymbolDisplay::StaticClass, TEXT("/Script/TempleEscape"), TEXT("ASymbolDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASymbolDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
