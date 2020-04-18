// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESymbol : uint8;
#ifdef TEMPLEESCAPE_SymbolDisplay_generated_h
#error "SymbolDisplay.generated.h already included, missing '#pragma once' in SymbolDisplay.h"
#endif
#define TEMPLEESCAPE_SymbolDisplay_generated_h

#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_SPARSE_DATA
#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_RPC_WRAPPERS \
	virtual void OnTurnEnd_Implementation(); \
	virtual void OnTurnStart_Implementation(); \
 \
	DECLARE_FUNCTION(execOnTurnEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTurnEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTurnStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTurnStart_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextTargetRotation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNextTargetRotation(Z_Param_Offset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurningAnimation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurningAnimation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSymbolByte) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetCurrentSymbolByte(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSymbol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESymbol*)Z_Param__Result=P_THIS->GetCurrentSymbol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentSymbol) \
	{ \
		P_GET_ENUM(ESymbol,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentSymbol(ESymbol(Z_Param_Value)); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnTurnEnd_Implementation(); \
	virtual void OnTurnStart_Implementation(); \
 \
	DECLARE_FUNCTION(execOnTurnEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTurnEnd_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTurnStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTurnStart_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNextTargetRotation) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNextTargetRotation(Z_Param_Offset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurningAnimation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurningAnimation(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSymbolByte) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetCurrentSymbolByte(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSymbol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESymbol*)Z_Param__Result=P_THIS->GetCurrentSymbol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentSymbol) \
	{ \
		P_GET_ENUM(ESymbol,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCurrentSymbol(ESymbol(Z_Param_Value)); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_EVENT_PARMS
#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASymbolDisplay(); \
	friend struct Z_Construct_UClass_ASymbolDisplay_Statics; \
public: \
	DECLARE_CLASS(ASymbolDisplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(ASymbolDisplay) \
	virtual UObject* _getUObject() const override { return const_cast<ASymbolDisplay*>(this); }


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_INCLASS \
private: \
	static void StaticRegisterNativesASymbolDisplay(); \
	friend struct Z_Construct_UClass_ASymbolDisplay_Statics; \
public: \
	DECLARE_CLASS(ASymbolDisplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(ASymbolDisplay) \
	virtual UObject* _getUObject() const override { return const_cast<ASymbolDisplay*>(this); }


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASymbolDisplay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASymbolDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASymbolDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASymbolDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASymbolDisplay(ASymbolDisplay&&); \
	NO_API ASymbolDisplay(const ASymbolDisplay&); \
public:


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASymbolDisplay(ASymbolDisplay&&); \
	NO_API ASymbolDisplay(const ASymbolDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASymbolDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASymbolDisplay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASymbolDisplay)


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ASymbolDisplay, Root); } \
	FORCEINLINE static uint32 __PPO__SymbolDisplayMesh() { return STRUCT_OFFSET(ASymbolDisplay, SymbolDisplayMesh); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ASymbolDisplay, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__CurrentSymbol() { return STRUCT_OFFSET(ASymbolDisplay, CurrentSymbol); } \
	FORCEINLINE static uint32 __PPO__TurnDuration() { return STRUCT_OFFSET(ASymbolDisplay, TurnDuration); } \
	FORCEINLINE static uint32 __PPO__ElapsedTime() { return STRUCT_OFFSET(ASymbolDisplay, ElapsedTime); } \
	FORCEINLINE static uint32 __PPO__InitialRotation() { return STRUCT_OFFSET(ASymbolDisplay, InitialRotation); } \
	FORCEINLINE static uint32 __PPO__TargetRotation() { return STRUCT_OFFSET(ASymbolDisplay, TargetRotation); } \
	FORCEINLINE static uint32 __PPO__bIsTurning() { return STRUCT_OFFSET(ASymbolDisplay, bIsTurning); } \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(ASymbolDisplay, bDebug); }


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_23_PROLOG \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_EVENT_PARMS


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_SPARSE_DATA \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_INCLASS \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_SymbolDisplay_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_SPARSE_DATA \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_SymbolDisplay_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class ASymbolDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_SymbolDisplay_h


#define FOREACH_ENUM_ESYMBOL(op) \
	op(ESymbol::S_Triangle) \
	op(ESymbol::S_Square) \
	op(ESymbol::S_Circle) \
	op(ESymbol::S_Count) 

enum class ESymbol : uint8;
template<> TEMPLEESCAPE_API UEnum* StaticEnum<ESymbol>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
