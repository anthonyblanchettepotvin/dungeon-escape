// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TEMPLEESCAPE_PressurePlate_generated_h
#error "PressurePlate.generated.h already included, missing '#pragma once' in PressurePlate.h"
#endif
#define TEMPLEESCAPE_PressurePlate_generated_h

#define temple_escape_Source_TempleEscape_PressurePlate_h_14_SPARSE_DATA
#define temple_escape_Source_TempleEscape_PressurePlate_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTargetWeightReached) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTargetWeightReached(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTotalWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTotalWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTotalWeight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetWeight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetWeightReached) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTargetWeightReached(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetWeightReached) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetWeightReached(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PressurePlate_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTargetWeightReached) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTargetWeightReached(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTotalWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTotalWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTotalWeight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetWeight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTargetWeight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetWeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetWeight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetWeightReached) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTargetWeightReached(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetWeightReached) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetWeightReached(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_PressurePlate_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define temple_escape_Source_TempleEscape_PressurePlate_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define temple_escape_Source_TempleEscape_PressurePlate_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APressurePlate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APressurePlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public:


#define temple_escape_Source_TempleEscape_PressurePlate_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APressurePlate)


#define temple_escape_Source_TempleEscape_PressurePlate_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(APressurePlate, Root); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(APressurePlate, Mesh); } \
	FORCEINLINE static uint32 __PPO__Trigger() { return STRUCT_OFFSET(APressurePlate, Trigger); } \
	FORCEINLINE static uint32 __PPO__bTargetWeightReached() { return STRUCT_OFFSET(APressurePlate, bTargetWeightReached); } \
	FORCEINLINE static uint32 __PPO__TargetWeight() { return STRUCT_OFFSET(APressurePlate, TargetWeight); } \
	FORCEINLINE static uint32 __PPO__TotalWeight() { return STRUCT_OFFSET(APressurePlate, TotalWeight); } \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(APressurePlate, bDebug); }


#define temple_escape_Source_TempleEscape_PressurePlate_h_11_PROLOG
#define temple_escape_Source_TempleEscape_PressurePlate_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_INCLASS \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_PressurePlate_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_SPARSE_DATA \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_PressurePlate_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class APressurePlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_PressurePlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
