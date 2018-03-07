// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ReplicatedVRCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedVRCameraComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_GetCameraView();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
// End Cross Module References
	static FName NAME_UReplicatedVRCameraComponent_Server_SendCameraTransform = FName(TEXT("Server_SendCameraTransform"));
	void UReplicatedVRCameraComponent::Server_SendCameraTransform(FBPVRComponentPosRep NewTransform)
	{
		ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_UReplicatedVRCameraComponent_Server_SendCameraTransform),&Parms);
	}
	void UReplicatedVRCameraComponent::StaticRegisterNativesUReplicatedVRCameraComponent()
	{
		UClass* Class = UReplicatedVRCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraView", (Native)&UReplicatedVRCameraComponent::execGetCameraView },
			{ "OnRep_ReplicatedCameraTransform", (Native)&UReplicatedVRCameraComponent::execOnRep_ReplicatedCameraTransform },
			{ "Server_SendCameraTransform", (Native)&UReplicatedVRCameraComponent::execServer_SendCameraTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_GetCameraView()
	{
		struct ReplicatedVRCameraComponent_eventGetCameraView_Parms
		{
			float DeltaTime;
			FMinimalViewInfo DesiredView;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredView = { UE4CodeGen_Private::EPropertyClass::Struct, "DesiredView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(ReplicatedVRCameraComponent_eventGetCameraView_Parms, DesiredView), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ReplicatedVRCameraComponent_eventGetCameraView_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredView,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, "GetCameraView", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(ReplicatedVRCameraComponent_eventGetCameraView_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, "OnRep_ReplicatedCameraTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
				{ "ToolTip", "I'm sending it unreliable because it is being resent pretty often" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicatedVRCameraComponent, "Server_SendCameraTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister()
	{
		return UReplicatedVRCameraComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UReplicatedVRCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCameraComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_GetCameraView, "GetCameraView" }, // 2818821570
				{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform, "OnRep_ReplicatedCameraTransform" }, // 115169961
				{ &Z_Construct_UFunction_UReplicatedVRCameraComponent_Server_SendCameraTransform, "Server_SendCameraTransform" }, // 762717465
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "VRExpansionLibrary" },
				{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
				{ "IncludePath", "ReplicatedVRCameraComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
				{ "ToolTip", "An overridden camera component that replicates its location in multiplayer" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetUpdateRate_MetaData[] = {
				{ "Category", "ReplicatedCamera|Networking" },
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
				{ "ToolTip", "Rate to update the position to the server, 100htz is default (same as replication rate, should also hit every tick)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetUpdateRate = { UE4CodeGen_Private::EPropertyClass::Float, "NetUpdateRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UReplicatedVRCameraComponent, NetUpdateRate), METADATA_PARAMS(NewProp_NetUpdateRate_MetaData, ARRAY_COUNT(NewProp_NetUpdateRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothReplicatedMotion_MetaData[] = {
				{ "Category", "ReplicatedCamera|Networking" },
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
				{ "ToolTip", "Whether to smooth (lerp) between ticks for the replicated motion, DOES NOTHING if update rate is larger than FPS!" },
			};
#endif
			auto NewProp_bSmoothReplicatedMotion_SetBit = [](void* Obj){ ((UReplicatedVRCameraComponent*)Obj)->bSmoothReplicatedMotion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothReplicatedMotion = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothReplicatedMotion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UReplicatedVRCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmoothReplicatedMotion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmoothReplicatedMotion_MetaData, ARRAY_COUNT(NewProp_bSmoothReplicatedMotion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedCameraTransform_MetaData[] = {
				{ "Category", "ReplicatedCamera|Networking" },
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedCameraTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ReplicatedCameraTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100010021, 1, "OnRep_ReplicatedCameraTransform", STRUCT_OFFSET(UReplicatedVRCameraComponent, ReplicatedCameraTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(NewProp_ReplicatedCameraTransform_MetaData, ARRAY_COUNT(NewProp_ReplicatedCameraTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSetLockToHmd_MetaData[] = {
				{ "Category", "ReplicatedCamera" },
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
				{ "ToolTip", "Sets lock to hmd automatically based on if the camera is currently locally controlled or not" },
			};
#endif
			auto NewProp_bAutoSetLockToHmd_SetBit = [](void* Obj){ ((UReplicatedVRCameraComponent*)Obj)->bAutoSetLockToHmd = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSetLockToHmd = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoSetLockToHmd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UReplicatedVRCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoSetLockToHmd_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoSetLockToHmd_MetaData, ARRAY_COUNT(NewProp_bAutoSetLockToHmd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOffsetByHMD_MetaData[] = {
				{ "Category", "ReplicatedCamera" },
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
				{ "ToolTip", "If true will subtract the HMD's location from the position, useful for if the actors base is set to the HMD location always (simple character)." },
			};
#endif
			auto NewProp_bOffsetByHMD_SetBit = [](void* Obj){ ((UReplicatedVRCameraComponent*)Obj)->bOffsetByHMD = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOffsetByHMD = { UE4CodeGen_Private::EPropertyClass::Bool, "bOffsetByHMD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UReplicatedVRCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOffsetByHMD_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOffsetByHMD_MetaData, ARRAY_COUNT(NewProp_bOffsetByHMD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetPositionDuringTick_MetaData[] = {
				{ "Category", "ReplicatedCamera" },
				{ "ModuleRelativePath", "Public/ReplicatedVRCameraComponent.h" },
				{ "ToolTip", "For non view target positional updates" },
			};
#endif
			auto NewProp_bSetPositionDuringTick_SetBit = [](void* Obj){ ((UReplicatedVRCameraComponent*)Obj)->bSetPositionDuringTick = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetPositionDuringTick = { UE4CodeGen_Private::EPropertyClass::Bool, "bSetPositionDuringTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UReplicatedVRCameraComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSetPositionDuringTick_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSetPositionDuringTick_MetaData, ARRAY_COUNT(NewProp_bSetPositionDuringTick_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetUpdateRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmoothReplicatedMotion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedCameraTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoSetLockToHmd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOffsetByHMD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSetPositionDuringTick,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UReplicatedVRCameraComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UReplicatedVRCameraComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplicatedVRCameraComponent, 18964502);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplicatedVRCameraComponent(Z_Construct_UClass_UReplicatedVRCameraComponent, &UReplicatedVRCameraComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UReplicatedVRCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicatedVRCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
