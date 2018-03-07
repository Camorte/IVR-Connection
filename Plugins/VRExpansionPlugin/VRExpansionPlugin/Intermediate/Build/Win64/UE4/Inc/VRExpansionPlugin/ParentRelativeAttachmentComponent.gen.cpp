// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ParentRelativeAttachmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentRelativeAttachmentComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
// End Cross Module References
	void UParentRelativeAttachmentComponent::StaticRegisterNativesUParentRelativeAttachmentComponent()
	{
	}
	UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister()
	{
		return UParentRelativeAttachmentComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "VRExpansionLibrary" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "ParentRelativeAttachmentComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
				{ "ToolTip", "A component that will track the HMD/Cameras location and YAW rotation to allow for chest/waist attachements.\nThis is intended to be parented to the root component of a pawn, it will then either find and track the camera\nor use the HMD's position if one is connected. This allows it to work in multiplayer since the camera will\nhave its position replicated." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalWaistTrackingParent_MetaData[] = {
				{ "Category", "VRTrackedParentInterface" },
				{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
				{ "ToolTip", "If valid will use this as the tracked parent instead of the HMD / Parent" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalWaistTrackingParent = { UE4CodeGen_Private::EPropertyClass::Struct, "OptionalWaistTrackingParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000005, 1, nullptr, STRUCT_OFFSET(UParentRelativeAttachmentComponent, OptionalWaistTrackingParent), Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, METADATA_PARAMS(NewProp_OptionalWaistTrackingParent_MetaData, ARRAY_COUNT(NewProp_OptionalWaistTrackingParent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRotationFromParent_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
				{ "ToolTip", "If true, will not set rotation every frame, only position" },
			};
#endif
			auto NewProp_bIgnoreRotationFromParent_SetBit = [](void* Obj){ ((UParentRelativeAttachmentComponent*)Obj)->bIgnoreRotationFromParent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRotationFromParent = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreRotationFromParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParentRelativeAttachmentComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreRotationFromParent_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreRotationFromParent_MetaData, ARRAY_COUNT(NewProp_bIgnoreRotationFromParent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetByHMD_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
				{ "ToolTip", "If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character)." },
			};
#endif
			auto NewProp_bOffsetByHMD_SetBit = [](void* Obj){ ((UParentRelativeAttachmentComponent*)Obj)->bOffsetByHMD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetByHMD = { UE4CodeGen_Private::EPropertyClass::Bool, "bOffsetByHMD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParentRelativeAttachmentComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOffsetByHMD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOffsetByHMD_MetaData, ARRAY_COUNT(NewProp_bOffsetByHMD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFeetLocation_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
				{ "ToolTip", "If true uses feet/bottom of the capsule as the base Z position for this component instead of the HMD/Camera Z position" },
			};
#endif
			auto NewProp_bUseFeetLocation_SetBit = [](void* Obj){ ((UParentRelativeAttachmentComponent*)Obj)->bUseFeetLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFeetLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFeetLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParentRelativeAttachmentComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseFeetLocation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseFeetLocation_MetaData, ARRAY_COUNT(NewProp_bUseFeetLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLerpTransition_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
			};
#endif
			auto NewProp_bLerpTransition_SetBit = [](void* Obj){ ((UParentRelativeAttachmentComponent*)Obj)->bLerpTransition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLerpTransition = { UE4CodeGen_Private::EPropertyClass::Bool, "bLerpTransition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UParentRelativeAttachmentComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLerpTransition_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLerpTransition_MetaData, ARRAY_COUNT(NewProp_bLerpTransition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LerpSpeed_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LerpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LerpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParentRelativeAttachmentComponent, LerpSpeed), METADATA_PARAMS(NewProp_LerpSpeed_MetaData, ARRAY_COUNT(NewProp_LerpSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawTolerance_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/ParentRelativeAttachmentComponent.h" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "YawTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UParentRelativeAttachmentComponent, YawTolerance), METADATA_PARAMS(NewProp_YawTolerance_MetaData, ARRAY_COUNT(NewProp_YawTolerance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionalWaistTrackingParent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreRotationFromParent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOffsetByHMD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseFeetLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLerpTransition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LerpSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YawTolerance,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UVRTrackedParentInterface_NoRegister, (int32)VTABLE_OFFSET(UParentRelativeAttachmentComponent, IVRTrackedParentInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParentRelativeAttachmentComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParentRelativeAttachmentComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParentRelativeAttachmentComponent, 2023300479);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParentRelativeAttachmentComponent(Z_Construct_UClass_UParentRelativeAttachmentComponent, &UParentRelativeAttachmentComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UParentRelativeAttachmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentRelativeAttachmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
