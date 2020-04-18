// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPuzzleComponent;
#ifdef TEMPLEESCAPE_PuzzleConditionComponent_generated_h
#error "PuzzleConditionComponent.generated.h already included, missing '#pragma once' in PuzzleConditionComponent.h"
#endif
#define TEMPLEESCAPE_PuzzleConditionComponent_generated_h

#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_SPARSE_DATA
#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotifyStateChanged) \
	{ \
		P_GET_UBOOL(Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyStateChanged(Z_Param_State); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsMet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsMet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterPuzzle) \
	{ \
		P_GET_OBJECT(UPuzzleComponent,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterPuzzle(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterPuzzle) \
	{ \
		P_GET_OBJECT(UPuzzleComponent,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterPuzzle(Z_Param_Puzzle); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotifyStateChanged) \
	{ \
		P_GET_UBOOL(Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyStateChanged(Z_Param_State); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsMet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsMet(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisterPuzzle) \
	{ \
		P_GET_OBJECT(UPuzzleComponent,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisterPuzzle(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterPuzzle) \
	{ \
		P_GET_OBJECT(UPuzzleComponent,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterPuzzle(Z_Param_Puzzle); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzleConditionComponent(); \
	friend struct Z_Construct_UClass_UPuzzleConditionComponent_Statics; \
public: \
	DECLARE_CLASS(UPuzzleConditionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleConditionComponent)


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzleConditionComponent(); \
	friend struct Z_Construct_UClass_UPuzzleConditionComponent_Statics; \
public: \
	DECLARE_CLASS(UPuzzleConditionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleConditionComponent)


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleConditionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleConditionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleConditionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleConditionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleConditionComponent(UPuzzleConditionComponent&&); \
	NO_API UPuzzleConditionComponent(const UPuzzleConditionComponent&); \
public:


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleConditionComponent(UPuzzleConditionComponent&&); \
	NO_API UPuzzleConditionComponent(const UPuzzleConditionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleConditionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleConditionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPuzzleConditionComponent)


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsMet() { return STRUCT_OFFSET(UPuzzleConditionComponent, bIsMet); } \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(UPuzzleConditionComponent, bDebug); } \
	FORCEINLINE static uint32 __PPO__RegisteredPuzzles() { return STRUCT_OFFSET(UPuzzleConditionComponent, RegisteredPuzzles); }


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_10_PROLOG
#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_INCLASS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UPuzzleConditionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_Public_Puzzle_Components_PuzzleConditionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
