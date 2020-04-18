// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMPLEESCAPE_GrabberComponent_generated_h
#error "GrabberComponent.generated.h already included, missing '#pragma once' in GrabberComponent.h"
#endif
#define TEMPLEESCAPE_GrabberComponent_generated_h

#define temple_escape_Source_TempleEscape_GrabberComponent_h_13_DELEGATE \
static inline void FOnReleaseSignature_DelegateWrapper(const FMulticastScriptDelegate& OnReleaseSignature) \
{ \
	OnReleaseSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define temple_escape_Source_TempleEscape_GrabberComponent_h_12_DELEGATE \
static inline void FOnGrabSignature_DelegateWrapper(const FMulticastScriptDelegate& OnGrabSignature) \
{ \
	OnGrabSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_SPARSE_DATA
#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_RPC_WRAPPERS \
	virtual void Release_Implementation(); \
	virtual void Grab_Implementation(); \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Release_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Grab_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Release_Implementation(); \
	virtual void Grab_Implementation(); \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Release_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Grab_Implementation(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_EVENT_PARMS
#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabberComponent(); \
	friend struct Z_Construct_UClass_UGrabberComponent_Statics; \
public: \
	DECLARE_CLASS(UGrabberComponent, UInteractComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UGrabberComponent)


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGrabberComponent(); \
	friend struct Z_Construct_UClass_UGrabberComponent_Statics; \
public: \
	DECLARE_CLASS(UGrabberComponent, UInteractComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UGrabberComponent)


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabberComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabberComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabberComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabberComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabberComponent(UGrabberComponent&&); \
	NO_API UGrabberComponent(const UGrabberComponent&); \
public:


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabberComponent() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabberComponent(UGrabberComponent&&); \
	NO_API UGrabberComponent(const UGrabberComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabberComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabberComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabberComponent)


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GrabbedActor() { return STRUCT_OFFSET(UGrabberComponent, GrabbedActor); } \
	FORCEINLINE static uint32 __PPO__PhysicsHandleComponent() { return STRUCT_OFFSET(UGrabberComponent, PhysicsHandleComponent); } \
	FORCEINLINE static uint32 __PPO__OnGrab() { return STRUCT_OFFSET(UGrabberComponent, OnGrab); } \
	FORCEINLINE static uint32 __PPO__OnRelease() { return STRUCT_OFFSET(UGrabberComponent, OnRelease); }


#define temple_escape_Source_TempleEscape_GrabberComponent_h_18_PROLOG \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_EVENT_PARMS


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_SPARSE_DATA \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_INCLASS \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_GrabberComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_SPARSE_DATA \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_GrabberComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UGrabberComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_GrabberComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
