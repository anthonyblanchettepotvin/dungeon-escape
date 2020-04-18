// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMPLEESCAPE_PuzzleButton_generated_h
#error "PuzzleButton.generated.h already included, missing '#pragma once' in PuzzleButton.h"
#endif
#define TEMPLEESCAPE_PuzzleButton_generated_h

#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_SPARSE_DATA
#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_RPC_WRAPPERS
#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPuzzleButton(); \
	friend struct Z_Construct_UClass_APuzzleButton_Statics; \
public: \
	DECLARE_CLASS(APuzzleButton, ABaseButton, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(APuzzleButton) \
	virtual UObject* _getUObject() const override { return const_cast<APuzzleButton*>(this); }


#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPuzzleButton(); \
	friend struct Z_Construct_UClass_APuzzleButton_Statics; \
public: \
	DECLARE_CLASS(APuzzleButton, ABaseButton, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(APuzzleButton) \
	virtual UObject* _getUObject() const override { return const_cast<APuzzleButton*>(this); }


#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APuzzleButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleButton(APuzzleButton&&); \
	NO_API APuzzleButton(const APuzzleButton&); \
public:


#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APuzzleButton() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APuzzleButton(APuzzleButton&&); \
	NO_API APuzzleButton(const APuzzleButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APuzzleButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APuzzleButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APuzzleButton)


#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AdjacentButtons() { return STRUCT_OFFSET(APuzzleButton, AdjacentButtons); } \
	FORCEINLINE static uint32 __PPO__RegisteredPuzzles() { return STRUCT_OFFSET(APuzzleButton, RegisteredPuzzles); } \
	FORCEINLINE static uint32 __PPO__SubscribedPuzzles() { return STRUCT_OFFSET(APuzzleButton, SubscribedPuzzles); }


#define temple_escape_Source_TempleEscape_PuzzleButton_h_15_PROLOG
#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_INCLASS \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleButton_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleButton_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class APuzzleButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_PuzzleButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
