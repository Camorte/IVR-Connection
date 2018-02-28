// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRTrackedParentInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTrackedParentInterface() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRTrackedParentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	void UVRTrackedParentInterface::StaticRegisterNativesUVRTrackedParentInterface()
	{
		UClass* Class = UVRTrackedParentInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTrackedParent", (Native)&IVRTrackedParentInterface::execSetTrackedParent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent()
	{
		struct VRTrackedParentInterface_eventSetTrackedParent_Parms
		{
			UPrimitiveComponent* NewParentComponent;
			float WaistRadius;
			EBPVRWaistTrackingMode WaistTrackingMode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WaistTrackingMode = { UE4CodeGen_Private::EPropertyClass::Enum, "WaistTrackingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, WaistTrackingMode), Z_Construct_UEnum_VRExpansionPlugin_EBPVRWaistTrackingMode, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WaistTrackingMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaistRadius = { UE4CodeGen_Private::EPropertyClass::Float, "WaistRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, WaistRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewParentComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewParentComponent = { UE4CodeGen_Private::EPropertyClass::Object, "NewParentComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRTrackedParentInterface_eventSetTrackedParent_Parms, NewParentComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_NewParentComponent_MetaData, ARRAY_COUNT(NewProp_NewParentComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaistTrackingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaistTrackingMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaistRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewParentComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRTrackedParentInterface" },
				{ "ModuleRelativePath", "Public/VRTrackedParentInterface.h" },
				{ "ToolTip", "Set a tracked parent" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRTrackedParentInterface, "SetTrackedParent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRTrackedParentInterface_eventSetTrackedParent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRTrackedParentInterface_NoRegister()
	{
		return UVRTrackedParentInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRTrackedParentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRTrackedParentInterface_SetTrackedParent, "SetTrackedParent" }, // 540741167
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "CannotImplementInterfaceInBlueprint", "" },
				{ "ModuleRelativePath", "Public/VRTrackedParentInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IVRTrackedParentInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRTrackedParentInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00104081u,
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
	IMPLEMENT_CLASS(UVRTrackedParentInterface, 2223490428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRTrackedParentInterface(Z_Construct_UClass_UVRTrackedParentInterface, &UVRTrackedParentInterface::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRTrackedParentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRTrackedParentInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
