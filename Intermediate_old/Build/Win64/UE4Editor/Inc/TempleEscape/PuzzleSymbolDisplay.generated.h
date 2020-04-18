// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESymbol : uint8;
#ifdef TEMPLEESCAPE_PuzzleSymbolDisplay_generated_h
#error "PuzzleSymbolDisplay.generated.h already included, missing '#pragma once' in PuzzleSymbolDisplay.h"
#endif
#define TEMPLEESCAPE_PuzzleSymbolDisplay_generated_h

#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_SPARSE_DATA
#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSymbolOnTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSymbolOnTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetSymbol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESymbol*)Z_Param__Result=P_THIS->GetTargetSymbol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetSymbol) \
	{ \
		P_GET_ENUM(ESymbol,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetSymbol(ESymbol(Z_Param_Value)); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSymbolOnTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSymbolOnTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetSymbol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESymbol*)Z_Param__Result=P_THIS->GetTargetSymbol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetSymbol) \
	{ \
		P_GET_ENUM(ESymbol,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetSymbol(ESymbol(Z_Param_Value)); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleSymbolDisplay(); \
	friend struct Z_Construct_UClass_APuzzleSymbolDisplay_Statics; \
public: \
	DECLARE_CLASS(APuzzleSymbolDisplay, ASymbolDisplay, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(APuzzleSymbolDisplay) \
	virtual UObject* _getUObject() const override { return const_cast<APuzzleSymbolDisplay*>(this); }


#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleSymbolDisplay(); \
	friend struct Z_Construct_UClass_APuzzleSymbolDisplay_Statics; \
public: \
	DECLARE_CLASS(APuzzleSymbolDisplay, ASymbolDisplay, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(APuzzleSymbolDisplay) \
	virtual UObject* _getUObject() const override { return const_cast<APuzzleSymbolDisplay*>(this); }


#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleSymbolDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleSymbolDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleSymbolDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleSymbolDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleSymbolDisplay(APuzzleSymbolDisplay&&); \
	NO_API APuzzleSymbolDisplay(const APuzzleSymbolDisplay&); \
public:


#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleSymbolDisplay() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleSymbolDisplay(APuzzleSymbolDisplay&&); \
	NO_API APuzzleSymbolDisplay(const APuzzleSymbolDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleSymbolDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleSymbolDisplay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleSymbolDisplay)


#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetSymbol() { return STRUCT_OFFSET(APuzzleSymbolDisplay, TargetSymbol); } \
	FORCEINLINE static uint32 __PPO__RegisteredPuzzles() { return STRUCT_OFFSET(APuzzleSymbolDisplay, RegisteredPuzzles); }


#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_13_PROLOG
#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_INCLASS \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class APuzzleSymbolDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_PuzzleSymbolDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
