// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRRootComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRRootComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRWaistTracking_Info();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
// End Cross Module References
	void UVRRootComponent::StaticRegisterNativesUVRRootComponent()
	{
		UClass* Class = UVRRootComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCapsuleHalfHeightVR", (Native)&UVRRootComponent::execSetCapsuleHalfHeightVR },
			{ "SetCapsuleSizeVR", (Native)&UVRRootComponent::execSetCapsuleSizeVR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR()
	{
		struct VRRootComponent_eventSetCapsuleHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRRootComponent_eventSetCapsuleHalfHeightVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
				{ "ToolTip", "Used to update the capsule half height and calculate the new offset value for VR" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRootComponent, "SetCapsuleHalfHeightVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRRootComponent_eventSetCapsuleHalfHeightVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR()
	{
		struct VRRootComponent_eventSetCapsuleSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRRootComponent_eventSetCapsuleSizeVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRRootComponent_eventSetCapsuleSizeVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NewHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleSizeVR_Parms, NewHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NewRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRRootComponent_eventSetCapsuleSizeVR_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Capsule" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
				{ "ToolTip", "This is overidden for the VR Character to re-set physics location\nChange the capsule size. This is the unscaled size, before component scale is applied.\n@param        InRadius : radius of end-cap hemispheres and center cylinder.\n@param        InHalfHeight : half-height, from capsule center to end of top or bottom hemisphere.\n@param        bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRRootComponent, "SetCapsuleSizeVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRRootComponent_eventSetCapsuleSizeVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRRootComponent_NoRegister()
	{
		return UVRRootComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRRootComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRRootComponent_SetCapsuleHalfHeightVR, "SetCapsuleHalfHeightVR" }, // 795014117
				{ &Z_Construct_UFunction_UVRRootComponent_SetCapsuleSizeVR, "SetCapsuleSizeVR" }, // 635904142
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "VRExpansionLibrary" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "VRRootComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
				{ "ToolTip", "A capsule component that repositions its physics scene and rendering location to the camera/HMD's relative position.\nGenerally not to be used by itself unless on a base Pawn and not a character, the VRCharacter has been highly customized to correctly support it." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHadRelativeMovement_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
				{ "ToolTip", "While misnamed, is true if we collided with a wall/obstacle due to the HMDs movement in this frame (not movement components)" },
			};
#endif
			auto NewProp_bHadRelativeMovement_SetBit = [](void* Obj){ ((UVRRootComponent*)Obj)->bHadRelativeMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadRelativeMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadRelativeMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRRootComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHadRelativeMovement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHadRelativeMovement_MetaData, ARRAY_COUNT(NewProp_bHadRelativeMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingCollisionOverride_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WalkingCollisionOverride = { UE4CodeGen_Private::EPropertyClass::Byte, "WalkingCollisionOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRRootComponent, WalkingCollisionOverride), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_WalkingCollisionOverride_MetaData, ARRAY_COUNT(NewProp_WalkingCollisionOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWalkingCollisionOverride_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
			};
#endif
			auto NewProp_bUseWalkingCollisionOverride_SetBit = [](void* Obj){ ((UVRRootComponent*)Obj)->bUseWalkingCollisionOverride = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWalkingCollisionOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseWalkingCollisionOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRRootComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseWalkingCollisionOverride_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseWalkingCollisionOverride_MetaData, ARRAY_COUNT(NewProp_bUseWalkingCollisionOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCenterCapsuleOnHMD_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
				{ "ToolTip", "#TODO: See if making this multiplayer compatible is viable\nOffsets capsule to be centered on HMD - currently NOT multiplayer compatible" },
			};
#endif
			auto NewProp_bCenterCapsuleOnHMD_SetBit = [](void* Obj){ ((UVRRootComponent*)Obj)->bCenterCapsuleOnHMD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCenterCapsuleOnHMD = { UE4CodeGen_Private::EPropertyClass::Bool, "bCenterCapsuleOnHMD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRRootComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCenterCapsuleOnHMD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCenterCapsuleOnHMD_MetaData, ARRAY_COUNT(NewProp_bCenterCapsuleOnHMD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCapsuleOffset_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
				{ "ToolTip", "Used to offset the collision (IE backwards from the player slightly." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRCapsuleOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "VRCapsuleOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRRootComponent, VRCapsuleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_VRCapsuleOffset_MetaData, ARRAY_COUNT(NewProp_VRCapsuleOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPrimitiveComponent_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetPrimitiveComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TargetPrimitiveComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008200c, 1, nullptr, STRUCT_OFFSET(UVRRootComponent, TargetPrimitiveComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_TargetPrimitiveComponent_MetaData, ARRAY_COUNT(NewProp_TargetPrimitiveComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalWaistTrackingParent_MetaData[] = {
				{ "Category", "VRTrackedParentInterface" },
				{ "ModuleRelativePath", "Public/VRRootComponent.h" },
				{ "ToolTip", "If valid will use this as the tracked parent instead of the HMD / Parent" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionalWaistTrackingParent = { UE4CodeGen_Private::EPropertyClass::Struct, "OptionalWaistTrackingParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000005, 1, nullptr, STRUCT_OFFSET(UVRRootComponent, OptionalWaistTrackingParent), Z_Construct_UScriptStruct_FBPVRWaistTracking_Info, METADATA_PARAMS(NewProp_OptionalWaistTrackingParent_MetaData, ARRAY_COUNT(NewProp_OptionalWaistTrackingParent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHadRelativeMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WalkingCollisionOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseWalkingCollisionOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCenterCapsuleOnHMD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRCapsuleOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetPrimitiveComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OptionalWaistTrackingParent,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UVRTrackedParentInterface_NoRegister, (int32)VTABLE_OFFSET(UVRRootComponent, IVRTrackedParentInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRRootComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRRootComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UVRRootComponent, 46973833);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRRootComponent(Z_Construct_UClass_UVRRootComponent, &UVRRootComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRRootComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRRootComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
