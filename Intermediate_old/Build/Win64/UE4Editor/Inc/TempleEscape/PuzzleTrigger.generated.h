// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TEMPLEESCAPE_PuzzleTrigger_generated_h
#error "PuzzleTrigger.generated.h already included, missing '#pragma once' in PuzzleTrigger.h"
#endif
#define TEMPLEESCAPE_PuzzleTrigger_generated_h

#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_SPARSE_DATA
#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_RPC_WRAPPERS \
	virtual bool Unsubscribe_Implementation(AActor* Puzzle) { return false; }; \
	virtual bool Subscribe_Implementation(AActor* Puzzle) { return false; }; \
	virtual bool Trigger_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Unsubscribe_Implementation(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribe) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Subscribe_Implementation(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Trigger_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Unsubscribe_Implementation(AActor* Puzzle) { return false; }; \
	virtual bool Subscribe_Implementation(AActor* Puzzle) { return false; }; \
	virtual bool Trigger_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execUnsubscribe) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Unsubscribe_Implementation(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribe) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Subscribe_Implementation(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Trigger_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_EVENT_PARMS \
	struct PuzzleTrigger_eventSubscribe_Parms \
	{ \
		AActor* Puzzle; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleTrigger_eventSubscribe_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PuzzleTrigger_eventTrigger_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleTrigger_eventTrigger_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PuzzleTrigger_eventUnsubscribe_Parms \
	{ \
		AActor* Puzzle; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleTrigger_eventUnsubscribe_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleTrigger(UPuzzleTrigger&&); \
	NO_API UPuzzleTrigger(const UPuzzleTrigger&); \
public:


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleTrigger(UPuzzleTrigger&&); \
	NO_API UPuzzleTrigger(const UPuzzleTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleTrigger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleTrigger)


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPuzzleTrigger(); \
	friend struct Z_Construct_UClass_UPuzzleTrigger_Statics; \
public: \
	DECLARE_CLASS(UPuzzleTrigger, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleTrigger)


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPuzzleTrigger() {} \
public: \
	typedef UPuzzleTrigger UClassType; \
	typedef IPuzzleTrigger ThisClass; \
	static bool Execute_Subscribe(UObject* O, AActor* Puzzle); \
	static bool Execute_Trigger(UObject* O); \
	static bool Execute_Unsubscribe(UObject* O, AActor* Puzzle); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPuzzleTrigger() {} \
public: \
	typedef UPuzzleTrigger UClassType; \
	typedef IPuzzleTrigger ThisClass; \
	static bool Execute_Subscribe(UObject* O, AActor* Puzzle); \
	static bool Execute_Trigger(UObject* O); \
	static bool Execute_Unsubscribe(UObject* O, AActor* Puzzle); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_10_PROLOG \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_EVENT_PARMS


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleTrigger_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleTrigger_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UPuzzleTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_PuzzleTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
