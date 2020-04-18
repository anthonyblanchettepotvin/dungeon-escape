// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPuzzleTriggerComponent;
class UPuzzleConditionComponent;
#ifdef TEMPLEESCAPE_PuzzleComponent_generated_h
#error "PuzzleComponent.generated.h already included, missing '#pragma once' in PuzzleComponent.h"
#endif
#define TEMPLEESCAPE_PuzzleComponent_generated_h

#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_SPARSE_DATA
#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_RPC_WRAPPERS \
	virtual void OnConditionsUnmet_Implementation(); \
	virtual void OnConditionsMet_Implementation(); \
 \
	DECLARE_FUNCTION(execOnConditionsUnmet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConditionsUnmet_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnConditionsMet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConditionsMet_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerTriggered) \
	{ \
		P_GET_OBJECT(UPuzzleTriggerComponent,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerTriggered(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConditionStateChanged) \
	{ \
		P_GET_OBJECT(UPuzzleConditionComponent,Z_Param_Source); \
		P_GET_UBOOL(Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConditionStateChanged(Z_Param_Source,Z_Param_State); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreConditionsMet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreConditionsMet(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execCheckTriggerActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckTriggerActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckRewardsActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckRewardsActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckConditionsActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckConditionsActors(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnConditionsUnmet_Implementation(); \
	virtual void OnConditionsMet_Implementation(); \
 \
	DECLARE_FUNCTION(execOnConditionsUnmet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConditionsUnmet_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnConditionsMet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConditionsMet_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerTriggered) \
	{ \
		P_GET_OBJECT(UPuzzleTriggerComponent,Z_Param_Source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerTriggered(Z_Param_Source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConditionStateChanged) \
	{ \
		P_GET_OBJECT(UPuzzleConditionComponent,Z_Param_Source); \
		P_GET_UBOOL(Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConditionStateChanged(Z_Param_Source,Z_Param_State); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreConditionsMet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreConditionsMet(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execCheckTriggerActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckTriggerActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckRewardsActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckRewardsActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCheckConditionsActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CheckConditionsActors(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_EVENT_PARMS
#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzleComponent(); \
	friend struct Z_Construct_UClass_UPuzzleComponent_Statics; \
public: \
	DECLARE_CLASS(UPuzzleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleComponent)


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzleComponent(); \
	friend struct Z_Construct_UClass_UPuzzleComponent_Statics; \
public: \
	DECLARE_CLASS(UPuzzleComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleComponent)


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleComponent(UPuzzleComponent&&); \
	NO_API UPuzzleComponent(const UPuzzleComponent&); \
public:


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleComponent(UPuzzleComponent&&); \
	NO_API UPuzzleComponent(const UPuzzleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPuzzleComponent)


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Conditions() { return STRUCT_OFFSET(UPuzzleComponent, Conditions); } \
	FORCEINLINE static uint32 __PPO__ConditionsComponents() { return STRUCT_OFFSET(UPuzzleComponent, ConditionsComponents); } \
	FORCEINLINE static uint32 __PPO__Rewards() { return STRUCT_OFFSET(UPuzzleComponent, Rewards); } \
	FORCEINLINE static uint32 __PPO__RewardsComponents() { return STRUCT_OFFSET(UPuzzleComponent, RewardsComponents); } \
	FORCEINLINE static uint32 __PPO__Trigger() { return STRUCT_OFFSET(UPuzzleComponent, Trigger); } \
	FORCEINLINE static uint32 __PPO__TriggerComponent() { return STRUCT_OFFSET(UPuzzleComponent, TriggerComponent); } \
	FORCEINLINE static uint32 __PPO__bUnlockRewardsPermanently() { return STRUCT_OFFSET(UPuzzleComponent, bUnlockRewardsPermanently); } \
	FORCEINLINE static uint32 __PPO__bConditionsMet() { return STRUCT_OFFSET(UPuzzleComponent, bConditionsMet); } \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(UPuzzleComponent, bDebug); }


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_12_PROLOG \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_EVENT_PARMS


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_INCLASS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UPuzzleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
