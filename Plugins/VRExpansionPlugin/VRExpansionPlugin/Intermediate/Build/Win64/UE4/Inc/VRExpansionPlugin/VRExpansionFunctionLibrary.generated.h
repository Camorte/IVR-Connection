// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
class USplineMeshComponent;
struct FVector;
struct FBPEuroLowPassFilter;
class UObject;
class USceneComponent;
struct FTransform;
struct FTransform_NetQuantize;
struct FRotator;
struct FBPActorGripInformation;
class UPrimitiveComponent;
class AActor;
enum class EBPHMDDeviceType : uint8;
enum class EBPHMDWornState : uint8;
#ifdef VREXPANSIONPLUGIN_VRExpansionFunctionLibrary_generated_h
#error "VRExpansionFunctionLibrary.generated.h already included, missing '#pragma once' in VRExpansionFunctionLibrary.h"
#endif
#define VREXPANSIONPLUGIN_VRExpansionFunctionLibrary_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSmoothUpdateLaserSpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_LaserSplineComponent); \
		P_GET_TARRAY(USplineMeshComponent*,Z_Param_LaserSplineMeshComponents); \
		P_GET_STRUCT(FVector,Z_Param_InStartLocation); \
		P_GET_STRUCT(FVector,Z_Param_InEndLocation); \
		P_GET_STRUCT(FVector,Z_Param_InForward); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LaserRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::SmoothUpdateLaserSpline(Z_Param_LaserSplineComponent,Z_Param_LaserSplineMeshComponents,Z_Param_InStartLocation,Z_Param_InEndLocation,Z_Param_InForward,Z_Param_LaserRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunEuroSmoothingFilter) \
	{ \
		P_GET_STRUCT_REF(FBPEuroLowPassFilter,Z_Param_Out_TargetEuroFilter); \
		P_GET_STRUCT(FVector,Z_Param_InRawValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SmoothedValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::RunEuroSmoothingFilter(Z_Param_Out_TargetEuroFilter,Z_Param_InRawValue,Z_Param_DeltaTime,Z_Param_Out_SmoothedValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetEuroSmoothingFilter) \
	{ \
		P_GET_STRUCT_REF(FBPEuroLowPassFilter,Z_Param_Out_TargetEuroFilter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::ResetEuroSmoothingFilter(Z_Param_Out_TargetEuroFilter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSceneComponentByClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentRelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=UVRExpansionFunctionLibrary::AddSceneComponentByClass(Z_Param_Outer,Z_Param_Class,Z_Param_Out_ComponentRelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformToTransformNetQuantize) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_TransformToTransformNetQuantize(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTransform_NetQuantize) \
	{ \
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_InTransform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::BreakTransform_NetQuantize(Z_Param_Out_InTransform,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTransform_NetQuantize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeTransform_NetQuantize(Z_Param_Location,Z_Param_Rotation,Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_FBPActorGripInformation) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::EqualEqual_FBPActorGripInformation(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName_Component) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotType); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName_Component(Z_Param_SlotType,Z_Param_Component,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotType); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName(Z_Param_SlotType,Z_Param_Actor,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsActorMovable) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsActorMovable(Z_Param_ActorToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLowPassFilter_Exponential) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_lastAverage); \
		P_GET_STRUCT(FVector,Z_Param_newSample); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_newAverage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_sampleFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::LowPassFilter_Exponential(Z_Param_lastAverage,Z_Param_newSample,Z_Param_Out_newAverage,Z_Param_sampleFactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLowPassFilter_RollingAverage) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_lastAverage); \
		P_GET_STRUCT(FVector,Z_Param_newSample); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_newAverage); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numSamples); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::LowPassFilter_RollingAverage(Z_Param_lastAverage,Z_Param_newSample,Z_Param_Out_newAverage,Z_Param_numSamples); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNonAuthorityMinimumAreaRectangle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InVerts); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SampleSurfaceNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRectCenter); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRectRotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSideLengthX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSideLengthY); \
		P_GET_UBOOL(Z_Param_bDebugDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::NonAuthorityMinimumAreaRectangle(Z_Param_WorldContextObject,Z_Param_Out_InVerts,Z_Param_Out_SampleSurfaceNormal,Z_Param_Out_OutRectCenter,Z_Param_Out_OutRectRotation,Z_Param_Out_OutSideLengthX,Z_Param_Out_OutSideLengthY,Z_Param_bDebugDraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInVREditorPreview) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreview(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInVREditorPreviewOrGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreviewOrGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EBPHMDDeviceType*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHMDWorn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EBPHMDWornState*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDWorn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHMDConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateAroundPivot) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_RotationDelta); \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_GET_STRUCT(FRotator,Z_Param_OriginalRotation); \
		P_GET_STRUCT(FVector,Z_Param_PivotPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_GET_UBOOL(Z_Param_bUseOriginalYawOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::RotateAroundPivot(Z_Param_RotationDelta,Z_Param_OriginalLocation,Z_Param_OriginalRotation,Z_Param_PivotPoint,Z_Param_Out_NewLocation,Z_Param_Out_NewRotation,Z_Param_bUseOriginalYawOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDPureYaw) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_HMDRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDPureYaw(Z_Param_HMDRotation); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSmoothUpdateLaserSpline) \
	{ \
		P_GET_OBJECT(USplineComponent,Z_Param_LaserSplineComponent); \
		P_GET_TARRAY(USplineMeshComponent*,Z_Param_LaserSplineMeshComponents); \
		P_GET_STRUCT(FVector,Z_Param_InStartLocation); \
		P_GET_STRUCT(FVector,Z_Param_InEndLocation); \
		P_GET_STRUCT(FVector,Z_Param_InForward); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LaserRadius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::SmoothUpdateLaserSpline(Z_Param_LaserSplineComponent,Z_Param_LaserSplineMeshComponents,Z_Param_InStartLocation,Z_Param_InEndLocation,Z_Param_InForward,Z_Param_LaserRadius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunEuroSmoothingFilter) \
	{ \
		P_GET_STRUCT_REF(FBPEuroLowPassFilter,Z_Param_Out_TargetEuroFilter); \
		P_GET_STRUCT(FVector,Z_Param_InRawValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SmoothedValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::RunEuroSmoothingFilter(Z_Param_Out_TargetEuroFilter,Z_Param_InRawValue,Z_Param_DeltaTime,Z_Param_Out_SmoothedValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetEuroSmoothingFilter) \
	{ \
		P_GET_STRUCT_REF(FBPEuroLowPassFilter,Z_Param_Out_TargetEuroFilter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::ResetEuroSmoothingFilter(Z_Param_Out_TargetEuroFilter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSceneComponentByClass) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Outer); \
		P_GET_OBJECT(UClass,Z_Param_Class); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ComponentRelativeTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=UVRExpansionFunctionLibrary::AddSceneComponentByClass(Z_Param_Outer,Z_Param_Class,Z_Param_Out_ComponentRelativeTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConv_TransformToTransformNetQuantize) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::Conv_TransformToTransformNetQuantize(Z_Param_Out_InTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBreakTransform_NetQuantize) \
	{ \
		P_GET_STRUCT_REF(FTransform_NetQuantize,Z_Param_Out_InTransform); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::BreakTransform_NetQuantize(Z_Param_Out_InTransform,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_Out_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeTransform_NetQuantize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_STRUCT(FVector,Z_Param_Scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform_NetQuantize*)Z_Param__Result=UVRExpansionFunctionLibrary::MakeTransform_NetQuantize(Z_Param_Location,Z_Param_Rotation,Z_Param_Scale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_FBPActorGripInformation) \
	{ \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FBPActorGripInformation,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::EqualEqual_FBPActorGripInformation(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName_Component) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotType); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName_Component(Z_Param_SlotType,Z_Param_Component,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGripSlotInRangeByTypeName) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SlotType); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT(FVector,Z_Param_WorldLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxRange); \
		P_GET_UBOOL_REF(Z_Param_Out_bHadSlotInRange); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SlotWorldTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName(Z_Param_SlotType,Z_Param_Actor,Z_Param_WorldLocation,Z_Param_MaxRange,Z_Param_Out_bHadSlotInRange,Z_Param_Out_SlotWorldTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsActorMovable) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorToCheck); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsActorMovable(Z_Param_ActorToCheck); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLowPassFilter_Exponential) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_lastAverage); \
		P_GET_STRUCT(FVector,Z_Param_newSample); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_newAverage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_sampleFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::LowPassFilter_Exponential(Z_Param_lastAverage,Z_Param_newSample,Z_Param_Out_newAverage,Z_Param_sampleFactor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLowPassFilter_RollingAverage) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_lastAverage); \
		P_GET_STRUCT(FVector,Z_Param_newSample); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_newAverage); \
		P_GET_PROPERTY(UIntProperty,Z_Param_numSamples); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::LowPassFilter_RollingAverage(Z_Param_lastAverage,Z_Param_newSample,Z_Param_Out_newAverage,Z_Param_numSamples); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNonAuthorityMinimumAreaRectangle) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InVerts); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SampleSurfaceNormal); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRectCenter); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRectRotation); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSideLengthX); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_OutSideLengthY); \
		P_GET_UBOOL(Z_Param_bDebugDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::NonAuthorityMinimumAreaRectangle(Z_Param_WorldContextObject,Z_Param_Out_InVerts,Z_Param_Out_SampleSurfaceNormal,Z_Param_Out_OutRectCenter,Z_Param_Out_OutRectRotation,Z_Param_Out_OutSideLengthX,Z_Param_Out_OutSideLengthY,Z_Param_bDebugDraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInVREditorPreview) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreview(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInVREditorPreviewOrGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::IsInVREditorPreviewOrGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EBPHMDDeviceType*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHMDWorn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EBPHMDWornState*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDWorn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsHMDConnected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVRExpansionFunctionLibrary::GetIsHMDConnected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateAroundPivot) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_RotationDelta); \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_GET_STRUCT(FRotator,Z_Param_OriginalRotation); \
		P_GET_STRUCT(FVector,Z_Param_PivotPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_NewRotation); \
		P_GET_UBOOL(Z_Param_bUseOriginalYawOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVRExpansionFunctionLibrary::RotateAroundPivot(Z_Param_RotationDelta,Z_Param_OriginalLocation,Z_Param_OriginalRotation,Z_Param_PivotPoint,Z_Param_Out_NewLocation,Z_Param_Out_NewRotation,Z_Param_bUseOriginalYawOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHMDPureYaw) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_HMDRotation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UVRExpansionFunctionLibrary::GetHMDPureYaw(Z_Param_HMDRotation); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRExpansionFunctionLibrary(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRExpansionFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUVRExpansionFunctionLibrary(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRExpansionFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRExpansionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRExpansionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRExpansionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRExpansionFunctionLibrary(UVRExpansionFunctionLibrary&&); \
	NO_API UVRExpansionFunctionLibrary(const UVRExpansionFunctionLibrary&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRExpansionFunctionLibrary(UVRExpansionFunctionLibrary&&); \
	NO_API UVRExpansionFunctionLibrary(const UVRExpansionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRExpansionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRExpansionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRExpansionFunctionLibrary)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_35_PROLOG
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRExpansionFunctionLibrary_h


#define FOREACH_ENUM_EBPHMDWORNSTATE(op) \
	op(EBPHMDWornState::Unknown) \
	op(EBPHMDWornState::Worn) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
