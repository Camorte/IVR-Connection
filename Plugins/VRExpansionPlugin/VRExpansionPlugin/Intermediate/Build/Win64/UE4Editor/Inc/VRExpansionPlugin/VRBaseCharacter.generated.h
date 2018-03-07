// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UNavigationQueryFilter;
struct FHitResult;
enum class EVRMoveAction : uint8;
struct FRotator;
class USceneComponent;
struct FVector_NetQuantize100;
struct FBPVRComponentPosRep;
#ifdef VREXPANSIONPLUGIN_VRBaseCharacter_generated_h
#error "VRBaseCharacter.generated.h already included, missing '#pragma once' in VRBaseCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRBaseCharacter_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_19_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FVRSeatedCharacterInfo(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_14_DELEGATE \
struct _Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms \
{ \
	bool bIsWithinThreshold; \
	float ToThresholdScaler; \
}; \
static inline void FVRSeatThresholdChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRSeatThresholdChangedSignature, bool bIsWithinThreshold, float ToThresholdScaler) \
{ \
	_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms Parms; \
	Parms.bIsWithinThreshold=bIsWithinThreshold ? true : false; \
	Parms.ToThresholdScaler=ToThresholdScaler; \
	VRSeatThresholdChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_RPC_WRAPPERS \
	virtual void OnEndWallPushback_Implementation(); \
	virtual void OnBeginWallPushback_Implementation(FHitResult HitResultOfImpact, bool bHadLocomotionInput, FVector HmdInput); \
	virtual void OnCustomMoveActionPerformed_Implementation(EVRMoveAction MoveActionType, FVector MoveActionVector, FRotator MoveActionRotator); \
	virtual void NotifyOfTeleport_Implementation(); \
	virtual bool Server_SetSeatedMode_Validate(USceneComponent* , bool , FVector_NetQuantize100 , float , float , float , bool ); \
	virtual void Server_SetSeatedMode_Implementation(USceneComponent* SeatParent, bool bSetSeatedMode, FVector_NetQuantize100 TargetLoc, float TargetYaw, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead); \
	virtual bool Server_ReZeroSeating_Validate(FVector_NetQuantize100 , float , bool ); \
	virtual void Server_ReZeroSeating_Implementation(FVector_NetQuantize100 NewRelativeHeadLoc, float NewRelativeHeadYaw, bool bZeroToHead); \
	virtual bool Server_SendTransformRightController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformRightController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformLeftController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformLeftController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformCamera_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformCamera_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopNavigationMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopNavigationMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPartialPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasPartialPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoveStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingStatus::Type>*)Z_Param__Result=this->GetMoveStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndWallPushback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndWallPushback_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginWallPushback) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_HitResultOfImpact); \
		P_GET_UBOOL(Z_Param_bHadLocomotionInput); \
		P_GET_STRUCT(FVector,Z_Param_HmdInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginWallPushback_Implementation(Z_Param_HitResultOfImpact,Z_Param_bHadLocomotionInput,Z_Param_HmdInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCustomMoveActionPerformed) \
	{ \
		P_GET_ENUM(EVRMoveAction,Z_Param_MoveActionType); \
		P_GET_STRUCT(FVector,Z_Param_MoveActionVector); \
		P_GET_STRUCT(FRotator,Z_Param_MoveActionRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnCustomMoveActionPerformed_Implementation(EVRMoveAction(Z_Param_MoveActionType),Z_Param_MoveActionVector,Z_Param_MoveActionRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyOfTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyOfTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetTeleportLocation(Z_Param_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld) \
	{ \
		P_GET_UBOOL(Z_Param_bUpdateBounds); \
		P_GET_UBOOL(Z_Param_bCalculatePureYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegenerateOffsetComponentToWorld(Z_Param_bUpdateBounds,Z_Param_bCalculatePureYaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorLocationAndRotationVR) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FRotator,Z_Param_NewRot); \
		P_GET_UBOOL(Z_Param_bUseYawOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->SetActorLocationAndRotationVR(Z_Param_NewLoc,Z_Param_NewRot,Z_Param_bUseYawOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRotationVR) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRot); \
		P_GET_UBOOL(Z_Param_bUseYawOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->SetActorRotationVR(Z_Param_NewRot,Z_Param_bUseYawOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorWorldRotationVR) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRot); \
		P_GET_UBOOL(Z_Param_bUseYawOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->AddActorWorldRotationVR(Z_Param_DeltaRot,Z_Param_bUseYawOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetSeatedMode) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SeatParent); \
		P_GET_UBOOL(Z_Param_bSetSeatedMode); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_TargetLoc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TargetYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AllowedRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AllowedRadiusThreshold); \
		P_GET_UBOOL(Z_Param_bZeroToHead); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SetSeatedMode_Validate(Z_Param_SeatParent,Z_Param_bSetSeatedMode,Z_Param_TargetLoc,Z_Param_TargetYaw,Z_Param_AllowedRadius,Z_Param_AllowedRadiusThreshold,Z_Param_bZeroToHead)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetSeatedMode_Validate")); \
			return; \
		} \
		this->Server_SetSeatedMode_Implementation(Z_Param_SeatParent,Z_Param_bSetSeatedMode,Z_Param_TargetLoc,Z_Param_TargetYaw,Z_Param_AllowedRadius,Z_Param_AllowedRadiusThreshold,Z_Param_bZeroToHead); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ReZeroSeating) \
	{ \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_NewRelativeHeadLoc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRelativeHeadYaw); \
		P_GET_UBOOL(Z_Param_bZeroToHead); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_ReZeroSeating_Validate(Z_Param_NewRelativeHeadLoc,Z_Param_NewRelativeHeadYaw,Z_Param_bZeroToHead)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ReZeroSeating_Validate")); \
			return; \
		} \
		this->Server_ReZeroSeating_Implementation(Z_Param_NewRelativeHeadLoc,Z_Param_NewRelativeHeadYaw,Z_Param_bZeroToHead); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SeatedCharInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_SeatedCharInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetVRRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRForwardVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendTransformRightController) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendTransformRightController_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendTransformRightController_Validate")); \
			return; \
		} \
		this->Server_SendTransformRightController_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendTransformLeftController) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendTransformLeftController_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendTransformLeftController_Validate")); \
			return; \
		} \
		this->Server_SendTransformLeftController_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendTransformCamera) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendTransformCamera_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendTransformCamera_Validate")); \
			return; \
		} \
		this->Server_SendTransformCamera_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyOfTeleport_Implementation(); \
	virtual bool Server_SetSeatedMode_Validate(USceneComponent* , bool , FVector_NetQuantize100 , float , float , float , bool ); \
	virtual void Server_SetSeatedMode_Implementation(USceneComponent* SeatParent, bool bSetSeatedMode, FVector_NetQuantize100 TargetLoc, float TargetYaw, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead); \
	virtual bool Server_ReZeroSeating_Validate(FVector_NetQuantize100 , float , bool ); \
	virtual void Server_ReZeroSeating_Implementation(FVector_NetQuantize100 NewRelativeHeadLoc, float NewRelativeHeadYaw, bool bZeroToHead); \
	virtual bool Server_SendTransformRightController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformRightController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformLeftController_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformLeftController_Implementation(FBPVRComponentPosRep NewTransform); \
	virtual bool Server_SendTransformCamera_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendTransformCamera_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopNavigationMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopNavigationMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPartialPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasPartialPath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoveStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EPathFollowingStatus::Type>*)Z_Param__Result=this->GetMoveStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndWallPushback) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndWallPushback_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginWallPushback) \
	{ \
		P_GET_STRUCT(FHitResult,Z_Param_HitResultOfImpact); \
		P_GET_UBOOL(Z_Param_bHadLocomotionInput); \
		P_GET_STRUCT(FVector,Z_Param_HmdInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginWallPushback_Implementation(Z_Param_HitResultOfImpact,Z_Param_bHadLocomotionInput,Z_Param_HmdInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCustomMoveActionPerformed) \
	{ \
		P_GET_ENUM(EVRMoveAction,Z_Param_MoveActionType); \
		P_GET_STRUCT(FVector,Z_Param_MoveActionVector); \
		P_GET_STRUCT(FRotator,Z_Param_MoveActionRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnCustomMoveActionPerformed_Implementation(EVRMoveAction(Z_Param_MoveActionType),Z_Param_MoveActionVector,Z_Param_MoveActionRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyOfTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyOfTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTeleportLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetTeleportLocation(Z_Param_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld) \
	{ \
		P_GET_UBOOL(Z_Param_bUpdateBounds); \
		P_GET_UBOOL(Z_Param_bCalculatePureYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegenerateOffsetComponentToWorld(Z_Param_bUpdateBounds,Z_Param_bCalculatePureYaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorLocationAndRotationVR) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewLoc); \
		P_GET_STRUCT(FRotator,Z_Param_NewRot); \
		P_GET_UBOOL(Z_Param_bUseYawOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->SetActorLocationAndRotationVR(Z_Param_NewLoc,Z_Param_NewRot,Z_Param_bUseYawOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRotationVR) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_NewRot); \
		P_GET_UBOOL(Z_Param_bUseYawOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->SetActorRotationVR(Z_Param_NewRot,Z_Param_bUseYawOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorWorldRotationVR) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_DeltaRot); \
		P_GET_UBOOL(Z_Param_bUseYawOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->AddActorWorldRotationVR(Z_Param_DeltaRot,Z_Param_bUseYawOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SetSeatedMode) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_SeatParent); \
		P_GET_UBOOL(Z_Param_bSetSeatedMode); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_TargetLoc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TargetYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AllowedRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AllowedRadiusThreshold); \
		P_GET_UBOOL(Z_Param_bZeroToHead); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SetSeatedMode_Validate(Z_Param_SeatParent,Z_Param_bSetSeatedMode,Z_Param_TargetLoc,Z_Param_TargetYaw,Z_Param_AllowedRadius,Z_Param_AllowedRadiusThreshold,Z_Param_bZeroToHead)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SetSeatedMode_Validate")); \
			return; \
		} \
		this->Server_SetSeatedMode_Implementation(Z_Param_SeatParent,Z_Param_bSetSeatedMode,Z_Param_TargetLoc,Z_Param_TargetYaw,Z_Param_AllowedRadius,Z_Param_AllowedRadiusThreshold,Z_Param_bZeroToHead); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ReZeroSeating) \
	{ \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_NewRelativeHeadLoc); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRelativeHeadYaw); \
		P_GET_UBOOL(Z_Param_bZeroToHead); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_ReZeroSeating_Validate(Z_Param_NewRelativeHeadLoc,Z_Param_NewRelativeHeadYaw,Z_Param_bZeroToHead)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ReZeroSeating_Validate")); \
			return; \
		} \
		this->Server_ReZeroSeating_Implementation(Z_Param_NewRelativeHeadLoc,Z_Param_NewRelativeHeadYaw,Z_Param_bZeroToHead); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_SeatedCharInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_SeatedCharInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetVRRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRUpVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRUpVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRRightVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRRightVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRForwardVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetVRForwardVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendTransformRightController) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendTransformRightController_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendTransformRightController_Validate")); \
			return; \
		} \
		this->Server_SendTransformRightController_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendTransformLeftController) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendTransformLeftController_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendTransformLeftController_Validate")); \
			return; \
		} \
		this->Server_SendTransformLeftController_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendTransformCamera) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendTransformCamera_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendTransformCamera_Validate")); \
			return; \
		} \
		this->Server_SendTransformCamera_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_EVENT_PARMS \
	struct VRBaseCharacter_eventOnBeginWallPushback_Parms \
	{ \
		FHitResult HitResultOfImpact; \
		bool bHadLocomotionInput; \
		FVector HmdInput; \
	}; \
	struct VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms \
	{ \
		EVRMoveAction MoveActionType; \
		FVector MoveActionVector; \
		FRotator MoveActionRotator; \
	}; \
	struct VRBaseCharacter_eventOnSeatedModeChanged_Parms \
	{ \
		bool bNewSeatedMode; \
		bool bWasAlreadySeated; \
	}; \
	struct VRBaseCharacter_eventOnSeatThreshholdChanged_Parms \
	{ \
		bool bIsWithinThreshold; \
		float ToThresholdScaler; \
	}; \
	struct VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms \
	{ \
		TEnumAsByte<EPathFollowingResult::Type> PathingResult; \
	}; \
	struct VRBaseCharacter_eventServer_ReZeroSeating_Parms \
	{ \
		FVector_NetQuantize100 NewRelativeHeadLoc; \
		float NewRelativeHeadYaw; \
		bool bZeroToHead; \
	}; \
	struct VRBaseCharacter_eventServer_SendTransformCamera_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	}; \
	struct VRBaseCharacter_eventServer_SendTransformLeftController_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	}; \
	struct VRBaseCharacter_eventServer_SendTransformRightController_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	}; \
	struct VRBaseCharacter_eventServer_SetSeatedMode_Parms \
	{ \
		USceneComponent* SeatParent; \
		bool bSetSeatedMode; \
		FVector_NetQuantize100 TargetLoc; \
		float TargetYaw; \
		float AllowedRadius; \
		float AllowedRadiusThreshold; \
		bool bZeroToHead; \
	};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_CALLBACK_WRAPPERS
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRBaseCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRBaseCharacter(); \
public: \
	DECLARE_CLASS(AVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_INCLASS \
private: \
	static void StaticRegisterNativesAVRBaseCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRBaseCharacter(); \
public: \
	DECLARE_CLASS(AVRBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRBaseCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRBaseCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRBaseCharacter(AVRBaseCharacter&&); \
	NO_API AVRBaseCharacter(const AVRBaseCharacter&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRBaseCharacter(AVRBaseCharacter&&); \
	NO_API AVRBaseCharacter(const AVRBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRBaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRBaseCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRBaseCharacter)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_121_PROLOG \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_EVENT_PARMS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
