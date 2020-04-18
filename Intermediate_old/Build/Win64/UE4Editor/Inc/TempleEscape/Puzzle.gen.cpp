// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/Puzzle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzle() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzle_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzle_AreConditionsMet();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzle_ConditionStateChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzle_OnConditionsMet();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzle_OnConditionsUnmet();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzle_ReactToTrigger();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzle_SubscribeToTrigger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger();
// End Cross Module References
	bool IPuzzle::AreConditionsMet()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AreConditionsMet instead.");
		Puzzle_eventAreConditionsMet_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzle::ConditionStateChanged(AActor* Condition, bool State)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConditionStateChanged instead.");
		Puzzle_eventConditionStateChanged_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPuzzle::OnConditionsMet()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnConditionsMet instead.");
	}
	void IPuzzle::OnConditionsUnmet()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnConditionsUnmet instead.");
	}
	bool IPuzzle::ReactToTrigger()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReactToTrigger instead.");
		Puzzle_eventReactToTrigger_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzle::SubscribeToTrigger(UObject* Trigger)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SubscribeToTrigger instead.");
		Puzzle_eventSubscribeToTrigger_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzle::UnsubscribeFromTrigger(UObject* Trigger)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnsubscribeFromTrigger instead.");
		Puzzle_eventUnsubscribeFromTrigger_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPuzzle::StaticRegisterNativesUPuzzle()
	{
		UClass* Class = UPuzzle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreConditionsMet", &IPuzzle::execAreConditionsMet },
			{ "ConditionStateChanged", &IPuzzle::execConditionStateChanged },
			{ "OnConditionsMet", &IPuzzle::execOnConditionsMet },
			{ "OnConditionsUnmet", &IPuzzle::execOnConditionsUnmet },
			{ "ReactToTrigger", &IPuzzle::execReactToTrigger },
			{ "SubscribeToTrigger", &IPuzzle::execSubscribeToTrigger },
			{ "UnsubscribeFromTrigger", &IPuzzle::execUnsubscribeFromTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Puzzle_eventAreConditionsMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Puzzle_eventAreConditionsMet_Parms), &Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Check if all conditions are met.\n\x09 * @return True if all conditions evaluate to true, false otherwise\n\x09 * @note Conditions must implement IPuzzleCondition.\n\x09 */" },
		{ "ModuleRelativePath", "Puzzle.h" },
		{ "ToolTip", "Check if all conditions are met.\n@return True if all conditions evaluate to true, false otherwise\n@note Conditions must implement IPuzzleCondition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzle, nullptr, "AreConditionsMet", nullptr, nullptr, sizeof(Puzzle_eventAreConditionsMet_Parms), Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzle_AreConditionsMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzle_AreConditionsMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Condition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Puzzle_eventConditionStateChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Puzzle_eventConditionStateChanged_Parms), &Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_State_SetBit(void* Obj)
	{
		((Puzzle_eventConditionStateChanged_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Puzzle_eventConditionStateChanged_Parms), &Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Puzzle_eventConditionStateChanged_Parms, Condition), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::NewProp_Condition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "ModuleRelativePath", "Puzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzle, nullptr, "ConditionStateChanged", nullptr, nullptr, sizeof(Puzzle_eventConditionStateChanged_Parms), Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzle_ConditionStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzle_ConditionStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzle_OnConditionsMet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzle_OnConditionsMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Event called when all the conditions are met. */" },
		{ "ModuleRelativePath", "Puzzle.h" },
		{ "ToolTip", "Event called when all the conditions are met." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzle_OnConditionsMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzle, nullptr, "OnConditionsMet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzle_OnConditionsMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_OnConditionsMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzle_OnConditionsMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzle_OnConditionsMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzle_OnConditionsUnmet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzle_OnConditionsUnmet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Event called when all the conditions are unmet. */" },
		{ "ModuleRelativePath", "Puzzle.h" },
		{ "ToolTip", "Event called when all the conditions are unmet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzle_OnConditionsUnmet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzle, nullptr, "OnConditionsUnmet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzle_OnConditionsUnmet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_OnConditionsUnmet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzle_OnConditionsUnmet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzle_OnConditionsUnmet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Puzzle_eventReactToTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Puzzle_eventReactToTrigger_Parms), &Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Called by the trigger when it is triggered.\n\x09 * @return True if the action was successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Puzzle.h" },
		{ "ToolTip", "Called by the trigger when it is triggered.\n@return True if the action was successful, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzle, nullptr, "ReactToTrigger", nullptr, nullptr, sizeof(Puzzle_eventReactToTrigger_Parms), Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzle_ReactToTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzle_ReactToTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Puzzle_eventSubscribeToTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Puzzle_eventSubscribeToTrigger_Parms), &Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Puzzle_eventSubscribeToTrigger_Parms, Trigger), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::NewProp_Trigger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Subscribe the puzzle to a trigger.\n\x09 * @param Trigger The trigger to subscribe the puzzle to\n\x09 * @return True if the puzzle has been subscribed to the trigger, false otherwise\n\x09 * @note Trigger must implement IPuzzleTrigger.\n\x09 */" },
		{ "ModuleRelativePath", "Puzzle.h" },
		{ "ToolTip", "Subscribe the puzzle to a trigger.\n@param Trigger The trigger to subscribe the puzzle to\n@return True if the puzzle has been subscribed to the trigger, false otherwise\n@note Trigger must implement IPuzzleTrigger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzle, nullptr, "SubscribeToTrigger", nullptr, nullptr, sizeof(Puzzle_eventSubscribeToTrigger_Parms), Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzle_SubscribeToTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzle_SubscribeToTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Puzzle_eventUnsubscribeFromTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Puzzle_eventUnsubscribeFromTrigger_Parms), &Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Puzzle_eventUnsubscribeFromTrigger_Parms, Trigger), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::NewProp_Trigger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unsubscribe the puzzle from a trigger.\n\x09 * @param Trigger The trigger to unsubscribe the puzzle from\n\x09 * @return True if the puzzle has been unsubscribed to the trigger, false otherwise\n\x09 * @note Trigger must implement IPuzzle trigger.\n\x09 */" },
		{ "ModuleRelativePath", "Puzzle.h" },
		{ "ToolTip", "Unsubscribe the puzzle from a trigger.\n@param Trigger The trigger to unsubscribe the puzzle from\n@return True if the puzzle has been unsubscribed to the trigger, false otherwise\n@note Trigger must implement IPuzzle trigger." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzle, nullptr, "UnsubscribeFromTrigger", nullptr, nullptr, sizeof(Puzzle_eventUnsubscribeFromTrigger_Parms), Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzle_NoRegister()
	{
		return UPuzzle::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzle_AreConditionsMet, "AreConditionsMet" }, // 3231161818
		{ &Z_Construct_UFunction_UPuzzle_ConditionStateChanged, "ConditionStateChanged" }, // 2906774456
		{ &Z_Construct_UFunction_UPuzzle_OnConditionsMet, "OnConditionsMet" }, // 1702352355
		{ &Z_Construct_UFunction_UPuzzle_OnConditionsUnmet, "OnConditionsUnmet" }, // 609752338
		{ &Z_Construct_UFunction_UPuzzle_ReactToTrigger, "ReactToTrigger" }, // 1572094746
		{ &Z_Construct_UFunction_UPuzzle_SubscribeToTrigger, "SubscribeToTrigger" }, // 1447645592
		{ &Z_Construct_UFunction_UPuzzle_UnsubscribeFromTrigger, "UnsubscribeFromTrigger" }, // 2020848890
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Puzzle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPuzzle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzle_Statics::ClassParams = {
		&UPuzzle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzle, 2758405955);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UPuzzle>()
	{
		return UPuzzle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzle(Z_Construct_UClass_UPuzzle, &UPuzzle::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UPuzzle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzle);
	static FName NAME_UPuzzle_AreConditionsMet = FName(TEXT("AreConditionsMet"));
	bool IPuzzle::Execute_AreConditionsMet(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzle::StaticClass()));
		Puzzle_eventAreConditionsMet_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzle_AreConditionsMet);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzle*)(O->GetNativeInterfaceAddress(UPuzzle::StaticClass())))
		{
			Parms.ReturnValue = I->AreConditionsMet_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzle_ConditionStateChanged = FName(TEXT("ConditionStateChanged"));
	bool IPuzzle::Execute_ConditionStateChanged(UObject* O, AActor* Condition, bool State)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzle::StaticClass()));
		Puzzle_eventConditionStateChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzle_ConditionStateChanged);
		if (Func)
		{
			Parms.Condition=Condition;
			Parms.State=State;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzle*)(O->GetNativeInterfaceAddress(UPuzzle::StaticClass())))
		{
			Parms.ReturnValue = I->ConditionStateChanged_Implementation(Condition,State);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzle_OnConditionsMet = FName(TEXT("OnConditionsMet"));
	void IPuzzle::Execute_OnConditionsMet(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzle::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPuzzle_OnConditionsMet);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPuzzle*)(O->GetNativeInterfaceAddress(UPuzzle::StaticClass())))
		{
			I->OnConditionsMet_Implementation();
		}
	}
	static FName NAME_UPuzzle_OnConditionsUnmet = FName(TEXT("OnConditionsUnmet"));
	void IPuzzle::Execute_OnConditionsUnmet(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzle::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPuzzle_OnConditionsUnmet);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPuzzle*)(O->GetNativeInterfaceAddress(UPuzzle::StaticClass())))
		{
			I->OnConditionsUnmet_Implementation();
		}
	}
	static FName NAME_UPuzzle_ReactToTrigger = FName(TEXT("ReactToTrigger"));
	bool IPuzzle::Execute_ReactToTrigger(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzle::StaticClass()));
		Puzzle_eventReactToTrigger_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzle_ReactToTrigger);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzle*)(O->GetNativeInterfaceAddress(UPuzzle::StaticClass())))
		{
			Parms.ReturnValue = I->ReactToTrigger_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzle_SubscribeToTrigger = FName(TEXT("SubscribeToTrigger"));
	bool IPuzzle::Execute_SubscribeToTrigger(UObject* O, UObject* Trigger)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzle::StaticClass()));
		Puzzle_eventSubscribeToTrigger_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzle_SubscribeToTrigger);
		if (Func)
		{
			Parms.Trigger=Trigger;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzle*)(O->GetNativeInterfaceAddress(UPuzzle::StaticClass())))
		{
			Parms.ReturnValue = I->SubscribeToTrigger_Implementation(Trigger);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzle_UnsubscribeFromTrigger = FName(TEXT("UnsubscribeFromTrigger"));
	bool IPuzzle::Execute_UnsubscribeFromTrigger(UObject* O, UObject* Trigger)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzle::StaticClass()));
		Puzzle_eventUnsubscribeFromTrigger_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzle_UnsubscribeFromTrigger);
		if (Func)
		{
			Parms.Trigger=Trigger;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzle*)(O->GetNativeInterfaceAddress(UPuzzle::StaticClass())))
		{
			Parms.ReturnValue = I->UnsubscribeFromTrigger_Implementation(Trigger);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
