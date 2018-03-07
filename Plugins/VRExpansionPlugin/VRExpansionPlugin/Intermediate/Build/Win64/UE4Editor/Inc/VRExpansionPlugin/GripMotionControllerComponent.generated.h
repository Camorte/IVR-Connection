// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USceneComponent;
struct FTransform;
struct FBPActorGripInformation;
class UPrimitiveComponent;
class AActor;
enum class EBPVRResultSwitch : uint8;
enum class EGripLateUpdateSettings : uint8;
enum class EGripCollisionType : uint8;
struct FVector;
enum class EGripMovementReplicationSettings : uint8;
struct FBPVRComponentPosRep;
struct FBPSecondaryGripInfo;
#ifdef VREXPANSIONPLUGIN_GripMotionControllerComponent_generated_h
#error "GripMotionControllerComponent.generated.h already included, missing '#pragma once' in GripMotionControllerComponent.h"
#endif
#define VREXPANSIONPLUGIN_GripMotionControllerComponent_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_RPC_WRAPPERS \
	virtual void NotifyDrop_Implementation(FBPActorGripInformation const& NewDrop, bool bSimulate); \
	virtual bool Server_SendControllerTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendControllerTransform_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_NotifyLocalGripRemoved_Validate(FBPActorGripInformation const& ); \
	virtual void Server_NotifyLocalGripRemoved_Implementation(FBPActorGripInformation const& removeGrip); \
	virtual bool Server_NotifySecondaryAttachmentChanged_Validate(UObject* , FBPSecondaryGripInfo ); \
	virtual void Server_NotifySecondaryAttachmentChanged_Implementation(UObject* GrippedObject, FBPSecondaryGripInfo SecondaryGripInfo); \
	virtual bool Server_NotifyLocalGripAddedOrChanged_Validate(FBPActorGripInformation const& ); \
	virtual void Server_NotifyLocalGripAddedOrChanged_Implementation(FBPActorGripInformation const& newGrip); \
	virtual bool Client_NotifyInvalidLocalGrip_Validate(UObject* ); \
	virtual void Client_NotifyInvalidLocalGrip_Implementation(UObject* LocallyGrippedObject); \
 \
	DECLARE_FUNCTION(execGripControllerIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripControllerIsTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToRemoveAttachment); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->RemoveSecondaryAttachmentPoint(Z_Param_GrippedObjectToRemoveAttachment,Z_Param_LerpToTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToAddAttachment); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform); \
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddSecondaryAttachmentPoint(Z_Param_GrippedObjectToAddAttachment,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bIsPostTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrip(Z_Param_Out_Grip,Z_Param_bIsPostTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrippedComponent(Z_Param_ComponentToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrippedActor(Z_Param_GrippedActorToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTeleportMoveGrippedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostTeleportMoveGrippedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_GrippedComponentsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGrippedComponents(Z_Param_Out_GrippedComponentsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_GrippedActorsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGrippedActors(Z_Param_Out_GrippedActorsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedObjects) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_GrippedObjectsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGrippedObjects(Z_Param_Out_GrippedObjectsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasGrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSecondaryAttachment) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToCheck); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsSecondaryAttachment(Z_Param_ComponentToCheck,Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsComponentHeld) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsComponentHeld(Z_Param_ComponentToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHeld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsHeld(Z_Param_ActorToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsObjectHeld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsObjectHeld(Z_Param_ObjectToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToGripRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GrippedActorTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UGripMotionControllerComponent::ConvertToGripRelativeTransform(Z_Param_Out_GrippedActorTransform,Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToControllerRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->ConvertToControllerRelativeTransform(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HasGripMovementAuthority) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BP_HasGripMovementAuthority(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HasGripAuthority) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BP_HasGripAuthority(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGripRelativeAdditionTransform_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToSample); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AdditionTransform); \
		P_GET_UBOOL(Z_Param_bGripRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->CreateGripRelativeAdditionTransform_BP(Z_Param_Out_GripToSample,Z_Param_Out_AdditionTransform,Z_Param_bGripRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripStiffnessAndDamping) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDamping); \
		P_GET_UBOOL(Z_Param_bAlsoSetAngularValues); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalAngularStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalAngularDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripStiffnessAndDamping(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_NewStiffness,Z_Param_NewDamping,Z_Param_bAlsoSetAngularValues,Z_Param_OptionalAngularStiffness,Z_Param_OptionalAngularDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripAdditionTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewAdditionTransform); \
		P_GET_UBOOL(Z_Param_bMakeGripRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripAdditionTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewAdditionTransform,Z_Param_bMakeGripRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripRelativeTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewRelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripLateUpdateSetting) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_NewGripLateUpdateSetting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripLateUpdateSetting(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripLateUpdateSettings(Z_Param_NewGripLateUpdateSetting)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripCollisionType) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EGripCollisionType,Z_Param_NewGripCollisionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripCollisionType(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripCollisionType(Z_Param_NewGripCollisionType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVelocities) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetPhysicsVelocities(Z_Param_Out_Grip,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByObject) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(UObject,Z_Param_ObjectToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGripByObject(Z_Param_Out_Grip,Z_Param_ObjectToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByComponent) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGripByComponent(Z_Param_Out_Grip,Z_Param_ComponentToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByActor) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(AActor,Z_Param_ActorToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGripByActor(Z_Param_Out_Grip,Z_Param_ActorToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDrop) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyDrop_Implementation(Z_Param_NewDrop,Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropGrip(Z_Param_Out_Grip,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropComponent(Z_Param_ComponentToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripComponent(Z_Param_ComponentToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropActor(Z_Param_ActorToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripActor(Z_Param_ActorToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropObjectByInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropObjectByInterface(Z_Param_ObjectToDrop,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripObjectByInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripObjectByInterface(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropObject(Z_Param_ObjectToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripObject(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendControllerTransform) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendControllerTransform_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendControllerTransform_Validate")); \
			return; \
		} \
		this->Server_SendControllerTransform_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedControllerTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedControllerTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LocallyGrippedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_LocallyGrippedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GrippedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_GrippedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyLocalGripRemoved) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_removeGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_NotifyLocalGripRemoved_Validate(Z_Param_removeGrip)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripRemoved_Validate")); \
			return; \
		} \
		this->Server_NotifyLocalGripRemoved_Implementation(Z_Param_removeGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifySecondaryAttachmentChanged) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObject); \
		P_GET_STRUCT(FBPSecondaryGripInfo,Z_Param_SecondaryGripInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_NotifySecondaryAttachmentChanged_Validate(Z_Param_GrippedObject,Z_Param_SecondaryGripInfo)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifySecondaryAttachmentChanged_Validate")); \
			return; \
		} \
		this->Server_NotifySecondaryAttachmentChanged_Implementation(Z_Param_GrippedObject,Z_Param_SecondaryGripInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyLocalGripAddedOrChanged) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_newGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_NotifyLocalGripAddedOrChanged_Validate(Z_Param_newGrip)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripAddedOrChanged_Validate")); \
			return; \
		} \
		this->Server_NotifyLocalGripAddedOrChanged_Implementation(Z_Param_newGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_NotifyInvalidLocalGrip) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_LocallyGrippedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Client_NotifyInvalidLocalGrip_Validate(Z_Param_LocallyGrippedObject)) \
		{ \
			RPC_ValidateFailed(TEXT("Client_NotifyInvalidLocalGrip_Validate")); \
			return; \
		} \
		this->Client_NotifyInvalidLocalGrip_Implementation(Z_Param_LocallyGrippedObject); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyDrop_Implementation(FBPActorGripInformation const& NewDrop, bool bSimulate); \
	virtual bool Server_SendControllerTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendControllerTransform_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_NotifyLocalGripRemoved_Validate(FBPActorGripInformation const& ); \
	virtual void Server_NotifyLocalGripRemoved_Implementation(FBPActorGripInformation const& removeGrip); \
	virtual bool Server_NotifySecondaryAttachmentChanged_Validate(UObject* , FBPSecondaryGripInfo ); \
	virtual void Server_NotifySecondaryAttachmentChanged_Implementation(UObject* GrippedObject, FBPSecondaryGripInfo SecondaryGripInfo); \
	virtual bool Server_NotifyLocalGripAddedOrChanged_Validate(FBPActorGripInformation const& ); \
	virtual void Server_NotifyLocalGripAddedOrChanged_Implementation(FBPActorGripInformation const& newGrip); \
	virtual bool Client_NotifyInvalidLocalGrip_Validate(UObject* ); \
	virtual void Client_NotifyInvalidLocalGrip_Implementation(UObject* LocallyGrippedObject); \
 \
	DECLARE_FUNCTION(execGripControllerIsTracked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripControllerIsTracked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToRemoveAttachment); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->RemoveSecondaryAttachmentPoint(Z_Param_GrippedObjectToRemoveAttachment,Z_Param_LerpToTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSecondaryAttachmentPoint) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObjectToAddAttachment); \
		P_GET_OBJECT(USceneComponent,Z_Param_SecondaryPointComponent); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OriginalTransform); \
		P_GET_UBOOL(Z_Param_bTransformIsAlreadyRelative); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LerpToTime); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AddSecondaryAttachmentPoint(Z_Param_GrippedObjectToAddAttachment,Z_Param_SecondaryPointComponent,Z_Param_Out_OriginalTransform,Z_Param_bTransformIsAlreadyRelative,Z_Param_LerpToTime,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bIsPostTeleport); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrip(Z_Param_Out_Grip,Z_Param_bIsPostTeleport); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrippedComponent(Z_Param_ComponentToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTeleportMoveGrippedActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_GrippedActorToMove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportMoveGrippedActor(Z_Param_GrippedActorToMove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTeleportMoveGrippedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PostTeleportMoveGrippedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedComponents) \
	{ \
		P_GET_TARRAY_REF(UPrimitiveComponent*,Z_Param_Out_GrippedComponentsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGrippedComponents(Z_Param_Out_GrippedComponentsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_GrippedActorsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGrippedActors(Z_Param_Out_GrippedActorsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGrippedObjects) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_GrippedObjectsArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGrippedObjects(Z_Param_Out_GrippedObjectsArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasGrippedObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasGrippedObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSecondaryAttachment) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_ComponentToCheck); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsSecondaryAttachment(Z_Param_ComponentToCheck,Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsComponentHeld) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsComponentHeld(Z_Param_ComponentToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHeld) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsHeld(Z_Param_ActorToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsObjectHeld) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsObjectHeld(Z_Param_ObjectToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToGripRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GrippedActorTransform); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UGripMotionControllerComponent::ConvertToGripRelativeTransform(Z_Param_Out_GrippedActorTransform,Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertToControllerRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->ConvertToControllerRelativeTransform(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HasGripMovementAuthority) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BP_HasGripMovementAuthority(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_HasGripAuthority) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->BP_HasGripAuthority(Z_Param_Out_Grip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGripRelativeAdditionTransform_BP) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_GripToSample); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AdditionTransform); \
		P_GET_UBOOL(Z_Param_bGripRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=this->CreateGripRelativeAdditionTransform_BP(Z_Param_Out_GripToSample,Z_Param_Out_AdditionTransform,Z_Param_bGripRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripStiffnessAndDamping) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDamping); \
		P_GET_UBOOL(Z_Param_bAlsoSetAngularValues); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalAngularStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OptionalAngularDamping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripStiffnessAndDamping(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_NewStiffness,Z_Param_NewDamping,Z_Param_bAlsoSetAngularValues,Z_Param_OptionalAngularStiffness,Z_Param_OptionalAngularDamping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripAdditionTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewAdditionTransform); \
		P_GET_UBOOL(Z_Param_bMakeGripRelative); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripAdditionTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewAdditionTransform,Z_Param_bMakeGripRelative); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripRelativeTransform) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripRelativeTransform(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),Z_Param_Out_NewRelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripLateUpdateSetting) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_NewGripLateUpdateSetting); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripLateUpdateSetting(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripLateUpdateSettings(Z_Param_NewGripLateUpdateSetting)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGripCollisionType) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EGripCollisionType,Z_Param_NewGripCollisionType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetGripCollisionType(Z_Param_Out_Grip,(EBPVRResultSwitch&)(Z_Param_Out_Result),EGripCollisionType(Z_Param_NewGripCollisionType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsVelocities) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetPhysicsVelocities(Z_Param_Out_Grip,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByObject) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(UObject,Z_Param_ObjectToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGripByObject(Z_Param_Out_Grip,Z_Param_ObjectToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByComponent) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGripByComponent(Z_Param_Out_Grip,Z_Param_ComponentToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripByActor) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_OBJECT(AActor,Z_Param_ActorToLookForGrip); \
		P_GET_ENUM_REF(EBPVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetGripByActor(Z_Param_Out_Grip,Z_Param_ActorToLookForGrip,(EBPVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyDrop) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_NewDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyDrop_Implementation(Z_Param_NewDrop,Z_Param_bSimulate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropGrip) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_Grip); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropGrip(Z_Param_Out_Grip,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropComponent(Z_Param_ComponentToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripComponent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ComponentToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripComponent(Z_Param_ComponentToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropActor(Z_Param_ActorToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripActor(Z_Param_ActorToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropObjectByInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropObjectByInterface(Z_Param_ObjectToDrop,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripObjectByInterface) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripObjectByInterface(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToDrop); \
		P_GET_UBOOL(Z_Param_bSimulate); \
		P_GET_STRUCT(FVector,Z_Param_OptionalAngularVelocity); \
		P_GET_STRUCT(FVector,Z_Param_OptionalLinearVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->DropObject(Z_Param_ObjectToDrop,Z_Param_bSimulate,Z_Param_OptionalAngularVelocity,Z_Param_OptionalLinearVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGripObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_ObjectToGrip); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldOffset); \
		P_GET_UBOOL(Z_Param_bWorldOffsetIsRelative); \
		P_GET_PROPERTY(UNameProperty,Z_Param_OptionalSnapToSocketName); \
		P_GET_ENUM(EGripCollisionType,Z_Param_GripCollisionType); \
		P_GET_ENUM(EGripLateUpdateSettings,Z_Param_GripLateUpdateSetting); \
		P_GET_ENUM(EGripMovementReplicationSettings,Z_Param_GripMovementReplicationSetting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripStiffness); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_GripDamping); \
		P_GET_UBOOL(Z_Param_bIsSlotGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GripObject(Z_Param_ObjectToGrip,Z_Param_Out_WorldOffset,Z_Param_bWorldOffsetIsRelative,Z_Param_OptionalSnapToSocketName,EGripCollisionType(Z_Param_GripCollisionType),EGripLateUpdateSettings(Z_Param_GripLateUpdateSetting),EGripMovementReplicationSettings(Z_Param_GripMovementReplicationSetting),Z_Param_GripStiffness,Z_Param_GripDamping,Z_Param_bIsSlotGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendControllerTransform) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendControllerTransform_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendControllerTransform_Validate")); \
			return; \
		} \
		this->Server_SendControllerTransform_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedControllerTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedControllerTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_LocallyGrippedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_LocallyGrippedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GrippedActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_GrippedActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyLocalGripRemoved) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_removeGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_NotifyLocalGripRemoved_Validate(Z_Param_removeGrip)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripRemoved_Validate")); \
			return; \
		} \
		this->Server_NotifyLocalGripRemoved_Implementation(Z_Param_removeGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifySecondaryAttachmentChanged) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_GrippedObject); \
		P_GET_STRUCT(FBPSecondaryGripInfo,Z_Param_SecondaryGripInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_NotifySecondaryAttachmentChanged_Validate(Z_Param_GrippedObject,Z_Param_SecondaryGripInfo)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifySecondaryAttachmentChanged_Validate")); \
			return; \
		} \
		this->Server_NotifySecondaryAttachmentChanged_Implementation(Z_Param_GrippedObject,Z_Param_SecondaryGripInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NotifyLocalGripAddedOrChanged) \
	{ \
		P_GET_STRUCT(FBPActorGripInformation,Z_Param_newGrip); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_NotifyLocalGripAddedOrChanged_Validate(Z_Param_newGrip)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NotifyLocalGripAddedOrChanged_Validate")); \
			return; \
		} \
		this->Server_NotifyLocalGripAddedOrChanged_Implementation(Z_Param_newGrip); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClient_NotifyInvalidLocalGrip) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_LocallyGrippedObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Client_NotifyInvalidLocalGrip_Validate(Z_Param_LocallyGrippedObject)) \
		{ \
			RPC_ValidateFailed(TEXT("Client_NotifyInvalidLocalGrip_Validate")); \
			return; \
		} \
		this->Client_NotifyInvalidLocalGrip_Implementation(Z_Param_LocallyGrippedObject); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_EVENT_PARMS \
	struct GripMotionControllerComponent_eventClient_NotifyInvalidLocalGrip_Parms \
	{ \
		UObject* LocallyGrippedObject; \
	}; \
	struct GripMotionControllerComponent_eventNotifyDrop_Parms \
	{ \
		FBPActorGripInformation NewDrop; \
		bool bSimulate; \
	}; \
	struct GripMotionControllerComponent_eventServer_NotifyLocalGripAddedOrChanged_Parms \
	{ \
		FBPActorGripInformation newGrip; \
	}; \
	struct GripMotionControllerComponent_eventServer_NotifyLocalGripRemoved_Parms \
	{ \
		FBPActorGripInformation removeGrip; \
	}; \
	struct GripMotionControllerComponent_eventServer_NotifySecondaryAttachmentChanged_Parms \
	{ \
		UObject* GrippedObject; \
		FBPSecondaryGripInfo SecondaryGripInfo; \
	}; \
	struct GripMotionControllerComponent_eventServer_SendControllerTransform_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_CALLBACK_WRAPPERS
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGripMotionControllerComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGripMotionControllerComponent(); \
public: \
	DECLARE_CLASS(UGripMotionControllerComponent, UMotionControllerComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGripMotionControllerComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUGripMotionControllerComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UGripMotionControllerComponent(); \
public: \
	DECLARE_CLASS(UGripMotionControllerComponent, UMotionControllerComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGripMotionControllerComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGripMotionControllerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripMotionControllerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGripMotionControllerComponent(UGripMotionControllerComponent&&); \
	NO_API UGripMotionControllerComponent(const UGripMotionControllerComponent&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGripMotionControllerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGripMotionControllerComponent(UGripMotionControllerComponent&&); \
	NO_API UGripMotionControllerComponent(const UGripMotionControllerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGripMotionControllerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGripMotionControllerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGripMotionControllerComponent)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_78_PROLOG \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_EVENT_PARMS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h_91_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GripMotionControllerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_GripMotionControllerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
