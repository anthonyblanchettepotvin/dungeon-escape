// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PuzzleCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleCondition() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleCondition_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleCondition_Evaluate();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle();
// End Cross Module References
	bool IPuzzleCondition::Evaluate()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Evaluate instead.");
		PuzzleCondition_eventEvaluate_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzleCondition::NotifyPuzzleStateChanged()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NotifyPuzzleStateChanged instead.");
		PuzzleCondition_eventNotifyPuzzleStateChanged_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzleCondition::RegisterPuzzle(AActor* Puzzle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisterPuzzle instead.");
		PuzzleCondition_eventRegisterPuzzle_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzleCondition::UnregisterPuzzle(AActor* Puzzle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnregisterPuzzle instead.");
		PuzzleCondition_eventUnregisterPuzzle_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPuzzleCondition::StaticRegisterNativesUPuzzleCondition()
	{
		UClass* Class = UPuzzleCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Evaluate", &IPuzzleCondition::execEvaluate },
			{ "NotifyPuzzleStateChanged", &IPuzzleCondition::execNotifyPuzzleStateChanged },
			{ "RegisterPuzzle", &IPuzzleCondition::execRegisterPuzzle },
			{ "UnregisterPuzzle", &IPuzzleCondition::execUnregisterPuzzle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleCondition_eventEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleCondition_eventEvaluate_Parms), &Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Evaluate if the condition is met or not.\n\x09 * @return True if the condition is met, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleCondition.h" },
		{ "ToolTip", "Evaluate if the condition is met or not.\n@return True if the condition is met, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleCondition, nullptr, "Evaluate", nullptr, nullptr, sizeof(PuzzleCondition_eventEvaluate_Parms), Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleCondition_Evaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleCondition_Evaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleCondition_eventNotifyPuzzleStateChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleCondition_eventNotifyPuzzleStateChanged_Parms), &Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Notify every registered puzzle that the state of this puzzle condition has changed.\n\x09 * @return True if the action was successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleCondition.h" },
		{ "ToolTip", "Notify every registered puzzle that the state of this puzzle condition has changed.\n@return True if the action was successful, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleCondition, nullptr, "NotifyPuzzleStateChanged", nullptr, nullptr, sizeof(PuzzleCondition_eventNotifyPuzzleStateChanged_Parms), Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics
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
	void Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleCondition_eventRegisterPuzzle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleCondition_eventRegisterPuzzle_Parms), &Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleCondition_eventRegisterPuzzle_Parms, Puzzle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Register a puzzle to this puzzle condition.\n\x09 * @param Puzzle The puzzle to register (must implement IPuzzle)\n\x09 * @return True if the puzzle was registered, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleCondition.h" },
		{ "ToolTip", "Register a puzzle to this puzzle condition.\n@param Puzzle The puzzle to register (must implement IPuzzle)\n@return True if the puzzle was registered, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleCondition, nullptr, "RegisterPuzzle", nullptr, nullptr, sizeof(PuzzleCondition_eventRegisterPuzzle_Parms), Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics
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
	void Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleCondition_eventUnregisterPuzzle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleCondition_eventUnregisterPuzzle_Parms), &Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::NewProp_Puzzle = { "Puzzle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleCondition_eventUnregisterPuzzle_Parms, Puzzle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::NewProp_Puzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unregister a puzzle from this puzzle condition.\n\x09 * @param Puzzle The puzzle to unregister (must implement IPuzzle)\n\x09 * @return True if the puzzle was unregistered, false otherwise \n\x09 */" },
		{ "ModuleRelativePath", "PuzzleCondition.h" },
		{ "ToolTip", "Unregister a puzzle from this puzzle condition.\n@param Puzzle The puzzle to unregister (must implement IPuzzle)\n@return True if the puzzle was unregistered, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleCondition, nullptr, "UnregisterPuzzle", nullptr, nullptr, sizeof(PuzzleCondition_eventUnregisterPuzzle_Parms), Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleCondition_NoRegister()
	{
		return UPuzzleCondition::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleCondition_Evaluate, "Evaluate" }, // 1480859390
		{ &Z_Construct_UFunction_UPuzzleCondition_NotifyPuzzleStateChanged, "NotifyPuzzleStateChanged" }, // 2075676944
		{ &Z_Construct_UFunction_UPuzzleCondition_RegisterPuzzle, "RegisterPuzzle" }, // 938076147
		{ &Z_Construct_UFunction_UPuzzleCondition_UnregisterPuzzle, "UnregisterPuzzle" }, // 3988526737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PuzzleCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPuzzleCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleCondition_Statics::ClassParams = {
		&UPuzzleCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleCondition, 558153667);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UPuzzleCondition>()
	{
		return UPuzzleCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleCondition(Z_Construct_UClass_UPuzzleCondition, &UPuzzleCondition::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UPuzzleCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleCondition);
	static FName NAME_UPuzzleCondition_Evaluate = FName(TEXT("Evaluate"));
	bool IPuzzleCondition::Execute_Evaluate(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleCondition::StaticClass()));
		PuzzleCondition_eventEvaluate_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleCondition_Evaluate);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleCondition*)(O->GetNativeInterfaceAddress(UPuzzleCondition::StaticClass())))
		{
			Parms.ReturnValue = I->Evaluate_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzleCondition_NotifyPuzzleStateChanged = FName(TEXT("NotifyPuzzleStateChanged"));
	bool IPuzzleCondition::Execute_NotifyPuzzleStateChanged(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleCondition::StaticClass()));
		PuzzleCondition_eventNotifyPuzzleStateChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleCondition_NotifyPuzzleStateChanged);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleCondition*)(O->GetNativeInterfaceAddress(UPuzzleCondition::StaticClass())))
		{
			Parms.ReturnValue = I->NotifyPuzzleStateChanged_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzleCondition_RegisterPuzzle = FName(TEXT("RegisterPuzzle"));
	bool IPuzzleCondition::Execute_RegisterPuzzle(UObject* O, AActor* Puzzle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleCondition::StaticClass()));
		PuzzleCondition_eventRegisterPuzzle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleCondition_RegisterPuzzle);
		if (Func)
		{
			Parms.Puzzle=Puzzle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleCondition*)(O->GetNativeInterfaceAddress(UPuzzleCondition::StaticClass())))
		{
			Parms.ReturnValue = I->RegisterPuzzle_Implementation(Puzzle);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzleCondition_UnregisterPuzzle = FName(TEXT("UnregisterPuzzle"));
	bool IPuzzleCondition::Execute_UnregisterPuzzle(UObject* O, AActor* Puzzle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleCondition::StaticClass()));
		PuzzleCondition_eventUnregisterPuzzle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleCondition_UnregisterPuzzle);
		if (Func)
		{
			Parms.Puzzle=Puzzle;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleCondition*)(O->GetNativeInterfaceAddress(UPuzzleCondition::StaticClass())))
		{
			Parms.ReturnValue = I->UnregisterPuzzle_Implementation(Puzzle);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
