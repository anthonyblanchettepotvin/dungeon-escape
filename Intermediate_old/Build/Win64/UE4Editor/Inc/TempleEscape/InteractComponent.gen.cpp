// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TempleEscape/InteractComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractComponent() {}
// Cross Module References
	TEMPLEESCAPE_API UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TempleEscape();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UInteractComponent_NoRegister();
	TEMPLEESCAPE_API UClass* Z_Construct_UClass_UInteractComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UInteractComponent_GetFocusedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UInteractComponent_GetInteractLineStart();
	TEMPLEESCAPE_API UFunction* Z_Construct_UFunction_UInteractComponent_Interact();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TempleEscape, nullptr, "OnInteractSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UInteractComponent_Interact = FName(TEXT("Interact"));
	void UInteractComponent::Interact()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInteractComponent_Interact),NULL);
	}
	void UInteractComponent::StaticRegisterNativesUInteractComponent()
	{
		UClass* Class = UInteractComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFocusedActor", &UInteractComponent::execGetFocusedActor },
			{ "GetInteractLineEnd", &UInteractComponent::execGetInteractLineEnd },
			{ "GetInteractLineStart", &UInteractComponent::execGetInteractLineStart },
			{ "Interact", &UInteractComponent::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics
	{
		struct InteractComponent_eventGetFocusedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractComponent_eventGetFocusedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact Component" },
		{ "Comment", "/** Check if there's a interactable actor within reach.\n\x09 * Gets called each tick.\n\x09 * @return TRUE if any hit on an actor is found\n\x09 */" },
		{ "ModuleRelativePath", "InteractComponent.h" },
		{ "ToolTip", "Check if there's a interactable actor within reach.\nGets called each tick.\n@return TRUE if any hit on an actor is found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractComponent, nullptr, "GetFocusedActor", nullptr, nullptr, sizeof(InteractComponent_eventGetFocusedActor_Parms), Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractComponent_GetFocusedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractComponent_GetFocusedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics
	{
		struct InteractComponent_eventGetInteractLineEnd_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractComponent_eventGetInteractLineEnd_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact Component" },
		{ "Comment", "/** Calculate the farthest location, perpendicular to the player's view point, at which an interaction can occur.\n\x09 * Gets called each tick.\n\x09 * @return The interaction line's end location\n\x09 */" },
		{ "ModuleRelativePath", "InteractComponent.h" },
		{ "ToolTip", "Calculate the farthest location, perpendicular to the player's view point, at which an interaction can occur.\nGets called each tick.\n@return The interaction line's end location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractComponent, nullptr, "GetInteractLineEnd", nullptr, nullptr, sizeof(InteractComponent_eventGetInteractLineEnd_Parms), Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics
	{
		struct InteractComponent_eventGetInteractLineStart_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractComponent_eventGetInteractLineStart_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact Component" },
		{ "Comment", "/** Calculate the closest location, perpendicular to the player's view point, at which an interaction can occur.\n\x09 * Gets called each tick.\n\x09 * @return The interaction line's start location\n\x09 */" },
		{ "ModuleRelativePath", "InteractComponent.h" },
		{ "ToolTip", "Calculate the closest location, perpendicular to the player's view point, at which an interaction can occur.\nGets called each tick.\n@return The interaction line's start location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractComponent, nullptr, "GetInteractLineStart", nullptr, nullptr, sizeof(InteractComponent_eventGetInteractLineStart_Parms), Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractComponent_GetInteractLineStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractComponent_GetInteractLineStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractComponent_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractComponent_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact Component" },
		{ "Comment", "/** Interact with the focused actor. */" },
		{ "ModuleRelativePath", "InteractComponent.h" },
		{ "ToolTip", "Interact with the focused actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractComponent, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractComponent_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractComponent_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractComponent_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractComponent_NoRegister()
	{
		return UInteractComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInteract_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractLineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractLineEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractLineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractLineStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerViewPointRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerViewPointRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerViewPointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerViewPointLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinReach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TempleEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractComponent_GetFocusedActor, "GetFocusedActor" }, // 1544818740
		{ &Z_Construct_UFunction_UInteractComponent_GetInteractLineEnd, "GetInteractLineEnd" }, // 1355766635
		{ &Z_Construct_UFunction_UInteractComponent_GetInteractLineStart, "GetInteractLineStart" }, // 970150428
		{ &Z_Construct_UFunction_UInteractComponent_Interact, "Interact" }, // 984106518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InteractComponent.h" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "Comment", "/** Event that happens when an actor is interacted with. */" },
		{ "ModuleRelativePath", "InteractComponent.h" },
		{ "ToolTip", "Event that happens when an actor is interacted with." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract = { "OnInteract", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, OnInteract), Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineEnd_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineEnd = { "InteractLineEnd", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, InteractLineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineStart_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineStart = { "InteractLineStart", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, InteractLineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointRotation_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointRotation = { "PlayerViewPointRotation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, PlayerViewPointRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointLocation_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointLocation = { "PlayerViewPointLocation", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, PlayerViewPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_FocusedActor_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_FocusedActor = { "FocusedActor", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, FocusedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_FocusedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_FocusedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "InteractComponent" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_MaxReach_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_MaxReach = { "MaxReach", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, MaxReach), METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_MaxReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_MaxReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_MinReach_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_MinReach = { "MinReach", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, MinReach), METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_MinReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_MinReach_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_InputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_InteractLineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_PlayerViewPointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_FocusedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_Channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_MaxReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_MinReach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractComponent_Statics::ClassParams = {
		&UInteractComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractComponent, 2491837353);
	template<> TEMPLEESCAPE_API UClass* StaticClass<UInteractComponent>()
	{
		return UInteractComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractComponent(Z_Construct_UClass_UInteractComponent, &UInteractComponent::StaticClass, TEXT("/Script/TempleEscape"), TEXT("UInteractComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
