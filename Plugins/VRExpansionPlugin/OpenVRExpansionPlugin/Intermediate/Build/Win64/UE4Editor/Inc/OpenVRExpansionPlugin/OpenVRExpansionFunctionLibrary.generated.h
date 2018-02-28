// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
class UTexture;
class UTexture2D;
struct FBPOpenVRCameraHandle;
enum class EBPOVRResultSwitch : uint8;
enum class EOpenVRCameraFrameType : uint8;
enum class EVRDeviceProperty_Matrix34 : uint8;
struct FTransform;
enum class EVRDeviceProperty_UInt64 : uint8;
enum class EVRDeviceProperty_Int32 : uint8;
enum class EVRDeviceProperty_Float : uint8;
enum class EVRDeviceProperty_Bool : uint8;
enum class EVRDeviceProperty_String : uint8;
class UObject;
enum class EBPSteamVRTrackedDeviceType : uint8;
class UProceduralMeshComponent;
enum class EAsyncBlueprintResultSwitch : uint8;
enum class EBPVRDeviceIndex : uint8;
#ifdef OPENVREXPANSIONPLUGIN_OpenVRExpansionFunctionLibrary_generated_h
#error "OpenVRExpansionFunctionLibrary.generated.h already included, missing '#pragma once' in OpenVRExpansionFunctionLibrary.h"
#endif
#define OPENVREXPANSIONPLUGIN_OpenVRExpansionFunctionLibrary_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_133_GENERATED_BODY \
	friend OPENVREXPANSIONPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FBPOpenVRCameraHandle(); \
	static class UScriptStruct* StaticStruct();


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSuspendRendering) \
	{ \
		P_GET_UBOOL(Z_Param_bSuspendRendering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSuspendRendering(Z_Param_bSuspendRendering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentVRGripAlpha) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_VRGridAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetCurrentVRGripAlpha(Z_Param_Out_VRGridAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeVRGrid) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fSeconds); \
		P_GET_UBOOL(Z_Param_bFadeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::FadeVRGrid(Z_Param_fSeconds,Z_Param_bFadeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHMDFadeColor) \
	{ \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_ColorOut); \
		P_GET_UBOOL(Z_Param_bBackground); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetCurrentHMDFadeColor(Z_Param_Out_ColorOut,Z_Param_bBackground); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeHMDToColor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fSeconds); \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_GET_UBOOL(Z_Param_bBackground); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::FadeHMDToColor(Z_Param_fSeconds,Z_Param_Color,Z_Param_bBackground); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSkyboxOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::ClearSkyboxOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkyboxOverride) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_tFront); \
		P_GET_OBJECT(UTexture2D,Z_Param_tBack); \
		P_GET_OBJECT(UTexture,Z_Param_tLeft); \
		P_GET_OBJECT(UTexture,Z_Param_tRight); \
		P_GET_OBJECT(UTexture,Z_Param_tTop); \
		P_GET_OBJECT(UTexture,Z_Param_tBottom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride(Z_Param_tFront,Z_Param_tBack,Z_Param_tLeft,Z_Param_tRight,Z_Param_tTop,Z_Param_tBottom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkyboxOverride_LatLongStereoPair) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkyboxL); \
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkyboxR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride_LatLongStereoPair(Z_Param_LatLongSkyboxL,Z_Param_LatLongSkyboxR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkyboxOverride_LatLong) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkybox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride_LatLong(Z_Param_LatLongSkybox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::IsValid(Z_Param_Out_CameraHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseVRCamera) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::ReleaseVRCamera(Z_Param_Out_CameraHandle,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcquireVRCamera) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::AcquireVRCamera(Z_Param_Out_CameraHandle,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCameraTexture2D) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UOpenVRExpansionFunctionLibrary::CreateCameraTexture2D(Z_Param_Out_CameraHandle,EOpenVRCameraFrameType(Z_Param_FrameType),(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRCameraFrame) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_GET_OBJECT(UTexture2D,Z_Param_TargetRenderTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRCameraFrame(Z_Param_Out_CameraHandle,EOpenVRCameraFrameType(Z_Param_FrameType),(EBPOVRResultSwitch&)(Z_Param_Out_Result),Z_Param_TargetRenderTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasVRCamera) \
	{ \
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::HasVRCamera(EOpenVRCameraFrameType(Z_Param_FrameType),Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyMatrix34AsTransform) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_Matrix34,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyMatrix34AsTransform(EVRDeviceProperty_Matrix34(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_TransformValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyUInt64) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_UInt64,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_UInt64Value); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyUInt64(EVRDeviceProperty_UInt64(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_UInt64Value,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyInt32) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_Int32,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyInt32(EVRDeviceProperty_Int32(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_IntValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyFloat) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_Float,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyFloat(EVRDeviceProperty_Float(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_FloatValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyBool) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_Bool,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_UBOOL_REF(Z_Param_Out_BoolValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyBool(EVRDeviceProperty_Bool(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_BoolValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyString) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_String,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyString(EVRDeviceProperty_String(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_StringValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDeviceModelAndTexture) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_ENUM(EBPSteamVRTrackedDeviceType,Z_Param_DeviceType); \
		P_GET_TARRAY(UProceduralMeshComponent*,Z_Param_ProceduralMeshComponentsToFill); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_ENUM_REF(EAsyncBlueprintResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EBPVRDeviceIndex,Z_Param_OverrideDeviceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetVRDeviceModelAndTexture(Z_Param_WorldContextObject,EBPSteamVRTrackedDeviceType(Z_Param_DeviceType),Z_Param_ProceduralMeshComponentsToFill,Z_Param_bCreateCollision,(EAsyncBlueprintResultSwitch&)(Z_Param_Out_Result),EBPVRDeviceIndex(Z_Param_OverrideDeviceID)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpenVRDeviceConnected) \
	{ \
		P_GET_ENUM(EBPVRDeviceIndex,Z_Param_OpenVRDeviceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::IsOpenVRDeviceConnected(EBPVRDeviceIndex(Z_Param_OpenVRDeviceIndex)); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSuspendRendering) \
	{ \
		P_GET_UBOOL(Z_Param_bSuspendRendering); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSuspendRendering(Z_Param_bSuspendRendering); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentVRGripAlpha) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_VRGridAlpha); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetCurrentVRGripAlpha(Z_Param_Out_VRGridAlpha); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeVRGrid) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fSeconds); \
		P_GET_UBOOL(Z_Param_bFadeIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::FadeVRGrid(Z_Param_fSeconds,Z_Param_bFadeIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHMDFadeColor) \
	{ \
		P_GET_STRUCT_REF(FColor,Z_Param_Out_ColorOut); \
		P_GET_UBOOL(Z_Param_bBackground); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetCurrentHMDFadeColor(Z_Param_Out_ColorOut,Z_Param_bBackground); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFadeHMDToColor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fSeconds); \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_GET_UBOOL(Z_Param_bBackground); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::FadeHMDToColor(Z_Param_fSeconds,Z_Param_Color,Z_Param_bBackground); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearSkyboxOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::ClearSkyboxOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkyboxOverride) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_tFront); \
		P_GET_OBJECT(UTexture2D,Z_Param_tBack); \
		P_GET_OBJECT(UTexture,Z_Param_tLeft); \
		P_GET_OBJECT(UTexture,Z_Param_tRight); \
		P_GET_OBJECT(UTexture,Z_Param_tTop); \
		P_GET_OBJECT(UTexture,Z_Param_tBottom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride(Z_Param_tFront,Z_Param_tBack,Z_Param_tLeft,Z_Param_tRight,Z_Param_tTop,Z_Param_tBottom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkyboxOverride_LatLongStereoPair) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkyboxL); \
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkyboxR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride_LatLongStereoPair(Z_Param_LatLongSkyboxL,Z_Param_LatLongSkyboxR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkyboxOverride_LatLong) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_LatLongSkybox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::SetSkyboxOverride_LatLong(Z_Param_LatLongSkybox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::IsValid(Z_Param_Out_CameraHandle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseVRCamera) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::ReleaseVRCamera(Z_Param_Out_CameraHandle,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAcquireVRCamera) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::AcquireVRCamera(Z_Param_Out_CameraHandle,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateCameraTexture2D) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UOpenVRExpansionFunctionLibrary::CreateCameraTexture2D(Z_Param_Out_CameraHandle,EOpenVRCameraFrameType(Z_Param_FrameType),(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRCameraFrame) \
	{ \
		P_GET_STRUCT_REF(FBPOpenVRCameraHandle,Z_Param_Out_CameraHandle); \
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_GET_OBJECT(UTexture2D,Z_Param_TargetRenderTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRCameraFrame(Z_Param_Out_CameraHandle,EOpenVRCameraFrameType(Z_Param_FrameType),(EBPOVRResultSwitch&)(Z_Param_Out_Result),Z_Param_TargetRenderTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasVRCamera) \
	{ \
		P_GET_ENUM(EOpenVRCameraFrameType,Z_Param_FrameType); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Width); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::HasVRCamera(EOpenVRCameraFrameType(Z_Param_FrameType),Z_Param_Out_Width,Z_Param_Out_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyMatrix34AsTransform) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_Matrix34,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_TransformValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyMatrix34AsTransform(EVRDeviceProperty_Matrix34(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_TransformValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyUInt64) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_UInt64,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_UInt64Value); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyUInt64(EVRDeviceProperty_UInt64(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_UInt64Value,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyInt32) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_Int32,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyInt32(EVRDeviceProperty_Int32(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_IntValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyFloat) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_Float,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyFloat(EVRDeviceProperty_Float(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_FloatValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyBool) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_Bool,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_UBOOL_REF(Z_Param_Out_BoolValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyBool(EVRDeviceProperty_Bool(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_BoolValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDevicePropertyString) \
	{ \
		P_GET_ENUM(EVRDeviceProperty_String,Z_Param_PropertyToRetrieve); \
		P_GET_PROPERTY(UIntProperty,Z_Param_DeviceID); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_StringValue); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyString(EVRDeviceProperty_String(Z_Param_PropertyToRetrieve),Z_Param_DeviceID,Z_Param_Out_StringValue,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVRDeviceModelAndTexture) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_ENUM(EBPSteamVRTrackedDeviceType,Z_Param_DeviceType); \
		P_GET_TARRAY(UProceduralMeshComponent*,Z_Param_ProceduralMeshComponentsToFill); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_ENUM_REF(EAsyncBlueprintResultSwitch,Z_Param_Out_Result); \
		P_GET_ENUM(EBPVRDeviceIndex,Z_Param_OverrideDeviceID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UOpenVRExpansionFunctionLibrary::GetVRDeviceModelAndTexture(Z_Param_WorldContextObject,EBPSteamVRTrackedDeviceType(Z_Param_DeviceType),Z_Param_ProceduralMeshComponentsToFill,Z_Param_bCreateCollision,(EAsyncBlueprintResultSwitch&)(Z_Param_Out_Result),EBPVRDeviceIndex(Z_Param_OverrideDeviceID)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOpenVRDeviceConnected) \
	{ \
		P_GET_ENUM(EBPVRDeviceIndex,Z_Param_OpenVRDeviceIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOpenVRExpansionFunctionLibrary::IsOpenVRDeviceConnected(EBPVRDeviceIndex(Z_Param_OpenVRDeviceIndex)); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenVRExpansionFunctionLibrary(); \
	friend OPENVREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary(); \
public: \
	DECLARE_CLASS(UOpenVRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OpenVRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenVRExpansionFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_INCLASS \
private: \
	static void StaticRegisterNativesUOpenVRExpansionFunctionLibrary(); \
	friend OPENVREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary(); \
public: \
	DECLARE_CLASS(UOpenVRExpansionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OpenVRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOpenVRExpansionFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenVRExpansionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenVRExpansionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenVRExpansionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenVRExpansionFunctionLibrary(UOpenVRExpansionFunctionLibrary&&); \
	NO_API UOpenVRExpansionFunctionLibrary(const UOpenVRExpansionFunctionLibrary&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenVRExpansionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenVRExpansionFunctionLibrary(UOpenVRExpansionFunctionLibrary&&); \
	NO_API UOpenVRExpansionFunctionLibrary(const UOpenVRExpansionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenVRExpansionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenVRExpansionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenVRExpansionFunctionLibrary)


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_416_PROLOG
#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h_420_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OpenVRExpansionFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_OpenVRExpansionFunctionLibrary_h


#define FOREACH_ENUM_EVRDEVICEPROPERTY_MATRIX34(op) \
	op(EVRDeviceProperty_Matrix34::Prop_StatusDisplayTransform_Matrix34_1013) 
#define FOREACH_ENUM_EVRDEVICEPROPERTY_UINT64(op) \
	op(EVRDeviceProperty_UInt64::Prop_HardwareRevision_Uint64_1017) \
	op(EVRDeviceProperty_UInt64::Prop_FirmwareVersion_Uint64_1018) \
	op(EVRDeviceProperty_UInt64::Prop_FPGAVersion_Uint64_1019) \
	op(EVRDeviceProperty_UInt64::Prop_VRCVersion_Uint64_1020) \
	op(EVRDeviceProperty_UInt64::Prop_RadioVersion_Uint64_1021) \
	op(EVRDeviceProperty_UInt64::Prop_DongleVersion_Uint64_1022) \
	op(EVRDeviceProperty_UInt64::Prop_ParentDriver_Uint64_1034) \
	op(EVRDeviceProperty_UInt64::HMDProp_CurrentUniverseId_Uint64_2004) \
	op(EVRDeviceProperty_UInt64::HMDProp_PreviousUniverseId_Uint64_2005) \
	op(EVRDeviceProperty_UInt64::HMDProp_DisplayFirmwareVersion_Uint64_2006) \
	op(EVRDeviceProperty_UInt64::HMDProp_CameraFirmwareVersion_Uint64_2027) \
	op(EVRDeviceProperty_UInt64::HMDProp_DisplayFPGAVersion_Uint64_2029) \
	op(EVRDeviceProperty_UInt64::HMDProp_DisplayBootloaderVersion_Uint64_2030) \
	op(EVRDeviceProperty_UInt64::HMDProp_DisplayHardwareVersion_Uint64_2031) \
	op(EVRDeviceProperty_UInt64::HMDProp_AudioFirmwareVersion_Uint64_2032) \
	op(EVRDeviceProperty_UInt64::HMDProp_GraphicsAdapterLuid_Uint64_2045) 
#define FOREACH_ENUM_EVRDEVICEPROPERTY_INT32(op) \
	op(EVRDeviceProperty_Int32::Prop_DeviceClass_Int32_1029) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayMCType_Int32_2008) \
	op(EVRDeviceProperty_Int32::HMDProp_EdidVendorID_Int32_2011) \
	op(EVRDeviceProperty_Int32::HMDProp_EdidProductID_Int32_2015) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayGCType_Int32_2017) \
	op(EVRDeviceProperty_Int32::HMDProp_CameraCompatibilityMode_Int32_2033) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayMCImageWidth_Int32_2038) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayMCImageHeight_Int32_2039) \
	op(EVRDeviceProperty_Int32::HMDProp_DisplayMCImageNumChannels_Int32_2040) \
	op(EVRDeviceProperty_Int32::ControllerProp_Axis0Type_Int32_3002) \
	op(EVRDeviceProperty_Int32::ControllerPropProp_Axis1Type_Int32_3003) \
	op(EVRDeviceProperty_Int32::ControllerPropProp_Axis2Type_Int32_3004) \
	op(EVRDeviceProperty_Int32::ControllerPropProp_Axis3Type_Int32_3005) \
	op(EVRDeviceProperty_Int32::ControllerPropProp_Axis4Type_Int32_3006) 
#define FOREACH_ENUM_EVRDEVICEPROPERTY_FLOAT(op) \
	op(EVRDeviceProperty_Float::Prop_DeviceBatteryPercentage_Float_1012) \
	op(EVRDeviceProperty_Float::HMDProp_SecondsFromVsyncToPhotons_Float_2001) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayFrequency_Float_2002) \
	op(EVRDeviceProperty_Float::HMDProp_UserIpdMeters_Float_2003) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayMCOffset_Float_2009) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayMCScale_Float_2010) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayGCBlackClamp_Float_2014) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayGCOffset_Float_2018) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayGCScale_Float_2019) \
	op(EVRDeviceProperty_Float::HMDProp_DisplayGCPrescale_Float_2020) \
	op(EVRDeviceProperty_Float::HMDProp_LensCenterLeftU_Float_2022) \
	op(EVRDeviceProperty_Float::HMDProp_LensCenterLeftV_Float_2023) \
	op(EVRDeviceProperty_Float::HMDProp_LensCenterRightU_Float_2024) \
	op(EVRDeviceProperty_Float::HMDProp_LensCenterRightV_Float_2025) \
	op(EVRDeviceProperty_Float::HMDProp_UserHeadToEyeDepthMeters_Float_2026) \
	op(EVRDeviceProperty_Float::HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034) \
	op(EVRDeviceProperty_Float::HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035) \
	op(EVRDeviceProperty_Float::HMDProp_SecondsFromPhotonsToVblank_Float_2042) \
	op(EVRDeviceProperty_Float::TrackRefProp_FieldOfViewLeftDegrees_Float_4000) \
	op(EVRDeviceProperty_Float::TrackRefProp_FieldOfViewRightDegrees_Float_4001) \
	op(EVRDeviceProperty_Float::TrackRefProp_FieldOfViewTopDegrees_Float_4002) \
	op(EVRDeviceProperty_Float::TrackRefProp_FieldOfViewBottomDegrees_Float_4003) \
	op(EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMinimumMeters_Float_4004) 
#define FOREACH_ENUM_EVRDEVICEPROPERTY_BOOL(op) \
	op(EVRDeviceProperty_Bool::Prop_WillDriftInYaw_Bool_1004) \
	op(EVRDeviceProperty_Bool::Prop_DeviceIsWireless_Bool_1010) \
	op(EVRDeviceProperty_Bool::Prop_DeviceIsCharging_Bool_1011) \
	op(EVRDeviceProperty_Bool::Prop_Firmware_UpdateAvailable_Bool_1014) \
	op(EVRDeviceProperty_Bool::Prop_Firmware_ManualUpdate_Bool_1015) \
	op(EVRDeviceProperty_Bool::Prop_BlockServerShutdown_Bool_1023) \
	op(EVRDeviceProperty_Bool::Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024) \
	op(EVRDeviceProperty_Bool::Prop_ContainsProximitySensor_Bool_1025) \
	op(EVRDeviceProperty_Bool::Prop_DeviceProvidesBatteryStatus_Bool_1026) \
	op(EVRDeviceProperty_Bool::Prop_DeviceCanPowerOff_Bool_1027) \
	op(EVRDeviceProperty_Bool::Prop_HasCamera_Bool_1030) \
	op(EVRDeviceProperty_Bool::Prop_Firmware_ForceUpdateRequired_Bool_1032) \
	op(EVRDeviceProperty_Bool::Prop_ViveSystemButtonFixRequired_Bool_1033) \
	op(EVRDeviceProperty_Bool::HMDProp_ReportsTimeSinceVSync_Bool_2000) \
	op(EVRDeviceProperty_Bool::HMDProp_IsOnDesktop_Bool_2007) \
	op(EVRDeviceProperty_Bool::HMDProp_DisplaySuppressed_Bool_2036) \
	op(EVRDeviceProperty_Bool::HMDProp_DisplayAllowNightMode_Bool_2037) \
	op(EVRDeviceProperty_Bool::HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043) \
	op(EVRDeviceProperty_Bool::HMDProp_DisplayDebugMode_Bool_2044) \
	op(EVRDeviceProperty_Bool::DriverProp_HasDisplayComponent_Bool_6002) \
	op(EVRDeviceProperty_Bool::DriverProp_HasControllerComponent_Bool_6003) \
	op(EVRDeviceProperty_Bool::DriverProp_HasCameraComponent_Bool_6004) \
	op(EVRDeviceProperty_Bool::DriverProp_HasDriverDirectModeComponent_Bool_6005) 
#define FOREACH_ENUM_EVRDEVICEPROPERTY_STRING(op) \
	op(EVRDeviceProperty_String::Prop_TrackingSystemName_String_1000) \
	op(EVRDeviceProperty_String::Prop_ModelNumber_String_1001) \
	op(EVRDeviceProperty_String::Prop_SerialNumber_String_1002) \
	op(EVRDeviceProperty_String::Prop_RenderModelName_String_1003) \
	op(EVRDeviceProperty_String::Prop_ManufacturerName_String_1005) \
	op(EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String_1006) \
	op(EVRDeviceProperty_String::Prop_HardwareRevision_String_1007) \
	op(EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String_1008) \
	op(EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String_1009) \
	op(EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String_1016) \
	op(EVRDeviceProperty_String::Prop_Firmware_ProgrammingTarget_String_1028) \
	op(EVRDeviceProperty_String::Prop_DriverVersion_String_1031) \
	op(EVRDeviceProperty_String::Prop_ResourceRoot_String_1035) \
	op(EVRDeviceProperty_String::HMDProp_DisplayMCImageLeft_String_2012) \
	op(EVRDeviceProperty_String::HMDProp_DisplayMCImageRight_String_2013) \
	op(EVRDeviceProperty_String::HMDProp_DisplayGCImage_String_2021) \
	op(EVRDeviceProperty_String::HMDProp_CameraFirmwareDescription_String_2028) \
	op(EVRDeviceProperty_String::HMDProp_DriverProvidedChaperonePath_String_2048) \
	op(EVRDeviceProperty_String::ControllerProp_AttachedDeviceId_String_3000) \
	op(EVRDeviceProperty_String::TrackRefProp_ModeLabel_String_4006) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceOff_String_5001) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearching_String_5002) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearchingAlert_String_5003) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReady_String_5004) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReadyAlert_String_5005) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceNotReady_String_5006) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceStandby_String_5007) \
	op(EVRDeviceProperty_String::UIProp_NamedIconPathDeviceAlertLow_String_5008) \
	op(EVRDeviceProperty_String::DriverProp_UserConfigPath_String_6000) 
#define FOREACH_ENUM_EBPSTEAMVRTRACKEDDEVICETYPE(op) \
	op(EBPSteamVRTrackedDeviceType::Controller) \
	op(EBPSteamVRTrackedDeviceType::TrackingReference) \
	op(EBPSteamVRTrackedDeviceType::Other) 
#define FOREACH_ENUM_EASYNCBLUEPRINTRESULTSWITCH(op) \
	op(EAsyncBlueprintResultSwitch::OnSuccess) \
	op(EAsyncBlueprintResultSwitch::AsyncLoading) 
#define FOREACH_ENUM_EOPENVRCAMERAFRAMETYPE(op) \
	op(EOpenVRCameraFrameType::VRFrameType_Distorted) \
	op(EOpenVRCameraFrameType::VRFrameType_Undistorted) 
#define FOREACH_ENUM_EBPOVRRESULTSWITCH(op) \
	op(EBPOVRResultSwitch::OnSucceeded) 
#define FOREACH_ENUM_EBPVRDEVICEINDEX(op) \
	op(EBPVRDeviceIndex::HMD) \
	op(EBPVRDeviceIndex::FirstTracking_Reference) \
	op(EBPVRDeviceIndex::SecondTracking_Reference) \
	op(EBPVRDeviceIndex::FirstController) \
	op(EBPVRDeviceIndex::SecondController) \
	op(EBPVRDeviceIndex::TrackedDevice1) \
	op(EBPVRDeviceIndex::TrackedDevice2) \
	op(EBPVRDeviceIndex::TrackedDevice3) \
	op(EBPVRDeviceIndex::TrackedDevice4) \
	op(EBPVRDeviceIndex::TrackedDevice5) \
	op(EBPVRDeviceIndex::TrackedDevice6) \
	op(EBPVRDeviceIndex::TrackedDevice7) \
	op(EBPVRDeviceIndex::TrackedDevice8) \
	op(EBPVRDeviceIndex::TrackedDevice9) \
	op(EBPVRDeviceIndex::TrackedDevice10) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
