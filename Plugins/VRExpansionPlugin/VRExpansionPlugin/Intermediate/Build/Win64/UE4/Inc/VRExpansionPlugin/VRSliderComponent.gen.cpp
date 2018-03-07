// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Interactibles/VRSliderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSliderComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSliderComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSliderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_AdvancedGripSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPAdvGripSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_ClosestGripSlotInRange();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_DenyGripping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_GetGripStiffnessAndDamping();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_GetInteractionSettings();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPInteractionSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_GetPrimaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_GripBreakDistance();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_GripLateUpdateSetting();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_GripMovementReplicationType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_IsHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_IsInteractible();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnChildGrip();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPActorGripInformation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnChildGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnEndSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnEndUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnGrip();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnInput();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnSecondaryGrip();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnSecondaryGripRelease();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnSecondaryUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_OnUsed();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_SecondaryGripType();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_SetHeld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_SimulateOnDrop();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_TeleportBehavior();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSliderComponent_TickGrip();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRGripInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
// End Cross Module References
	static FName NAME_UVRSliderComponent_AdvancedGripSettings = FName(TEXT("AdvancedGripSettings"));
	FBPAdvGripSettings UVRSliderComponent::AdvancedGripSettings()
	{
		VRSliderComponent_eventAdvancedGripSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_AdvancedGripSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_ClosestGripSlotInRange = FName(TEXT("ClosestGripSlotInRange"));
	void UVRSliderComponent::ClosestGripSlotInRange(FVector WorldLocation, bool bSecondarySlot, bool& bHadSlotInRange, FTransform& SlotWorldTransform, UGripMotionControllerComponent* CallingController, FName OverridePrefix)
	{
		VRSliderComponent_eventClosestGripSlotInRange_Parms Parms;
		Parms.WorldLocation=WorldLocation;
		Parms.bSecondarySlot=bSecondarySlot ? true : false;
		Parms.bHadSlotInRange=bHadSlotInRange ? true : false;
		Parms.SlotWorldTransform=SlotWorldTransform;
		Parms.CallingController=CallingController;
		Parms.OverridePrefix=OverridePrefix;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_ClosestGripSlotInRange),&Parms);
		bHadSlotInRange=Parms.bHadSlotInRange;
		SlotWorldTransform=Parms.SlotWorldTransform;
	}
	static FName NAME_UVRSliderComponent_DenyGripping = FName(TEXT("DenyGripping"));
	bool UVRSliderComponent::DenyGripping()
	{
		VRSliderComponent_eventDenyGripping_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_DenyGripping),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_GetGripStiffnessAndDamping = FName(TEXT("GetGripStiffnessAndDamping"));
	void UVRSliderComponent::GetGripStiffnessAndDamping(float& GripStiffnessOut, float& GripDampingOut)
	{
		VRSliderComponent_eventGetGripStiffnessAndDamping_Parms Parms;
		Parms.GripStiffnessOut=GripStiffnessOut;
		Parms.GripDampingOut=GripDampingOut;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_GetGripStiffnessAndDamping),&Parms);
		GripStiffnessOut=Parms.GripStiffnessOut;
		GripDampingOut=Parms.GripDampingOut;
	}
	static FName NAME_UVRSliderComponent_GetInteractionSettings = FName(TEXT("GetInteractionSettings"));
	FBPInteractionSettings UVRSliderComponent::GetInteractionSettings()
	{
		VRSliderComponent_eventGetInteractionSettings_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_GetInteractionSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_GetPrimaryGripType = FName(TEXT("GetPrimaryGripType"));
	EGripCollisionType UVRSliderComponent::GetPrimaryGripType(bool bIsSlot)
	{
		VRSliderComponent_eventGetPrimaryGripType_Parms Parms;
		Parms.bIsSlot=bIsSlot ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_GetPrimaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_GripBreakDistance = FName(TEXT("GripBreakDistance"));
	float UVRSliderComponent::GripBreakDistance()
	{
		VRSliderComponent_eventGripBreakDistance_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_GripBreakDistance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_GripLateUpdateSetting = FName(TEXT("GripLateUpdateSetting"));
	EGripLateUpdateSettings UVRSliderComponent::GripLateUpdateSetting()
	{
		VRSliderComponent_eventGripLateUpdateSetting_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_GripLateUpdateSetting),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_GripMovementReplicationType = FName(TEXT("GripMovementReplicationType"));
	EGripMovementReplicationSettings UVRSliderComponent::GripMovementReplicationType()
	{
		VRSliderComponent_eventGripMovementReplicationType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_GripMovementReplicationType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_IsHeld = FName(TEXT("IsHeld"));
	void UVRSliderComponent::IsHeld(UGripMotionControllerComponent*& CurHoldingController, bool& bCurIsHeld)
	{
		VRSliderComponent_eventIsHeld_Parms Parms;
		Parms.CurHoldingController=CurHoldingController;
		Parms.bCurIsHeld=bCurIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_IsHeld),&Parms);
		CurHoldingController=Parms.CurHoldingController;
		bCurIsHeld=Parms.bCurIsHeld;
	}
	static FName NAME_UVRSliderComponent_IsInteractible = FName(TEXT("IsInteractible"));
	bool UVRSliderComponent::IsInteractible()
	{
		VRSliderComponent_eventIsInteractible_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_IsInteractible),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_OnChildGrip = FName(TEXT("OnChildGrip"));
	void UVRSliderComponent::OnChildGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRSliderComponent_eventOnChildGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnChildGrip),&Parms);
	}
	static FName NAME_UVRSliderComponent_OnChildGripRelease = FName(TEXT("OnChildGripRelease"));
	void UVRSliderComponent::OnChildGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		VRSliderComponent_eventOnChildGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnChildGripRelease),&Parms);
	}
	static FName NAME_UVRSliderComponent_OnEndSecondaryUsed = FName(TEXT("OnEndSecondaryUsed"));
	void UVRSliderComponent::OnEndSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnEndSecondaryUsed),NULL);
	}
	static FName NAME_UVRSliderComponent_OnEndUsed = FName(TEXT("OnEndUsed"));
	void UVRSliderComponent::OnEndUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnEndUsed),NULL);
	}
	static FName NAME_UVRSliderComponent_OnGrip = FName(TEXT("OnGrip"));
	void UVRSliderComponent::OnGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation)
	{
		VRSliderComponent_eventOnGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnGrip),&Parms);
	}
	static FName NAME_UVRSliderComponent_OnGripRelease = FName(TEXT("OnGripRelease"));
	void UVRSliderComponent::OnGripRelease(UGripMotionControllerComponent* ReleasingController, FBPActorGripInformation const& GripInformation)
	{
		VRSliderComponent_eventOnGripRelease_Parms Parms;
		Parms.ReleasingController=ReleasingController;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnGripRelease),&Parms);
	}
	static FName NAME_UVRSliderComponent_OnInput = FName(TEXT("OnInput"));
	void UVRSliderComponent::OnInput(FKey Key, EInputEvent KeyEvent)
	{
		VRSliderComponent_eventOnInput_Parms Parms;
		Parms.Key=Key;
		Parms.KeyEvent=KeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnInput),&Parms);
	}
	static FName NAME_UVRSliderComponent_OnSecondaryGrip = FName(TEXT("OnSecondaryGrip"));
	void UVRSliderComponent::OnSecondaryGrip(USceneComponent* SecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRSliderComponent_eventOnSecondaryGrip_Parms Parms;
		Parms.SecondaryGripComponent=SecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnSecondaryGrip),&Parms);
	}
	static FName NAME_UVRSliderComponent_OnSecondaryGripRelease = FName(TEXT("OnSecondaryGripRelease"));
	void UVRSliderComponent::OnSecondaryGripRelease(USceneComponent* ReleasingSecondaryGripComponent, FBPActorGripInformation const& GripInformation)
	{
		VRSliderComponent_eventOnSecondaryGripRelease_Parms Parms;
		Parms.ReleasingSecondaryGripComponent=ReleasingSecondaryGripComponent;
		Parms.GripInformation=GripInformation;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnSecondaryGripRelease),&Parms);
	}
	static FName NAME_UVRSliderComponent_OnSecondaryUsed = FName(TEXT("OnSecondaryUsed"));
	void UVRSliderComponent::OnSecondaryUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnSecondaryUsed),NULL);
	}
	static FName NAME_UVRSliderComponent_OnUsed = FName(TEXT("OnUsed"));
	void UVRSliderComponent::OnUsed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_OnUsed),NULL);
	}
	static FName NAME_UVRSliderComponent_SecondaryGripType = FName(TEXT("SecondaryGripType"));
	ESecondaryGripType UVRSliderComponent::SecondaryGripType()
	{
		VRSliderComponent_eventSecondaryGripType_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_SecondaryGripType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_SetHeld = FName(TEXT("SetHeld"));
	void UVRSliderComponent::SetHeld(UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld)
	{
		VRSliderComponent_eventSetHeld_Parms Parms;
		Parms.NewHoldingController=NewHoldingController;
		Parms.bNewIsHeld=bNewIsHeld ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_SetHeld),&Parms);
	}
	static FName NAME_UVRSliderComponent_SimulateOnDrop = FName(TEXT("SimulateOnDrop"));
	bool UVRSliderComponent::SimulateOnDrop()
	{
		VRSliderComponent_eventSimulateOnDrop_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_SimulateOnDrop),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_TeleportBehavior = FName(TEXT("TeleportBehavior"));
	EGripInterfaceTeleportBehavior UVRSliderComponent::TeleportBehavior()
	{
		VRSliderComponent_eventTeleportBehavior_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_TeleportBehavior),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVRSliderComponent_TickGrip = FName(TEXT("TickGrip"));
	void UVRSliderComponent::TickGrip(UGripMotionControllerComponent* GrippingController, FBPActorGripInformation const& GripInformation, float DeltaTime)
	{
		VRSliderComponent_eventTickGrip_Parms Parms;
		Parms.GrippingController=GrippingController;
		Parms.GripInformation=GripInformation;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UVRSliderComponent_TickGrip),&Parms);
	}
	void UVRSliderComponent::StaticRegisterNativesUVRSliderComponent()
	{
		UClass* Class = UVRSliderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvancedGripSettings", (Native)&UVRSliderComponent::execAdvancedGripSettings },
			{ "ClosestGripSlotInRange", (Native)&UVRSliderComponent::execClosestGripSlotInRange },
			{ "DenyGripping", (Native)&UVRSliderComponent::execDenyGripping },
			{ "GetGripStiffnessAndDamping", (Native)&UVRSliderComponent::execGetGripStiffnessAndDamping },
			{ "GetInteractionSettings", (Native)&UVRSliderComponent::execGetInteractionSettings },
			{ "GetPrimaryGripType", (Native)&UVRSliderComponent::execGetPrimaryGripType },
			{ "GripBreakDistance", (Native)&UVRSliderComponent::execGripBreakDistance },
			{ "GripLateUpdateSetting", (Native)&UVRSliderComponent::execGripLateUpdateSetting },
			{ "GripMovementReplicationType", (Native)&UVRSliderComponent::execGripMovementReplicationType },
			{ "IsHeld", (Native)&UVRSliderComponent::execIsHeld },
			{ "IsInteractible", (Native)&UVRSliderComponent::execIsInteractible },
			{ "OnChildGrip", (Native)&UVRSliderComponent::execOnChildGrip },
			{ "OnChildGripRelease", (Native)&UVRSliderComponent::execOnChildGripRelease },
			{ "OnEndSecondaryUsed", (Native)&UVRSliderComponent::execOnEndSecondaryUsed },
			{ "OnEndUsed", (Native)&UVRSliderComponent::execOnEndUsed },
			{ "OnGrip", (Native)&UVRSliderComponent::execOnGrip },
			{ "OnGripRelease", (Native)&UVRSliderComponent::execOnGripRelease },
			{ "OnInput", (Native)&UVRSliderComponent::execOnInput },
			{ "OnSecondaryGrip", (Native)&UVRSliderComponent::execOnSecondaryGrip },
			{ "OnSecondaryGripRelease", (Native)&UVRSliderComponent::execOnSecondaryGripRelease },
			{ "OnSecondaryUsed", (Native)&UVRSliderComponent::execOnSecondaryUsed },
			{ "OnUsed", (Native)&UVRSliderComponent::execOnUsed },
			{ "ResetInitialSliderLocation", (Native)&UVRSliderComponent::execResetInitialSliderLocation },
			{ "SecondaryGripType", (Native)&UVRSliderComponent::execSecondaryGripType },
			{ "SetHeld", (Native)&UVRSliderComponent::execSetHeld },
			{ "SetSplineComponentToFollow", (Native)&UVRSliderComponent::execSetSplineComponentToFollow },
			{ "SimulateOnDrop", (Native)&UVRSliderComponent::execSimulateOnDrop },
			{ "TeleportBehavior", (Native)&UVRSliderComponent::execTeleportBehavior },
			{ "TickGrip", (Native)&UVRSliderComponent::execTickGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_AdvancedGripSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventAdvancedGripSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPAdvGripSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Get the advanced physics settings for this grip" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "AdvancedGripSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventAdvancedGripSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_ClosestGripSlotInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverridePrefix = { UE4CodeGen_Private::EPropertyClass::Name, "OverridePrefix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventClosestGripSlotInRange_Parms, OverridePrefix), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CallingController = { UE4CodeGen_Private::EPropertyClass::Object, "CallingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventClosestGripSlotInRange_Parms, CallingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_CallingController_MetaData, ARRAY_COUNT(NewProp_CallingController_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotWorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotWorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventClosestGripSlotInRange_Parms, SlotWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHadSlotInRange_SetBit = [](void* Obj){ ((VRSliderComponent_eventClosestGripSlotInRange_Parms*)Obj)->bHadSlotInRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadSlotInRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadSlotInRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSliderComponent_eventClosestGripSlotInRange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHadSlotInRange_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSecondarySlot_SetBit = [](void* Obj){ ((VRSliderComponent_eventClosestGripSlotInRange_Parms*)Obj)->bSecondarySlot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecondarySlot = { UE4CodeGen_Private::EPropertyClass::Bool, "bSecondarySlot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSliderComponent_eventClosestGripSlotInRange_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSecondarySlot_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventClosestGripSlotInRange_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
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
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "// Get closest secondary slot in range\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n               void ClosestSecondarySlotInRange(FVector WorldLocation, bool & bHadSlotInRange, FTransform & SlotWorldTransform, UGripMotionControllerComponent * CallingController = nullptr, FName OverridePrefix = NAME_None);\n\n       // Get closest primary slot in range\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n               void ClosestPrimarySlotInRange(FVector WorldLocation, bool & bHadSlotInRange, FTransform & SlotWorldTransform, UGripMotionControllerComponent * CallingController = nullptr, FName OverridePrefix = NAME_None);\n               // Get closest primary slot in range" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "ClosestGripSlotInRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20C00, sizeof(VRSliderComponent_eventClosestGripSlotInRange_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_DenyGripping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRSliderComponent_eventDenyGripping_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSliderComponent_eventDenyGripping_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Set up as deny instead of allow so that default allows for gripping" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "DenyGripping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventDenyGripping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_GetGripStiffnessAndDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripDampingOut = { UE4CodeGen_Private::EPropertyClass::Float, "GripDampingOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventGetGripStiffnessAndDamping_Parms, GripDampingOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GripStiffnessOut = { UE4CodeGen_Private::EPropertyClass::Float, "GripStiffnessOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventGetGripStiffnessAndDamping_Parms, GripStiffnessOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripDampingOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripStiffnessOut,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "// What grip stiffness to use if using a physics constraint\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n               float GripStiffness();\n\n       // What grip damping to use if using a physics constraint\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n               float GripDamping();\n               // What grip stiffness and damping to use if using a physics constraint" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "GetGripStiffnessAndDamping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(VRSliderComponent_eventGetGripStiffnessAndDamping_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_GetInteractionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventGetInteractionSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBPInteractionSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Get interactable settings" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "GetInteractionSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventGetInteractionSettings_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_GetPrimaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventGetPrimaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripCollisionType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsSlot_SetBit = [](void* Obj){ ((VRSliderComponent_eventGetPrimaryGripType_Parms*)Obj)->bIsSlot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSlot = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSlot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSliderComponent_eventGetPrimaryGripType_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsSlot_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsSlot,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "// Grip type to use when gripping a slot\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n               EGripCollisionType SlotGripType();\n\n       // Grip type to use when not gripping a slot\n       UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = \"VRGripInterface\")\n               EGripCollisionType FreeGripType();\n               // Grip type to use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "GetPrimaryGripType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventGetPrimaryGripType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_GripBreakDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventGripBreakDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "What distance to break a grip at (only relevent with physics enabled grips" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "GripBreakDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventGripBreakDistance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_GripLateUpdateSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventGripLateUpdateSetting_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripLateUpdateSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Define the late update setting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "GripLateUpdateSetting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventGripLateUpdateSetting_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_GripMovementReplicationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventGripMovementReplicationType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Define which movement repliation setting to use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "GripMovementReplicationType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventGripMovementReplicationType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_IsHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCurIsHeld_SetBit = [](void* Obj){ ((VRSliderComponent_eventIsHeld_Parms*)Obj)->bCurIsHeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurIsHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurIsHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSliderComponent_eventIsHeld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCurIsHeld_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurHoldingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurHoldingController = { UE4CodeGen_Private::EPropertyClass::Object, "CurHoldingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080180, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventIsHeld_Parms, CurHoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_CurHoldingController_MetaData, ARRAY_COUNT(NewProp_CurHoldingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCurIsHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurHoldingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Returns if the object is held and if so, which pawn is holding it" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "IsHeld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(VRSliderComponent_eventIsHeld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_IsInteractible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRSliderComponent_eventIsInteractible_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSliderComponent_eventIsInteractible_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Check if the object is an interactable" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "IsInteractible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventIsInteractible_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnChildGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnChildGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnChildGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when child component is gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnChildGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRSliderComponent_eventOnChildGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnChildGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnChildGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnChildGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingController_MetaData, ARRAY_COUNT(NewProp_ReleasingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when child component is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnChildGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRSliderComponent_eventOnChildGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnEndSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Call to stop using an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnEndSecondaryUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnEndUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Call to stop using an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnEndUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRSliderComponent_eventOnGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingController = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnGripRelease_Parms, ReleasingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingController_MetaData, ARRAY_COUNT(NewProp_ReleasingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when grip is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRSliderComponent_eventOnGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyEvent = { UE4CodeGen_Private::EPropertyClass::Byte, "KeyEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnInput_Parms, KeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnInput_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_KeyEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Call to send an action event to the object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventOnInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnSecondaryGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnSecondaryGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryGripComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryGripComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SecondaryGripComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnSecondaryGrip_Parms, SecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SecondaryGripComponent_MetaData, ARRAY_COUNT(NewProp_SecondaryGripComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondaryGripComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when secondary gripped" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnSecondaryGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRSliderComponent_eventOnSecondaryGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnSecondaryGripRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnSecondaryGripRelease_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleasingSecondaryGripComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReleasingSecondaryGripComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ReleasingSecondaryGripComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventOnSecondaryGripRelease_Parms, ReleasingSecondaryGripComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_ReleasingSecondaryGripComponent_MetaData, ARRAY_COUNT(NewProp_ReleasingSecondaryGripComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReleasingSecondaryGripComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Event triggered on the interfaced object when secondary grip is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnSecondaryGripRelease", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRSliderComponent_eventOnSecondaryGripRelease_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnSecondaryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Call to use an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnSecondaryUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Call to use an object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "OnUsed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRSliderComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Should be called after the slider is moved post begin play" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "ResetInitialSliderLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_SecondaryGripType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventSecondaryGripType_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_ESecondaryGripType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Secondary grip type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "SecondaryGripType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventSecondaryGripType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_SetHeld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bNewIsHeld_SetBit = [](void* Obj){ ((VRSliderComponent_eventSetHeld_Parms*)Obj)->bNewIsHeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIsHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewIsHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSliderComponent_eventSetHeld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewIsHeld_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewHoldingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewHoldingController = { UE4CodeGen_Private::EPropertyClass::Object, "NewHoldingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventSetHeld_Parms, NewHoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_NewHoldingController_MetaData, ARRAY_COUNT(NewProp_NewHoldingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewIsHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewHoldingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Sets is held, used by the plugin" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "SetHeld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventSetHeld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow()
	{
		struct VRSliderComponent_eventSetSplineComponentToFollow_Parms
		{
			USplineComponent* SplineToFollow;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineToFollow_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineToFollow = { UE4CodeGen_Private::EPropertyClass::Object, "SplineToFollow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventSetSplineComponentToFollow_Parms, SplineToFollow), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_SplineToFollow_MetaData, ARRAY_COUNT(NewProp_SplineToFollow_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineToFollow,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRSliderComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Sets the spline component to follow, if empty, just reinitializes the transform and removes the follow component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "SetSplineComponentToFollow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRSliderComponent_eventSetSplineComponentToFollow_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_SimulateOnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRSliderComponent_eventSimulateOnDrop_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRSliderComponent_eventSimulateOnDrop_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Should this object simulate on drop" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "SimulateOnDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventSimulateOnDrop_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_TeleportBehavior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventTeleportBehavior_Parms, ReturnValue), Z_Construct_UEnum_VRExpansionPlugin_EGripInterfaceTeleportBehavior, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "How an interfaced object behaves when teleporting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "TeleportBehavior", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRSliderComponent_eventTeleportBehavior_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSliderComponent_TickGrip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventTickGrip_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripInformation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GripInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "GripInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventTickGrip_Parms, GripInformation), Z_Construct_UScriptStruct_FBPActorGripInformation, METADATA_PARAMS(NewProp_GripInformation_MetaData, ARRAY_COUNT(NewProp_GripInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrippingController_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrippingController = { UE4CodeGen_Private::EPropertyClass::Object, "GrippingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSliderComponent_eventTickGrip_Parms, GrippingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_GrippingController_MetaData, ARRAY_COUNT(NewProp_GrippingController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GripInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrippingController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Event triggered each tick on the interfaced object when gripped, can be used for custom movement or grip based logic" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSliderComponent, "TickGrip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(VRSliderComponent_eventTickGrip_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRSliderComponent_NoRegister()
	{
		return UVRSliderComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRSliderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRSliderComponent_AdvancedGripSettings, "AdvancedGripSettings" }, // 1573082840
				{ &Z_Construct_UFunction_UVRSliderComponent_ClosestGripSlotInRange, "ClosestGripSlotInRange" }, // 4039664129
				{ &Z_Construct_UFunction_UVRSliderComponent_DenyGripping, "DenyGripping" }, // 404875896
				{ &Z_Construct_UFunction_UVRSliderComponent_GetGripStiffnessAndDamping, "GetGripStiffnessAndDamping" }, // 2754909901
				{ &Z_Construct_UFunction_UVRSliderComponent_GetInteractionSettings, "GetInteractionSettings" }, // 2043643360
				{ &Z_Construct_UFunction_UVRSliderComponent_GetPrimaryGripType, "GetPrimaryGripType" }, // 2557956944
				{ &Z_Construct_UFunction_UVRSliderComponent_GripBreakDistance, "GripBreakDistance" }, // 183827488
				{ &Z_Construct_UFunction_UVRSliderComponent_GripLateUpdateSetting, "GripLateUpdateSetting" }, // 782362573
				{ &Z_Construct_UFunction_UVRSliderComponent_GripMovementReplicationType, "GripMovementReplicationType" }, // 400226276
				{ &Z_Construct_UFunction_UVRSliderComponent_IsHeld, "IsHeld" }, // 2400201346
				{ &Z_Construct_UFunction_UVRSliderComponent_IsInteractible, "IsInteractible" }, // 865651152
				{ &Z_Construct_UFunction_UVRSliderComponent_OnChildGrip, "OnChildGrip" }, // 1146125539
				{ &Z_Construct_UFunction_UVRSliderComponent_OnChildGripRelease, "OnChildGripRelease" }, // 2062926210
				{ &Z_Construct_UFunction_UVRSliderComponent_OnEndSecondaryUsed, "OnEndSecondaryUsed" }, // 3894102245
				{ &Z_Construct_UFunction_UVRSliderComponent_OnEndUsed, "OnEndUsed" }, // 3681623583
				{ &Z_Construct_UFunction_UVRSliderComponent_OnGrip, "OnGrip" }, // 2069248800
				{ &Z_Construct_UFunction_UVRSliderComponent_OnGripRelease, "OnGripRelease" }, // 4132380504
				{ &Z_Construct_UFunction_UVRSliderComponent_OnInput, "OnInput" }, // 4024326972
				{ &Z_Construct_UFunction_UVRSliderComponent_OnSecondaryGrip, "OnSecondaryGrip" }, // 430796652
				{ &Z_Construct_UFunction_UVRSliderComponent_OnSecondaryGripRelease, "OnSecondaryGripRelease" }, // 1265280174
				{ &Z_Construct_UFunction_UVRSliderComponent_OnSecondaryUsed, "OnSecondaryUsed" }, // 3492297739
				{ &Z_Construct_UFunction_UVRSliderComponent_OnUsed, "OnUsed" }, // 588284345
				{ &Z_Construct_UFunction_UVRSliderComponent_ResetInitialSliderLocation, "ResetInitialSliderLocation" }, // 1261838366
				{ &Z_Construct_UFunction_UVRSliderComponent_SecondaryGripType, "SecondaryGripType" }, // 548047234
				{ &Z_Construct_UFunction_UVRSliderComponent_SetHeld, "SetHeld" }, // 95320862
				{ &Z_Construct_UFunction_UVRSliderComponent_SetSplineComponentToFollow, "SetSplineComponentToFollow" }, // 313128006
				{ &Z_Construct_UFunction_UVRSliderComponent_SimulateOnDrop, "SimulateOnDrop" }, // 2451746922
				{ &Z_Construct_UFunction_UVRSliderComponent_TeleportBehavior, "TeleportBehavior" }, // 506577469
				{ &Z_Construct_UFunction_UVRSliderComponent_TickGrip, "TickGrip" }, // 3095721210
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "VRExpansionPlugin" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "Interactibles/VRSliderComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingController_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Set on grip notify, not net serializing" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingController = { UE4CodeGen_Private::EPropertyClass::Object, "HoldingController", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008001c, 1, nullptr, STRUCT_OFFSET(UVRSliderComponent, HoldingController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_HoldingController_MetaData, ARRAY_COUNT(NewProp_HoldingController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHeld_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
			auto NewProp_bIsHeld_SetBit = [](void* Obj){ ((UVRSliderComponent*)Obj)->bIsHeld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHeld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRSliderComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsHeld_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsHeld_MetaData, ARRAY_COUNT(NewProp_bIsHeld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDenyGripping_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
			auto NewProp_bDenyGripping_SetBit = [](void* Obj){ ((UVRSliderComponent*)Obj)->bDenyGripping = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDenyGripping = { UE4CodeGen_Private::EPropertyClass::Bool, "bDenyGripping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRSliderComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDenyGripping_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDenyGripping_MetaData, ARRAY_COUNT(NewProp_bDenyGripping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakDistance_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakDistance = { UE4CodeGen_Private::EPropertyClass::Float, "BreakDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRSliderComponent, BreakDistance), METADATA_PARAMS(NewProp_BreakDistance_MetaData, ARRAY_COUNT(NewProp_BreakDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementReplicationSetting_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementReplicationSetting = { UE4CodeGen_Private::EPropertyClass::Enum, "MovementReplicationSetting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRSliderComponent, MovementReplicationSetting), Z_Construct_UEnum_VRExpansionPlugin_EGripMovementReplicationSettings, METADATA_PARAMS(NewProp_MovementReplicationSetting_MetaData, ARRAY_COUNT(NewProp_MovementReplicationSetting_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementReplicationSetting_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateMovement_MetaData[] = {
				{ "Category", "VRGripInterface|Replication" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Overrides the default of : true and allows for controlling it like in an actor, should be default of off normally with grippable components" },
			};
#endif
			auto NewProp_bReplicateMovement_SetBit = [](void* Obj){ ((UVRSliderComponent*)Obj)->bReplicateMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bReplicateMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRSliderComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReplicateMovement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReplicateMovement_MetaData, ARRAY_COUNT(NewProp_bReplicateMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepGameplayTags_MetaData[] = {
				{ "Category", "VRGripInterface" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Requires bReplicates to be true for the component" },
			};
#endif
			auto NewProp_bRepGameplayTags_SetBit = [](void* Obj){ ((UVRSliderComponent*)Obj)->bRepGameplayTags = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepGameplayTags = { UE4CodeGen_Private::EPropertyClass::Bool, "bRepGameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRSliderComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRepGameplayTags_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRepGameplayTags_MetaData, ARRAY_COUNT(NewProp_bRepGameplayTags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
				{ "Category", "GameplayTags" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Tags that are set on this object" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UVRSliderComponent, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(NewProp_GameplayTags_MetaData, ARRAY_COUNT(NewProp_GameplayTags_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollowSplineRotationAndScale_MetaData[] = {
				{ "Category", "VRSliderComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
			auto NewProp_bFollowSplineRotationAndScale_SetBit = [](void* Obj){ ((UVRSliderComponent*)Obj)->bFollowSplineRotationAndScale = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowSplineRotationAndScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bFollowSplineRotationAndScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRSliderComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFollowSplineRotationAndScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFollowSplineRotationAndScale_MetaData, ARRAY_COUNT(NewProp_bFollowSplineRotationAndScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponentToFollow_MetaData[] = {
				{ "Category", "VRSliderComponent" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Set this to assign a spline component to the slider" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponentToFollow = { UE4CodeGen_Private::EPropertyClass::Object, "SplineComponentToFollow", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(UVRSliderComponent, SplineComponentToFollow), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(NewProp_SplineComponentToFollow_MetaData, ARRAY_COUNT(NewProp_SplineComponentToFollow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSlideDistanceIsInParentSpace_MetaData[] = {
				{ "Category", "VRSliderComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
			auto NewProp_bSlideDistanceIsInParentSpace_SetBit = [](void* Obj){ ((UVRSliderComponent*)Obj)->bSlideDistanceIsInParentSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSlideDistanceIsInParentSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bSlideDistanceIsInParentSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRSliderComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSlideDistanceIsInParentSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSlideDistanceIsInParentSpace_MetaData, ARRAY_COUNT(NewProp_bSlideDistanceIsInParentSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSliderProgress_MetaData[] = {
				{ "Category", "VRSliderComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
				{ "ToolTip", "Gets filled in with the current slider location progress" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSliderProgress = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentSliderProgress", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UVRSliderComponent, CurrentSliderProgress), METADATA_PARAMS(NewProp_CurrentSliderProgress_MetaData, ARRAY_COUNT(NewProp_CurrentSliderProgress_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSlideDistance_MetaData[] = {
				{ "Category", "VRSliderComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinSlideDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "MinSlideDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRSliderComponent, MinSlideDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MinSlideDistance_MetaData, ARRAY_COUNT(NewProp_MinSlideDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlideDistance_MetaData[] = {
				{ "Category", "VRSliderComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRSliderComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxSlideDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxSlideDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRSliderComponent, MaxSlideDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MaxSlideDistance_MetaData, ARRAY_COUNT(NewProp_MaxSlideDistance_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoldingController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsHeld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDenyGripping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BreakDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementReplicationSetting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementReplicationSetting_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReplicateMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRepGameplayTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GameplayTags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFollowSplineRotationAndScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SplineComponentToFollow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSlideDistanceIsInParentSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentSliderProgress,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinSlideDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSlideDistance,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UVRGripInterface_NoRegister, (int32)VTABLE_OFFSET(UVRSliderComponent, IVRGripInterface), false },
				{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UVRSliderComponent, IGameplayTagAssetInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRSliderComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRSliderComponent::StaticClass,
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
	IMPLEMENT_CLASS(UVRSliderComponent, 4071603155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRSliderComponent(Z_Construct_UClass_UVRSliderComponent, &UVRSliderComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRSliderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRSliderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
