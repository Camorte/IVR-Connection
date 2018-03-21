// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRExpansionFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRExpansionFunctionLibrary() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPEuroLowPassFilter();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	static UEnum* EBPHMDWornState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EBPHMDWornState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBPHMDWornState(EBPHMDWornState_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EBPHMDWornState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_CRC() { return 2686870328U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBPHMDWornState"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBPHMDWornState::Unknown", (int64)EBPHMDWornState::Unknown },
				{ "EBPHMDWornState::Worn", (int64)EBPHMDWornState::Worn },
				{ "EBPHMDWornState::NotWorn", (int64)EBPHMDWornState::NotWorn },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "NotWorn.DisplayName", "Not Worn" },
				{ "ToolTip", "Redefining this for blueprint as it wasn't declared as BlueprintType\nStores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown." },
				{ "Unknown.DisplayName", "Unknown" },
				{ "Worn.DisplayName", "Worn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBPHMDWornState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBPHMDWornState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UVRExpansionFunctionLibrary::StaticRegisterNativesUVRExpansionFunctionLibrary()
	{
		UClass* Class = UVRExpansionFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSceneComponentByClass", (Native)&UVRExpansionFunctionLibrary::execAddSceneComponentByClass },
			{ "BreakTransform_NetQuantize", (Native)&UVRExpansionFunctionLibrary::execBreakTransform_NetQuantize },
			{ "Conv_TransformToTransformNetQuantize", (Native)&UVRExpansionFunctionLibrary::execConv_TransformToTransformNetQuantize },
			{ "EqualEqual_FBPActorGripInformation", (Native)&UVRExpansionFunctionLibrary::execEqualEqual_FBPActorGripInformation },
			{ "GetGripSlotInRangeByTypeName", (Native)&UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName },
			{ "GetGripSlotInRangeByTypeName_Component", (Native)&UVRExpansionFunctionLibrary::execGetGripSlotInRangeByTypeName_Component },
			{ "GetHMDPureYaw", (Native)&UVRExpansionFunctionLibrary::execGetHMDPureYaw },
			{ "GetHMDType", (Native)&UVRExpansionFunctionLibrary::execGetHMDType },
			{ "GetIsActorMovable", (Native)&UVRExpansionFunctionLibrary::execGetIsActorMovable },
			{ "GetIsHMDConnected", (Native)&UVRExpansionFunctionLibrary::execGetIsHMDConnected },
			{ "GetIsHMDWorn", (Native)&UVRExpansionFunctionLibrary::execGetIsHMDWorn },
			{ "IsInVREditorPreview", (Native)&UVRExpansionFunctionLibrary::execIsInVREditorPreview },
			{ "IsInVREditorPreviewOrGame", (Native)&UVRExpansionFunctionLibrary::execIsInVREditorPreviewOrGame },
			{ "LowPassFilter_Exponential", (Native)&UVRExpansionFunctionLibrary::execLowPassFilter_Exponential },
			{ "LowPassFilter_RollingAverage", (Native)&UVRExpansionFunctionLibrary::execLowPassFilter_RollingAverage },
			{ "MakeTransform_NetQuantize", (Native)&UVRExpansionFunctionLibrary::execMakeTransform_NetQuantize },
			{ "NonAuthorityMinimumAreaRectangle", (Native)&UVRExpansionFunctionLibrary::execNonAuthorityMinimumAreaRectangle },
			{ "ResetEuroSmoothingFilter", (Native)&UVRExpansionFunctionLibrary::execResetEuroSmoothingFilter },
			{ "RotateAroundPivot", (Native)&UVRExpansionFunctionLibrary::execRotateAroundPivot },
			{ "RunEuroSmoothingFilter", (Native)&UVRExpansionFunctionLibrary::execRunEuroSmoothingFilter },
			{ "SmoothUpdateLaserSpline", (Native)&UVRExpansionFunctionLibrary::execSmoothUpdateLaserSpline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass()
	{
		struct VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms
		{
			UObject* Outer;
			TSubclassOf<USceneComponent>  Class;
			FTransform ComponentRelativeTransform;
			USceneComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentRelativeTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentRelativeTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentRelativeTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, ComponentRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_ComponentRelativeTransform_MetaData, ARRAY_COUNT(NewProp_ComponentRelativeTransform_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class = { UE4CodeGen_Private::EPropertyClass::Class, "Class", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, Class), Z_Construct_UClass_USceneComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer = { UE4CodeGen_Private::EPropertyClass::Object, "Outer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentRelativeTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Class,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Outer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "DisplayName", "Add Scene Component By Class" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Adds a USceneComponent Subclass, that is based on the passed in Class, and added to the Outer(Actor) object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "AddSceneComponentByClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(VRExpansionFunctionLibrary_eventAddSceneComponentByClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize()
	{
		struct VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms
		{
			FTransform_NetQuantize InTransform;
			FVector Location;
			FRotator Rotation;
			FVector Scale;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms, InTransform), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(NewProp_InTransform_MetaData, ARRAY_COUNT(NewProp_InTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "NativeBreakFunc", "" },
				{ "ToolTip", "Breaks apart a transform net quantize into location, rotation and scale" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "BreakTransform_NetQuantize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRExpansionFunctionLibrary_eventBreakTransform_NetQuantize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize()
	{
		struct VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms
		{
			FTransform InTransform;
			FTransform_NetQuantize ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTransform_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms, InTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_InTransform_MetaData, ARRAY_COUNT(NewProp_InTransform_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "BlueprintAutocast", "" },
				{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
				{ "CompactNodeTitle", "->" },
				{ "DisplayName", "ToTransform_NetQuantize (Transform)" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Converts a FTransform into a FTransform_NetQuantize" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "Conv_TransformToTransformNetQuantize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRExpansionFunctionLibrary_eventConv_TransformToTransformNetQuantize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation()
	{
		struct VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms
		{
			FBPActorGripInformation A;
			FBPActorGripInformation B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms, B), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms, A), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRExpansionFunctions" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal VR Grip" },
				{ "Keywords", "== equal" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Returns true if the values are equal (A == B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "EqualEqual_FBPActorGripInformation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(VRExpansionFunctionLibrary_eventEqualEqual_FBPActorGripInformation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName()
	{
		struct VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms
		{
			FName SlotType;
			AActor* Actor;
			FVector WorldLocation;
			float MaxRange;
			bool bHadSlotInRange;
			FTransform SlotWorldTransform;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHadSlotInRange_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms*)Obj)->bHadSlotInRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadSlotInRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHadSlotInRange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotType = { UE4CodeGen_Private::EPropertyClass::Name, "SlotType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms, SlotType), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotWorldTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHadSlotInRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Actor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRGrip" },
				{ "DisplayName", "GetGripSlotInRangeByTypeName" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets if an actors root component contains a grip slot within range" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "GetGripSlotInRangeByTypeName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component()
	{
		struct VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms
		{
			FName SlotType;
			UPrimitiveComponent* Component;
			FVector WorldLocation;
			float MaxRange;
			bool bHadSlotInRange;
			FTransform SlotWorldTransform;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHadSlotInRange_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms*)Obj)->bHadSlotInRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadSlotInRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHadSlotInRange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Component_MetaData, ARRAY_COUNT(NewProp_Component_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotType = { UE4CodeGen_Private::EPropertyClass::Name, "SlotType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms, SlotType), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotWorldTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHadSlotInRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Component,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRGrip" },
				{ "DisplayName", "GetGripSlotInRangeByTypeName_Component" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets if an actors root component contains a grip slot within range" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "GetGripSlotInRangeByTypeName_Component", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRExpansionFunctionLibrary_eventGetGripSlotInRangeByTypeName_Component_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw()
	{
		struct VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms
		{
			FRotator HMDRotation;
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HMDRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "HMDRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms, HMDRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMDRotation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "DisplayName", "GetHMDPureYaw" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets the unwound yaw of the HMD" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "GetHMDPureYaw", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(VRExpansionFunctionLibrary_eventGetHMDPureYaw_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType()
	{
		struct VRExpansionFunctionLibrary_eventGetHMDType_Parms
		{
			EBPHMDDeviceType ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetHMDType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EBPHMDDeviceType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "DisplayName", "GetHMDType" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets whether an HMD device is connected" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "GetHMDType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VRExpansionFunctionLibrary_eventGetHMDType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable()
	{
		struct VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms
		{
			AActor* ActorToCheck;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToCheck = { UE4CodeGen_Private::EPropertyClass::Object, "ActorToCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms, ActorToCheck), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ActorToCheck,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "DisplayName", "GetIsActorMovable" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets whether an HMD device is connected" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "GetIsActorMovable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VRExpansionFunctionLibrary_eventGetIsActorMovable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected()
	{
		struct VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "DisplayName", "GetIsHMDConnected" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets whether an HMD device is connected" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "GetIsHMDConnected", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VRExpansionFunctionLibrary_eventGetIsHMDConnected_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn()
	{
		struct VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms
		{
			EBPHMDWornState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EBPHMDWornState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "DisplayName", "GetIsHMDWorn" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets whether an HMD device is connected" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "GetIsHMDWorn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VRExpansionFunctionLibrary_eventGetIsHMDWorn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview()
	{
		struct VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "DisplayName", "IsInVREditorPreview" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets whether the game is running in VRPreview" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "IsInVREditorPreview", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreview_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame()
	{
		struct VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "DisplayName", "IsInVREditorPreviewOrGame" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Gets whether the game is running in VRPreview or is a non editor build game (returns true for either)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "IsInVREditorPreviewOrGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VRExpansionFunctionLibrary_eventIsInVREditorPreviewOrGame_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential()
	{
		struct VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms
		{
			FVector lastAverage;
			FVector newSample;
			FVector newAverage;
			float sampleFactor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sampleFactor = { UE4CodeGen_Private::EPropertyClass::Float, "sampleFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, sampleFactor), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_newAverage = { UE4CodeGen_Private::EPropertyClass::Struct, "newAverage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, newAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_newSample = { UE4CodeGen_Private::EPropertyClass::Struct, "newSample", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, newSample), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_lastAverage = { UE4CodeGen_Private::EPropertyClass::Struct, "lastAverage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms, lastAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sampleFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newAverage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newSample,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lastAverage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "CPP_Default_sampleFactor", "0.250000" },
				{ "DisplayName", "LowPassFilter_Exponential" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "A exponential low pass filter" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "LowPassFilter_Exponential", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRExpansionFunctionLibrary_eventLowPassFilter_Exponential_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage()
	{
		struct VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms
		{
			FVector lastAverage;
			FVector newSample;
			FVector newAverage;
			int32 numSamples;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_numSamples = { UE4CodeGen_Private::EPropertyClass::Int, "numSamples", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, numSamples), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_newAverage = { UE4CodeGen_Private::EPropertyClass::Struct, "newAverage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, newAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_newSample = { UE4CodeGen_Private::EPropertyClass::Struct, "newSample", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, newSample), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_lastAverage = { UE4CodeGen_Private::EPropertyClass::Struct, "lastAverage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms, lastAverage), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numSamples,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newAverage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newSample,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lastAverage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "CPP_Default_numSamples", "10" },
				{ "DisplayName", "LowPassFilter_RollingAverage" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "A Rolling average low pass filter" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "LowPassFilter_RollingAverage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRExpansionFunctionLibrary_eventLowPassFilter_RollingAverage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize()
	{
		struct VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms
		{
			FVector Location;
			FRotator Rotation;
			FVector Scale;
			FTransform_NetQuantize ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform_NetQuantize, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Struct, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRExpansionLibrary|TransformNetQuantize" },
				{ "Keywords", "construct build" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "NativeMakeFunc", "" },
				{ "Scale", "1,1,1" },
				{ "ToolTip", "Make a transform net quantize from location, rotation and scale" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "MakeTransform_NetQuantize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(VRExpansionFunctionLibrary_eventMakeTransform_NetQuantize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle()
	{
		struct VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms
		{
			UObject* WorldContextObject;
			TArray<FVector> InVerts;
			FVector SampleSurfaceNormal;
			FVector OutRectCenter;
			FRotator OutRectRotation;
			float OutSideLengthX;
			float OutSideLengthY;
			bool bDebugDraw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bDebugDraw_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms*)Obj)->bDebugDraw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugDraw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugDraw_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSideLengthY = { UE4CodeGen_Private::EPropertyClass::Float, "OutSideLengthY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutSideLengthY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSideLengthX = { UE4CodeGen_Private::EPropertyClass::Float, "OutSideLengthX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutSideLengthX), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRectRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "OutRectRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutRectRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRectCenter = { UE4CodeGen_Private::EPropertyClass::Struct, "OutRectCenter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, OutRectCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleSurfaceNormal_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleSurfaceNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "SampleSurfaceNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, SampleSurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SampleSurfaceNormal_MetaData, ARRAY_COUNT(NewProp_SampleSurfaceNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVerts_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InVerts = { UE4CodeGen_Private::EPropertyClass::Array, "InVerts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, InVerts), METADATA_PARAMS(NewProp_InVerts_MetaData, ARRAY_COUNT(NewProp_InVerts_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVerts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InVerts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugDraw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSideLengthY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutSideLengthX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRectRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutRectCenter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SampleSurfaceNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVerts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InVerts_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "CallableWithoutWorldContext", "" },
				{ "Category", "VRExpansionFunctions" },
				{ "CPP_Default_bDebugDraw", "false" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Finds the minimum area rectangle that encloses all of the points in InVerts\nEngine default version is server only for some reason\nUses algorithm found in http://www.geometrictools.com/Documentation/MinimumAreaRectangle.pdf\n\n@param                InVerts - Points to enclose in the rectangle\n@outparam     OutRectCenter - Center of the enclosing rectangle\n@outparam     OutRectSideA - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideB\n@outparam     OutRectSideB - Vector oriented and sized to represent one edge of the enclosing rectangle, orthogonal to OutRectSideA" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "NonAuthorityMinimumAreaRectangle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(VRExpansionFunctionLibrary_eventNonAuthorityMinimumAreaRectangle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter()
	{
		struct VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms
		{
			FBPEuroLowPassFilter TargetEuroFilter;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetEuroFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetEuroFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms, TargetEuroFilter), Z_Construct_UScriptStruct_FBPEuroLowPassFilter, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetEuroFilter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EuroLowPassFilter" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Resets a Euro Low Pass Filter so that the first time it is used again it is clean" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "ResetEuroSmoothingFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VRExpansionFunctionLibrary_eventResetEuroSmoothingFilter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot()
	{
		struct VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms
		{
			FRotator RotationDelta;
			FVector OriginalLocation;
			FRotator OriginalRotation;
			FVector PivotPoint;
			FVector NewLocation;
			FRotator NewRotation;
			bool bUseOriginalYawOnly;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUseOriginalYawOnly_SetBit = [](void* Obj){ ((VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms*)Obj)->bUseOriginalYawOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseOriginalYawOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseOriginalYawOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseOriginalYawOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, PivotPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, OriginalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationDelta = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms, RotationDelta), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseOriginalYawOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PivotPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationDelta,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions" },
				{ "CPP_Default_bUseOriginalYawOnly", "true" },
				{ "DisplayName", "RotateAroundPivot" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Applies a delta rotation around a pivot point, if bUseOriginalYawOnly is true then it only takes the original Yaw into account (characters)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "RotateAroundPivot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VRExpansionFunctionLibrary_eventRotateAroundPivot_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter()
	{
		struct VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms
		{
			FBPEuroLowPassFilter TargetEuroFilter;
			FVector InRawValue;
			float DeltaTime;
			FVector SmoothedValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmoothedValue = { UE4CodeGen_Private::EPropertyClass::Struct, "SmoothedValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, SmoothedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, DeltaTime), METADATA_PARAMS(NewProp_DeltaTime_MetaData, ARRAY_COUNT(NewProp_DeltaTime_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRawValue = { UE4CodeGen_Private::EPropertyClass::Struct, "InRawValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, InRawValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetEuroFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetEuroFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms, TargetEuroFilter), Z_Construct_UScriptStruct_FBPEuroLowPassFilter, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SmoothedValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRawValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetEuroFilter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "EuroLowPassFilter" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Runs the smoothing function of a Euro Low Pass Filter" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "RunEuroSmoothingFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(VRExpansionFunctionLibrary_eventRunEuroSmoothingFilter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline()
	{
		struct VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms
		{
			USplineComponent* LaserSplineComponent;
			TArray<USplineMeshComponent*> LaserSplineMeshComponents;
			FVector InStartLocation;
			FVector InEndLocation;
			FVector InForward;
			float LaserRadius;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaserRadius = { UE4CodeGen_Private::EPropertyClass::Float, "LaserRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InForward = { UE4CodeGen_Private::EPropertyClass::Struct, "InForward", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InEndLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InEndLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "InStartLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, InStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserSplineMeshComponents_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LaserSplineMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "LaserSplineMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserSplineMeshComponents), METADATA_PARAMS(NewProp_LaserSplineMeshComponents_MetaData, ARRAY_COUNT(NewProp_LaserSplineMeshComponents_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserSplineMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "LaserSplineMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserSplineComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserSplineComponent = { UE4CodeGen_Private::EPropertyClass::Object, "LaserSplineComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms, LaserSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_LaserSplineComponent_MetaData, ARRAY_COUNT(NewProp_LaserSplineComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaserRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InForward,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InEndLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStartLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaserSplineMeshComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaserSplineMeshComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LaserSplineComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "DisplayName", "Smooth Update Laser Spline" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
				{ "ToolTip", "Applies the same laser smoothing that the vr editor uses to an array of points" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRExpansionFunctionLibrary, "SmoothUpdateLaserSpline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(VRExpansionFunctionLibrary_eventSmoothUpdateLaserSpline_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary_NoRegister()
	{
		return UVRExpansionFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRExpansionFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_AddSceneComponentByClass, "AddSceneComponentByClass" }, // 3917841932
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_BreakTransform_NetQuantize, "BreakTransform_NetQuantize" }, // 2715459158
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize, "Conv_TransformToTransformNetQuantize" }, // 2485513286
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation, "EqualEqual_FBPActorGripInformation" }, // 4209386724
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName, "GetGripSlotInRangeByTypeName" }, // 701306385
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component, "GetGripSlotInRangeByTypeName_Component" }, // 3982227469
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDPureYaw, "GetHMDPureYaw" }, // 3170896257
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetHMDType, "GetHMDType" }, // 652611097
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsActorMovable, "GetIsActorMovable" }, // 1004335096
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDConnected, "GetIsHMDConnected" }, // 1949831642
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_GetIsHMDWorn, "GetIsHMDWorn" }, // 1859852035
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreview, "IsInVREditorPreview" }, // 648976369
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame, "IsInVREditorPreviewOrGame" }, // 55975169
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_Exponential, "LowPassFilter_Exponential" }, // 3203370368
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage, "LowPassFilter_RollingAverage" }, // 3464162518
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_MakeTransform_NetQuantize, "MakeTransform_NetQuantize" }, // 689693130
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle, "NonAuthorityMinimumAreaRectangle" }, // 3899882610
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter, "ResetEuroSmoothingFilter" }, // 3711520178
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RotateAroundPivot, "RotateAroundPivot" }, // 2187539526
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_RunEuroSmoothingFilter, "RunEuroSmoothingFilter" }, // 2519510650
				{ &Z_Construct_UFunction_UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline, "SmoothUpdateLaserSpline" }, // 3675651119
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VRExpansionFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/VRExpansionFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRExpansionFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRExpansionFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UVRExpansionFunctionLibrary, 3337048658);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRExpansionFunctionLibrary(Z_Construct_UClass_UVRExpansionFunctionLibrary, &UVRExpansionFunctionLibrary::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRExpansionFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRExpansionFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
