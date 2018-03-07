// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRGripInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGripInterface() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_DenyGripping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GetInteractionSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInteractionSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GripBreakDistance();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_IsHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_IsInteractible();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGrip();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnGrip();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_OnUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_SecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_SetHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_TeleportBehavior();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRGripInterface_TickGrip();
// End Cross Module References
	FBPAdvGripSettings IVRGripInterface::AdvancedGripSettings()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AdvancedGripSettings instead.");
		VRGripInterface_eventAdvancedGripSettings_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClosestGripSlotInRange instead.");
	}
	bool IVRGripInterface::DenyGripping()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DenyGripping instead.");
		VRGripInterface_eventDenyGripping_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGripStiffnessAndDamping instead.");
	}
	FBPInteractionSettings IVRGripInterface::GetInteractionSettings()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInteractionSettings instead.");
		VRGripInterface_eventGetInteractionSettings_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripCollisionType IVRGripInterface::GetPrimaryGripType(bool bIsSlot)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPrimaryGripType instead.");
		VRGripInterface_eventGetPrimaryGripType_Parms Parms;
		return Parms.ReturnValue;
	}
	float IVRGripInterface::GripBreakDistance()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripBreakDistance instead.");
		VRGripInterface_eventGripBreakDistance_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripLateUpdateSettings IVRGripInterface::GripLateUpdateSetting()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripLateUpdateSetting instead.");
		VRGripInterface_eventGripLateUpdateSetting_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripMovementReplicationSettings IVRGripInterface::GripMovementReplicationType()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GripMovementReplicationType instead.");
		VRGripInterface_eventGripMovementReplicationType_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::IsHeld(UGripMotionControllerComponent*& HoldingController, bool& bIsHeld)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsHeld instead.");
	}
	bool IVRGripInterface::IsInteractible()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInteractible instead.");
		VRGripInterface_eventIsInteractible_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChildGrip instead.");
	}
	void IVRGripInterface::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChildGripRelease instead.");
	}
	void IVRGripInterface::OnEndSecondaryUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndSecondaryUsed instead.");
	}
	void IVRGripInterface::OnEndUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEndUsed instead.");
	}
	void IVRGripInterface::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGrip instead.");
	}
	void IVRGripInterface::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGripRelease instead.");
	}
	void IVRGripInterface::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInput instead.");
	}
	void IVRGripInterface::OnSecondaryGrip(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryGrip instead.");
	}
	void IVRGripInterface::OnSecondaryGripRelease(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryGripRelease instead.");
	}
	void IVRGripInterface::OnSecondaryUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSecondaryUsed instead.");
	}
	void IVRGripInterface::OnUsed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUsed instead.");
	}
	ESecondaryGripType IVRGripInterface::SecondaryGripType()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SecondaryGripType instead.");
		VRGripInterface_eventSecondaryGripType_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::SetHeld(UGripMotionControllerComponent* HoldingController, bool bIsHeld)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHeld instead.");
	}
	bool IVRGripInterface::SimulateOnDrop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SimulateOnDrop instead.");
		VRGripInterface_eventSimulateOnDrop_Parms Parms;
		return Parms.ReturnValue;
	}
	EGripInterfaceTeleportBehavior IVRGripInterface::TeleportBehavior()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TeleportBehavior instead.");
		VRGripInterface_eventTeleportBehavior_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVRGripInterface::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TickGrip instead.");
	}
	void UVRGripInterface::StaticRegisterNativesUVRGripInterface()
	{
		UClass* Class = UVRGripInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvancedGripSettings", (Native)&IVRGripInterface::execAdvancedGripSettings },
			{ "ClosestGripSlotInRange", (Native)&IVRGripInterface::execClosestGripSlotInRange },
			{ "DenyGripping", (Native)&IVRGripInterface::execDenyGripping },
			{ "GetGripStiffnessAndDamping", (Native)&IVRGripInterface::execGetGripStiffnessAndDamping },
			{ "GetInteractionSettings", (Native)&IVRGripInterface::execGetInteractionSettings },
			{ "GetPrimaryGripType", (Native)&IVRGripInterface::execGetPrimaryGripType },
			{ "GripBreakDistance", (Native)&IVRGripInterface::execGripBreakDistance },
			{ "GripLateUpdateSetting", (Native)&IVRGripInterface::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", (Native)&IVRGripInterface::execGripMovementReplicationType },
			{ "IsHeld", (Native)&IVRGripInterface::execIsHeld },
			{ "IsInteractible", (Native)&IVRGripInterface::execIsInteractible },
			{ "OnChildGrip", (Native)&IVRGripInterface::execOnChildGrip },
			{ "OnChildGripRelease", (Native)&IVRGripInterface::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", (Native)&IVRGripInterface::execOnEndSecondaryUsed },
			{ "OnEndUsed", (Native)&IVRGripInterface::execOnEndUsed },
			{ "OnGrip", (Native)&IVRGripInterface::execOnGrip },
			{ "OnGripRelease", (Native)&IVRGripInterface::execOnGripRelease },
			{ "OnInput", (Native)&IVRGripInterface::execOnInput },
			{ "OnSecondaryGrip", (Native)&IVRGripInterface::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", (Native)&IVRGripInterface::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", (Native)&IVRGripInterface::execOnSecondaryUsed },
			{ "OnUsed", (Native)&IVRGripInterface::execOnUsed },
			{ "SecondaryGripType", (Native)&IVRGripInterface::execSecondaryGripType },
			{ "SetHeld", (Native)&IVRGripInterface::execSetHeld },
			{ "SimulateOnDrop", (Native)&IVRGripInterface::execSimulateOnDrop },
			{ "TeleportBehavior", (Native)&IVRGripInterface::execTeleportBehavior },
			{ "TickGrip", (Native)&IVRGripInterface::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Get the advanced physics settings for this grip" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "AdvancedGripSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventAdvancedGripSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverridePrefix = { UE4CodeGen_Private::EPropertyClass::Name, "OverridePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingController = { UE4CodeGen_Private::EPropertyClass::Object, "CallingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_CallingController_MetaData, ARRAY_COUNT(NewProp_CallingController_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHadSlotInRange_SetBit = [](void* Obj){ ((VRGripInterface_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadSlotInRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHadSlotInRange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSecondarySlot_SetBit = [](void* Obj){ ((VRGripInterface_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondarySlot = { UE4CodeGen_Private::EPropertyClass::Bool, "bSecondarySlot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSecondarySlot_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverridePrefix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CallingController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlotWorldTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHadSlotInRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSecondarySlot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "CPP_Default_OverridePrefix", "None" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Get closest slot in range" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "ClosestGripSlotInRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20C00, sizeof(VRGripInterface_eventClosestGripSlotInRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRGripInterface_eventDenyGripping_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripInterface_eventDenyGripping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "DenyGripping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventDenyGripping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut = { UE4CodeGen_Private::EPropertyClass::Float, "GripDampingOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut = { UE4CodeGen_Private::EPropertyClass::Float, "GripStiffnessOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripDampingOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripStiffnessOut,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "// What grip stiffness to use if using a physics constraint\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n               float GripStiffness();\n\n       // What grip damping to use if using a physics constraint\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n               float GripDamping();\n               // What grip stiffness and damping to use if using a physics constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "GetGripStiffnessAndDamping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(VRGripInterface_eventGetGripStiffnessAndDamping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetInteractionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventGetInteractionSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPInteractionSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Get interactable settings" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "GetInteractionSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventGetInteractionSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsSlot_SetBit = [](void* Obj){ ((VRGripInterface_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlot = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSlot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripInterface_eventGetPrimaryGripType_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSlot_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSlot,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Grip type to use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "GetPrimaryGripType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventGetPrimaryGripType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "GripBreakDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventGripBreakDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Define the late update setting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "GripLateUpdateSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventGripLateUpdateSetting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Define which movement repliation setting to use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "GripMovementReplicationType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventGripMovementReplicationType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsHeld_SetBit = [](void* Obj){ ((VRGripInterface_eventIsHeld_Parms*)Obj)->bIsHeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripInterface_eventIsHeld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsHeld_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController = { UE4CodeGen_Private::EPropertyClass::Object, "HoldingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080180, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventIsHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_HoldingController_MetaData, ARRAY_COUNT(NewProp_HoldingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoldingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Returns if the object is held and if so, which pawn is holding it" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "IsHeld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(VRGripInterface_eventIsHeld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_IsInteractible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRGripInterface_eventIsInteractible_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripInterface_eventIsInteractible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Check if the object is an interactable" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "IsInteractible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventIsInteractible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnChildGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripInterface_eventOnChildGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingController_MetaData, ARRAY_COUNT(NewProp_ReleasingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnChildGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripInterface_eventOnChildGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Call to stop using an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnEndSecondaryUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Call to stop using an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnEndUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Event triggered on the interfaced object when gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripInterface_eventOnGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingController_MetaData, ARRAY_COUNT(NewProp_ReleasingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripInterface_eventOnGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent = { UE4CodeGen_Private::EPropertyClass::Byte, "KeyEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Call to send an action event to the object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventOnInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SecondaryGripComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SecondaryGripComponent_MetaData, ARRAY_COUNT(NewProp_SecondaryGripComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondaryGripComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnSecondaryGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripInterface_eventOnSecondaryGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingSecondaryGripComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingSecondaryGripComponent_MetaData, ARRAY_COUNT(NewProp_ReleasingSecondaryGripComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingSecondaryGripComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnSecondaryGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripInterface_eventOnSecondaryGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Call to use an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnSecondaryUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Call to use an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "OnUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Double Grip Type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "SecondaryGripType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventSecondaryGripType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsHeld_SetBit = [](void* Obj){ ((VRGripInterface_eventSetHeld_Parms*)Obj)->bIsHeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripInterface_eventSetHeld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsHeld_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController = { UE4CodeGen_Private::EPropertyClass::Object, "HoldingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventSetHeld_Parms, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_HoldingController_MetaData, ARRAY_COUNT(NewProp_HoldingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoldingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Sets is held, used by the plugin" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "SetHeld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventSetHeld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRGripInterface_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRGripInterface_eventSimulateOnDrop_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Should this object simulate on drop" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "SimulateOnDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventSimulateOnDrop_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "How an interfaced object behaves when teleporting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "TeleportBehavior", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRGripInterface_eventTeleportBehavior_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRGripInterface_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRGripInterface_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
				{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRGripInterface, "TickGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRGripInterface_eventTickGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRGripInterface_NoRegister()
	{
		return UVRGripInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRGripInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRGripInterface_AdvancedGripSettings, "AdvancedGripSettings" }, // 2641374241
				{ &Z_Construct_UFunction_UVRGripInterface_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 4080002497
				{ &Z_Construct_UFunction_UVRGripInterface_DenyGripping, "DenyGripping" }, // 1433974129
				{ &Z_Construct_UFunction_UVRGripInterface_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 355531344
				{ &Z_Construct_UFunction_UVRGripInterface_GetInteractionSettings, "GetInteractionSettings" }, // 1877104551
				{ &Z_Construct_UFunction_UVRGripInterface_GetPrimaryGripType, "GetPrimaryGripType" }, // 3293685504
				{ &Z_Construct_UFunction_UVRGripInterface_GripBreakDistance, "GripBreakDistance" }, // 3025684338
				{ &Z_Construct_UFunction_UVRGripInterface_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 3449771211
				{ &Z_Construct_UFunction_UVRGripInterface_GripMovementReplicationType, "GripMovementReplicationType" }, // 3041052737
				{ &Z_Construct_UFunction_UVRGripInterface_IsHeld, "IsHeld" }, // 2676962572
				{ &Z_Construct_UFunction_UVRGripInterface_IsInteractible, "IsInteractible" }, // 1850337125
				{ &Z_Construct_UFunction_UVRGripInterface_OnChildGrip, "OnChildGrip" }, // 1624022745
				{ &Z_Construct_UFunction_UVRGripInterface_OnChildGripRelease, "OnChildGripRelease" }, // 253201912
				{ &Z_Construct_UFunction_UVRGripInterface_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 89622524
				{ &Z_Construct_UFunction_UVRGripInterface_OnEndUsed, "OnEndUsed" }, // 1763493650
				{ &Z_Construct_UFunction_UVRGripInterface_OnGrip, "OnGrip" }, // 1520166218
				{ &Z_Construct_UFunction_UVRGripInterface_OnGripRelease, "OnGripRelease" }, // 1590406494
				{ &Z_Construct_UFunction_UVRGripInterface_OnInput, "OnInput" }, // 200967353
				{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryGrip, "OnSecondaryGrip" }, // 80789460
				{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 409765315
				{ &Z_Construct_UFunction_UVRGripInterface_OnSecondaryUsed, "OnSecondaryUsed" }, // 1934969291
				{ &Z_Construct_UFunction_UVRGripInterface_OnUsed, "OnUsed" }, // 646517507
				{ &Z_Construct_UFunction_UVRGripInterface_SecondaryGripType, "SecondaryGripType" }, // 3249483748
				{ &Z_Construct_UFunction_UVRGripInterface_SetHeld, "SetHeld" }, // 985275216
				{ &Z_Construct_UFunction_UVRGripInterface_SimulateOnDrop, "SimulateOnDrop" }, // 3969596269
				{ &Z_Construct_UFunction_UVRGripInterface_TeleportBehavior, "TeleportBehavior" }, // 2249146180
				{ &Z_Construct_UFunction_UVRGripInterface_TickGrip, "TickGrip" }, // 2128271838
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRGripInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IVRGripInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRGripInterface::StaticClass,
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
	IMPLEMENT_CLASS(UVRGripInterface, 3388286503);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRGripInterface(Z_Construct_UClass_UVRGripInterface, &UVRGripInterface::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRGripInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRGripInterface);
	static FName NAME_UVRGripInterface_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings IVRGripInterface::Execute_AdvancedGripSettings(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventAdvancedGripSettings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_AdvancedGripSettings);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->AdvancedGripSettings_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void IVRGripInterface::Execute_ClosestGripSlotInRange(UObject* O, FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventClosestGripSlotInRange_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_ClosestGripSlotInRange);
		if (Func)
		{
			Parms.WorldLocation=WorldLocation;
			Parms.bSecondarySlot=bSecondarySlot;
			Parms.bHadSlotInRange=bHadSlotInRange;
			Parms.SlotWorldTransform=SlotWorldTransform;
			Parms.CallingController=CallingController;
			Parms.OverridePrefix=OverridePrefix;
			O->ProcessEvent(Func, &Parms);
			bHadSlotInRange=Parms.bHadSlotInRange;
			SlotWorldTransform=Parms.SlotWorldTransform;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->ClosestGripSlotInRange_Implementation(WorldLocation,bSecondarySlot,bHadSlotInRange,SlotWorldTransform,CallingController,OverridePrefix);
		}
	}
	static FName NAME_UVRGripInterface_DenyGripping = FName(TEXT("DenyGripping"));
	bool IVRGripInterface::Execute_DenyGripping(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventDenyGripping_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_DenyGripping);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->DenyGripping_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void IVRGripInterface::Execute_GetGripStiffnessAndDamping(UObject* O, float& GripStiffnessOut, float& GripDampingOut)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetGripStiffnessAndDamping_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetGripStiffnessAndDamping);
		if (Func)
		{
			Parms.GripStiffnessOut=GripStiffnessOut;
			Parms.GripDampingOut=GripDampingOut;
			O->ProcessEvent(Func, &Parms);
			GripStiffnessOut=Parms.GripStiffnessOut;
			GripDampingOut=Parms.GripDampingOut;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->GetGripStiffnessAndDamping_Implementation(GripStiffnessOut,GripDampingOut);
		}
	}
	static FName NAME_UVRGripInterface_GetInteractionSettings = FName(TEXT("GetInteractionSettings"));
	FBPInteractionSettings IVRGripInterface::Execute_GetInteractionSettings(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetInteractionSettings_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetInteractionSettings);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetInteractionSettings_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType IVRGripInterface::Execute_GetPrimaryGripType(UObject* O, bool bIsSlot)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGetPrimaryGripType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GetPrimaryGripType);
		if (Func)
		{
			Parms.bIsSlot=bIsSlot;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPrimaryGripType_Implementation(bIsSlot);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float IVRGripInterface::Execute_GripBreakDistance(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripBreakDistance_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripBreakDistance);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripBreakDistance_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings IVRGripInterface::Execute_GripLateUpdateSetting(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripLateUpdateSetting_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripLateUpdateSetting);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripLateUpdateSetting_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings IVRGripInterface::Execute_GripMovementReplicationType(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventGripMovementReplicationType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_GripMovementReplicationType);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GripMovementReplicationType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_IsHeld = FName(TEXT("IsHeld"));
	void IVRGripInterface::Execute_IsHeld(UObject* O, UGripMotionControllerComponent*& HoldingController, bool& bIsHeld)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventIsHeld_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_IsHeld);
		if (Func)
		{
			Parms.HoldingController=HoldingController;
			Parms.bIsHeld=bIsHeld;
			O->ProcessEvent(Func, &Parms);
			HoldingController=Parms.HoldingController;
			bIsHeld=Parms.bIsHeld;
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->IsHeld_Implementation(HoldingController,bIsHeld);
		}
	}
	static FName NAME_UVRGripInterface_IsInteractible = FName(TEXT("IsInteractible"));
	bool IVRGripInterface::Execute_IsInteractible(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventIsInteractible_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_IsInteractible);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsInteractible_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_OnChildGrip = FName(TEXT("OnChildGrip"));
	void IVRGripInterface::Execute_OnChildGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnChildGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnChildGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnChildGrip_Implementation(GrippingController,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void IVRGripInterface::Execute_OnChildGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnChildGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnChildGripRelease);
		if (Func)
		{
			Parms.ReleasingController=ReleasingController;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnChildGripRelease_Implementation(ReleasingController,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void IVRGripInterface::Execute_OnEndSecondaryUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnEndSecondaryUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnEndSecondaryUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnEndUsed = FName(TEXT("OnEndUsed"));
	void IVRGripInterface::Execute_OnEndUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnEndUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnEndUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnGrip = FName(TEXT("OnGrip"));
	void IVRGripInterface::Execute_OnGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnGrip_Implementation(GrippingController,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnGripRelease = FName(TEXT("OnGripRelease"));
	void IVRGripInterface::Execute_OnGripRelease(UObject* O, UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnGripRelease);
		if (Func)
		{
			Parms.ReleasingController=ReleasingController;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnGripRelease_Implementation(ReleasingController,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnInput = FName(TEXT("OnInput"));
	void IVRGripInterface::Execute_OnInput(UObject* O, FKey Key, EInputEvent KeyEvent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnInput_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnInput);
		if (Func)
		{
			Parms.Key=Key;
			Parms.KeyEvent=KeyEvent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnInput_Implementation(Key,KeyEvent);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void IVRGripInterface::Execute_OnSecondaryGrip(UObject* O, USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnSecondaryGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryGrip);
		if (Func)
		{
			Parms.SecondaryGripComponent=SecondaryGripComponent;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryGrip_Implementation(SecondaryGripComponent,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void IVRGripInterface::Execute_OnSecondaryGripRelease(UObject* O, USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventOnSecondaryGripRelease_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryGripRelease);
		if (Func)
		{
			Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
			Parms.GripInformation=GripInformation;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryGripRelease_Implementation(ReleasingSecondaryGripComponent,GripInformation);
		}
	}
	static FName NAME_UVRGripInterface_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void IVRGripInterface::Execute_OnSecondaryUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnSecondaryUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnSecondaryUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_OnUsed = FName(TEXT("OnUsed"));
	void IVRGripInterface::Execute_OnUsed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_OnUsed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->OnUsed_Implementation();
		}
	}
	static FName NAME_UVRGripInterface_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType IVRGripInterface::Execute_SecondaryGripType(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSecondaryGripType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SecondaryGripType);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->SecondaryGripType_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_SetHeld = FName(TEXT("SetHeld"));
	void IVRGripInterface::Execute_SetHeld(UObject* O, UGripMotionControllerComponent* HoldingController, bool bIsHeld)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSetHeld_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SetHeld);
		if (Func)
		{
			Parms.HoldingController=HoldingController;
			Parms.bIsHeld=bIsHeld;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->SetHeld_Implementation(HoldingController,bIsHeld);
		}
	}
	static FName NAME_UVRGripInterface_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool IVRGripInterface::Execute_SimulateOnDrop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventSimulateOnDrop_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_SimulateOnDrop);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->SimulateOnDrop_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior IVRGripInterface::Execute_TeleportBehavior(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventTeleportBehavior_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_TeleportBehavior);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			Parms.ReturnValue = I->TeleportBehavior_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVRGripInterface_TickGrip = FName(TEXT("TickGrip"));
	void IVRGripInterface::Execute_TickGrip(UObject* O, UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRGripInterface::StaticClass()));
		VRGripInterface_eventTickGrip_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRGripInterface_TickGrip);
		if (Func)
		{
			Parms.GrippingController=GrippingController;
			Parms.GripInformation=GripInformation;
			Parms.DeltaTime=DeltaTime;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRGripInterface*)(O->GetNativeInterfaceAddress(UVRGripInterface::StaticClass())))
		{
			I->TickGrip_Implementation(GrippingController,GripInformation,DeltaTime);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
