// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMPLEESCAPE_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define TEMPLEESCAPE_Interactable_generated_h

#define temple_escape_Source_TempleEscape_Interactable_h_13_SPARSE_DATA
#define temple_escape_Source_TempleEscape_Interactable_h_13_RPC_WRAPPERS \
	virtual bool Interact_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Interact_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Interactable_h_13_EVENT_PARMS \
	struct Interactable_eventInteract_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Interactable_eventInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define temple_escape_Source_TempleEscape_Interactable_h_13_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEMPLEESCAPE_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMPLEESCAPE_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEMPLEESCAPE_API UInteractable(UInteractable&&); \
	TEMPLEESCAPE_API UInteractable(const UInteractable&); \
public:


#define temple_escape_Source_TempleEscape_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEMPLEESCAPE_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEMPLEESCAPE_API UInteractable(UInteractable&&); \
	TEMPLEESCAPE_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMPLEESCAPE_API, UInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define temple_escape_Source_TempleEscape_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TempleEscape"), TEMPLEESCAPE_API) \
	DECLARE_SERIALIZER(UInteractable)


#define temple_escape_Source_TempleEscape_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static bool Execute_Interact(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static bool Execute_Interact(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_Interactable_h_10_PROLOG \
	temple_escape_Source_TempleEscape_Interactable_h_13_EVENT_PARMS


#define temple_escape_Source_TempleEscape_Interactable_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Interactable_h_13_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Interactable_h_13_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_Interactable_h_13_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Interactable_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Interactable_h_13_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_Interactable_h_13_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
