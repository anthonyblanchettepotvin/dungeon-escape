// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef TEMPLEESCAPE_InteractComponent_generated_h
#error "InteractComponent.generated.h already included, missing '#pragma once' in InteractComponent.h"
#endif
#define TEMPLEESCAPE_InteractComponent_generated_h

#define temple_escape_Source_TempleEscape_InteractComponent_h_14_DELEGATE \
static inline void FOnInteractSignature_DelegateWrapper(const FMulticastScriptDelegate& OnInteractSignature) \
{ \
	OnInteractSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_SPARSE_DATA
#define temple_escape_Source_TempleEscape_InteractComponent_h_22_RPC_WRAPPERS \
	virtual void Interact_Implementation(); \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocusedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetFocusedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractLineStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInteractLineStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractLineEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInteractLineEnd(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(); \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFocusedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetFocusedActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractLineStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInteractLineStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractLineEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetInteractLineEnd(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_EVENT_PARMS
#define temple_escape_Source_TempleEscape_InteractComponent_h_22_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_InteractComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractComponent(); \
	friend struct Z_Construct_UClass_UInteractComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UInteractComponent)


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUInteractComponent(); \
	friend struct Z_Construct_UClass_UInteractComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(UInteractComponent)


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractComponent(UInteractComponent&&); \
	NO_API UInteractComponent(const UInteractComponent&); \
public:


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractComponent(UInteractComponent&&); \
	NO_API UInteractComponent(const UInteractComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractComponent)


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MinReach() { return STRUCT_OFFSET(UInteractComponent, MinReach); } \
	FORCEINLINE static uint32 __PPO__MaxReach() { return STRUCT_OFFSET(UInteractComponent, MaxReach); } \
	FORCEINLINE static uint32 __PPO__Channel() { return STRUCT_OFFSET(UInteractComponent, Channel); } \
	FORCEINLINE static uint32 __PPO__FocusedActor() { return STRUCT_OFFSET(UInteractComponent, FocusedActor); } \
	FORCEINLINE static uint32 __PPO__PlayerViewPointLocation() { return STRUCT_OFFSET(UInteractComponent, PlayerViewPointLocation); } \
	FORCEINLINE static uint32 __PPO__PlayerViewPointRotation() { return STRUCT_OFFSET(UInteractComponent, PlayerViewPointRotation); } \
	FORCEINLINE static uint32 __PPO__InteractLineStart() { return STRUCT_OFFSET(UInteractComponent, InteractLineStart); } \
	FORCEINLINE static uint32 __PPO__InteractLineEnd() { return STRUCT_OFFSET(UInteractComponent, InteractLineEnd); } \
	FORCEINLINE static uint32 __PPO__InputComponent() { return STRUCT_OFFSET(UInteractComponent, InputComponent); } \
	FORCEINLINE static uint32 __PPO__OnInteract() { return STRUCT_OFFSET(UInteractComponent, OnInteract); }


#define temple_escape_Source_TempleEscape_InteractComponent_h_19_PROLOG \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_EVENT_PARMS


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_SPARSE_DATA \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_INCLASS \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_InteractComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_SPARSE_DATA \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_InteractComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class UInteractComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_InteractComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
