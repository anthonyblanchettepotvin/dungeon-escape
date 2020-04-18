// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMPLEESCAPE_BaseButton_generated_h
#error "BaseButton.generated.h already included, missing '#pragma once' in BaseButton.h"
#endif
#define TEMPLEESCAPE_BaseButton_generated_h

#define temple_escape_Source_TempleEscape_BaseButton_h_17_SPARSE_DATA
#define temple_escape_Source_TempleEscape_BaseButton_h_17_RPC_WRAPPERS \
	virtual void OnButtonUnpressed_Implementation(); \
	virtual void OnButtonPressed_Implementation(); \
 \
	DECLARE_FUNCTION(execOnButtonUnpressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnButtonUnpressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnButtonPressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unpress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Press(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsPressed) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsPressed(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_BaseButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnButtonUnpressed_Implementation(); \
	virtual void OnButtonPressed_Implementation(); \
 \
	DECLARE_FUNCTION(execOnButtonUnpressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnButtonUnpressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnButtonPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnButtonPressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unpress(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPress) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Press(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsPressed) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsPressed(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_BaseButton_h_17_EVENT_PARMS
#define temple_escape_Source_TempleEscape_BaseButton_h_17_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_BaseButton_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseButton(); \
	friend struct Z_Construct_UClass_ABaseButton_Statics; \
public: \
	DECLARE_CLASS(ABaseButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(ABaseButton) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseButton*>(this); }


#define temple_escape_Source_TempleEscape_BaseButton_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABaseButton(); \
	friend struct Z_Construct_UClass_ABaseButton_Statics; \
public: \
	DECLARE_CLASS(ABaseButton, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(ABaseButton) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseButton*>(this); }


#define temple_escape_Source_TempleEscape_BaseButton_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseButton(ABaseButton&&); \
	NO_API ABaseButton(const ABaseButton&); \
public:


#define temple_escape_Source_TempleEscape_BaseButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseButton(ABaseButton&&); \
	NO_API ABaseButton(const ABaseButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseButton)


#define temple_escape_Source_TempleEscape_BaseButton_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ABaseButton, Root); } \
	FORCEINLINE static uint32 __PPO__ButtonMesh() { return STRUCT_OFFSET(ABaseButton, ButtonMesh); } \
	FORCEINLINE static uint32 __PPO__FrameMesh() { return STRUCT_OFFSET(ABaseButton, FrameMesh); } \
	FORCEINLINE static uint32 __PPO__CurrentLocation() { return STRUCT_OFFSET(ABaseButton, CurrentLocation); } \
	FORCEINLINE static uint32 __PPO__TargetOffset() { return STRUCT_OFFSET(ABaseButton, TargetOffset); } \
	FORCEINLINE static uint32 __PPO__PressedLocation() { return STRUCT_OFFSET(ABaseButton, PressedLocation); } \
	FORCEINLINE static uint32 __PPO__UnpressedLocation() { return STRUCT_OFFSET(ABaseButton, UnpressedLocation); } \
	FORCEINLINE static uint32 __PPO__PressDuration() { return STRUCT_OFFSET(ABaseButton, PressDuration); } \
	FORCEINLINE static uint32 __PPO__UnpressDuration() { return STRUCT_OFFSET(ABaseButton, UnpressDuration); } \
	FORCEINLINE static uint32 __PPO__ElapsedTime() { return STRUCT_OFFSET(ABaseButton, ElapsedTime); } \
	FORCEINLINE static uint32 __PPO__bIsToggle() { return STRUCT_OFFSET(ABaseButton, bIsToggle); } \
	FORCEINLINE static uint32 __PPO__bIsPressed() { return STRUCT_OFFSET(ABaseButton, bIsPressed); } \
	FORCEINLINE static uint32 __PPO__bIsPressing() { return STRUCT_OFFSET(ABaseButton, bIsPressing); } \
	FORCEINLINE static uint32 __PPO__bIsUnpressing() { return STRUCT_OFFSET(ABaseButton, bIsUnpressing); } \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(ABaseButton, bDebug); }


#define temple_escape_Source_TempleEscape_BaseButton_h_14_PROLOG \
	temple_escape_Source_TempleEscape_BaseButton_h_17_EVENT_PARMS


#define temple_escape_Source_TempleEscape_BaseButton_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_BaseButton_h_17_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_BaseButton_h_17_SPARSE_DATA \
	temple_escape_Source_TempleEscape_BaseButton_h_17_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_BaseButton_h_17_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_BaseButton_h_17_INCLASS \
	temple_escape_Source_TempleEscape_BaseButton_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_BaseButton_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_BaseButton_h_17_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_BaseButton_h_17_SPARSE_DATA \
	temple_escape_Source_TempleEscape_BaseButton_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_BaseButton_h_17_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_BaseButton_h_17_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_BaseButton_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class ABaseButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_BaseButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
