// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRBPDatatypes_generated_h
#error "VRBPDatatypes.generated.h already included, missing '#pragma once' in VRBPDatatypes.h"
#endif
#define VREXPANSIONPLUGIN_VRBPDatatypes_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1305_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPActorPhysicsHandleInformation(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_1214_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPInterfaceProperties(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_987_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_911_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPInteractionSettings(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_826_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPSecondaryGripInfo(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_809_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_684_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPAdvSecondaryGripSettings(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_581_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripPhysicsSettings(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_363_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_251_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize(); \
	VREXPANSIONPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTransform Super;


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_168_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h_87_GENERATED_BODY \
	friend VREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info(); \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRBPDatatypes_h


#define FOREACH_ENUM_EPHYSICSGRIPCONSTRAINTTYPE(op) \
	op(EPhysicsGripConstraintType::AccelerationConstraint) 
#define FOREACH_ENUM_EGRIPINTERFACETELEPORTBEHAVIOR(op) \
	op(EGripInterfaceTeleportBehavior::TeleportAllComponents) \
	op(EGripInterfaceTeleportBehavior::OnlyTeleportRootComponent) \
	op(EGripInterfaceTeleportBehavior::DropOnTeleport) 
#define FOREACH_ENUM_EGRIPTARGETTYPE(op) \
	op(EGripTargetType::ActorGrip) 
#define FOREACH_ENUM_EGRIPMOVEMENTREPLICATIONSETTINGS(op) \
	op(EGripMovementReplicationSettings::KeepOriginalMovement) \
	op(EGripMovementReplicationSettings::ForceServerSideMovement) \
	op(EGripMovementReplicationSettings::ForceClientSideMovement) \
	op(EGripMovementReplicationSettings::ClientSide_Authoritive) 
#define FOREACH_ENUM_EGRIPLATEUPDATESETTINGS(op) \
	op(EGripLateUpdateSettings::LateUpdatesAlwaysOn) \
	op(EGripLateUpdateSettings::LateUpdatesAlwaysOff) \
	op(EGripLateUpdateSettings::NotWhenColliding) \
	op(EGripLateUpdateSettings::NotWhenDoubleGripping) 
#define FOREACH_ENUM_ESECONDARYGRIPTYPE(op) \
	op(ESecondaryGripType::SG_None) \
	op(ESecondaryGripType::SG_Free) \
	op(ESecondaryGripType::SG_SlotOnly) \
	op(ESecondaryGripType::SG_Free_Retain) \
	op(ESecondaryGripType::SG_SlotOnly_Retain) \
	op(ESecondaryGripType::SG_FreeWithScaling_Retain) \
	op(ESecondaryGripType::SG_SlotOnlyWithScaling_Retain) \
	op(ESecondaryGripType::SG_Custom) 
#define FOREACH_ENUM_EGRIPLERPSTATE(op) \
	op(EGripLerpState::StartLerp) \
	op(EGripLerpState::EndLerp) \
	op(EGripLerpState::ConstantLerp) 
#define FOREACH_ENUM_EBPHMDDEVICETYPE(op) \
	op(EBPHMDDeviceType::DT_OculusRift) \
	op(EBPHMDDeviceType::DT_Morpheus) \
	op(EBPHMDDeviceType::DT_ES2GenericStereoMesh) \
	op(EBPHMDDeviceType::DT_SteamVR) \
	op(EBPHMDDeviceType::DT_GearVR) \
	op(EBPHMDDeviceType::DT_GoogleVR) \
	op(EBPHMDDeviceType::DT_OSVR) \
	op(EBPHMDDeviceType::DT_AppleARKit) \
	op(EBPHMDDeviceType::DT_GoogleARCore) 
#define FOREACH_ENUM_EGRIPCOLLISIONTYPE(op) \
	op(EGripCollisionType::InteractiveCollisionWithPhysics) \
	op(EGripCollisionType::InteractiveCollisionWithSweep) \
	op(EGripCollisionType::InteractiveHybridCollisionWithPhysics) \
	op(EGripCollisionType::InteractiveHybridCollisionWithSweep) \
	op(EGripCollisionType::SweepWithPhysics) \
	op(EGripCollisionType::PhysicsOnly) \
	op(EGripCollisionType::ManipulationGrip) \
	op(EGripCollisionType::ManipulationGripWithWristTwist) 
#define FOREACH_ENUM_EVRVECTORQUANTIZATION(op) \
	op(EVRVectorQuantization::RoundOneDecimal) 
#define FOREACH_ENUM_EBPVRWAISTTRACKINGMODE(op) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Front) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Rear) \
	op(EBPVRWaistTrackingMode::VRWaist_Tracked_Left) 
#define FOREACH_ENUM_EBPVRRESULTSWITCH(op) \
	op(EBPVRResultSwitch::OnSucceeded) 
#define FOREACH_ENUM_EVRCONJOINEDMOVEMENTMODES(op) \
	op(EVRConjoinedMovementModes::C_MOVE_None) \
	op(EVRConjoinedMovementModes::C_MOVE_Walking) \
	op(EVRConjoinedMovementModes::C_MOVE_NavWalking) \
	op(EVRConjoinedMovementModes::C_MOVE_Falling) \
	op(EVRConjoinedMovementModes::C_MOVE_Swimming) \
	op(EVRConjoinedMovementModes::C_MOVE_Flying) \
	op(EVRConjoinedMovementModes::C_MOVE_MAX) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Climbing) \
	op(EVRConjoinedMovementModes::C_VRMOVE_LowGrav) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Seated) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom1) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom2) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom3) \
	op(EVRConjoinedMovementModes::C_VRMOVE_Custom4) 
#define FOREACH_ENUM_EVRCUSTOMMOVEMENTMODE(op) \
	op(EVRCustomMovementMode::VRMOVE_Climbing) \
	op(EVRCustomMovementMode::VRMOVE_LowGrav) 
#define FOREACH_ENUM_EVRINTERACTIBLEAXIS(op) \
	op(EVRInteractibleAxis::Axis_X) \
	op(EVRInteractibleAxis::Axis_Y) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
