// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
struct FVector_NetQuantize100;
struct FVRConditionalMoveRep;
class UPrimitiveComponent;
#ifdef VREXPANSIONPLUGIN_VRCharacterMovementComponent_generated_h
#error "VRCharacterMovementComponent.generated.h already included, missing '#pragma once' in VRCharacterMovementComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRCharacterMovementComponent_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_RPC_WRAPPERS \
	virtual bool ServerMoveVRDualHybridRootMotion2_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRDualHybridRootMotion2_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDualExLight2_Validate(float , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRDualExLight2_Implementation(float TimeStamp0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDual2_Validate(float , FVector_NetQuantize10 , uint8 , uint32 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRDual2_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRExLight2_Validate(float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRExLight2_Implementation(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVR2_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint8 , uint32 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVR2_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDualHybridRootMotion_Validate(float , FVector_NetQuantize10 , uint8 , uint16 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint16 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRDualHybridRootMotion_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDualExLight_Validate(float , uint8 , uint16 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint16 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRDualExLight_Implementation(float TimeStamp0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRDual_Validate(float , FVector_NetQuantize10 , uint8 , uint16 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint16 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVRExLight_Validate(float , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint16 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVRExLight_Implementation(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
	virtual bool ServerMoveVR_Validate(float , FVector_NetQuantize10 , FVector_NetQuantize100 , FVector_NetQuantize100 , FVRConditionalMoveRep , FVector_NetQuantize100 , uint16 , uint8 , uint16 , UPrimitiveComponent* , FName , uint8 ); \
	virtual void ServerMoveVR_Implementation(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode); \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualHybridRootMotion2_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion2_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualHybridRootMotion2_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualExLight2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualExLight2_Validate(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualExLight2_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualExLight2_Implementation(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDual2_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual2_Validate")); \
			return; \
		} \
		this->ServerMoveVRDual2_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRExLight2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRExLight2_Validate(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRExLight2_Validate")); \
			return; \
		} \
		this->ServerMoveVRExLight2_Implementation(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVR2_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR2_Validate")); \
			return; \
		} \
		this->ServerMoveVR2_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualExLight_Validate(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualExLight_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualExLight_Implementation(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual_Validate")); \
			return; \
		} \
		this->ServerMoveVRDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRExLight_Validate(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRExLight_Validate")); \
			return; \
		} \
		this->ServerMoveVRExLight_Implementation(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVR_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR_Validate")); \
			return; \
		} \
		this->ServerMoveVR_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualHybridRootMotion2_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion2_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualHybridRootMotion2_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualExLight2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualExLight2_Validate(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualExLight2_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualExLight2_Implementation(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDual2_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual2_Validate")); \
			return; \
		} \
		this->ServerMoveVRDual2_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_View0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRExLight2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRExLight2_Validate(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRExLight2_Validate")); \
			return; \
		} \
		this->ServerMoveVRExLight2_Implementation(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR2) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientRoll); \
		P_GET_PROPERTY(UUInt32Property,Z_Param_View); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVR2_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR2_Validate")); \
			return; \
		} \
		this->ServerMoveVR2_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientRoll,Z_Param_View,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualHybridRootMotion) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualHybridRootMotion_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualHybridRootMotion_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualHybridRootMotion_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDualExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDualExLight_Validate(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDualExLight_Validate")); \
			return; \
		} \
		this->ServerMoveVRDualExLight_Implementation(Z_Param_TimeStamp0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRDual) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp0); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel0); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PendingFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw0); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldCapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_OldConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_OldLFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_OldCapsuleYaw); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRDual_Validate(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRDual_Validate")); \
			return; \
		} \
		this->ServerMoveVRDual_Implementation(Z_Param_TimeStamp0,Z_Param_InAccel0,Z_Param_PendingFlags,Z_Param_ClientYaw0,Z_Param_OldCapsuleLoc,Z_Param_OldConditionalReps,Z_Param_OldLFDiff,Z_Param_OldCapsuleYaw,Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_NewFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVRExLight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVRExLight_Validate(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVRExLight_Validate")); \
			return; \
		} \
		this->ServerMoveVRExLight_Implementation(Z_Param_TimeStamp,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerMoveVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeStamp); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InAccel); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_ClientLoc); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_CapsuleLoc); \
		P_GET_STRUCT(FVRConditionalMoveRep,Z_Param_ConditionalReps); \
		P_GET_STRUCT(FVector_NetQuantize100,Z_Param_LFDiff); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_CapsuleYaw); \
		P_GET_PROPERTY(UByteProperty,Z_Param_CompressedMoveFlags); \
		P_GET_PROPERTY(UUInt16Property,Z_Param_ClientYaw); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClientMovementBase); \
		P_GET_PROPERTY(UNameProperty,Z_Param_ClientBaseBoneName); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ClientMovementMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->ServerMoveVR_Validate(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerMoveVR_Validate")); \
			return; \
		} \
		this->ServerMoveVR_Implementation(Z_Param_TimeStamp,Z_Param_InAccel,Z_Param_ClientLoc,Z_Param_CapsuleLoc,Z_Param_ConditionalReps,Z_Param_LFDiff,Z_Param_CapsuleYaw,Z_Param_CompressedMoveFlags,Z_Param_ClientYaw,Z_Param_ClientMovementBase,Z_Param_ClientBaseBoneName,Z_Param_ClientMovementMode); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_EVENT_PARMS \
	struct VRCharacterMovementComponent_eventServerMoveVR_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		uint16 ClientYaw; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVR2_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRDual_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint16 ClientYaw0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		uint16 ClientYaw; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRDual2_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms \
	{ \
		float TimeStamp0; \
		uint8 PendingFlags; \
		uint16 ClientYaw0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		uint16 ClientYaw; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms \
	{ \
		float TimeStamp0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint16 ClientYaw0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		uint16 ClientYaw; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms \
	{ \
		float TimeStamp0; \
		FVector_NetQuantize10 InAccel0; \
		uint8 PendingFlags; \
		uint32 View0; \
		FVector_NetQuantize100 OldCapsuleLoc; \
		FVRConditionalMoveRep OldConditionalReps; \
		FVector_NetQuantize100 OldLFDiff; \
		uint16 OldCapsuleYaw; \
		float TimeStamp; \
		FVector_NetQuantize10 InAccel; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 NewFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRExLight_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		uint16 ClientYaw; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	}; \
	struct VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms \
	{ \
		float TimeStamp; \
		FVector_NetQuantize100 ClientLoc; \
		FVector_NetQuantize100 CapsuleLoc; \
		FVRConditionalMoveRep ConditionalReps; \
		FVector_NetQuantize100 LFDiff; \
		uint16 CapsuleYaw; \
		uint8 CompressedMoveFlags; \
		uint8 ClientRoll; \
		uint32 View; \
		UPrimitiveComponent* ClientMovementBase; \
		FName ClientBaseBoneName; \
		uint8 ClientMovementMode; \
	};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_CALLBACK_WRAPPERS
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRCharacterMovementComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRCharacterMovementComponent(); \
public: \
	DECLARE_CLASS(UVRCharacterMovementComponent, UVRBaseCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRCharacterMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUVRCharacterMovementComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRCharacterMovementComponent(); \
public: \
	DECLARE_CLASS(UVRCharacterMovementComponent, UVRBaseCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRCharacterMovementComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRCharacterMovementComponent(UVRCharacterMovementComponent&&); \
	NO_API UVRCharacterMovementComponent(const UVRCharacterMovementComponent&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRCharacterMovementComponent(UVRCharacterMovementComponent&&); \
	NO_API UVRCharacterMovementComponent(const UVRCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRCharacterMovementComponent)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_82_PROLOG \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_EVENT_PARMS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
