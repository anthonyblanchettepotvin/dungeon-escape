// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMPLEESCAPE_PuzzleReward_generated_h
#error "PuzzleReward.generated.h already included, missing '#pragma once' in PuzzleReward.h"
#endif
#define TEMPLEESCAPE_PuzzleReward_generated_h

#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_SPARSE_DATA
#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_RPC_WRAPPERS \
	virtual bool IsRewardUnlocked_Implementation() { return false; }; \
	virtual void OnRewardLocked_Implementation() {}; \
	virtual void OnRewardUnlocked_Implementation() {}; \
	virtual bool LockReward_Implementation() { return false; }; \
	virtual bool UnlockReward_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execIsRewardUnlocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRewardUnlocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRewardLocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRewardLocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRewardUnlocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRewardUnlocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockReward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LockReward_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockReward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UnlockReward_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsRewardUnlocked_Implementation() { return false; }; \
	virtual void OnRewardLocked_Implementation() {}; \
	virtual void OnRewardUnlocked_Implementation() {}; \
	virtual bool LockReward_Implementation() { return false; }; \
	virtual bool UnlockReward_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execIsRewardUnlocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsRewardUnlocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRewardLocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRewardLocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRewardUnlocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRewardUnlocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockReward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->LockReward_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockReward) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UnlockReward_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_EVENT_PARMS \
	struct PuzzleReward_eventIsRewardUnlocked_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleReward_eventIsRewardUnlocked_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PuzzleReward_eventLockReward_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleReward_eventLockReward_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PuzzleReward_eventUnlockReward_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PuzzleReward_eventUnlockReward_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleReward(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleReward) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleReward); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleReward); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleReward(UPuzzleReward&&); \
	NO_API UPuzzleReward(const UPuzzleReward&); \
public:


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleReward(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleReward(UPuzzleReward&&); \
	NO_API UPuzzleReward(const UPuzzleReward&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleReward); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleReward); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleReward)


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPuzzleReward(); \
	friend struct Z_Construct_UClass_UPuzzleReward_Statics; \
public: \
	DECLARE_CLASS(UPuzzleReward, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleReward)


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_GENERATED_UINTERFACE_BODY() \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPuzzleReward() {} \
public: \
	typedef UPuzzleReward UClassType; \
	typedef IPuzzleReward ThisClass; \
	static bool Execute_IsRewardUnlocked(UObject* O); \
	static bool Execute_LockReward(UObject* O); \
	static void Execute_OnRewardLocked(UObject* O); \
	static void Execute_OnRewardUnlocked(UObject* O); \
	static bool Execute_UnlockReward(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_PuzzleReward_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPuzzleReward() {} \
public: \
	typedef UPuzzleReward UClassType; \
	typedef IPuzzleReward ThisClass; \
	static bool Execute_IsRewardUnlocked(UObject* O); \
	static bool Execute_LockReward(UObject* O); \
	static void Execute_OnRewardLocked(UObject* O); \
	static void Execute_OnRewardUnlocked(UObject* O); \
	static bool Execute_UnlockReward(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define temple_escape_Source_TempleEscape_PuzzleReward_h_10_PROLOG \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_EVENT_PARMS


#define temple_escape_Source_TempleEscape_PuzzleReward_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PuzzleReward_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_PuzzleReward_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UPuzzleReward>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_PuzzleReward_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
