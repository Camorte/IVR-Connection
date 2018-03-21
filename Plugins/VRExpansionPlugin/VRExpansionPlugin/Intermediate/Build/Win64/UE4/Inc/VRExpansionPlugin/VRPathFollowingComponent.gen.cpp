// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPathFollowingComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRPathFollowingComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister();
// End Cross Module References
	void UVRPathFollowingComponent::StaticRegisterNativesUVRPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UVRPathFollowingComponent_NoRegister()
	{
		return UVRPathFollowingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VRPathFollowingComponent.h" },
				{ "ModuleRelativePath", "Public/VRPathFollowingComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMovementComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPathFollowingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMovementComp = { UE4CodeGen_Private::EPropertyClass::Object, "VRMovementComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000082008, 1, nullptr, STRUCT_OFFSET(UVRPathFollowingComponent, VRMovementComp), Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister, METADATA_PARAMS(NewProp_VRMovementComp_MetaData, ARRAY_COUNT(NewProp_VRMovementComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRMovementComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRPathFollowingComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRPathFollowingComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UVRPathFollowingComponent, 1797676298);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRPathFollowingComponent(Z_Construct_UClass_UVRPathFollowingComponent, &UVRPathFollowingComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
