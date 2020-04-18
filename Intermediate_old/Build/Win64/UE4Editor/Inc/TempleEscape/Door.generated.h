// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMPLEESCAPE_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define TEMPLEESCAPE_Door_generated_h

#define temple_escape_Source_TempleEscape_Door_h_19_SPARSE_DATA
#define temple_escape_Source_TempleEscape_Door_h_19_RPC_WRAPPERS \
	virtual void OnDoorLocked_Implementation(); \
	virtual void OnDoorUnlocked_Implementation(); \
	virtual void OnDoorClosed_Implementation(); \
	virtual void OnDoorOpened_Implementation(); \
 \
	DECLARE_FUNCTION(execOnDoorLocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDoorLocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDoorUnlocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDoorUnlocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDoorClosed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDoorClosed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDoorOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDoorOpened_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Door_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDoorLocked_Implementation(); \
	virtual void OnDoorUnlocked_Implementation(); \
	virtual void OnDoorClosed_Implementation(); \
	virtual void OnDoorOpened_Implementation(); \
 \
	DECLARE_FUNCTION(execOnDoorLocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDoorLocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDoorUnlocked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDoorUnlocked_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDoorClosed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDoorClosed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDoorOpened) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDoorOpened_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseDoor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor(); \
		P_NATIVE_END; \
	}


#define temple_escape_Source_TempleEscape_Door_h_19_EVENT_PARMS
#define temple_escape_Source_TempleEscape_Door_h_19_CALLBACK_WRAPPERS
#define temple_escape_Source_TempleEscape_Door_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define temple_escape_Source_TempleEscape_Door_h_19_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TempleEscape"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define temple_escape_Source_TempleEscape_Door_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define temple_escape_Source_TempleEscape_Door_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define temple_escape_Source_TempleEscape_Door_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Root() { return STRUCT_OFFSET(ADoor, Root); } \
	FORCEINLINE static uint32 __PPO__DoorMesh() { return STRUCT_OFFSET(ADoor, DoorMesh); } \
	FORCEINLINE static uint32 __PPO__FrameMesh() { return STRUCT_OFFSET(ADoor, FrameMesh); } \
	FORCEINLINE static uint32 __PPO__Audio() { return STRUCT_OFFSET(ADoor, Audio); } \
	FORCEINLINE static uint32 __PPO__OpenDoorSound() { return STRUCT_OFFSET(ADoor, OpenDoorSound); } \
	FORCEINLINE static uint32 __PPO__CloseDoorSound() { return STRUCT_OFFSET(ADoor, CloseDoorSound); } \
	FORCEINLINE static uint32 __PPO__OpenRotation() { return STRUCT_OFFSET(ADoor, OpenRotation); } \
	FORCEINLINE static uint32 __PPO__CloseRotation() { return STRUCT_OFFSET(ADoor, CloseRotation); } \
	FORCEINLINE static uint32 __PPO__CurrentRotation() { return STRUCT_OFFSET(ADoor, CurrentRotation); } \
	FORCEINLINE static uint32 __PPO__OpenDuration() { return STRUCT_OFFSET(ADoor, OpenDuration); } \
	FORCEINLINE static uint32 __PPO__CloseDuration() { return STRUCT_OFFSET(ADoor, CloseDuration); } \
	FORCEINLINE static uint32 __PPO__ElapsedTime() { return STRUCT_OFFSET(ADoor, ElapsedTime); } \
	FORCEINLINE static uint32 __PPO__bIsUnlocked() { return STRUCT_OFFSET(ADoor, bIsUnlocked); } \
	FORCEINLINE static uint32 __PPO__bIsOpen() { return STRUCT_OFFSET(ADoor, bIsOpen); } \
	FORCEINLINE static uint32 __PPO__bIsOpening() { return STRUCT_OFFSET(ADoor, bIsOpening); } \
	FORCEINLINE static uint32 __PPO__bIsClosing() { return STRUCT_OFFSET(ADoor, bIsClosing); } \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(ADoor, bDebug); }


#define temple_escape_Source_TempleEscape_Door_h_16_PROLOG \
	temple_escape_Source_TempleEscape_Door_h_19_EVENT_PARMS


#define temple_escape_Source_TempleEscape_Door_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Door_h_19_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_Door_h_19_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Door_h_19_RPC_WRAPPERS \
	temple_escape_Source_TempleEscape_Door_h_19_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_Door_h_19_INCLASS \
	temple_escape_Source_TempleEscape_Door_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define temple_escape_Source_TempleEscape_Door_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	temple_escape_Source_TempleEscape_Door_h_19_PRIVATE_PROPERTY_OFFSET \
	temple_escape_Source_TempleEscape_Door_h_19_SPARSE_DATA \
	temple_escape_Source_TempleEscape_Door_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_Door_h_19_CALLBACK_WRAPPERS \
	temple_escape_Source_TempleEscape_Door_h_19_INCLASS_NO_PURE_DECLS \
	temple_escape_Source_TempleEscape_Door_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLEESCAPE_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID temple_escape_Source_TempleEscape_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
