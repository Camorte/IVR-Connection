// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRStereoWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRStereoWidgetComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRStereoWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority();
// End Cross Module References
	void UVRStereoWidgetComponent::StaticRegisterNativesUVRStereoWidgetComponent()
	{
		UClass* Class = UVRStereoWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriority", (Native)&UVRStereoWidgetComponent::execGetPriority },
			{ "SetPriority", (Native)&UVRStereoWidgetComponent::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority()
	{
		struct VRStereoWidgetComponent_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRStereoWidgetComponent_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
				{ "ToolTip", "@return the render priority" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetComponent, "GetPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VRStereoWidgetComponent_eventGetPriority_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority()
	{
		struct VRStereoWidgetComponent_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPriority = { UE4CodeGen_Private::EPropertyClass::Int, "InPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRStereoWidgetComponent_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPriority,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
				{ "ToolTip", "Change the layer's render priority, higher priorities render on top of lower priorities\n@param        InPriority: Priority value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRStereoWidgetComponent, "SetPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRStereoWidgetComponent_eventSetPriority_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent_NoRegister()
	{
		return UVRStereoWidgetComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRStereoWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRStereoWidgetComponent_GetPriority, "GetPriority" }, // 1702384284
				{ &Z_Construct_UFunction_UVRStereoWidgetComponent_SetPriority, "SetPriority" }, // 3153313406
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "VRExpansionPlugin" },
				{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
				{ "IncludePath", "VRStereoWidgetComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
				{ "ToolTip", "A widget component that displays the widget in a stereo layer instead of in worldspace.\nCurrently this class uses a custom postion instead of the engines WorldLocked for stereo layers\nThis is because world locked stereo layers don't account for player movement currently." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
				{ "ToolTip", "Render priority among all stereo layers, higher priority render on top of lower priority *" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Int, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000000001d, 1, nullptr, STRUCT_OFFSET(UVRStereoWidgetComponent, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQuadPreserveTextureRatio_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
				{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
			};
#endif
			auto NewProp_bQuadPreserveTextureRatio_SetBit = [](void* Obj){ ((UVRStereoWidgetComponent*)Obj)->bQuadPreserveTextureRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuadPreserveTextureRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bQuadPreserveTextureRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UVRStereoWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bQuadPreserveTextureRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bQuadPreserveTextureRatio_MetaData, ARRAY_COUNT(NewProp_bQuadPreserveTextureRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
				{ "ToolTip", "True if the texture should not use its own alpha channel (1.0 will be substituted)" },
			};
#endif
			auto NewProp_bNoAlphaChannel_SetBit = [](void* Obj){ ((UVRStereoWidgetComponent*)Obj)->bNoAlphaChannel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoAlphaChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UVRStereoWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoAlphaChannel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoAlphaChannel_MetaData, ARRAY_COUNT(NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEpicsWorldLockedStereo_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Public/VRStereoWidgetComponent.h" },
				{ "ToolTip", "If true, use Epics world locked stereo implementation instead of my own temp solution" },
			};
#endif
			auto NewProp_bUseEpicsWorldLockedStereo_SetBit = [](void* Obj){ ((UVRStereoWidgetComponent*)Obj)->bUseEpicsWorldLockedStereo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEpicsWorldLockedStereo = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseEpicsWorldLockedStereo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRStereoWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseEpicsWorldLockedStereo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseEpicsWorldLockedStereo_MetaData, ARRAY_COUNT(NewProp_bUseEpicsWorldLockedStereo_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bQuadPreserveTextureRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoAlphaChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseEpicsWorldLockedStereo,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRStereoWidgetComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRStereoWidgetComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UVRStereoWidgetComponent, 3164220840);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRStereoWidgetComponent(Z_Construct_UClass_UVRStereoWidgetComponent, &UVRStereoWidgetComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRStereoWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRStereoWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
