// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRBaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacter() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRSeatedCharacterInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBPVRComponentPosRep();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UGripMotionControllerComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature()
	{
		struct _Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms
		{
			bool bIsWithinThreshold;
			float ToThresholdScaler;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToThresholdScaler = { UE4CodeGen_Private::EPropertyClass::Float, "ToThresholdScaler", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms, ToThresholdScaler), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsWithinThreshold_SetBit = [](void* Obj){ ((_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms*)Obj)->bIsWithinThreshold = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWithinThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsWithinThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsWithinThreshold_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToThresholdScaler,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsWithinThreshold,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Delegate for notification when the lever state changes." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, "VRSeatThresholdChangedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VRExpansionPlugin_eventVRSeatThresholdChangedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FVRSeatedCharacterInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRSeatedCharacterInfo, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRSeatedCharacterInfo"), sizeof(FVRSeatedCharacterInfo), Get_Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRSeatedCharacterInfo(FVRSeatedCharacterInfo::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRSeatedCharacterInfo"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRSeatedCharacterInfo
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRSeatedCharacterInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRSeatedCharacterInfo")),new UScriptStruct::TCppStructOps<FVRSeatedCharacterInfo>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRSeatedCharacterInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FVRSeatedCharacterInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRSeatedCharacterInfo"), sizeof(FVRSeatedCharacterInfo), Get_Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRSeatedCharacterInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOverThreshold_MetaData[] = {
				{ "Category", "CharacterSeatInfo" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			auto NewProp_bIsOverThreshold_SetBit = [](void* Obj){ ((FVRSeatedCharacterInfo*)Obj)->bIsOverThreshold = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOverThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsOverThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000080000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FVRSeatedCharacterInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsOverThreshold_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsOverThreshold_MetaData, ARRAY_COUNT(NewProp_bIsOverThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentThresholdScaler_MetaData[] = {
				{ "Category", "CharacterSeatInfo" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentThresholdScaler = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentThresholdScaler", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000080000014, 1, nullptr, STRUCT_OFFSET(FVRSeatedCharacterInfo, CurrentThresholdScaler), METADATA_PARAMS(NewProp_CurrentThresholdScaler_MetaData, ARRAY_COUNT(NewProp_CurrentThresholdScaler_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedRadiusThreshold_MetaData[] = {
				{ "Category", "CharacterSeatInfo" },
				{ "ClampMax", "256.000" },
				{ "ClampMin", "1.000" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "UIMax", "256.000" },
				{ "UIMin", "1.000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedRadiusThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AllowedRadiusThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000080000005, 1, nullptr, STRUCT_OFFSET(FVRSeatedCharacterInfo, AllowedRadiusThreshold), METADATA_PARAMS(NewProp_AllowedRadiusThreshold_MetaData, ARRAY_COUNT(NewProp_AllowedRadiusThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedRadius_MetaData[] = {
				{ "Category", "CharacterSeatInfo" },
				{ "ClampMax", "256.000" },
				{ "ClampMin", "1.000" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "UIMax", "256.000" },
				{ "UIMin", "1.000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AllowedRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000080000005, 1, nullptr, STRUCT_OFFSET(FVRSeatedCharacterInfo, AllowedRadius), METADATA_PARAMS(NewProp_AllowedRadius_MetaData, ARRAY_COUNT(NewProp_AllowedRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredYaw_MetaData[] = {
				{ "Category", "CharacterSeatInfo" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoredYaw = { UE4CodeGen_Private::EPropertyClass::Float, "StoredYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FVRSeatedCharacterInfo, StoredYaw), METADATA_PARAMS(NewProp_StoredYaw_MetaData, ARRAY_COUNT(NewProp_StoredYaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredLocation_MetaData[] = {
				{ "Category", "CharacterSeatInfo" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StoredLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FVRSeatedCharacterInfo, StoredLocation), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(NewProp_StoredLocation_MetaData, ARRAY_COUNT(NewProp_StoredLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bZeroToHead_MetaData[] = {
				{ "Category", "CharacterSeatInfo" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			auto NewProp_bZeroToHead_SetBit = [](void* Obj){ ((FVRSeatedCharacterInfo*)Obj)->bZeroToHead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZeroToHead = { UE4CodeGen_Private::EPropertyClass::Bool, "bZeroToHead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FVRSeatedCharacterInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bZeroToHead_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bZeroToHead_MetaData, ARRAY_COUNT(NewProp_bZeroToHead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSitting_MetaData[] = {
				{ "Category", "CharacterSeatInfo" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			auto NewProp_bSitting_SetBit = [](void* Obj){ ((FVRSeatedCharacterInfo*)Obj)->bSitting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSitting = { UE4CodeGen_Private::EPropertyClass::Bool, "bSitting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FVRSeatedCharacterInfo), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSitting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSitting_MetaData, ARRAY_COUNT(NewProp_bSitting_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsOverThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentThresholdScaler,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedRadiusThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StoredLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bZeroToHead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSitting,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VRSeatedCharacterInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FVRSeatedCharacterInfo),
				alignof(FVRSeatedCharacterInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRSeatedCharacterInfo_CRC() { return 2793972702U; }
	static FName NAME_AVRBaseCharacter_NotifyOfTeleport = FName(TEXT("NotifyOfTeleport"));
	void AVRBaseCharacter::NotifyOfTeleport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_NotifyOfTeleport),NULL);
	}
	static FName NAME_AVRBaseCharacter_OnBeginWallPushback = FName(TEXT("OnBeginWallPushback"));
	void AVRBaseCharacter::OnBeginWallPushback(FHitResult HitResultOfImpact, bool bHadLocomotionInput, FVector HmdInput)
	{
		VRBaseCharacter_eventOnBeginWallPushback_Parms Parms;
		Parms.HitResultOfImpact=HitResultOfImpact;
		Parms.bHadLocomotionInput=bHadLocomotionInput ? true : false;
		Parms.HmdInput=HmdInput;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnBeginWallPushback),&Parms);
	}
	static FName NAME_AVRBaseCharacter_OnClimbingSteppedUp = FName(TEXT("OnClimbingSteppedUp"));
	void AVRBaseCharacter::OnClimbingSteppedUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnClimbingSteppedUp),NULL);
	}
	static FName NAME_AVRBaseCharacter_OnCustomMoveActionPerformed = FName(TEXT("OnCustomMoveActionPerformed"));
	void AVRBaseCharacter::OnCustomMoveActionPerformed(EVRMoveAction MoveActionType, FVector MoveActionVector, FRotator MoveActionRotator)
	{
		VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms Parms;
		Parms.MoveActionType=MoveActionType;
		Parms.MoveActionVector=MoveActionVector;
		Parms.MoveActionRotator=MoveActionRotator;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnCustomMoveActionPerformed),&Parms);
	}
	static FName NAME_AVRBaseCharacter_OnEndWallPushback = FName(TEXT("OnEndWallPushback"));
	void AVRBaseCharacter::OnEndWallPushback()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnEndWallPushback),NULL);
	}
	static FName NAME_AVRBaseCharacter_OnSeatedModeChanged = FName(TEXT("OnSeatedModeChanged"));
	void AVRBaseCharacter::OnSeatedModeChanged(bool bNewSeatedMode, bool bWasAlreadySeated)
	{
		VRBaseCharacter_eventOnSeatedModeChanged_Parms Parms;
		Parms.bNewSeatedMode=bNewSeatedMode ? true : false;
		Parms.bWasAlreadySeated=bWasAlreadySeated ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnSeatedModeChanged),&Parms);
	}
	static FName NAME_AVRBaseCharacter_OnSeatThreshholdChanged = FName(TEXT("OnSeatThreshholdChanged"));
	void AVRBaseCharacter::OnSeatThreshholdChanged(bool bIsWithinThreshold, float ToThresholdScaler)
	{
		VRBaseCharacter_eventOnSeatThreshholdChanged_Parms Parms;
		Parms.bIsWithinThreshold=bIsWithinThreshold ? true : false;
		Parms.ToThresholdScaler=ToThresholdScaler;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_OnSeatThreshholdChanged),&Parms);
	}
	static FName NAME_AVRBaseCharacter_ReceiveNavigationMoveCompleted = FName(TEXT("ReceiveNavigationMoveCompleted"));
	void AVRBaseCharacter::ReceiveNavigationMoveCompleted(EPathFollowingResult::Type PathingResult)
	{
		VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms Parms;
		Parms.PathingResult=PathingResult;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_ReceiveNavigationMoveCompleted),&Parms);
	}
	static FName NAME_AVRBaseCharacter_Server_ReZeroSeating = FName(TEXT("Server_ReZeroSeating"));
	void AVRBaseCharacter::Server_ReZeroSeating(FVector_NetQuantize100 NewRelativeHeadLoc, float NewRelativeHeadYaw, bool bZeroToHead)
	{
		VRBaseCharacter_eventServer_ReZeroSeating_Parms Parms;
		Parms.NewRelativeHeadLoc=NewRelativeHeadLoc;
		Parms.NewRelativeHeadYaw=NewRelativeHeadYaw;
		Parms.bZeroToHead=bZeroToHead ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_ReZeroSeating),&Parms);
	}
	static FName NAME_AVRBaseCharacter_Server_SendTransformCamera = FName(TEXT("Server_SendTransformCamera"));
	void AVRBaseCharacter::Server_SendTransformCamera(FBPVRComponentPosRep NewTransform)
	{
		VRBaseCharacter_eventServer_SendTransformCamera_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformCamera),&Parms);
	}
	static FName NAME_AVRBaseCharacter_Server_SendTransformLeftController = FName(TEXT("Server_SendTransformLeftController"));
	void AVRBaseCharacter::Server_SendTransformLeftController(FBPVRComponentPosRep NewTransform)
	{
		VRBaseCharacter_eventServer_SendTransformLeftController_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformLeftController),&Parms);
	}
	static FName NAME_AVRBaseCharacter_Server_SendTransformRightController = FName(TEXT("Server_SendTransformRightController"));
	void AVRBaseCharacter::Server_SendTransformRightController(FBPVRComponentPosRep NewTransform)
	{
		VRBaseCharacter_eventServer_SendTransformRightController_Parms Parms;
		Parms.NewTransform=NewTransform;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SendTransformRightController),&Parms);
	}
	static FName NAME_AVRBaseCharacter_Server_SetSeatedMode = FName(TEXT("Server_SetSeatedMode"));
	void AVRBaseCharacter::Server_SetSeatedMode(USceneComponent* SeatParent, bool bSetSeatedMode, FVector_NetQuantize100 TargetLoc, float TargetYaw, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead)
	{
		VRBaseCharacter_eventServer_SetSeatedMode_Parms Parms;
		Parms.SeatParent=SeatParent;
		Parms.bSetSeatedMode=bSetSeatedMode ? true : false;
		Parms.TargetLoc=TargetLoc;
		Parms.TargetYaw=TargetYaw;
		Parms.AllowedRadius=AllowedRadius;
		Parms.AllowedRadiusThreshold=AllowedRadiusThreshold;
		Parms.bZeroToHead=bZeroToHead ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVRBaseCharacter_Server_SetSeatedMode),&Parms);
	}
	void AVRBaseCharacter::StaticRegisterNativesAVRBaseCharacter()
	{
		UClass* Class = AVRBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorWorldRotationVR", (Native)&AVRBaseCharacter::execAddActorWorldRotationVR },
			{ "ExtendedSimpleMoveToLocation", (Native)&AVRBaseCharacter::execExtendedSimpleMoveToLocation },
			{ "GetMoveStatus", (Native)&AVRBaseCharacter::execGetMoveStatus },
			{ "GetTeleportLocation", (Native)&AVRBaseCharacter::execGetTeleportLocation },
			{ "GetVRForwardVector", (Native)&AVRBaseCharacter::execGetVRForwardVector },
			{ "GetVRLocation", (Native)&AVRBaseCharacter::execGetVRLocation },
			{ "GetVRRightVector", (Native)&AVRBaseCharacter::execGetVRRightVector },
			{ "GetVRRotation", (Native)&AVRBaseCharacter::execGetVRRotation },
			{ "GetVRUpVector", (Native)&AVRBaseCharacter::execGetVRUpVector },
			{ "HasPartialPath", (Native)&AVRBaseCharacter::execHasPartialPath },
			{ "NotifyOfTeleport", (Native)&AVRBaseCharacter::execNotifyOfTeleport },
			{ "OnBeginWallPushback", (Native)&AVRBaseCharacter::execOnBeginWallPushback },
			{ "OnCustomMoveActionPerformed", (Native)&AVRBaseCharacter::execOnCustomMoveActionPerformed },
			{ "OnEndWallPushback", (Native)&AVRBaseCharacter::execOnEndWallPushback },
			{ "OnRep_SeatedCharInfo", (Native)&AVRBaseCharacter::execOnRep_SeatedCharInfo },
			{ "RegenerateOffsetComponentToWorld", (Native)&AVRBaseCharacter::execRegenerateOffsetComponentToWorld },
			{ "Server_ReZeroSeating", (Native)&AVRBaseCharacter::execServer_ReZeroSeating },
			{ "Server_SendTransformCamera", (Native)&AVRBaseCharacter::execServer_SendTransformCamera },
			{ "Server_SendTransformLeftController", (Native)&AVRBaseCharacter::execServer_SendTransformLeftController },
			{ "Server_SendTransformRightController", (Native)&AVRBaseCharacter::execServer_SendTransformRightController },
			{ "Server_SetSeatedMode", (Native)&AVRBaseCharacter::execServer_SetSeatedMode },
			{ "SetActorLocationAndRotationVR", (Native)&AVRBaseCharacter::execSetActorLocationAndRotationVR },
			{ "SetActorRotationVR", (Native)&AVRBaseCharacter::execSetActorRotationVR },
			{ "SetCharacterHalfHeightVR", (Native)&AVRBaseCharacter::execSetCharacterHalfHeightVR },
			{ "SetCharacterSizeVR", (Native)&AVRBaseCharacter::execSetCharacterSizeVR },
			{ "StopNavigationMovement", (Native)&AVRBaseCharacter::execStopNavigationMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR()
	{
		struct VRBaseCharacter_eventAddActorWorldRotationVR_Parms
		{
			FRotator DeltaRot;
			bool bUseYawOnly;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventAddActorWorldRotationVR_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseYawOnly_SetBit = [](void* Obj){ ((VRBaseCharacter_eventAddActorWorldRotationVR_Parms*)Obj)->bUseYawOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseYawOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseYawOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventAddActorWorldRotationVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseYawOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaRot = { UE4CodeGen_Private::EPropertyClass::Struct, "DeltaRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventAddActorWorldRotationVR_Parms, DeltaRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseYawOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeltaRot,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "CPP_Default_bUseYawOnly", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Adds a rotation delta taking into account the HMD as a pivot point (also moves the actor), returns final location difference" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "AddActorWorldRotationVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacter_eventAddActorWorldRotationVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation()
	{
		struct VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms
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
			auto NewProp_bAllowPartialPath_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bAllowPartialPath = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowPartialPath_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCanStrafe_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bCanStrafe = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanStrafe", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanStrafe_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bProjectDestinationToNavigation_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bProjectDestinationToNavigation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bProjectDestinationToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bProjectDestinationToNavigation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUsePathfinding_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bUsePathfinding = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePathfinding", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePathfinding_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bStopOnOverlap_SetBit = [](void* Obj){ ((VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms*)Obj)->bStopOnOverlap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStopOnOverlap_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GoalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GoalLocation_MetaData, ARRAY_COUNT(NewProp_GoalLocation_MetaData)) };
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
				{ "Category", "VRBaseCharacter" },
				{ "CPP_Default_AcceptanceRadius", "-1.000000" },
				{ "CPP_Default_bAllowPartialPath", "true" },
				{ "CPP_Default_bCanStrafe", "false" },
				{ "CPP_Default_bProjectDestinationToNavigation", "true" },
				{ "CPP_Default_bStopOnOverlap", "false" },
				{ "CPP_Default_bUsePathfinding", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "An extended simple move to location with additional parameters" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "ExtendedSimpleMoveToLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(VRBaseCharacter_eventExtendedSimpleMoveToLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus()
	{
		struct VRBaseCharacter_eventGetMoveStatus_Parms
		{
			TEnumAsByte<EPathFollowingStatus::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetMoveStatus_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRBaseCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetMoveStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VRBaseCharacter_eventGetMoveStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation()
	{
		struct VRBaseCharacter_eventGetTeleportLocation_Parms
		{
			FVector OriginalLocation;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetTeleportLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetTeleportLocation_Parms, OriginalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OriginalLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "A helper function that offsets a given vector by the roots collision location\npass in a teleport location and it provides the correct spot for it to be at your feet" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetTeleportLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820400, sizeof(VRBaseCharacter_eventGetTeleportLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector()
	{
		struct VRBaseCharacter_eventGetVRForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRForwardVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRForwardVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation()
	{
		struct VRBaseCharacter_eventGetVRLocation_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector()
	{
		struct VRBaseCharacter_eventGetVRRightVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRRightVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRRightVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation()
	{
		struct VRBaseCharacter_eventGetVRRotation_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRRotation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector()
	{
		struct VRBaseCharacter_eventGetVRUpVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventGetVRUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "GetVRUpVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(VRBaseCharacter_eventGetVRUpVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath()
	{
		struct VRBaseCharacter_eventHasPartialPath_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRBaseCharacter_eventHasPartialPath_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventHasPartialPath_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRBaseCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "HasPartialPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VRBaseCharacter_eventHasPartialPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRGrip" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "NotifyOfTeleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00024CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HmdInput = { UE4CodeGen_Private::EPropertyClass::Struct, "HmdInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnBeginWallPushback_Parms, HmdInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHadLocomotionInput_SetBit = [](void* Obj){ ((VRBaseCharacter_eventOnBeginWallPushback_Parms*)Obj)->bHadLocomotionInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHadLocomotionInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bHadLocomotionInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventOnBeginWallPushback_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHadLocomotionInput_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResultOfImpact = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResultOfImpact", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnBeginWallPushback_Parms, HitResultOfImpact), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HmdInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHadLocomotionInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitResultOfImpact,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Event triggered when beginning to be pushed back from a wall\nbHadLocomotionInput means that the character was moving itself\nHmdInput is how much the HMD moved in that tick so you can compare sizes to decide what to do" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnBeginWallPushback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(VRBaseCharacter_eventOnBeginWallPushback_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Called when the client is in climbing mode and is stepped up onto a platform\nGenerally you should drop the climbing at this point and go into falling movement." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnClimbingSteppedUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionRotator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionVector = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionType = { UE4CodeGen_Private::EPropertyClass::Enum, "MoveActionType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms, MoveActionType), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionRotator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Event triggered when a move action is performed, this is ran just prior to PerformMovement in the character tick" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnCustomMoveActionPerformed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(VRBaseCharacter_eventOnCustomMoveActionPerformed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Event triggered when beginning to be pushed back from a wall" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnEndWallPushback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnRep_SeatedCharInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bWasAlreadySeated_SetBit = [](void* Obj){ ((VRBaseCharacter_eventOnSeatedModeChanged_Parms*)Obj)->bWasAlreadySeated = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasAlreadySeated = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasAlreadySeated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventOnSeatedModeChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWasAlreadySeated_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bNewSeatedMode_SetBit = [](void* Obj){ ((VRBaseCharacter_eventOnSeatedModeChanged_Parms*)Obj)->bNewSeatedMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewSeatedMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewSeatedMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventOnSeatedModeChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewSeatedMode_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWasAlreadySeated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewSeatedMode,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Called when the seated mode is changed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnSeatedModeChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VRBaseCharacter_eventOnSeatedModeChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ToThresholdScaler = { UE4CodeGen_Private::EPropertyClass::Float, "ToThresholdScaler", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventOnSeatThreshholdChanged_Parms, ToThresholdScaler), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsWithinThreshold_SetBit = [](void* Obj){ ((VRBaseCharacter_eventOnSeatThreshholdChanged_Parms*)Obj)->bIsWithinThreshold = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWithinThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsWithinThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventOnSeatThreshholdChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsWithinThreshold_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToThresholdScaler,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsWithinThreshold,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Called when the the player either transitions to/from the threshold boundry or the scaler value of being outside the boundry changes\nCan be used for warnings or screen darkening, ect" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "OnSeatThreshholdChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VRBaseCharacter_eventOnSeatThreshholdChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathingResult = { UE4CodeGen_Private::EPropertyClass::Byte, "PathingResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms, PathingResult), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PathingResult,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRBaseCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Event when a navigation pathing operation has completed, auto calls stop movement for VR characters" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "ReceiveNavigationMoveCompleted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VRBaseCharacter_eventReceiveNavigationMoveCompleted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld()
	{
		struct VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms
		{
			bool bUpdateBounds;
			bool bCalculatePureYaw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCalculatePureYaw_SetBit = [](void* Obj){ ((VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bCalculatePureYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCalculatePureYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bCalculatePureYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCalculatePureYaw_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUpdateBounds_SetBit = [](void* Obj){ ((VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms*)Obj)->bUpdateBounds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateBounds = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateBounds_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCalculatePureYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateBounds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Regenerates the base offsetcomponenttoworld that VR uses" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "RegenerateOffsetComponentToWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRBaseCharacter_eventRegenerateOffsetComponentToWorld_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bZeroToHead_SetBit = [](void* Obj){ ((VRBaseCharacter_eventServer_ReZeroSeating_Parms*)Obj)->bZeroToHead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZeroToHead = { UE4CodeGen_Private::EPropertyClass::Bool, "bZeroToHead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventServer_ReZeroSeating_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bZeroToHead_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRelativeHeadYaw = { UE4CodeGen_Private::EPropertyClass::Float, "NewRelativeHeadYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_ReZeroSeating_Parms, NewRelativeHeadYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRelativeHeadLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRelativeHeadLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_ReZeroSeating_Parms, NewRelativeHeadLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bZeroToHead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRelativeHeadYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRelativeHeadLoc,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bZeroToHead", "true" },
				{ "DisplayName", "ReZeroSeating" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Re-zeros the seated settings" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "Server_ReZeroSeating", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(VRBaseCharacter_eventServer_ReZeroSeating_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformCamera_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "I'm sending it unreliable because it is being resent pretty often" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "Server_SendTransformCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRBaseCharacter_eventServer_SendTransformCamera_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformLeftController_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "Server_SendTransformLeftController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRBaseCharacter_eventServer_SendTransformLeftController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SendTransformRightController_Parms, NewTransform), Z_Construct_UScriptStruct_FBPVRComponentPosRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTransform,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "Server_SendTransformRightController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRBaseCharacter_eventServer_SendTransformRightController_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bZeroToHead_SetBit = [](void* Obj){ ((VRBaseCharacter_eventServer_SetSeatedMode_Parms*)Obj)->bZeroToHead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZeroToHead = { UE4CodeGen_Private::EPropertyClass::Bool, "bZeroToHead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventServer_SetSeatedMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bZeroToHead_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedRadiusThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AllowedRadiusThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, AllowedRadiusThreshold), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AllowedRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, AllowedRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYaw = { UE4CodeGen_Private::EPropertyClass::Float, "TargetYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, TargetYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, TargetLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSetSeatedMode_SetBit = [](void* Obj){ ((VRBaseCharacter_eventServer_SetSeatedMode_Parms*)Obj)->bSetSeatedMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetSeatedMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bSetSeatedMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventServer_SetSeatedMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSetSeatedMode_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeatParent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeatParent = { UE4CodeGen_Private::EPropertyClass::Object, "SeatParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventServer_SetSeatedMode_Parms, SeatParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_SeatParent_MetaData, ARRAY_COUNT(NewProp_SeatParent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bZeroToHead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedRadiusThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AllowedRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSetSeatedMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeatParent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_AllowedRadius", "40.000000" },
				{ "CPP_Default_AllowedRadiusThreshold", "20.000000" },
				{ "CPP_Default_bZeroToHead", "true" },
				{ "DisplayName", "SetSeatedMode" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Sets seated mode on the character and then fires off an event to handle any special setup\nTarget loc is for teleport location if standing up, or relative camera location when sitting down.\nTarget rot is for PURE YAW of standing up, or sitting down (use Get HMDPureYaw)." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "Server_SetSeatedMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x84220CC0, sizeof(VRBaseCharacter_eventServer_SetSeatedMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR()
	{
		struct VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms
		{
			FVector NewLoc;
			FRotator NewRot;
			bool bUseYawOnly;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseYawOnly_SetBit = [](void* Obj){ ((VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms*)Obj)->bUseYawOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseYawOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseYawOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseYawOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRot = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms, NewRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseYawOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLoc,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "CPP_Default_bUseYawOnly", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Sets the actors rotation and location taking into account the HMD as a pivot point (also moves the actor), returns the location difference from the rotation" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "SetActorLocationAndRotationVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacter_eventSetActorLocationAndRotationVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR()
	{
		struct VRBaseCharacter_eventSetActorRotationVR_Parms
		{
			FRotator NewRot;
			bool bUseYawOnly;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetActorRotationVR_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseYawOnly_SetBit = [](void* Obj){ ((VRBaseCharacter_eventSetActorRotationVR_Parms*)Obj)->bUseYawOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseYawOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseYawOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventSetActorRotationVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseYawOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRot = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetActorRotationVR_Parms, NewRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseYawOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRot,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter|VRLocations" },
				{ "CPP_Default_bUseYawOnly", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Sets the actors rotation taking into account the HMD as a pivot point (also moves the actor), returns the location difference" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "SetActorRotationVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacter_eventSetActorRotationVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR()
	{
		struct VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms
		{
			float HalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "HalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms, HalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HalfHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "SetCharacterHalfHeightVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRBaseCharacter_eventSetCharacterHalfHeightVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR()
	{
		struct VRBaseCharacter_eventSetCharacterSizeVR_Parms
		{
			float NewRadius;
			float NewHalfHeight;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((VRBaseCharacter_eventSetCharacterSizeVR_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacter_eventSetCharacterSizeVR_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NewHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterSizeVR_Parms, NewHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NewRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacter_eventSetCharacterSizeVR_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewHalfHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacter" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "SetCharacterSizeVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRBaseCharacter_eventSetCharacterSizeVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRBaseCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Instantly stops pathing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRBaseCharacter, "StopNavigationMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRBaseCharacter_NoRegister()
	{
		return AVRBaseCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRBaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVRBaseCharacter_AddActorWorldRotationVR, "AddActorWorldRotationVR" }, // 2166812504
				{ &Z_Construct_UFunction_AVRBaseCharacter_ExtendedSimpleMoveToLocation, "ExtendedSimpleMoveToLocation" }, // 1629435425
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetMoveStatus, "GetMoveStatus" }, // 1927090013
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetTeleportLocation, "GetTeleportLocation" }, // 2494146082
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRForwardVector, "GetVRForwardVector" }, // 2726144168
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRLocation, "GetVRLocation" }, // 4289162428
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRRightVector, "GetVRRightVector" }, // 2506520755
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRRotation, "GetVRRotation" }, // 3290650290
				{ &Z_Construct_UFunction_AVRBaseCharacter_GetVRUpVector, "GetVRUpVector" }, // 3277419697
				{ &Z_Construct_UFunction_AVRBaseCharacter_HasPartialPath, "HasPartialPath" }, // 447746840
				{ &Z_Construct_UFunction_AVRBaseCharacter_NotifyOfTeleport, "NotifyOfTeleport" }, // 1288819936
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnBeginWallPushback, "OnBeginWallPushback" }, // 1830015328
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnClimbingSteppedUp, "OnClimbingSteppedUp" }, // 2056856748
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnCustomMoveActionPerformed, "OnCustomMoveActionPerformed" }, // 3607539781
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnEndWallPushback, "OnEndWallPushback" }, // 2388150593
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnRep_SeatedCharInfo, "OnRep_SeatedCharInfo" }, // 478443770
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnSeatedModeChanged, "OnSeatedModeChanged" }, // 1917260795
				{ &Z_Construct_UFunction_AVRBaseCharacter_OnSeatThreshholdChanged, "OnSeatThreshholdChanged" }, // 3308169969
				{ &Z_Construct_UFunction_AVRBaseCharacter_ReceiveNavigationMoveCompleted, "ReceiveNavigationMoveCompleted" }, // 2551304168
				{ &Z_Construct_UFunction_AVRBaseCharacter_RegenerateOffsetComponentToWorld, "RegenerateOffsetComponentToWorld" }, // 2558826930
				{ &Z_Construct_UFunction_AVRBaseCharacter_Server_ReZeroSeating, "Server_ReZeroSeating" }, // 226893150
				{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformCamera, "Server_SendTransformCamera" }, // 3444960508
				{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformLeftController, "Server_SendTransformLeftController" }, // 919347494
				{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SendTransformRightController, "Server_SendTransformRightController" }, // 2975162153
				{ &Z_Construct_UFunction_AVRBaseCharacter_Server_SetSeatedMode, "Server_SetSeatedMode" }, // 32881695
				{ &Z_Construct_UFunction_AVRBaseCharacter_SetActorLocationAndRotationVR, "SetActorLocationAndRotationVR" }, // 3174595782
				{ &Z_Construct_UFunction_AVRBaseCharacter_SetActorRotationVR, "SetActorRotationVR" }, // 382990359
				{ &Z_Construct_UFunction_AVRBaseCharacter_SetCharacterHalfHeightVR, "SetCharacterHalfHeightVR" }, // 877739591
				{ &Z_Construct_UFunction_AVRBaseCharacter_SetCharacterSizeVR, "SetCharacterSizeVR" }, // 2283731202
				{ &Z_Construct_UFunction_AVRBaseCharacter_StopNavigationMovement, "StopNavigationMovement" }, // 3750899930
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "VRBaseCharacter.h" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultNavigationFilterClass_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultNavigationFilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultNavigationFilterClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000004, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, DefaultNavigationFilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DefaultNavigationFilterClass_MetaData, ARRAY_COUNT(NewProp_DefaultNavigationFilterClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightMotionController_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightMotionController = { UE4CodeGen_Private::EPropertyClass::Object, "RightMotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, RightMotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_RightMotionController_MetaData, ARRAY_COUNT(NewProp_RightMotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMotionController_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftMotionController = { UE4CodeGen_Private::EPropertyClass::Object, "LeftMotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, LeftMotionController), Z_Construct_UClass_UGripMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_LeftMotionController_MetaData, ARRAY_COUNT(NewProp_LeftMotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentRelativeAttachment_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentRelativeAttachment = { UE4CodeGen_Private::EPropertyClass::Object, "ParentRelativeAttachment", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, ParentRelativeAttachment), Z_Construct_UClass_UParentRelativeAttachmentComponent_NoRegister, METADATA_PARAMS(NewProp_ParentRelativeAttachment_MetaData, ARRAY_COUNT(NewProp_ParentRelativeAttachment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRReplicatedCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRReplicatedCamera = { UE4CodeGen_Private::EPropertyClass::Object, "VRReplicatedCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, VRReplicatedCamera), Z_Construct_UClass_UReplicatedVRCameraComponent_NoRegister, METADATA_PARAMS(NewProp_VRReplicatedCamera_MetaData, ARRAY_COUNT(NewProp_VRReplicatedCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMovementReference_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRMovementReference = { UE4CodeGen_Private::EPropertyClass::Object, "VRMovementReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a201d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, VRMovementReference), Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister, METADATA_PARAMS(NewProp_VRMovementReference_MetaData, ARRAY_COUNT(NewProp_VRMovementReference_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetSmoother_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRBaseCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "This component is used with the normal character SkeletalMesh network smoothing system for simulated proxies\nIt will lerp the characters components back to zero on simulated proxies after a move is complete.\nThe simplest method of doing this was applying the exact same offset as the mesh gets to a base component that\ntracked objects are attached to." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetSmoother = { UE4CodeGen_Private::EPropertyClass::Object, "NetSmoother", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, NetSmoother), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_NetSmoother_MetaData, ARRAY_COUNT(NewProp_NetSmoother_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSeatThreshholdChanged_Bind_MetaData[] = {
				{ "Category", "BaseVRCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
				{ "ToolTip", "Call to use an object" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeatThreshholdChanged_Bind = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSeatThreshholdChanged_Bind", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, OnSeatThreshholdChanged_Bind), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRSeatThresholdChangedSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnSeatThreshholdChanged_Bind_MetaData, ARRAY_COUNT(NewProp_OnSeatThreshholdChanged_Bind_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeatInformation_MetaData[] = {
				{ "Category", "BaseVRCharacter" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SeatInformation = { UE4CodeGen_Private::EPropertyClass::Struct, "SeatInformation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000035, 1, "OnRep_SeatedCharInfo", STRUCT_OFFSET(AVRBaseCharacter, SeatInformation), Z_Construct_UScriptStruct_FVRSeatedCharacterInfo, METADATA_PARAMS(NewProp_SeatInformation_MetaData, ARRAY_COUNT(NewProp_SeatInformation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetComponentToWorld_MetaData[] = {
				{ "Category", "VRExpansionLibrary" },
				{ "ModuleRelativePath", "Public/VRBaseCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetComponentToWorld = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetComponentToWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(AVRBaseCharacter, OffsetComponentToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_OffsetComponentToWorld_MetaData, ARRAY_COUNT(NewProp_OffsetComponentToWorld_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultNavigationFilterClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightMotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftMotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParentRelativeAttachment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRReplicatedCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRMovementReference,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetSmoother,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSeatThreshholdChanged_Bind,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeatInformation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetComponentToWorld,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRBaseCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRBaseCharacter::StaticClass,
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
	IMPLEMENT_CLASS(AVRBaseCharacter, 55594627);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRBaseCharacter(Z_Construct_UClass_AVRBaseCharacter, &AVRBaseCharacter::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRBaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRBaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
