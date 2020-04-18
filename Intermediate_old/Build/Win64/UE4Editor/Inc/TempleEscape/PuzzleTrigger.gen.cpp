// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PuzzleTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleTrigger() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleTrigger_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleTrigger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleTrigger_Subscribe();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleTrigger_Trigger();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe();
// End Cross Module References
	bool IPuzzleTrigger::Subscribe(AActor* Puzzle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Subscribe instead.");
		PuzzleTrigger_eventSubscribe_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzleTrigger::Trigger()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Trigger instead.");
		PuzzleTrigger_eventTrigger_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzleTrigger::Unsubscribe(AActor* Puzzle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Unsubscribe instead.");
		PuzzleTrigger_eventUnsubscribe_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPuzzleTrigger::StaticRegisterNativesUPuzzleTrigger()
	{
		UClass* Class = UPuzzleTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Subscribe", &IPuzzleTrigger::execSubscribe },
			{ "Trigger", &IPuzzleTrigger::execTrigger },
			{ "Unsubscribe", &IPuzzleTrigger::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Puzzle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleTrigger_eventSubscribe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleTrigger_eventSubscribe_Parms), &Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleTrigger_eventSubscribe_Parms, Puzzle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Subscribe a puzzle to the trigger.\n\x09 * @param Puzzle Puzzle to subscribe to the trigger (must implement IPuzzle)\n\x09 * @return True if the action was successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleTrigger.h" },
		{ "ToolTip", "Subscribe a puzzle to the trigger.\n@param Puzzle Puzzle to subscribe to the trigger (must implement IPuzzle)\n@return True if the action was successful, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTrigger, nullptr, "Subscribe", nullptr, nullptr, sizeof(PuzzleTrigger_eventSubscribe_Parms), Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleTrigger_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleTrigger_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleTrigger_eventTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleTrigger_eventTrigger_Parms), &Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Called when the trigger is triggered.\n\x09 * @return True if the triggering was successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleTrigger.h" },
		{ "ToolTip", "Called when the trigger is triggered.\n@return True if the triggering was successful, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTrigger, nullptr, "Trigger", nullptr, nullptr, sizeof(PuzzleTrigger_eventTrigger_Parms), Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleTrigger_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleTrigger_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Puzzle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleTrigger_eventUnsubscribe_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleTrigger_eventUnsubscribe_Parms), &Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleTrigger_eventUnsubscribe_Parms, Puzzle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unsubscribe a puzzle from the trigger.\n\x09 * @param Puzzle Puzzle to unsubscribe from the trigger (must implement IPuzzle)\n\x09 * @return True if the action was successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleTrigger.h" },
		{ "ToolTip", "Unsubscribe a puzzle from the trigger.\n@param Puzzle Puzzle to unsubscribe from the trigger (must implement IPuzzle)\n@return True if the action was successful, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTrigger, nullptr, "Unsubscribe", nullptr, nullptr, sizeof(PuzzleTrigger_eventUnsubscribe_Parms), Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleTrigger_NoRegister()
	{
		return UPuzzleTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleTrigger_Subscribe, "Subscribe" }, // 1110529765
		{ &Z_Construct_UFunction_UPuzzleTrigger_Trigger, "Trigger" }, // 1248342395
		{ &Z_Construct_UFunction_UPuzzleTrigger_Unsubscribe, "Unsubscribe" }, // 2460235022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PuzzleTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPuzzleTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleTrigger_Statics::ClassParams = {
		&UPuzzleTrigger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleTrigger, 2857964643);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UPuzzleTrigger>()
	{
		return UPuzzleTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleTrigger(Z_Construct_UClass_UPuzzleTrigger, &UPuzzleTrigger::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UPuzzleTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleTrigger);
	static FName NAME_UPuzzleTrigger_Subscribe = FName(TEXT("Subscribe"));
	bool IPuzzleTrigger::Execute_Subscribe(UObject* O, AActor* Puzzle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()));
		PuzzleTrigger_eventSubscribe_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleTrigger_Subscribe);
		if (Func)
		{
			Parms.Puzzle=Puzzle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleTrigger*)(O->GetNativeInterfaceAddress(UPuzzleTrigger::StaticClass())))
		{
			Parms.ReturnValue = I->Subscribe_Implementation(Puzzle);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzleTrigger_Trigger = FName(TEXT("Trigger"));
	bool IPuzzleTrigger::Execute_Trigger(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()));
		PuzzleTrigger_eventTrigger_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleTrigger_Trigger);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleTrigger*)(O->GetNativeInterfaceAddress(UPuzzleTrigger::StaticClass())))
		{
			Parms.ReturnValue = I->Trigger_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzleTrigger_Unsubscribe = FName(TEXT("Unsubscribe"));
	bool IPuzzleTrigger::Execute_Unsubscribe(UObject* O, AActor* Puzzle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()));
		PuzzleTrigger_eventUnsubscribe_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleTrigger_Unsubscribe);
		if (Func)
		{
			Parms.Puzzle=Puzzle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleTrigger*)(O->GetNativeInterfaceAddress(UPuzzleTrigger::StaticClass())))
		{
			Parms.ReturnValue = I->Unsubscribe_Implementation(Puzzle);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
