// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/BaseButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseButton() {}
// Cross Module References
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_ABaseButton_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_ABaseButton();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ABaseButton_OnButtonPressed();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ABaseButton_OnButtonUnpressed();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ABaseButton_Press();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ABaseButton_SetIsPressed();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_ABaseButton_Unpress();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	static FName NAME_ABaseButton_OnButtonPressed = FName(TEXT("OnButtonPressed"));
	void ABaseButton::OnButtonPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseButton_OnButtonPressed),NULL);
	}
	static FName NAME_ABaseButton_OnButtonUnpressed = FName(TEXT("OnButtonUnpressed"));
	void ABaseButton::OnButtonUnpressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseButton_OnButtonUnpressed),NULL);
	}
	void ABaseButton::StaticRegisterNativesABaseButton()
	{
		UClass* Class = ABaseButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonPressed", &ABaseButton::execOnButtonPressed },
			{ "OnButtonUnpressed", &ABaseButton::execOnButtonUnpressed },
			{ "Press", &ABaseButton::execPress },
			{ "SetIsPressed", &ABaseButton::execSetIsPressed },
			{ "Unpress", &ABaseButton::execUnpress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseButton_OnButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseButton_OnButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Event called when the button has been pressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Event called when the button has been pressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseButton_OnButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseButton, nullptr, "OnButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseButton_OnButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseButton_OnButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseButton_OnButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseButton_OnButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseButton_OnButtonUnpressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseButton_OnButtonUnpressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Event called when the button has been unpressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Event called when the button has been unpressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseButton_OnButtonUnpressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseButton, nullptr, "OnButtonUnpressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseButton_OnButtonUnpressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseButton_OnButtonUnpressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseButton_OnButtonUnpressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseButton_OnButtonUnpressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseButton_Press_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseButton_Press_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Press the button. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Press the button." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseButton_Press_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseButton, nullptr, "Press", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseButton_Press_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseButton_Press_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseButton_Press()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseButton_Press_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics
	{
		struct BaseButton_eventSetIsPressed_Parms
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
	void Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((BaseButton_eventSetIsPressed_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseButton_eventSetIsPressed_Parms), &Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "Comment", "// Getters/setters\n" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Getters/setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseButton, nullptr, "SetIsPressed", nullptr, nullptr, sizeof(BaseButton_eventSetIsPressed_Parms), Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseButton_SetIsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseButton_SetIsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseButton_Unpress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseButton_Unpress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Unpress the button. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Unpress the button." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseButton_Unpress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseButton, nullptr, "Unpress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseButton_Unpress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseButton_Unpress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseButton_Unpress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseButton_Unpress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseButton_NoRegister()
	{
		return ABaseButton::StaticClass();
	}
	struct Z_Construct_UClass_ABaseButton_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUnpressing_MetaData[];
#endif
		static void NewProp_bIsUnpressing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUnpressing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPressing_MetaData[];
#endif
		static void NewProp_bIsPressing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPressing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPressed_MetaData[];
#endif
		static void NewProp_bIsPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsToggle_MetaData[];
#endif
		static void NewProp_bIsToggle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsToggle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnpressDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnpressDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PressDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnpressedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnpressedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FrameMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseButton_OnButtonPressed, "OnButtonPressed" }, // 10311659
		{ &Z_Construct_UFunction_ABaseButton_OnButtonUnpressed, "OnButtonUnpressed" }, // 2099443359
		{ &Z_Construct_UFunction_ABaseButton_Press, "Press" }, // 3974976596
		{ &Z_Construct_UFunction_ABaseButton_SetIsPressed, "SetIsPressed" }, // 2380277603
		{ &Z_Construct_UFunction_ABaseButton_Unpress, "Unpress" }, // 552346074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * BaseButton is the base class for any button that can be pressed, unpressed or toggled.\n */" },
		{ "IncludePath", "BaseButton.h" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "BaseButton is the base class for any button that can be pressed, unpressed or toggled." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Whether or not debug messages should appear in the output log. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Whether or not debug messages should appear in the output log." },
	};
#endif
	void Z_Construct_UClass_ABaseButton_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((ABaseButton*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x00200c0000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseButton), &Z_Construct_UClass_ABaseButton_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsUnpressing_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Whether or not the button is going from pressed to unpressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Whether or not the button is going from pressed to unpressed." },
	};
#endif
	void Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsUnpressing_SetBit(void* Obj)
	{
		((ABaseButton*)Obj)->bIsUnpressing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsUnpressing = { "bIsUnpressing", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseButton), &Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsUnpressing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsUnpressing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsUnpressing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressing_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Whether or not the button is going from unpressed to pressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Whether or not the button is going from unpressed to pressed." },
	};
#endif
	void Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressing_SetBit(void* Obj)
	{
		((ABaseButton*)Obj)->bIsPressing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressing = { "bIsPressing", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseButton), &Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressed_MetaData[] = {
		{ "BlueprintSetter", "SetIsPressed" },
		{ "Category", "Button" },
		{ "Comment", "/** Whether or not the button is pressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Whether or not the button is pressed." },
	};
#endif
	void Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressed_SetBit(void* Obj)
	{
		((ABaseButton*)Obj)->bIsPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseButton), &Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsToggle_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Whether or not the button is a toggle. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Whether or not the button is a toggle." },
	};
#endif
	void Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsToggle_SetBit(void* Obj)
	{
		((ABaseButton*)Obj)->bIsToggle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsToggle = { "bIsToggle", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseButton), &Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsToggle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsToggle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Elapsed time since the button started pressing/unpressing. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Elapsed time since the button started pressing/unpressing." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressDuration_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Time it takes for the button to go from unpressed to pressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Time it takes for the button to go from unpressed to pressed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressDuration = { "UnpressDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, UnpressDuration), METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_PressDuration_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Time it takes for the button to go from pressed to unpressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Time it takes for the button to go from pressed to unpressed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_PressDuration = { "PressDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, PressDuration), METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_PressDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_PressDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressedLocation_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** The location at which the button is considered unpressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "The location at which the button is considered unpressed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressedLocation = { "UnpressedLocation", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, UnpressedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_PressedLocation_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** The location at which the button is considered pressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "The location at which the button is considered pressed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_PressedLocation = { "PressedLocation", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, PressedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_PressedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_PressedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_TargetOffset_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Target offset, relative to the current location, for the button to be pressed. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Target offset, relative to the current location, for the button to be pressed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_TargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_TargetOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_CurrentLocation_MetaData[] = {
		{ "Category", "Button" },
		{ "Comment", "/** Current location of the actor. */" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Current location of the actor." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_CurrentLocation = { "CurrentLocation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_CurrentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_CurrentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_FrameMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_FrameMesh = { "FrameMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, FrameMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_FrameMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_FrameMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_ButtonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Button" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_ButtonMesh = { "ButtonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, ButtonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_ButtonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_ButtonMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseButton_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Button" },
		{ "Comment", "// Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseButton.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseButton_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseButton, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsUnpressing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_bIsToggle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_PressDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_UnpressedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_PressedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_TargetOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_CurrentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_FrameMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_ButtonMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseButton_Statics::NewProp_Root,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseButton_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ABaseButton, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseButton_Statics::ClassParams = {
		&ABaseButton::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseButton_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseButton, 2249858767);
	template<> TEMPLEESCAPE_API UClass* StaticClass<ABaseButton>()
	{
		return ABaseButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseButton(Z_Construct_UClass_ABaseButton, &ABaseButton::StaticClass, TEXT("/Script/TempleEscape"), TEXT("ABaseButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
