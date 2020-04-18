// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
#ifdef TEMPLEESCAPE_Puzzle_generated_h
#error "Puzzle.generated.h already included, missing '#pragma once' in Puzzle.h"
#endif
#define TEMPLEESCAPE_Puzzle_generated_h

#define temple_escape_Source_TempleEscape_Puzzle_h_14_SPARSE_DATA
#define temple_escape_Source_TempleEscape_Puzzle_h_14_RPC_WRAPPERS \
	virtual bool UnsubscribeFromTrigger_Implementation(UObject* Trigger) { return false; }; \
	virtual bool SubscribeToTrigger_Implementation(UObject* Trigger) { return false; }; \
	virtual bool ReactToTrigger_Implementation() { return false; }; \
	virtual void OnConditionsUnmet_Implementation() {}; \
	virtual void OnConditionsMet_Implementation() {}; \
	virtual bool ConditionStateChanged_Implementation(AActor* Condition, bool State) { return false; }; \
	virtual bool AreConditionsMet_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execUnsubscribeFromTrigger) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Trigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UnsubscribeFromTrigger_Implementation(Z_Param_Trigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeToTrigger) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Trigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SubscribeToTrigger_Implementation(Z_Param_Trigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReactToTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReactToTrigger_Implementation(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execConditionStateChanged) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Condition); \
		P_GET_UBOOL(Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ConditionStateChanged_Implementation(Z_Param_Condition,Z_Param_State); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreConditionsMet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreConditionsMet_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Puzzle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool UnsubscribeFromTrigger_Implementation(UObject* Trigger) { return false; }; \
	virtual bool SubscribeToTrigger_Implementation(UObject* Trigger) { return false; }; \
	virtual bool ReactToTrigger_Implementation() { return false; }; \
	virtual void OnConditionsUnmet_Implementation() {}; \
	virtual void OnConditionsMet_Implementation() {}; \
	virtual bool ConditionStateChanged_Implementation(AActor* Condition, bool State) { return false; }; \
	virtual bool AreConditionsMet_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execUnsubscribeFromTrigger) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Trigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UnsubscribeFromTrigger_Implementation(Z_Param_Trigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubscribeToTrigger) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Trigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SubscribeToTrigger_Implementation(Z_Param_Trigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReactToTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReactToTrigger_Implementation(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execConditionStateChanged) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Condition); \
		P_GET_UBOOL(Z_Param_State); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ConditionStateChanged_Implementation(Z_Param_Condition,Z_Param_State); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreConditionsMet) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreConditionsMet_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Puzzle_h_14_EVENT_PARMS \
	struct Puzzle_eventAreConditionsMet_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Puzzle_eventAreConditionsMet_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Puzzle_eventConditionStateChanged_Parms \
	{ \
		AActor* Condition; \
		bool State; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Puzzle_eventConditionStateChanged_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Puzzle_eventReactToTrigger_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Puzzle_eventReactToTrigger_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Puzzle_eventSubscribeToTrigger_Parms \
	{ \
		UObject* Trigger; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Puzzle_eventSubscribeToTrigger_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Puzzle_eventUnsubscribeFromTrigger_Parms \
	{ \
		UObject* Trigger; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Puzzle_eventUnsubscribeFromTrigger_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define temple_escape_Source_TempleEscape_Puzzle_h_14_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_Puzzle_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzle(UPuzzle&&); \
	NO_API UPuzzle(const UPuzzle&); \
public:


#define temple_escape_Source_TempleEscape_Puzzle_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzle(UPuzzle&&); \
	NO_API UPuzzle(const UPuzzle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzle)


#define temple_escape_Source_TempleEscape_Puzzle_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPuzzle(); \
	friend struct Z_Construct_UClass_UPuzzle_Statics; \
public: \
	DECLARE_CLASS(UPuzzle, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UPuzzle)


#define temple_escape_Source_TempleEscape_Puzzle_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_Puzzle_h_14_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_Puzzle_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Puzzle_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_Puzzle_h_14_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_Puzzle_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Puzzle_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPuzzle() {} \
public: \
	typedef UPuzzle UClassType; \
	typedef IPuzzle ThisClass; \
	static bool Execute_AreConditionsMet(UObject* O); \
	static bool Execute_ConditionStateChanged(UObject* O, AActor* Condition, bool State); \
	static void Execute_OnConditionsMet(UObject* O); \
	static void Execute_OnConditionsUnmet(UObject* O); \
	static bool Execute_ReactToTrigger(UObject* O); \
	static bool Execute_SubscribeToTrigger(UObject* O, UObject* Trigger); \
	static bool Execute_UnsubscribeFromTrigger(UObject* O, UObject* Trigger); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_Puzzle_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IPuzzle() {} \
public: \
	typedef UPuzzle UClassType; \
	typedef IPuzzle ThisClass; \
	static bool Execute_AreConditionsMet(UObject* O); \
	static bool Execute_ConditionStateChanged(UObject* O, AActor* Condition, bool State); \
	static void Execute_OnConditionsMet(UObject* O); \
	static void Execute_OnConditionsUnmet(UObject* O); \
	static bool Execute_ReactToTrigger(UObject* O); \
	static bool Execute_SubscribeToTrigger(UObject* O, UObject* Trigger); \
	static bool Execute_UnsubscribeFromTrigger(UObject* O, UObject* Trigger); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_Puzzle_h_11_PROLOG \
	temple_escape_Source_TempleEscape_Puzzle_h_14_EVENT_PARMS


#define temple_escape_Source_TempleEscape_Puzzle_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Puzzle_h_14_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Puzzle_h_14_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_Puzzle_h_14_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_Puzzle_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Puzzle_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Puzzle_h_14_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Puzzle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_Puzzle_h_14_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_Puzzle_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UPuzzle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_Puzzle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
