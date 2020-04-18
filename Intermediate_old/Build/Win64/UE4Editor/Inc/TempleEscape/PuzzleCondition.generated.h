// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TEMPLEESCAPE_PuzzleCondition_generated_h
#error "PuzzleCondition.generated.h already included, missing '#pragma once' in PuzzleCondition.h"
#endif
#define TEMPLEESCAPE_PuzzleCondition_generated_h

#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_SPARSE_DATA
#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_RPC_WRAPPERS \
	virtual bool UnregisterPuzzle_Implementation(AActor* Puzzle) { return false; }; \
	virtual bool RegisterPuzzle_Implementation(AActor* Puzzle) { return false; }; \
	virtual bool NotifyPuzzleStateChanged_Implementation() { return false; }; \
	virtual bool Evaluate_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execUnregisterPuzzle) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UnregisterPuzzle_Implementation(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterPuzzle) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegisterPuzzle_Implementation(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyPuzzleStateChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NotifyPuzzleStateChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvaluate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Evaluate_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool UnregisterPuzzle_Implementation(AActor* Puzzle) { return false; }; \
	virtual bool RegisterPuzzle_Implementation(AActor* Puzzle) { return false; }; \
	virtual bool NotifyPuzzleStateChanged_Implementation() { return false; }; \
	virtual bool Evaluate_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execUnregisterPuzzle) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UnregisterPuzzle_Implementation(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterPuzzle) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Puzzle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RegisterPuzzle_Implementation(Z_Param_Puzzle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyPuzzleStateChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NotifyPuzzleStateChanged_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEvaluate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Evaluate_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_EVENT_PARMS \
	struct PuzzleCondition_eventEvaluate_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleCondition_eventEvaluate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PuzzleCondition_eventNotifyPuzzleStateChanged_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleCondition_eventNotifyPuzzleStateChanged_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PuzzleCondition_eventRegisterPuzzle_Parms \
	{ \
		AActor* Puzzle; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleCondition_eventRegisterPuzzle_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PuzzleCondition_eventUnregisterPuzzle_Parms \
	{ \
		AActor* Puzzle; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleCondition_eventUnregisterPuzzle_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleCondition(UPuzzleCondition&&); \
	NO_API UPuzzleCondition(const UPuzzleCondition&); \
public:


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleCondition(UPuzzleCondition&&); \
	NO_API UPuzzleCondition(const UPuzzleCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleCondition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleCondition)


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPuzzleCondition(); \
	friend struct Z_Construct_UClass_UPuzzleCondition_Statics; \
public: \
	DECLARE_CLASS(UPuzzleCondition, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleCondition)


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPuzzleCondition() {} \
public: \
	typedef UPuzzleCondition UClassType; \
	typedef IPuzzleCondition ThisClass; \
	static bool Execute_Evaluate(UObject* O); \
	static bool Execute_NotifyPuzzleStateChanged(UObject* O); \
	static bool Execute_RegisterPuzzle(UObject* O, AActor* Puzzle); \
	static bool Execute_UnregisterPuzzle(UObject* O, AActor* Puzzle); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IPuzzleCondition() {} \
public: \
	typedef UPuzzleCondition UClassType; \
	typedef IPuzzleCondition ThisClass; \
	static bool Execute_Evaluate(UObject* O); \
	static bool Execute_NotifyPuzzleStateChanged(UObject* O); \
	static bool Execute_RegisterPuzzle(UObject* O, AActor* Puzzle); \
	static bool Execute_UnregisterPuzzle(UObject* O, AActor* Puzzle); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_11_PROLOG \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_EVENT_PARMS


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleCondition_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleCondition_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UPuzzleCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_PuzzleCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
