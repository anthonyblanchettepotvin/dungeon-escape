// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/PuzzleReward.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleReward() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleReward_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UPuzzleReward();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleReward_LockReward();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleReward_OnRewardLocked();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UPuzzleReward_UnlockReward();
// End Cross Module References
	bool IPuzzleReward::IsRewardUnlocked()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsRewardUnlocked instead.");
		PuzzleReward_eventIsRewardUnlocked_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPuzzleReward::LockReward()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LockReward instead.");
		PuzzleReward_eventLockReward_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPuzzleReward::OnRewardLocked()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRewardLocked instead.");
	}
	void IPuzzleReward::OnRewardUnlocked()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRewardUnlocked instead.");
	}
	bool IPuzzleReward::UnlockReward()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnlockReward instead.");
		PuzzleReward_eventUnlockReward_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPuzzleReward::StaticRegisterNativesUPuzzleReward()
	{
		UClass* Class = UPuzzleReward::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsRewardUnlocked", &IPuzzleReward::execIsRewardUnlocked },
			{ "LockReward", &IPuzzleReward::execLockReward },
			{ "OnRewardLocked", &IPuzzleReward::execOnRewardLocked },
			{ "OnRewardUnlocked", &IPuzzleReward::execOnRewardUnlocked },
			{ "UnlockReward", &IPuzzleReward::execUnlockReward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleReward_eventIsRewardUnlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleReward_eventIsRewardUnlocked_Parms), &Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Is the reward unlocked or not.\n\x09 * @return True if the reward is unlocked, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "PuzzleReward.h" },
		{ "ToolTip", "Is the reward unlocked or not.\n@return True if the reward is unlocked, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleReward, nullptr, "IsRewardUnlocked", nullptr, nullptr, sizeof(PuzzleReward_eventIsRewardUnlocked_Parms), Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleReward_LockReward_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleReward_eventLockReward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleReward_eventLockReward_Parms), &Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Locks the reward. */" },
		{ "ModuleRelativePath", "PuzzleReward.h" },
		{ "ToolTip", "Locks the reward." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleReward, nullptr, "LockReward", nullptr, nullptr, sizeof(PuzzleReward_eventLockReward_Parms), Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleReward_LockReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleReward_LockReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleReward_OnRewardLocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleReward_OnRewardLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Event called when the puzzle reward is locked. */" },
		{ "ModuleRelativePath", "PuzzleReward.h" },
		{ "ToolTip", "Event called when the puzzle reward is locked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleReward_OnRewardLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleReward, nullptr, "OnRewardLocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleReward_OnRewardLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleReward_OnRewardLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleReward_OnRewardLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleReward_OnRewardLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Event called when the puzzle reward is unlocked. */" },
		{ "ModuleRelativePath", "PuzzleReward.h" },
		{ "ToolTip", "Event called when the puzzle reward is unlocked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleReward, nullptr, "OnRewardUnlocked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PuzzleReward_eventUnlockReward_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PuzzleReward_eventUnlockReward_Parms), &Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "Comment", "/** Unlocks the reward. */" },
		{ "ModuleRelativePath", "PuzzleReward.h" },
		{ "ToolTip", "Unlocks the reward." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleReward, nullptr, "UnlockReward", nullptr, nullptr, sizeof(PuzzleReward_eventUnlockReward_Parms), Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleReward_UnlockReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleReward_UnlockReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleReward_NoRegister()
	{
		return UPuzzleReward::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleReward_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleReward_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleReward_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleReward_IsRewardUnlocked, "IsRewardUnlocked" }, // 2238956813
		{ &Z_Construct_UFunction_UPuzzleReward_LockReward, "LockReward" }, // 2755474498
		{ &Z_Construct_UFunction_UPuzzleReward_OnRewardLocked, "OnRewardLocked" }, // 4211813653
		{ &Z_Construct_UFunction_UPuzzleReward_OnRewardUnlocked, "OnRewardUnlocked" }, // 3111360887
		{ &Z_Construct_UFunction_UPuzzleReward_UnlockReward, "UnlockReward" }, // 2228443208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleReward_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PuzzleReward.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleReward_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPuzzleReward>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleReward_Statics::ClassParams = {
		&UPuzzleReward::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleReward_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleReward_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleReward()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleReward_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleReward, 2283091511);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UPuzzleReward>()
	{
		return UPuzzleReward::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleReward(Z_Construct_UClass_UPuzzleReward, &UPuzzleReward::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UPuzzleReward"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleReward);
	static FName NAME_UPuzzleReward_IsRewardUnlocked = FName(TEXT("IsRewardUnlocked"));
	bool IPuzzleReward::Execute_IsRewardUnlocked(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleReward::StaticClass()));
		PuzzleReward_eventIsRewardUnlocked_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleReward_IsRewardUnlocked);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleReward*)(O->GetNativeInterfaceAddress(UPuzzleReward::StaticClass())))
		{
			Parms.ReturnValue = I->IsRewardUnlocked_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzleReward_LockReward = FName(TEXT("LockReward"));
	bool IPuzzleReward::Execute_LockReward(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleReward::StaticClass()));
		PuzzleReward_eventLockReward_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleReward_LockReward);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleReward*)(O->GetNativeInterfaceAddress(UPuzzleReward::StaticClass())))
		{
			Parms.ReturnValue = I->LockReward_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPuzzleReward_OnRewardLocked = FName(TEXT("OnRewardLocked"));
	void IPuzzleReward::Execute_OnRewardLocked(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleReward::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPuzzleReward_OnRewardLocked);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPuzzleReward*)(O->GetNativeInterfaceAddress(UPuzzleReward::StaticClass())))
		{
			I->OnRewardLocked_Implementation();
		}
	}
	static FName NAME_UPuzzleReward_OnRewardUnlocked = FName(TEXT("OnRewardUnlocked"));
	void IPuzzleReward::Execute_OnRewardUnlocked(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleReward::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPuzzleReward_OnRewardUnlocked);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPuzzleReward*)(O->GetNativeInterfaceAddress(UPuzzleReward::StaticClass())))
		{
			I->OnRewardUnlocked_Implementation();
		}
	}
	static FName NAME_UPuzzleReward_UnlockReward = FName(TEXT("UnlockReward"));
	bool IPuzzleReward::Execute_UnlockReward(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleReward::StaticClass()));
		PuzzleReward_eventUnlockReward_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPuzzleReward_UnlockReward);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPuzzleReward*)(O->GetNativeInterfaceAddress(UPuzzleReward::StaticClass())))
		{
			Parms.ReturnValue = I->UnlockReward_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
