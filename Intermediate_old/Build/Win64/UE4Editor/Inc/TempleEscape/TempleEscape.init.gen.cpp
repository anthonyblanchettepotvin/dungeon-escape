// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTempleEscape_init() {}
	TEMPLEESCAPE_API UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature();
	TEMPLEESCAPE_API UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature();
	TEMPLEESCAPE_API UFunction* Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TempleEscape()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TempleEscape_OnInteractSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TempleEscape_OnGrabSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TempleEscape_OnReleaseSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TempleEscape",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x17ABB481,
				0x3C0096AA,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
