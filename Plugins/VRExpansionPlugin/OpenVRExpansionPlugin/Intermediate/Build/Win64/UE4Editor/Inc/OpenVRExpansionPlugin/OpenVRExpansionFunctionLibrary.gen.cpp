// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OpenVRExpansionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenVRExpansionFunctionLibrary() {}
// Cross Module References
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34();
	UPackage* Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex();
	OPENVREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPOpenVRCameraHandle();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_NoRegister();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering();
// End Cross Module References
	static UEnum* EVRDeviceProperty_Matrix34_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Matrix34"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Matrix34(EVRDeviceProperty_Matrix34_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Matrix34"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34_CRC() { return 1928172148U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Matrix34"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_Matrix34::Prop_StatusDisplayTransform_Matrix34_1013", (int64)EVRDeviceProperty_Matrix34::Prop_StatusDisplayTransform_Matrix34_1013 },
				{ "EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransform_Matrix34_2016", (int64)EVRDeviceProperty_Matrix34::HMDProp_CameraToHeadTransform_Matrix34_2016 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HMDProp_CameraToHeadTransform_Matrix34_2016.DisplayName", "HMDProp_CameraToHeadTransform_Matrix34" },
				{ "HMDProp_CameraToHeadTransform_Matrix34_2016.ToolTip", "1 Prefix = 2000 series" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_StatusDisplayTransform_Matrix34_1013.DisplayName", "Prop_StatusDisplayTransform_Matrix34" },
				{ "Prop_StatusDisplayTransform_Matrix34_1013.ToolTip", "No prefix = 1000 series" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRDeviceProperty_Matrix34",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRDeviceProperty_Matrix34",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRDeviceProperty_UInt64_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_UInt64"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_UInt64(EVRDeviceProperty_UInt64_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_UInt64"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64_CRC() { return 2560482690U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_UInt64"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_UInt64::Prop_HardwareRevision_Uint64_1017", (int64)EVRDeviceProperty_UInt64::Prop_HardwareRevision_Uint64_1017 },
				{ "EVRDeviceProperty_UInt64::Prop_FirmwareVersion_Uint64_1018", (int64)EVRDeviceProperty_UInt64::Prop_FirmwareVersion_Uint64_1018 },
				{ "EVRDeviceProperty_UInt64::Prop_FPGAVersion_Uint64_1019", (int64)EVRDeviceProperty_UInt64::Prop_FPGAVersion_Uint64_1019 },
				{ "EVRDeviceProperty_UInt64::Prop_VRCVersion_Uint64_1020", (int64)EVRDeviceProperty_UInt64::Prop_VRCVersion_Uint64_1020 },
				{ "EVRDeviceProperty_UInt64::Prop_RadioVersion_Uint64_1021", (int64)EVRDeviceProperty_UInt64::Prop_RadioVersion_Uint64_1021 },
				{ "EVRDeviceProperty_UInt64::Prop_DongleVersion_Uint64_1022", (int64)EVRDeviceProperty_UInt64::Prop_DongleVersion_Uint64_1022 },
				{ "EVRDeviceProperty_UInt64::Prop_ParentDriver_Uint64_1034", (int64)EVRDeviceProperty_UInt64::Prop_ParentDriver_Uint64_1034 },
				{ "EVRDeviceProperty_UInt64::HMDProp_CurrentUniverseId_Uint64_2004", (int64)EVRDeviceProperty_UInt64::HMDProp_CurrentUniverseId_Uint64_2004 },
				{ "EVRDeviceProperty_UInt64::HMDProp_PreviousUniverseId_Uint64_2005", (int64)EVRDeviceProperty_UInt64::HMDProp_PreviousUniverseId_Uint64_2005 },
				{ "EVRDeviceProperty_UInt64::HMDProp_DisplayFirmwareVersion_Uint64_2006", (int64)EVRDeviceProperty_UInt64::HMDProp_DisplayFirmwareVersion_Uint64_2006 },
				{ "EVRDeviceProperty_UInt64::HMDProp_CameraFirmwareVersion_Uint64_2027", (int64)EVRDeviceProperty_UInt64::HMDProp_CameraFirmwareVersion_Uint64_2027 },
				{ "EVRDeviceProperty_UInt64::HMDProp_DisplayFPGAVersion_Uint64_2029", (int64)EVRDeviceProperty_UInt64::HMDProp_DisplayFPGAVersion_Uint64_2029 },
				{ "EVRDeviceProperty_UInt64::HMDProp_DisplayBootloaderVersion_Uint64_2030", (int64)EVRDeviceProperty_UInt64::HMDProp_DisplayBootloaderVersion_Uint64_2030 },
				{ "EVRDeviceProperty_UInt64::HMDProp_DisplayHardwareVersion_Uint64_2031", (int64)EVRDeviceProperty_UInt64::HMDProp_DisplayHardwareVersion_Uint64_2031 },
				{ "EVRDeviceProperty_UInt64::HMDProp_AudioFirmwareVersion_Uint64_2032", (int64)EVRDeviceProperty_UInt64::HMDProp_AudioFirmwareVersion_Uint64_2032 },
				{ "EVRDeviceProperty_UInt64::HMDProp_GraphicsAdapterLuid_Uint64_2045", (int64)EVRDeviceProperty_UInt64::HMDProp_GraphicsAdapterLuid_Uint64_2045 },
				{ "EVRDeviceProperty_UInt64::ControllerProp_SupportedButtons_Uint64_3001", (int64)EVRDeviceProperty_UInt64::ControllerProp_SupportedButtons_Uint64_3001 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerProp_SupportedButtons_Uint64_3001.DisplayName", "ControllerProp_SupportedButtons_Uint64" },
				{ "ControllerProp_SupportedButtons_Uint64_3001.ToolTip", "2 Prefix = 3000 series" },
				{ "HMDProp_AudioFirmwareVersion_Uint64_2032.DisplayName", "HMDProp_AudioFirmwareVersion_Uint64" },
				{ "HMDProp_CameraFirmwareVersion_Uint64_2027.DisplayName", "HMDProp_CameraFirmwareVersion_Uint64" },
				{ "HMDProp_CurrentUniverseId_Uint64_2004.DisplayName", "HMDProp_CurrentUniverseId_Uint64" },
				{ "HMDProp_CurrentUniverseId_Uint64_2004.ToolTip", "1 Prefix = 2000 series" },
				{ "HMDProp_DisplayBootloaderVersion_Uint64_2030.DisplayName", "HMDProp_DisplayBootloaderVersion_Uint64" },
				{ "HMDProp_DisplayFirmwareVersion_Uint64_2006.DisplayName", "HMDProp_DisplayFirmwareVersion_Uint64" },
				{ "HMDProp_DisplayFPGAVersion_Uint64_2029.DisplayName", "HMDProp_DisplayFPGAVersion_Uint64" },
				{ "HMDProp_DisplayHardwareVersion_Uint64_2031.DisplayName", "HMDProp_DisplayHardwareVersion_Uint64" },
				{ "HMDProp_GraphicsAdapterLuid_Uint64_2045.DisplayName", "HMDProp_GraphicsAdapterLuid_Uint64" },
				{ "HMDProp_PreviousUniverseId_Uint64_2005.DisplayName", "HMDProp_PreviousUniverseId_Uint64" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_DongleVersion_Uint64_1022.DisplayName", "Prop_DongleVersion_Uint64" },
				{ "Prop_FirmwareVersion_Uint64_1018.DisplayName", "Prop_FirmwareVersion_Uint64" },
				{ "Prop_FPGAVersion_Uint64_1019.DisplayName", "Prop_FPGAVersion_Uint64" },
				{ "Prop_HardwareRevision_Uint64_1017.DisplayName", "Prop_HardwareRevision_Uint64" },
				{ "Prop_HardwareRevision_Uint64_1017.ToolTip", "No prefix = 1000 series" },
				{ "Prop_ParentDriver_Uint64_1034.DisplayName", "Prop_ParentDriver_Uint64" },
				{ "Prop_RadioVersion_Uint64_1021.DisplayName", "Prop_RadioVersion_Uint64" },
				{ "Prop_VRCVersion_Uint64_1020.DisplayName", "Prop_VRCVersion_Uint64" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRDeviceProperty_UInt64",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRDeviceProperty_UInt64",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRDeviceProperty_Int32_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Int32"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Int32(EVRDeviceProperty_Int32_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Int32"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32_CRC() { return 2593596404U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Int32"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_Int32::Prop_DeviceClass_Int32_1029", (int64)EVRDeviceProperty_Int32::Prop_DeviceClass_Int32_1029 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayMCType_Int32_2008", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayMCType_Int32_2008 },
				{ "EVRDeviceProperty_Int32::HMDProp_EdidVendorID_Int32_2011", (int64)EVRDeviceProperty_Int32::HMDProp_EdidVendorID_Int32_2011 },
				{ "EVRDeviceProperty_Int32::HMDProp_EdidProductID_Int32_2015", (int64)EVRDeviceProperty_Int32::HMDProp_EdidProductID_Int32_2015 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayGCType_Int32_2017", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayGCType_Int32_2017 },
				{ "EVRDeviceProperty_Int32::HMDProp_CameraCompatibilityMode_Int32_2033", (int64)EVRDeviceProperty_Int32::HMDProp_CameraCompatibilityMode_Int32_2033 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageWidth_Int32_2038", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayMCImageWidth_Int32_2038 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageHeight_Int32_2039", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayMCImageHeight_Int32_2039 },
				{ "EVRDeviceProperty_Int32::HMDProp_DisplayMCImageNumChannels_Int32_2040", (int64)EVRDeviceProperty_Int32::HMDProp_DisplayMCImageNumChannels_Int32_2040 },
				{ "EVRDeviceProperty_Int32::ControllerProp_Axis0Type_Int32_3002", (int64)EVRDeviceProperty_Int32::ControllerProp_Axis0Type_Int32_3002 },
				{ "EVRDeviceProperty_Int32::ControllerPropProp_Axis1Type_Int32_3003", (int64)EVRDeviceProperty_Int32::ControllerPropProp_Axis1Type_Int32_3003 },
				{ "EVRDeviceProperty_Int32::ControllerPropProp_Axis2Type_Int32_3004", (int64)EVRDeviceProperty_Int32::ControllerPropProp_Axis2Type_Int32_3004 },
				{ "EVRDeviceProperty_Int32::ControllerPropProp_Axis3Type_Int32_3005", (int64)EVRDeviceProperty_Int32::ControllerPropProp_Axis3Type_Int32_3005 },
				{ "EVRDeviceProperty_Int32::ControllerPropProp_Axis4Type_Int32_3006", (int64)EVRDeviceProperty_Int32::ControllerPropProp_Axis4Type_Int32_3006 },
				{ "EVRDeviceProperty_Int32::ControllerProp_ControllerRoleHint_Int32_3007", (int64)EVRDeviceProperty_Int32::ControllerProp_ControllerRoleHint_Int32_3007 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerProp_Axis0Type_Int32_3002.DisplayName", "ControllerProp_Axis0Type_Int32" },
				{ "ControllerProp_Axis0Type_Int32_3002.ToolTip", "2 Prefix = 3000 series" },
				{ "ControllerProp_ControllerRoleHint_Int32_3007.DisplayName", "ControllerProp_ControllerRoleHint_Int32" },
				{ "ControllerPropProp_Axis1Type_Int32_3003.DisplayName", "ControllerPropProp_Axis1Type_Int32" },
				{ "ControllerPropProp_Axis2Type_Int32_3004.DisplayName", "ControllerPropProp_Axis2Type_Int32" },
				{ "ControllerPropProp_Axis3Type_Int32_3005.DisplayName", "ControllerPropProp_Axis3Type_Int32" },
				{ "ControllerPropProp_Axis4Type_Int32_3006.DisplayName", "ControllerPropProp_Axis4Type_Int32" },
				{ "HMDProp_CameraCompatibilityMode_Int32_2033.DisplayName", "HMDProp_CameraCompatibilityMode_Int32" },
				{ "HMDProp_DisplayGCType_Int32_2017.DisplayName", "HMDProp_DisplayGCType_Int32" },
				{ "HMDProp_DisplayMCImageHeight_Int32_2039.DisplayName", "HMDProp_DisplayMCImageHeight_Int32" },
				{ "HMDProp_DisplayMCImageNumChannels_Int32_2040.DisplayName", "HMDProp_DisplayMCImageNumChannels_Int32" },
				{ "HMDProp_DisplayMCImageWidth_Int32_2038.DisplayName", "HMDProp_DisplayMCImageWidth_Int32" },
				{ "HMDProp_DisplayMCType_Int32_2008.DisplayName", "HMDProp_DisplayMCType_Int32" },
				{ "HMDProp_DisplayMCType_Int32_2008.ToolTip", "1 Prefix = 2000 series" },
				{ "HMDProp_EdidProductID_Int32_2015.DisplayName", "HMDProp_EdidProductID_Int32" },
				{ "HMDProp_EdidVendorID_Int32_2011.DisplayName", "HMDProp_EdidVendorID_Int32" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_DeviceClass_Int32_1029.DisplayName", "Prop_DeviceClass_Int32" },
				{ "Prop_DeviceClass_Int32_1029.ToolTip", "No prefix = 1000 series" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRDeviceProperty_Int32",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRDeviceProperty_Int32",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRDeviceProperty_Float_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Float"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Float(EVRDeviceProperty_Float_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Float"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float_CRC() { return 1095721033U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Float"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_Float::Prop_DeviceBatteryPercentage_Float_1012", (int64)EVRDeviceProperty_Float::Prop_DeviceBatteryPercentage_Float_1012 },
				{ "EVRDeviceProperty_Float::HMDProp_SecondsFromVsyncToPhotons_Float_2001", (int64)EVRDeviceProperty_Float::HMDProp_SecondsFromVsyncToPhotons_Float_2001 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayFrequency_Float_2002", (int64)EVRDeviceProperty_Float::HMDProp_DisplayFrequency_Float_2002 },
				{ "EVRDeviceProperty_Float::HMDProp_UserIpdMeters_Float_2003", (int64)EVRDeviceProperty_Float::HMDProp_UserIpdMeters_Float_2003 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayMCOffset_Float_2009", (int64)EVRDeviceProperty_Float::HMDProp_DisplayMCOffset_Float_2009 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayMCScale_Float_2010", (int64)EVRDeviceProperty_Float::HMDProp_DisplayMCScale_Float_2010 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayGCBlackClamp_Float_2014", (int64)EVRDeviceProperty_Float::HMDProp_DisplayGCBlackClamp_Float_2014 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayGCOffset_Float_2018", (int64)EVRDeviceProperty_Float::HMDProp_DisplayGCOffset_Float_2018 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayGCScale_Float_2019", (int64)EVRDeviceProperty_Float::HMDProp_DisplayGCScale_Float_2019 },
				{ "EVRDeviceProperty_Float::HMDProp_DisplayGCPrescale_Float_2020", (int64)EVRDeviceProperty_Float::HMDProp_DisplayGCPrescale_Float_2020 },
				{ "EVRDeviceProperty_Float::HMDProp_LensCenterLeftU_Float_2022", (int64)EVRDeviceProperty_Float::HMDProp_LensCenterLeftU_Float_2022 },
				{ "EVRDeviceProperty_Float::HMDProp_LensCenterLeftV_Float_2023", (int64)EVRDeviceProperty_Float::HMDProp_LensCenterLeftV_Float_2023 },
				{ "EVRDeviceProperty_Float::HMDProp_LensCenterRightU_Float_2024", (int64)EVRDeviceProperty_Float::HMDProp_LensCenterRightU_Float_2024 },
				{ "EVRDeviceProperty_Float::HMDProp_LensCenterRightV_Float_2025", (int64)EVRDeviceProperty_Float::HMDProp_LensCenterRightV_Float_2025 },
				{ "EVRDeviceProperty_Float::HMDProp_UserHeadToEyeDepthMeters_Float_2026", (int64)EVRDeviceProperty_Float::HMDProp_UserHeadToEyeDepthMeters_Float_2026 },
				{ "EVRDeviceProperty_Float::HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034", (int64)EVRDeviceProperty_Float::HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034 },
				{ "EVRDeviceProperty_Float::HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035", (int64)EVRDeviceProperty_Float::HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035 },
				{ "EVRDeviceProperty_Float::HMDProp_SecondsFromPhotonsToVblank_Float_2042", (int64)EVRDeviceProperty_Float::HMDProp_SecondsFromPhotonsToVblank_Float_2042 },
				{ "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewLeftDegrees_Float_4000", (int64)EVRDeviceProperty_Float::TrackRefProp_FieldOfViewLeftDegrees_Float_4000 },
				{ "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewRightDegrees_Float_4001", (int64)EVRDeviceProperty_Float::TrackRefProp_FieldOfViewRightDegrees_Float_4001 },
				{ "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewTopDegrees_Float_4002", (int64)EVRDeviceProperty_Float::TrackRefProp_FieldOfViewTopDegrees_Float_4002 },
				{ "EVRDeviceProperty_Float::TrackRefProp_FieldOfViewBottomDegrees_Float_4003", (int64)EVRDeviceProperty_Float::TrackRefProp_FieldOfViewBottomDegrees_Float_4003 },
				{ "EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMinimumMeters_Float_4004", (int64)EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMinimumMeters_Float_4004 },
				{ "EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMaximumMeters_Float_4005", (int64)EVRDeviceProperty_Float::TrackRefProp_TrackingRangeMaximumMeters_Float_4005 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HMDProp_DisplayFrequency_Float_2002.DisplayName", "HMDProp_DisplayFrequency_Float" },
				{ "HMDProp_DisplayGCBlackClamp_Float_2014.DisplayName", "HMDProp_DisplayGCBlackClamp_Float" },
				{ "HMDProp_DisplayGCOffset_Float_2018.DisplayName", "HMDProp_DisplayGCOffset_Float" },
				{ "HMDProp_DisplayGCPrescale_Float_2020.DisplayName", "HMDProp_DisplayGCPrescale_Float" },
				{ "HMDProp_DisplayGCScale_Float_2019.DisplayName", "HMDProp_DisplayGCScale_Float" },
				{ "HMDProp_DisplayMCOffset_Float_2009.DisplayName", "HMDProp_DisplayMCOffset_Float" },
				{ "HMDProp_DisplayMCScale_Float_2010.DisplayName", "HMDProp_DisplayMCScale_Float" },
				{ "HMDProp_LensCenterLeftU_Float_2022.DisplayName", "HMDProp_LensCenterLeftU_Float" },
				{ "HMDProp_LensCenterLeftV_Float_2023.DisplayName", "HMDProp_LensCenterLeftV_Float" },
				{ "HMDProp_LensCenterRightU_Float_2024.DisplayName", "HMDProp_LensCenterRightU_Float" },
				{ "HMDProp_LensCenterRightV_Float_2025.DisplayName", "HMDProp_LensCenterRightV_Float" },
				{ "HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float_2034.DisplayName", "HMDProp_ScreenshotHorizontalFieldOfViewDegrees_Float" },
				{ "HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float_2035.DisplayName", "HMDProp_ScreenshotVerticalFieldOfViewDegrees_Float" },
				{ "HMDProp_SecondsFromPhotonsToVblank_Float_2042.DisplayName", "HMDProp_SecondsFromPhotonsToVblank_Float" },
				{ "HMDProp_SecondsFromVsyncToPhotons_Float_2001.DisplayName", "HMDProp_SecondsFromVsyncToPhotons_Float" },
				{ "HMDProp_SecondsFromVsyncToPhotons_Float_2001.ToolTip", "1 Prefix = 2000 series" },
				{ "HMDProp_UserHeadToEyeDepthMeters_Float_2026.DisplayName", "HMDProp_UserHeadToEyeDepthMeters_Float" },
				{ "HMDProp_UserIpdMeters_Float_2003.DisplayName", "HMDProp_UserIpdMeters_Float" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_DeviceBatteryPercentage_Float_1012.DisplayName", "Prop_DeviceBatteryPercentage_Float" },
				{ "Prop_DeviceBatteryPercentage_Float_1012.ToolTip", "No Prefix = 1000 series" },
				{ "TrackRefProp_FieldOfViewBottomDegrees_Float_4003.DisplayName", "TrackRefProp_FieldOfViewBottomDegrees_Float" },
				{ "TrackRefProp_FieldOfViewLeftDegrees_Float_4000.DisplayName", "TrackRefProp_FieldOfViewLeftDegrees_Float" },
				{ "TrackRefProp_FieldOfViewLeftDegrees_Float_4000.ToolTip", "3 Prefix = 4000 series" },
				{ "TrackRefProp_FieldOfViewRightDegrees_Float_4001.DisplayName", "TrackRefProp_FieldOfViewRightDegrees_Float" },
				{ "TrackRefProp_FieldOfViewTopDegrees_Float_4002.DisplayName", "TrackRefProp_FieldOfViewTopDegrees_Float" },
				{ "TrackRefProp_TrackingRangeMaximumMeters_Float_4005.DisplayName", "TrackRefProp_TrackingRangeMaximumMeters_Float" },
				{ "TrackRefProp_TrackingRangeMinimumMeters_Float_4004.DisplayName", "TrackRefProp_TrackingRangeMinimumMeters_Float" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRDeviceProperty_Float",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRDeviceProperty_Float",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRDeviceProperty_Bool_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_Bool"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_Bool(EVRDeviceProperty_Bool_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_Bool"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool_CRC() { return 1769108369U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_Bool"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_Bool::Prop_WillDriftInYaw_Bool_1004", (int64)EVRDeviceProperty_Bool::Prop_WillDriftInYaw_Bool_1004 },
				{ "EVRDeviceProperty_Bool::Prop_DeviceIsWireless_Bool_1010", (int64)EVRDeviceProperty_Bool::Prop_DeviceIsWireless_Bool_1010 },
				{ "EVRDeviceProperty_Bool::Prop_DeviceIsCharging_Bool_1011", (int64)EVRDeviceProperty_Bool::Prop_DeviceIsCharging_Bool_1011 },
				{ "EVRDeviceProperty_Bool::Prop_Firmware_UpdateAvailable_Bool_1014", (int64)EVRDeviceProperty_Bool::Prop_Firmware_UpdateAvailable_Bool_1014 },
				{ "EVRDeviceProperty_Bool::Prop_Firmware_ManualUpdate_Bool_1015", (int64)EVRDeviceProperty_Bool::Prop_Firmware_ManualUpdate_Bool_1015 },
				{ "EVRDeviceProperty_Bool::Prop_BlockServerShutdown_Bool_1023", (int64)EVRDeviceProperty_Bool::Prop_BlockServerShutdown_Bool_1023 },
				{ "EVRDeviceProperty_Bool::Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024", (int64)EVRDeviceProperty_Bool::Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024 },
				{ "EVRDeviceProperty_Bool::Prop_ContainsProximitySensor_Bool_1025", (int64)EVRDeviceProperty_Bool::Prop_ContainsProximitySensor_Bool_1025 },
				{ "EVRDeviceProperty_Bool::Prop_DeviceProvidesBatteryStatus_Bool_1026", (int64)EVRDeviceProperty_Bool::Prop_DeviceProvidesBatteryStatus_Bool_1026 },
				{ "EVRDeviceProperty_Bool::Prop_DeviceCanPowerOff_Bool_1027", (int64)EVRDeviceProperty_Bool::Prop_DeviceCanPowerOff_Bool_1027 },
				{ "EVRDeviceProperty_Bool::Prop_HasCamera_Bool_1030", (int64)EVRDeviceProperty_Bool::Prop_HasCamera_Bool_1030 },
				{ "EVRDeviceProperty_Bool::Prop_Firmware_ForceUpdateRequired_Bool_1032", (int64)EVRDeviceProperty_Bool::Prop_Firmware_ForceUpdateRequired_Bool_1032 },
				{ "EVRDeviceProperty_Bool::Prop_ViveSystemButtonFixRequired_Bool_1033", (int64)EVRDeviceProperty_Bool::Prop_ViveSystemButtonFixRequired_Bool_1033 },
				{ "EVRDeviceProperty_Bool::HMDProp_ReportsTimeSinceVSync_Bool_2000", (int64)EVRDeviceProperty_Bool::HMDProp_ReportsTimeSinceVSync_Bool_2000 },
				{ "EVRDeviceProperty_Bool::HMDProp_IsOnDesktop_Bool_2007", (int64)EVRDeviceProperty_Bool::HMDProp_IsOnDesktop_Bool_2007 },
				{ "EVRDeviceProperty_Bool::HMDProp_DisplaySuppressed_Bool_2036", (int64)EVRDeviceProperty_Bool::HMDProp_DisplaySuppressed_Bool_2036 },
				{ "EVRDeviceProperty_Bool::HMDProp_DisplayAllowNightMode_Bool_2037", (int64)EVRDeviceProperty_Bool::HMDProp_DisplayAllowNightMode_Bool_2037 },
				{ "EVRDeviceProperty_Bool::HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043", (int64)EVRDeviceProperty_Bool::HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043 },
				{ "EVRDeviceProperty_Bool::HMDProp_DisplayDebugMode_Bool_2044", (int64)EVRDeviceProperty_Bool::HMDProp_DisplayDebugMode_Bool_2044 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasDisplayComponent_Bool_6002", (int64)EVRDeviceProperty_Bool::DriverProp_HasDisplayComponent_Bool_6002 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasControllerComponent_Bool_6003", (int64)EVRDeviceProperty_Bool::DriverProp_HasControllerComponent_Bool_6003 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasCameraComponent_Bool_6004", (int64)EVRDeviceProperty_Bool::DriverProp_HasCameraComponent_Bool_6004 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasDriverDirectModeComponent_Bool_6005", (int64)EVRDeviceProperty_Bool::DriverProp_HasDriverDirectModeComponent_Bool_6005 },
				{ "EVRDeviceProperty_Bool::DriverProp_HasVirtualDisplayComponent_Bool_6006", (int64)EVRDeviceProperty_Bool::DriverProp_HasVirtualDisplayComponent_Bool_6006 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DriverProp_HasCameraComponent_Bool_6004.DisplayName", "DriverProp_HasCameraComponent_Bool" },
				{ "DriverProp_HasControllerComponent_Bool_6003.DisplayName", "DriverProp_HasControllerComponent_Bool" },
				{ "DriverProp_HasDisplayComponent_Bool_6002.DisplayName", "DriverProp_HasDisplayComponent_Bool" },
				{ "DriverProp_HasDisplayComponent_Bool_6002.ToolTip", "5 prefix = 6000 series" },
				{ "DriverProp_HasDriverDirectModeComponent_Bool_6005.DisplayName", "DriverProp_HasDriverDirectModeComponent_Bool" },
				{ "DriverProp_HasVirtualDisplayComponent_Bool_6006.DisplayName", "DriverProp_HasVirtualDisplayComponent_Bool" },
				{ "HMDProp_DisplayAllowNightMode_Bool_2037.DisplayName", "HMDProp_DisplayAllowNightMode_Bool" },
				{ "HMDProp_DisplayDebugMode_Bool_2044.DisplayName", "HMDProp_DisplayDebugMode_Bool" },
				{ "HMDProp_DisplaySuppressed_Bool_2036.DisplayName", "HMDProp_DisplaySuppressed_Bool" },
				{ "HMDProp_DriverDirectModeSendsVsyncEvents_Bool_2043.DisplayName", "HMDProp_DriverDirectModeSendsVsyncEvents_Bool" },
				{ "HMDProp_IsOnDesktop_Bool_2007.DisplayName", "HMDProp_IsOnDesktop_Bool" },
				{ "HMDProp_ReportsTimeSinceVSync_Bool_2000.DisplayName", "HMDProp_ReportsTimeSinceVSync_Bool" },
				{ "HMDProp_ReportsTimeSinceVSync_Bool_2000.ToolTip", "1 prefix = 2000 series" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_BlockServerShutdown_Bool_1023.DisplayName", "Prop_BlockServerShutdown_Bool" },
				{ "Prop_CanUnifyCoordinateSystemWithHmd_Bool_1024.DisplayName", "Prop_CanUnifyCoordinateSystemWithHmd_Bool" },
				{ "Prop_ContainsProximitySensor_Bool_1025.DisplayName", "Prop_ContainsProximitySensor_Bool" },
				{ "Prop_DeviceCanPowerOff_Bool_1027.DisplayName", "Prop_DeviceCanPowerOff_Bool" },
				{ "Prop_DeviceIsCharging_Bool_1011.DisplayName", "Prop_DeviceIsCharging_Bool" },
				{ "Prop_DeviceIsWireless_Bool_1010.DisplayName", "Prop_DeviceIsWireless_Bool" },
				{ "Prop_DeviceProvidesBatteryStatus_Bool_1026.DisplayName", "Prop_DeviceProvidesBatteryStatus_Bool" },
				{ "Prop_Firmware_ForceUpdateRequired_Bool_1032.DisplayName", "Prop_Firmware_ForceUpdateRequired_Bool" },
				{ "Prop_Firmware_ManualUpdate_Bool_1015.DisplayName", "Prop_Firmware_ManualUpdate_Bool" },
				{ "Prop_Firmware_UpdateAvailable_Bool_1014.DisplayName", "Prop_Firmware_UpdateAvailable_Bool" },
				{ "Prop_HasCamera_Bool_1030.DisplayName", "Prop_HasCamera_Bool" },
				{ "Prop_ViveSystemButtonFixRequired_Bool_1033.DisplayName", "Prop_ViveSystemButtonFixRequired_Bool" },
				{ "Prop_WillDriftInYaw_Bool_1004.DisplayName", "Prop_WillDriftInYaw_Bool" },
				{ "Prop_WillDriftInYaw_Bool_1004.ToolTip", "No prefix = 1000 series" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRDeviceProperty_Bool",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRDeviceProperty_Bool",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRDeviceProperty_String_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EVRDeviceProperty_String"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRDeviceProperty_String(EVRDeviceProperty_String_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EVRDeviceProperty_String"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String_CRC() { return 798044791U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRDeviceProperty_String"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRDeviceProperty_String::Prop_TrackingSystemName_String_1000", (int64)EVRDeviceProperty_String::Prop_TrackingSystemName_String_1000 },
				{ "EVRDeviceProperty_String::Prop_ModelNumber_String_1001", (int64)EVRDeviceProperty_String::Prop_ModelNumber_String_1001 },
				{ "EVRDeviceProperty_String::Prop_SerialNumber_String_1002", (int64)EVRDeviceProperty_String::Prop_SerialNumber_String_1002 },
				{ "EVRDeviceProperty_String::Prop_RenderModelName_String_1003", (int64)EVRDeviceProperty_String::Prop_RenderModelName_String_1003 },
				{ "EVRDeviceProperty_String::Prop_ManufacturerName_String_1005", (int64)EVRDeviceProperty_String::Prop_ManufacturerName_String_1005 },
				{ "EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String_1006", (int64)EVRDeviceProperty_String::Prop_TrackingFirmwareVersion_String_1006 },
				{ "EVRDeviceProperty_String::Prop_HardwareRevision_String_1007", (int64)EVRDeviceProperty_String::Prop_HardwareRevision_String_1007 },
				{ "EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String_1008", (int64)EVRDeviceProperty_String::Prop_AllWirelessDongleDescriptions_String_1008 },
				{ "EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String_1009", (int64)EVRDeviceProperty_String::Prop_ConnectedWirelessDongle_String_1009 },
				{ "EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String_1016", (int64)EVRDeviceProperty_String::Prop_Firmware_ManualUpdateURL_String_1016 },
				{ "EVRDeviceProperty_String::Prop_Firmware_ProgrammingTarget_String_1028", (int64)EVRDeviceProperty_String::Prop_Firmware_ProgrammingTarget_String_1028 },
				{ "EVRDeviceProperty_String::Prop_DriverVersion_String_1031", (int64)EVRDeviceProperty_String::Prop_DriverVersion_String_1031 },
				{ "EVRDeviceProperty_String::Prop_ResourceRoot_String_1035", (int64)EVRDeviceProperty_String::Prop_ResourceRoot_String_1035 },
				{ "EVRDeviceProperty_String::HMDProp_DisplayMCImageLeft_String_2012", (int64)EVRDeviceProperty_String::HMDProp_DisplayMCImageLeft_String_2012 },
				{ "EVRDeviceProperty_String::HMDProp_DisplayMCImageRight_String_2013", (int64)EVRDeviceProperty_String::HMDProp_DisplayMCImageRight_String_2013 },
				{ "EVRDeviceProperty_String::HMDProp_DisplayGCImage_String_2021", (int64)EVRDeviceProperty_String::HMDProp_DisplayGCImage_String_2021 },
				{ "EVRDeviceProperty_String::HMDProp_CameraFirmwareDescription_String_2028", (int64)EVRDeviceProperty_String::HMDProp_CameraFirmwareDescription_String_2028 },
				{ "EVRDeviceProperty_String::HMDProp_DriverProvidedChaperonePath_String_2048", (int64)EVRDeviceProperty_String::HMDProp_DriverProvidedChaperonePath_String_2048 },
				{ "EVRDeviceProperty_String::ControllerProp_AttachedDeviceId_String_3000", (int64)EVRDeviceProperty_String::ControllerProp_AttachedDeviceId_String_3000 },
				{ "EVRDeviceProperty_String::TrackRefProp_ModeLabel_String_4006", (int64)EVRDeviceProperty_String::TrackRefProp_ModeLabel_String_4006 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceOff_String_5001", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceOff_String_5001 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearching_String_5002", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearching_String_5002 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearchingAlert_String_5003", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceSearchingAlert_String_5003 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReady_String_5004", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReady_String_5004 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReadyAlert_String_5005", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceReadyAlert_String_5005 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceNotReady_String_5006", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceNotReady_String_5006 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceStandby_String_5007", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceStandby_String_5007 },
				{ "EVRDeviceProperty_String::UIProp_NamedIconPathDeviceAlertLow_String_5008", (int64)EVRDeviceProperty_String::UIProp_NamedIconPathDeviceAlertLow_String_5008 },
				{ "EVRDeviceProperty_String::DriverProp_UserConfigPath_String_6000", (int64)EVRDeviceProperty_String::DriverProp_UserConfigPath_String_6000 },
				{ "EVRDeviceProperty_String::DriverProp_InstallPath_String_6001", (int64)EVRDeviceProperty_String::DriverProp_InstallPath_String_6001 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerProp_AttachedDeviceId_String_3000.DisplayName", "ControllerProp_AttachedDeviceId_String" },
				{ "ControllerProp_AttachedDeviceId_String_3000.ToolTip", "2 prefix = 3000 series" },
				{ "DriverProp_InstallPath_String_6001.DisplayName", "DriverProp_InstallPath_String" },
				{ "DriverProp_UserConfigPath_String_6000.DisplayName", "DriverProp_UserConfigPath_String" },
				{ "DriverProp_UserConfigPath_String_6000.ToolTip", "5 prefix = 6000 series" },
				{ "HMDProp_CameraFirmwareDescription_String_2028.DisplayName", "HMDProp_CameraFirmwareDescription_String" },
				{ "HMDProp_DisplayGCImage_String_2021.DisplayName", "HMDProp_DisplayGCImage_String" },
				{ "HMDProp_DisplayMCImageLeft_String_2012.DisplayName", "HMDProp_DisplayMCImageLeft_String" },
				{ "HMDProp_DisplayMCImageLeft_String_2012.ToolTip", "1 prefix = 2000 series" },
				{ "HMDProp_DisplayMCImageRight_String_2013.DisplayName", "HMDProp_DisplayMCImageRight_String" },
				{ "HMDProp_DriverProvidedChaperonePath_String_2048.DisplayName", "HMDProp_DriverProvidedChaperonePath_String" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Prop_AllWirelessDongleDescriptions_String_1008.DisplayName", "Prop_AllWirelessDongleDescriptions_String" },
				{ "Prop_ConnectedWirelessDongle_String_1009.DisplayName", "Prop_ConnectedWirelessDongle_String" },
				{ "Prop_DriverVersion_String_1031.DisplayName", "Prop_DriverVersion_String" },
				{ "Prop_Firmware_ManualUpdateURL_String_1016.DisplayName", "Prop_Firmware_ManualUpdateURL_String" },
				{ "Prop_Firmware_ProgrammingTarget_String_1028.DisplayName", "Prop_Firmware_ProgrammingTarget_String" },
				{ "Prop_HardwareRevision_String_1007.DisplayName", "Prop_HardwareRevision_String" },
				{ "Prop_ManufacturerName_String_1005.DisplayName", "Prop_ManufacturerName_String" },
				{ "Prop_ModelNumber_String_1001.DisplayName", "Prop_ModelNumber_String" },
				{ "Prop_RenderModelName_String_1003.DisplayName", "Prop_RenderModelName_String" },
				{ "Prop_ResourceRoot_String_1035.DisplayName", "Prop_ResourceRoot_String" },
				{ "Prop_SerialNumber_String_1002.DisplayName", "Prop_SerialNumber_String" },
				{ "Prop_TrackingFirmwareVersion_String_1006.DisplayName", "Prop_TrackingFirmwareVersion_String" },
				{ "Prop_TrackingSystemName_String_1000.DisplayName", "Prop_TrackingSystemName_String" },
				{ "Prop_TrackingSystemName_String_1000.ToolTip", "No prefix = 1000 series" },
				{ "ToolTip", "// Not implementing currently\n\n// Properties that are unique to TrackedDeviceClass_HMD\nProp_DisplayMCImageData_Binary                         = 2041,\n\nProp_IconPathName_String = 5000, // DEPRECATED. Value not referenced. Now expected to be part of icon path properties.\n\n// Properties that are used by helpers, but are opaque to applications\nProp_DisplayHiddenArea_Binary_Start                            = 5100,\nProp_DisplayHiddenArea_Binary_End                              = 5150,\n\n// Vendors are free to expose private debug data in this reserved region\nProp_VendorSpecific_Reserved_Start = 10000,\nProp_VendorSpecific_Reserved_End = 10999,\n// #TODO: Update these" },
				{ "TrackRefProp_ModeLabel_String_4006.DisplayName", "TrackRefProp_ModeLabel_String" },
				{ "TrackRefProp_ModeLabel_String_4006.ToolTip", "3 prefix = 4000 series" },
				{ "UIProp_NamedIconPathDeviceAlertLow_String_5008.DisplayName", "UIProp_NamedIconPathDeviceAlertLow_String" },
				{ "UIProp_NamedIconPathDeviceNotReady_String_5006.DisplayName", "UIProp_NamedIconPathDeviceNotReady_String" },
				{ "UIProp_NamedIconPathDeviceOff_String_5001.DisplayName", "UIProp_NamedIconPathDeviceOff_String" },
				{ "UIProp_NamedIconPathDeviceOff_String_5001.ToolTip", "4 prefix = 5000 series" },
				{ "UIProp_NamedIconPathDeviceReady_String_5004.DisplayName", "UIProp_NamedIconPathDeviceReady_String" },
				{ "UIProp_NamedIconPathDeviceReadyAlert_String_5005.DisplayName", "UIProp_NamedIconPathDeviceReadyAlert_String" },
				{ "UIProp_NamedIconPathDeviceSearching_String_5002.DisplayName", "UIProp_NamedIconPathDeviceSearching_String" },
				{ "UIProp_NamedIconPathDeviceSearchingAlert_String_5003.DisplayName", "UIProp_NamedIconPathDeviceSearchingAlert_String_" },
				{ "UIProp_NamedIconPathDeviceStandby_String_5007.DisplayName", "UIProp_NamedIconPathDeviceStandby_String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRDeviceProperty_String",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRDeviceProperty_String",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPSteamVRTrackedDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPSteamVRTrackedDeviceType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPSteamVRTrackedDeviceType(EBPSteamVRTrackedDeviceType_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPSteamVRTrackedDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType_CRC() { return 818618232U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPSteamVRTrackedDeviceType"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPSteamVRTrackedDeviceType::Controller", (int64)EBPSteamVRTrackedDeviceType::Controller },
				{ "EBPSteamVRTrackedDeviceType::TrackingReference", (int64)EBPSteamVRTrackedDeviceType::TrackingReference },
				{ "EBPSteamVRTrackedDeviceType::Other", (int64)EBPSteamVRTrackedDeviceType::Other },
				{ "EBPSteamVRTrackedDeviceType::Invalid", (int64)EBPSteamVRTrackedDeviceType::Invalid },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Controller.ToolTip", "Represents a Steam VR Controller" },
				{ "Invalid.ToolTip", "DeviceId is invalid" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "Other.ToolTip", "Misc. device types, for future expansion" },
				{ "ToolTip", "#TODO: Update these" },
				{ "TrackingReference.ToolTip", "Represents a static tracking reference device, such as a Lighthouse or tracking camera" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPSteamVRTrackedDeviceType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPSteamVRTrackedDeviceType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAsyncBlueprintResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EAsyncBlueprintResultSwitch"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAsyncBlueprintResultSwitch(EAsyncBlueprintResultSwitch_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EAsyncBlueprintResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch_CRC() { return 1251171126U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAsyncBlueprintResultSwitch"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAsyncBlueprintResultSwitch::OnSuccess", (int64)EAsyncBlueprintResultSwitch::OnSuccess },
				{ "EAsyncBlueprintResultSwitch::AsyncLoading", (int64)EAsyncBlueprintResultSwitch::AsyncLoading },
				{ "EAsyncBlueprintResultSwitch::OnFailure", (int64)EAsyncBlueprintResultSwitch::OnFailure },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsyncLoading.ToolTip", "On still loading async" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "OnFailure.ToolTip", "On Failure" },
				{ "OnSuccess.ToolTip", "On Success" },
				{ "ToolTip", "This will make using the load model as async easier to understand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAsyncBlueprintResultSwitch",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAsyncBlueprintResultSwitch",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOpenVRCameraFrameType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EOpenVRCameraFrameType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpenVRCameraFrameType(EOpenVRCameraFrameType_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EOpenVRCameraFrameType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType_CRC() { return 900632789U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpenVRCameraFrameType"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOpenVRCameraFrameType::VRFrameType_Distorted", (int64)EOpenVRCameraFrameType::VRFrameType_Distorted },
				{ "EOpenVRCameraFrameType::VRFrameType_Undistorted", (int64)EOpenVRCameraFrameType::VRFrameType_Undistorted },
				{ "EOpenVRCameraFrameType::VRFrameType_MaximumUndistorted", (int64)EOpenVRCameraFrameType::VRFrameType_MaximumUndistorted },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOpenVRCameraFrameType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EOpenVRCameraFrameType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPOVRResultSwitch_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPOVRResultSwitch"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPOVRResultSwitch(EBPOVRResultSwitch_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPOVRResultSwitch"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch_CRC() { return 4066325961U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPOVRResultSwitch"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPOVRResultSwitch::OnSucceeded", (int64)EBPOVRResultSwitch::OnSucceeded },
				{ "EBPOVRResultSwitch::OnFailed", (int64)EBPOVRResultSwitch::OnFailed },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "OnFailed.ToolTip", "On Failure" },
				{ "OnSucceeded.ToolTip", "On Success" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPOVRResultSwitch",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPOVRResultSwitch",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBPVRDeviceIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("EBPVRDeviceIndex"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPVRDeviceIndex(EBPVRDeviceIndex_StaticEnum, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("EBPVRDeviceIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex_CRC() { return 39277549U; }
	UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPVRDeviceIndex"), 0, Get_Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPVRDeviceIndex::HMD", (int64)EBPVRDeviceIndex::HMD },
				{ "EBPVRDeviceIndex::FirstTracking_Reference", (int64)EBPVRDeviceIndex::FirstTracking_Reference },
				{ "EBPVRDeviceIndex::SecondTracking_Reference", (int64)EBPVRDeviceIndex::SecondTracking_Reference },
				{ "EBPVRDeviceIndex::FirstController", (int64)EBPVRDeviceIndex::FirstController },
				{ "EBPVRDeviceIndex::SecondController", (int64)EBPVRDeviceIndex::SecondController },
				{ "EBPVRDeviceIndex::TrackedDevice1", (int64)EBPVRDeviceIndex::TrackedDevice1 },
				{ "EBPVRDeviceIndex::TrackedDevice2", (int64)EBPVRDeviceIndex::TrackedDevice2 },
				{ "EBPVRDeviceIndex::TrackedDevice3", (int64)EBPVRDeviceIndex::TrackedDevice3 },
				{ "EBPVRDeviceIndex::TrackedDevice4", (int64)EBPVRDeviceIndex::TrackedDevice4 },
				{ "EBPVRDeviceIndex::TrackedDevice5", (int64)EBPVRDeviceIndex::TrackedDevice5 },
				{ "EBPVRDeviceIndex::TrackedDevice6", (int64)EBPVRDeviceIndex::TrackedDevice6 },
				{ "EBPVRDeviceIndex::TrackedDevice7", (int64)EBPVRDeviceIndex::TrackedDevice7 },
				{ "EBPVRDeviceIndex::TrackedDevice8", (int64)EBPVRDeviceIndex::TrackedDevice8 },
				{ "EBPVRDeviceIndex::TrackedDevice9", (int64)EBPVRDeviceIndex::TrackedDevice9 },
				{ "EBPVRDeviceIndex::TrackedDevice10", (int64)EBPVRDeviceIndex::TrackedDevice10 },
				{ "EBPVRDeviceIndex::None", (int64)EBPVRDeviceIndex::None },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HMD.ToolTip", "0 TrackedDeviceClass_HMD\n       1 TrackedDeviceClass_TrackingReference\n       2 TrackedDeviceClass_TrackingReference\n       3 TrackedDeviceClass_Controller\n       4 TrackedDeviceClass_Controller\n       5 TrackedDeviceClass_GenericTracker\n       6 TrackedDeviceClass_GenericTracker\n       7 TrackedDeviceClass_GenericTracker\n\n       // Describes what kind of object is being tracked at a given ID\n       enum ETrackedDeviceClass\n{\n       TrackedDeviceClass_Invalid = 0,                         // the ID was not valid.\n       TrackedDeviceClass_HMD = 1,                                     // Head-Mounted Displays\n       TrackedDeviceClass_Controller = 2,                      // Tracked controllers\n       TrackedDeviceClass_GenericTracker = 3,          // Generic trackers, similar to controllers\n       TrackedDeviceClass_TrackingReference = 4,       // Camera and base stations that serve as tracking reference points\n};\n       // On Success" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "This makes a lot of the blueprint functions cleaner" },
				{ "TrackedDevice1.ToolTip", "FirstController = 1,\nSecondController = 2,\nFirstTracking_Reference = 3,\nSecondTracking_Reference = 4," },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPVRDeviceIndex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPVRDeviceIndex",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBPOpenVRCameraHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OPENVREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, Z_Construct_UPackage__Script_OpenVRExpansionPlugin(), TEXT("BPOpenVRCameraHandle"), sizeof(FBPOpenVRCameraHandle), Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPOpenVRCameraHandle(FBPOpenVRCameraHandle::StaticStruct, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("BPOpenVRCameraHandle"), false, nullptr, nullptr);
static struct FScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle
{
	FScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPOpenVRCameraHandle")),new UScriptStruct::TCppStructOps<FBPOpenVRCameraHandle>);
	}
} ScriptStruct_OpenVRExpansionPlugin_StaticRegisterNativesFBPOpenVRCameraHandle;
	UScriptStruct* Z_Construct_UScriptStruct_FBPOpenVRCameraHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPOpenVRCameraHandle"), sizeof(FBPOpenVRCameraHandle), Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPOpenVRCameraHandle>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BPOpenVRCameraHandle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FBPOpenVRCameraHandle),
				alignof(FBPOpenVRCameraHandle),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPOpenVRCameraHandle_CRC() { return 1299600830U; }
	void UOpenVRExpansionFunctionLibrary::StaticRegisterNativesUOpenVRExpansionFunctionLibrary()
	{
		UClass* Class = UOpenVRExpansionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireVRCamera", (Native)&UOpenVRExpansionFunctionLibrary::execAcquireVRCamera },
			{ "ClearSkyboxOverride", (Native)&UOpenVRExpansionFunctionLibrary::execClearSkyboxOverride },
			{ "CreateCameraTexture2D", (Native)&UOpenVRExpansionFunctionLibrary::execCreateCameraTexture2D },
			{ "FadeHMDToColor", (Native)&UOpenVRExpansionFunctionLibrary::execFadeHMDToColor },
			{ "FadeVRGrid", (Native)&UOpenVRExpansionFunctionLibrary::execFadeVRGrid },
			{ "GetCurrentHMDFadeColor", (Native)&UOpenVRExpansionFunctionLibrary::execGetCurrentHMDFadeColor },
			{ "GetCurrentVRGripAlpha", (Native)&UOpenVRExpansionFunctionLibrary::execGetCurrentVRGripAlpha },
			{ "GetVRCameraFrame", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRCameraFrame },
			{ "GetVRDeviceModelAndTexture", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDeviceModelAndTexture },
			{ "GetVRDevicePropertyBool", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyBool },
			{ "GetVRDevicePropertyFloat", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyFloat },
			{ "GetVRDevicePropertyInt32", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyInt32 },
			{ "GetVRDevicePropertyMatrix34AsTransform", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyMatrix34AsTransform },
			{ "GetVRDevicePropertyString", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyString },
			{ "GetVRDevicePropertyUInt64", (Native)&UOpenVRExpansionFunctionLibrary::execGetVRDevicePropertyUInt64 },
			{ "HasVRCamera", (Native)&UOpenVRExpansionFunctionLibrary::execHasVRCamera },
			{ "IsOpenVRDeviceConnected", (Native)&UOpenVRExpansionFunctionLibrary::execIsOpenVRDeviceConnected },
			{ "IsValid", (Native)&UOpenVRExpansionFunctionLibrary::execIsValid },
			{ "ReleaseVRCamera", (Native)&UOpenVRExpansionFunctionLibrary::execReleaseVRCamera },
			{ "SetSkyboxOverride", (Native)&UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride },
			{ "SetSkyboxOverride_LatLong", (Native)&UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride_LatLong },
			{ "SetSkyboxOverride_LatLongStereoPair", (Native)&UOpenVRExpansionFunctionLibrary::execSetSkyboxOverride_LatLongStereoPair },
			{ "SetSuspendRendering", (Native)&UOpenVRExpansionFunctionLibrary::execSetSuspendRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera()
	{
		struct OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraHandle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
				{ "DisplayName", "AcquireVRCamera" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Acquire the vr camera for access (wakes it up)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "AcquireVRCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventAcquireVRCamera_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride()
	{
		struct OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Remove skybox override in steamVR" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "ClearSkyboxOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(OpenVRExpansionFunctionLibrary_eventClearSkyboxOverride_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D()
	{
		struct OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EOpenVRCameraFrameType FrameType;
			EBPOVRResultSwitch Result;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameType = { UE4CodeGen_Private::EPropertyClass::Enum, "FrameType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms, FrameType), Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraHandle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
				{ "DisplayName", "CreateCameraTexture2D" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Create Camera Render Target" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "CreateCameraTexture2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventCreateCameraTexture2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor()
	{
		struct OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms
		{
			float fSeconds;
			FColor Color;
			bool bBackground;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bBackground_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms*)Obj)->bBackground = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBackground = { UE4CodeGen_Private::EPropertyClass::Bool, "bBackground", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBackground_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "fSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms, fSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBackground,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "CPP_Default_bBackground", "false" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Fades the view on the HMD to the specified color. The fade will take fSeconds, and the color values are between\n0.0 and 1.0. This color is faded on top of the scene based on the alpha parameter. Removing the fade color instantly\nwould be FadeToColor( 0.0, 0.0, 0.0, 0.0, 0.0 ).  Values are in un-premultiplied alpha space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "FadeHMDToColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(OpenVRExpansionFunctionLibrary_eventFadeHMDToColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid()
	{
		struct OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms
		{
			float fSeconds;
			bool bFadeIn;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bFadeIn_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms*)Obj)->bFadeIn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bFadeIn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFadeIn_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "fSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms, fSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFadeIn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Fading the Grid in or out in fSeconds" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "FadeVRGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(OpenVRExpansionFunctionLibrary_eventFadeVRGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms
		{
			FColor ColorOut;
			bool bBackground;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bBackground_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms*)Obj)->bBackground = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBackground = { UE4CodeGen_Private::EPropertyClass::Bool, "bBackground", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBackground_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms, ColorOut), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBackground,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColorOut,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "CPP_Default_bBackground", "false" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Get current fade color value." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetCurrentHMDFadeColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentHMDFadeColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms
		{
			float VRGridAlpha;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRGridAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "VRGridAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms, VRGridAlpha), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRGridAlpha,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Get current alpha value of grid." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetCurrentVRGripAlpha", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventGetCurrentVRGripAlpha_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EOpenVRCameraFrameType FrameType;
			EBPOVRResultSwitch Result;
			UTexture2D* TargetRenderTarget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TargetRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms, TargetRenderTarget), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameType = { UE4CodeGen_Private::EPropertyClass::Enum, "FrameType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms, FrameType), Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetRenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraHandle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
				{ "DisplayName", "GetVRCameraFrame" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets a screen cap from the HMD camera if there is one" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetVRCameraFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRCameraFrame_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms
		{
			UObject* WorldContextObject;
			EBPSteamVRTrackedDeviceType DeviceType;
			TArray<UProceduralMeshComponent*> ProceduralMeshComponentsToFill;
			bool bCreateCollision;
			EAsyncBlueprintResultSwitch Result;
			EBPVRDeviceIndex OverrideDeviceID;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverrideDeviceID = { UE4CodeGen_Private::EPropertyClass::Enum, "OverrideDeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, OverrideDeviceID), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideDeviceID_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EAsyncBlueprintResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCreateCollision_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms*)Obj)->bCreateCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateCollision_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComponentsToFill_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProceduralMeshComponentsToFill = { UE4CodeGen_Private::EPropertyClass::Array, "ProceduralMeshComponentsToFill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, ProceduralMeshComponentsToFill), METADATA_PARAMS(NewProp_ProceduralMeshComponentsToFill_MetaData, ARRAY_COUNT(NewProp_ProceduralMeshComponentsToFill_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComponentsToFill_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ProceduralMeshComponentsToFill", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DeviceType = { UE4CodeGen_Private::EPropertyClass::Enum, "DeviceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, DeviceType), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPSteamVRTrackedDeviceType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideDeviceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideDeviceID_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProceduralMeshComponentsToFill,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProceduralMeshComponentsToFill_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "CPP_Default_OverrideDeviceID", "None" },
				{ "DisplayName", "GetVRDeviceModelAndTexture" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets the model / texture of a SteamVR Device, can use to fill procedural mesh components or just get the texture of them to apply to a pre-made model." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetVRDeviceModelAndTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDeviceModelAndTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms
		{
			EVRDeviceProperty_Bool PropertyToRetrieve;
			int32 DeviceID;
			bool BoolValue;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_BoolValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms*)Obj)->BoolValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_BoolValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyToRetrieve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Bool, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "DisplayName", "GetVRDevicePropertyBool" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets a Bool device property" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetVRDevicePropertyBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms
		{
			EVRDeviceProperty_Float PropertyToRetrieve;
			int32 DeviceID;
			float FloatValue;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue = { UE4CodeGen_Private::EPropertyClass::Float, "FloatValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms, FloatValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyToRetrieve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Float, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "DisplayName", "GetVRDevicePropertyFloat" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets a Float device property" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetVRDevicePropertyFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms
		{
			EVRDeviceProperty_Int32 PropertyToRetrieve;
			int32 DeviceID;
			int32 IntValue;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue = { UE4CodeGen_Private::EPropertyClass::Int, "IntValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms, IntValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyToRetrieve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Int32, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "DisplayName", "GetVRDevicePropertyInt32" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets a Int32 device property" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetVRDevicePropertyInt32", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyInt32_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms
		{
			EVRDeviceProperty_Matrix34 PropertyToRetrieve;
			int32 DeviceID;
			FTransform TransformValue;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformValue = { UE4CodeGen_Private::EPropertyClass::Struct, "TransformValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms, TransformValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyToRetrieve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_Matrix34, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "DisplayName", "GetVRDevicePropertyMatrix34AsTransform" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets a Matrix34 device property as a Transform" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetVRDevicePropertyMatrix34AsTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyMatrix34AsTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms
		{
			EVRDeviceProperty_String PropertyToRetrieve;
			int32 DeviceID;
			FString StringValue;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue = { UE4CodeGen_Private::EPropertyClass::Str, "StringValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms, StringValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyToRetrieve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_String, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "DisplayName", "GetVRDevicePropertyString" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets a String device property" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetVRDevicePropertyString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64()
	{
		struct OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms
		{
			EVRDeviceProperty_UInt64 PropertyToRetrieve;
			int32 DeviceID;
			FString UInt64Value;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UInt64Value = { UE4CodeGen_Private::EPropertyClass::Str, "UInt64Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms, UInt64Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeviceID = { UE4CodeGen_Private::EPropertyClass::Int, "DeviceID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms, DeviceID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PropertyToRetrieve = { UE4CodeGen_Private::EPropertyClass::Enum, "PropertyToRetrieve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms, PropertyToRetrieve), Z_Construct_UEnum_OpenVRExpansionPlugin_EVRDeviceProperty_UInt64, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PropertyToRetrieve_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UInt64Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeviceID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyToRetrieve_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "DisplayName", "GetVRDevicePropertyUInt64" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets a UInt64 device property as a string (Blueprints do not support int64)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "GetVRDevicePropertyUInt64", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventGetVRDevicePropertyUInt64_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera()
	{
		struct OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms
		{
			EOpenVRCameraFrameType FrameType;
			int32 Width;
			int32 Height;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FrameType = { UE4CodeGen_Private::EPropertyClass::Enum, "FrameType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms, FrameType), Z_Construct_UEnum_OpenVRExpansionPlugin_EOpenVRCameraFrameType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrameType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
				{ "DisplayName", "HasVRCamera" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Returns if there is a VR camera and what its pixel height / width is" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "HasVRCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OpenVRExpansionFunctionLibrary_eventHasVRCamera_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected()
	{
		struct OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms
		{
			EBPVRDeviceIndex OpenVRDeviceIndex;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpenVRDeviceIndex = { UE4CodeGen_Private::EPropertyClass::Enum, "OpenVRDeviceIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms, OpenVRDeviceIndex), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPVRDeviceIndex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpenVRDeviceIndex_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenVRDeviceIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpenVRDeviceIndex_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Closes the handles for the library" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "IsOpenVRDeviceConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(OpenVRExpansionFunctionLibrary_eventIsOpenVRDeviceConnected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid()
	{
		struct OpenVRExpansionFunctionLibrary_eventIsValid_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventIsValid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventIsValid_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraHandle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
				{ "DisplayName", "IsValid" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Releases the vr camera from access" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventIsValid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera()
	{
		struct OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms
		{
			FBPOpenVRCameraHandle CameraHandle;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraHandle = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraHandle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms, CameraHandle), Z_Construct_UScriptStruct_FBPOpenVRCameraHandle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraHandle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|VRCamera" },
				{ "DisplayName", "ReleaseVRCamera" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Releases the vr camera from access - you MUST call this when done with the camera" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "ReleaseVRCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OpenVRExpansionFunctionLibrary_eventReleaseVRCamera_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride()
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms
		{
			UTexture* tFront;
			UTexture2D* tBack;
			UTexture* tLeft;
			UTexture* tRight;
			UTexture* tTop;
			UTexture* tBottom;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tBottom = { UE4CodeGen_Private::EPropertyClass::Object, "tBottom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tBottom), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tTop = { UE4CodeGen_Private::EPropertyClass::Object, "tTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tTop), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tRight = { UE4CodeGen_Private::EPropertyClass::Object, "tRight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tRight), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tLeft = { UE4CodeGen_Private::EPropertyClass::Object, "tLeft", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tLeft), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tBack = { UE4CodeGen_Private::EPropertyClass::Object, "tBack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tBack), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tFront = { UE4CodeGen_Private::EPropertyClass::Object, "tFront", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms, tFront), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tBottom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tRight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tLeft,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tBack,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tFront,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Override the standard skybox texture in steamVR - 6 cardinal textures - need to call ClearSkyboxOverride when finished" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "SetSkyboxOverride", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong()
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms
		{
			UTexture2D* LatLongSkybox;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LatLongSkybox = { UE4CodeGen_Private::EPropertyClass::Object, "LatLongSkybox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms, LatLongSkybox), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatLongSkybox,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Override the standard skybox texture in steamVR - LatLong format - need to call ClearSkyboxOverride when finished" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "SetSkyboxOverride_LatLong", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLong_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair()
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms
		{
			UTexture2D* LatLongSkyboxL;
			UTexture2D* LatLongSkyboxR;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LatLongSkyboxR = { UE4CodeGen_Private::EPropertyClass::Object, "LatLongSkyboxR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms, LatLongSkyboxR), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LatLongSkyboxL = { UE4CodeGen_Private::EPropertyClass::Object, "LatLongSkyboxL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms, LatLongSkyboxL), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatLongSkyboxR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatLongSkyboxL,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Override the standard skybox texture in steamVR - LatLong stereo pair - need to call ClearSkyboxOverride when finished" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "SetSkyboxOverride_LatLongStereoPair", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(OpenVRExpansionFunctionLibrary_eventSetSkyboxOverride_LatLongStereoPair_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering()
	{
		struct OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms
		{
			bool bSuspendRendering;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSuspendRendering_SetBit = [](void* Obj){ ((OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms*)Obj)->bSuspendRendering = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuspendRendering = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuspendRendering", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSuspendRendering_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSuspendRendering,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR|Compositor" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Sets whether the compositor is allows to render or not (reverts to base compositor / grid when active)\nUseful to place players out of the app during frame drops/hitches/loading and into the vr skybox." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, "SetSuspendRendering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(OpenVRExpansionFunctionLibrary_eventSetSuspendRendering_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary_NoRegister()
	{
		return UOpenVRExpansionFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UOpenVRExpansionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_AcquireVRCamera, "AcquireVRCamera" }, // 301214887
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride, "ClearSkyboxOverride" }, // 3617521572
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D, "CreateCameraTexture2D" }, // 2997241195
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeHMDToColor, "FadeHMDToColor" }, // 3897891776
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_FadeVRGrid, "FadeVRGrid" }, // 763702392
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor, "GetCurrentHMDFadeColor" }, // 2159314831
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha, "GetCurrentVRGripAlpha" }, // 1593314724
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRCameraFrame, "GetVRCameraFrame" }, // 48797003
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture, "GetVRDeviceModelAndTexture" }, // 1610637214
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool, "GetVRDevicePropertyBool" }, // 3593613032
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat, "GetVRDevicePropertyFloat" }, // 3095831738
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32, "GetVRDevicePropertyInt32" }, // 548835954
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform, "GetVRDevicePropertyMatrix34AsTransform" }, // 4194091680
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString, "GetVRDevicePropertyString" }, // 592022355
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64, "GetVRDevicePropertyUInt64" }, // 1821031946
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_HasVRCamera, "HasVRCamera" }, // 298829133
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected, "IsOpenVRDeviceConnected" }, // 3483387932
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_IsValid, "IsValid" }, // 3340615830
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_ReleaseVRCamera, "ReleaseVRCamera" }, // 951732373
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride, "SetSkyboxOverride" }, // 1638957367
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong, "SetSkyboxOverride_LatLong" }, // 3677252408
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair, "SetSkyboxOverride_LatLongStereoPair" }, // 1314428332
				{ &Z_Construct_UFunction_UOpenVRExpansionFunctionLibrary_SetSuspendRendering, "SetSuspendRendering" }, // 1319131490
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "IncludePath", "OpenVRExpansionFunctionLibrary.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/OpenVRExpansionFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOpenVRExpansionFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOpenVRExpansionFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenVRExpansionFunctionLibrary, 4198828537);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenVRExpansionFunctionLibrary(Z_Construct_UClass_UOpenVRExpansionFunctionLibrary, &UOpenVRExpansionFunctionLibrary::StaticClass, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("UOpenVRExpansionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenVRExpansionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
