// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMPLEESCAPE_PuzzleImplementation_generated_h
#error "PuzzleImplementation.generated.h already included, missing '#pragma once' in PuzzleImplementation.h"
#endif
#define TEMPLEESCAPE_PuzzleImplementation_generated_h

#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_SPARSE_DATA
#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLockAllRewards) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockAllRewards(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockAllRewards) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockAllRewards(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckRewardsImplementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckRewardsImplementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckConditionsImplementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckConditionsImplementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLockAllRewards) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockAllRewards(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockAllRewards) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockAllRewards(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckRewardsImplementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckRewardsImplementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckConditionsImplementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CheckConditionsImplementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleImplementation(); \
	friend struct Z_Construct_UClass_APuzzleImplementation_Statics; \
public: \
	DECLARE_CLASS(APuzzleImplementation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(APuzzleImplementation) \
	virtual UObject* _getUObject() const override { return const_cast<APuzzleImplementation*>(this); }


#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleImplementation(); \
	friend struct Z_Construct_UClass_APuzzleImplementation_Statics; \
public: \
	DECLARE_CLASS(APuzzleImplementation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(APuzzleImplementation) \
	virtual UObject* _getUObject() const override { return const_cast<APuzzleImplementation*>(this); }


#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleImplementation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleImplementation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleImplementation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleImplementation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleImplementation(APuzzleImplementation&&); \
	NO_API APuzzleImplementation(const APuzzleImplementation&); \
public:


#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleImplementation(APuzzleImplementation&&); \
	NO_API APuzzleImplementation(const APuzzleImplementation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleImplementation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleImplementation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleImplementation)


#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Conditions() { return STRUCT_OFFSET(APuzzleImplementation, Conditions); } \
	FORCEINLINE static uint32 __PPO__Rewards() { return STRUCT_OFFSET(APuzzleImplementation, Rewards); } \
	FORCEINLINE static uint32 __PPO__Trigger() { return STRUCT_OFFSET(APuzzleImplementation, Trigger); } \
	FORCEINLINE static uint32 __PPO__bUnlockRewardsPermanently() { return STRUCT_OFFSET(APuzzleImplementation, bUnlockRewardsPermanently); } \
	FORCEINLINE static uint32 __PPO__bConditionsMet() { return STRUCT_OFFSET(APuzzleImplementation, bConditionsMet); } \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(APuzzleImplementation, bDebug); } \
	FORCEINLINE static uint32 __PPO__bConditionsOK() { return STRUCT_OFFSET(APuzzleImplementation, bConditionsOK); } \
	FORCEINLINE static uint32 __PPO__bRewardsOK() { return STRUCT_OFFSET(APuzzleImplementation, bRewardsOK); }


#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_13_PROLOG
#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_INCLASS \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleImplementation_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class APuzzleImplementation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_PuzzleImplementation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
