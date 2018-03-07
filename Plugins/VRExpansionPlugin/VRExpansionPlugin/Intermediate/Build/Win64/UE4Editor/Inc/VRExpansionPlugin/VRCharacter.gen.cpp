// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRCharacter();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_GetTeleportLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_RegenerateOffsetComponentToWorld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	static FName NAME_AVRCharacter_NotifyOfTeleport = FName(TEXT("NotifyOfTeleport"));
	void AVRCharacter::NotifyOfTeleport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRCharacter_NotifyOfTeleport),NULL);
	}
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
		UClass* Class = AVRCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtendedSimpleMoveToLocation", (Native)&AVRCharacter::execExtendedSimpleMoveToLocation },
			{ "GetTeleportLocation", (Native)&AVRCharacter::execGetTeleportLocation },
			{ "NotifyOfTeleport", (Native)&AVRCharacter::execNotifyOfTeleport },
			{ "RegenerateOffsetComponentToWorld", (Native)&AVRCharacter::execRegenerateOffsetComponentToWorld },
			{ "SetCharacterHalfHeightVR", (Native)&AVRCharacter::execSetCharacterHalfHeightVR },
			{ "SetCharacterSizeVR", (Native)&AVRCharacter::execSetCharacterSizeVR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation()
	{
		struct VRCharacter_eventExtendedSimpleMoveToLocation_Parms
		{
			FVector GoalLocation;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bProjectDestinationToNavigation;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bAllowPartialPath_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bAllowPartialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowPartialPath_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventExtendedSimpleMoveToLocation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCanStrafe_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bCanStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanStrafe_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bProjectDestinationToNavigation_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bProjectDestinationToNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectDestinationToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectDestinationToNavigation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsePathfinding_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bUsePathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePathfinding_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopOnOverlap_SetBit = [](void* Obj){ ((VRCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bStopOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventExtendedSimpleMoveToLocation_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventExtendedSimpleMoveToLocation_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GoalLocation_MetaData, ARRAY_COUNT(NewProp_GoalLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowPartialPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanStrafe,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bProjectDestinationToNavigation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePathfinding,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStopOnOverlap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AcceptanceRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GoalLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
				{ "Category", "VRCharacter" },
				{ "CPP_Default_AcceptanceRadius", "-1.000000" },
				{ "CPP_Default_bAllowPartialPath", "true" },
				{ "CPP_Default_bCanStrafe", "false" },
				{ "CPP_Default_bProjectDestinationToNavigation", "true" },
				{ "CPP_Default_bStopOnOverlap", "false" },
				{ "CPP_Default_bUsePathfinding", "true" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "An extended simple move to location with additional parameters" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "ExtendedSimpleMoveToLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(VRCharacter_eventExtendedSimpleMoveToLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_GetTeleportLocation()
	{
		struct VRCharacter_eventGetTeleportLocation_Parms
		{
			FVector OriginalLocation;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventGetTeleportLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventGetTeleportLocation_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "GetTeleportLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820400, sizeof(VRCharacter_eventGetTeleportLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "NotifyOfTeleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_RegenerateOffsetComponentToWorld()
	{
		struct VRCharacter_eventRegenerateOffsetComponentToWorld_Parms
		{
			bool bUpdateBounds;
			bool bCalculatePureYaw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCalculatePureYaw_SetBit = [](void* Obj){ ((VRCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bCalculatePureYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculatePureYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculatePureYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculatePureYaw_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUpdateBounds_SetBit = [](void* Obj){ ((VRCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bUpdateBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateBounds_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculatePureYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateBounds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ToolTip", "Regenerates the base offsetcomponenttoworld that VR uses" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "RegenerateOffsetComponentToWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRCharacter_eventRegenerateOffsetComponentToWorld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR()
	{
		struct VRCharacter_eventSetCharacterHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRCharacter_eventSetCharacterHalfHeightVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventSetCharacterHalfHeightVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventSetCharacterHalfHeightVR_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "SetCharacterHalfHeightVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRCharacter_eventSetCharacterHalfHeightVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR()
	{
		struct VRCharacter_eventSetCharacterSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRCharacter_eventSetCharacterSizeVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRCharacter_eventSetCharacterSizeVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NewHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventSetCharacterSizeVR_Parms, NewHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NewRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacter_eventSetCharacterSizeVR_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, "SetCharacterSizeVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRCharacter_eventSetCharacterSizeVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AVRBaseCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVRCharacter_ExtendedSimpleMoveToLocation, "ExtendedSimpleMoveToLocation" }, // 2210312081
				{ &Z_Construct_UFunction_AVRCharacter_GetTeleportLocation, "GetTeleportLocation" }, // 2232277604
				{ &Z_Construct_UFunction_AVRCharacter_NotifyOfTeleport, "NotifyOfTeleport" }, // 910301256
				{ &Z_Construct_UFunction_AVRCharacter_RegenerateOffsetComponentToWorld, "RegenerateOffsetComponentToWorld" }, // 3186149280
				{ &Z_Construct_UFunction_AVRCharacter_SetCharacterHalfHeightVR, "SetCharacterHalfHeightVR" }, // 3014472451
				{ &Z_Construct_UFunction_AVRCharacter_SetCharacterSizeVR, "SetCharacterSizeVR" }, // 687644075
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "VRCharacter.h" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootReference_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootReference = { UE4CodeGen_Private::EPropertyClass::Object, "VRRootReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a201d, 1, nullptr, STRUCT_OFFSET(AVRCharacter, VRRootReference), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(NewProp_VRRootReference_MetaData, ARRAY_COUNT(NewProp_VRRootReference_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRRootReference,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AVRCharacter, 1565074739);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRCharacter(Z_Construct_UClass_AVRCharacter, &AVRCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
