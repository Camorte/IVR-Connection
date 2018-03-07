// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRBaseCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRBaseCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes();
// End Cross Module References
	static UEnum* EVRMoveActionDataReq_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveActionDataReq"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveActionDataReq(EVRMoveActionDataReq_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveActionDataReq"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_CRC() { return 1312903393U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveActionDataReq"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_None", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_None },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_ROT },
				{ "EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT", (int64)EVRMoveActionDataReq::VRMOVEACTIONDATA_LOC_AND_ROT },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRMoveActionDataReq",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRMoveActionDataReq",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRMoveAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRMoveAction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMoveAction(EVRMoveAction_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRMoveAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_CRC() { return 416389407U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMoveAction"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMoveAction::VRMOVEACTION_None", (int64)EVRMoveAction::VRMOVEACTION_None },
				{ "EVRMoveAction::VRMOVEACTION_SnapTurn", (int64)EVRMoveAction::VRMOVEACTION_SnapTurn },
				{ "EVRMoveAction::VRMOVEACTION_Teleport", (int64)EVRMoveAction::VRMOVEACTION_Teleport },
				{ "EVRMoveAction::VRMOVEACTION_StopAllMovement", (int64)EVRMoveAction::VRMOVEACTION_StopAllMovement },
				{ "EVRMoveAction::VRMOVEACTION_Reserved1", (int64)EVRMoveAction::VRMOVEACTION_Reserved1 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM1", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM1 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM2", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM2 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM3", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM3 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM4", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM4 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM5", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM5 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM6", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM6 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM7", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM7 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM8", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM8 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM9", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM9 },
				{ "EVRMoveAction::VRMOVEACTION_CUSTOM10", (int64)EVRMoveAction::VRMOVEACTION_CUSTOM10 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "VRSimpleCharacterMovementComponent handles movement logic for the associated Character owner.\nIt supports various movement modes including: walking, falling, swimming, flying, custom.\n\nMovement is affected primarily by current Velocity and Acceleration. Acceleration is updated each frame\nbased on the input vector accumulated thus far (see UPawnMovementComponent::GetPendingInputVector()).\n\nNetworking is fully implemented, with server-client correction and prediction included.\n\n@see ACharacter, UPawnMovementComponent\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/Character/" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRMoveAction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRMoveAction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVRConditionalMoveRep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRConditionalMoveRep, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRConditionalMoveRep(FVRConditionalMoveRep::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRConditionalMoveRep"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRConditionalMoveRep")),new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRConditionalMoveRep;
	UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRConditionalMoveRep"), sizeof(FVRConditionalMoveRep), Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRConditionalMoveRep>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveAction = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep, MoveAction), Z_Construct_UScriptStruct_FVRMoveActionContainer, METADATA_PARAMS(NewProp_MoveAction_MetaData, ARRAY_COUNT(NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionRot_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRot = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep, MoveActionRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_MoveActionRot_MetaData, ARRAY_COUNT(NewProp_MoveActionRot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionLoc_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep, MoveActionLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MoveActionLoc_MetaData, ARRAY_COUNT(NewProp_MoveActionLoc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedVelocity_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequestedVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "RequestedVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep, RequestedVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RequestedVelocity_MetaData, ARRAY_COUNT(NewProp_RequestedVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomVRInputVector_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomVRInputVector = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomVRInputVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FVRConditionalMoveRep, CustomVRInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CustomVRInputVector_MetaData, ARRAY_COUNT(NewProp_CustomVRInputVector_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveAction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionRot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequestedVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomVRInputVector,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VRConditionalMoveRep",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FVRConditionalMoveRep),
				alignof(FVRConditionalMoveRep),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRConditionalMoveRep_CRC() { return 1945892286U; }
class UScriptStruct* FVRMoveActionContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VREXPANSIONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMoveActionContainer, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("VRMoveActionContainer"), sizeof(FVRMoveActionContainer), Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMoveActionContainer(FVRMoveActionContainer::StaticStruct, TEXT("/Script/VRExpansionPlugin"), TEXT("VRMoveActionContainer"), false, nullptr, nullptr);
static struct FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer
{
	FScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VRMoveActionContainer")),new UScriptStruct::TCppStructOps<FVRMoveActionContainer>);
	}
} ScriptStruct_VRExpansionPlugin_StaticRegisterNativesFVRMoveActionContainer;
	UScriptStruct* Z_Construct_UScriptStruct_FVRMoveActionContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMoveActionContainer"), sizeof(FVRMoveActionContainer), Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMoveActionContainer>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionRot_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRot = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionRot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_MoveActionRot_MetaData, ARRAY_COUNT(NewProp_MoveActionRot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionLoc_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MoveActionLoc_MetaData, ARRAY_COUNT(NewProp_MoveActionLoc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActionDataReq_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionDataReq = { UE4CodeGen_Private::EPropertyClass::Enum, "MoveActionDataReq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionContainer, MoveActionDataReq), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(NewProp_MoveActionDataReq_MetaData, ARRAY_COUNT(NewProp_MoveActionDataReq_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionDataReq_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveAction = { UE4CodeGen_Private::EPropertyClass::Enum, "MoveAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVRMoveActionContainer, MoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(NewProp_MoveAction_MetaData, ARRAY_COUNT(NewProp_MoveAction_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveAction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionRot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionDataReq,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionDataReq_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveAction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveAction_Underlying,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VRMoveActionContainer",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FVRMoveActionContainer),
				alignof(FVRMoveActionContainer),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMoveActionContainer_CRC() { return 3538272621U; }
	static FName NAME_UVRBaseCharacterMovementComponent_ClientAdjustPosition = FName(TEXT("ClientAdjustPosition"));
	void UVRBaseCharacterMovementComponent::ClientAdjustPosition(float TimeStamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewVel=NewVel;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRBaseCharacterMovementComponent_ClientAdjustPosition),&Parms);
	}
	static FName NAME_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition = FName(TEXT("ClientVeryShortAdjustPosition"));
	void UVRBaseCharacterMovementComponent::ClientVeryShortAdjustPosition(float TimeStamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode)
	{
		VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.NewLoc=NewLoc;
		Parms.NewBase=NewBase;
		Parms.NewBaseBoneName=NewBaseBoneName;
		Parms.bHasBase=bHasBase ? true : false;
		Parms.bBaseRelativePosition=bBaseRelativePosition ? true : false;
		Parms.ServerMovementMode=ServerMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition),&Parms);
	}
	void UVRBaseCharacterMovementComponent::StaticRegisterNativesUVRBaseCharacterMovementComponent()
	{
		UClass* Class = UVRBaseCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomReplicatedMovement", (Native)&UVRBaseCharacterMovementComponent::execAddCustomReplicatedMovement },
			{ "ClientAdjustPosition", (Native)&UVRBaseCharacterMovementComponent::execClientAdjustPosition },
			{ "ClientVeryShortAdjustPosition", (Native)&UVRBaseCharacterMovementComponent::execClientVeryShortAdjustPosition },
			{ "PerformMoveAction_Custom", (Native)&UVRBaseCharacterMovementComponent::execPerformMoveAction_Custom },
			{ "PerformMoveAction_SnapTurn", (Native)&UVRBaseCharacterMovementComponent::execPerformMoveAction_SnapTurn },
			{ "PerformMoveAction_StopAllMovement", (Native)&UVRBaseCharacterMovementComponent::execPerformMoveAction_StopAllMovement },
			{ "PerformMoveAction_Teleport", (Native)&UVRBaseCharacterMovementComponent::execPerformMoveAction_Teleport },
			{ "SetClimbingMode", (Native)&UVRBaseCharacterMovementComponent::execSetClimbingMode },
			{ "SetCrouchedHalfHeight", (Native)&UVRBaseCharacterMovementComponent::execSetCrouchedHalfHeight },
			{ "SetReplicatedMovementMode", (Native)&UVRBaseCharacterMovementComponent::execSetReplicatedMovementMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement()
	{
		struct VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms
		{
			FVector Movement;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Movement = { UE4CodeGen_Private::EPropertyClass::Struct, "Movement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms, Movement), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Movement,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseVRCharacterMovementComponent|VRLocations" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "AddCustomReplicatedMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacterMovementComponent_eventAddCustomReplicatedMovement_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ServerMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bBaseRelativePosition_SetBit = [](void* Obj){ ((VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms*)Obj)->bBaseRelativePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bBaseRelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBaseRelativePosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHasBase_SetBit = [](void* Obj){ ((VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms*)Obj)->bHasBase = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBase = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasBase_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "NewBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewBase = { UE4CodeGen_Private::EPropertyClass::Object, "NewBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_NewBase_MetaData, ARRAY_COUNT(NewProp_NewBase_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVel = { UE4CodeGen_Private::EPropertyClass::Struct, "NewVel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBaseRelativePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewVel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Replicate position correction to client, associated with a timestamped servermove.  Client will replay subsequent moves after applying adjustment." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "ClientAdjustPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820C40, sizeof(VRBaseCharacterMovementComponent_eventClientAdjustPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ServerMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, ServerMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bBaseRelativePosition_SetBit = [](void* Obj){ ((VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms*)Obj)->bBaseRelativePosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBaseRelativePosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bBaseRelativePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBaseRelativePosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bHasBase_SetBit = [](void* Obj){ ((VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms*)Obj)->bHasBase = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBase = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasBase_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "NewBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewBase = { UE4CodeGen_Private::EPropertyClass::Object, "NewBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_NewBase_MetaData, ARRAY_COUNT(NewProp_NewBase_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ServerMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBaseRelativePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Bandwidth saving version, when velocity is zeroed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "ClientVeryShortAdjustPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01820C40, sizeof(VRBaseCharacterMovementComponent_eventClientVeryShortAdjustPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom()
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms
		{
			EVRMoveAction MoveActionToPerform;
			EVRMoveActionDataReq DataRequirementsForMoveAction;
			FVector MoveActionVector;
			FRotator MoveActionRotator;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionRotator = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionRotator", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveActionVector = { UE4CodeGen_Private::EPropertyClass::Struct, "MoveActionVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataRequirementsForMoveAction = { UE4CodeGen_Private::EPropertyClass::Enum, "DataRequirementsForMoveAction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, DataRequirementsForMoveAction), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveActionDataReq, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataRequirementsForMoveAction_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveActionToPerform = { UE4CodeGen_Private::EPropertyClass::Enum, "MoveActionToPerform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms, MoveActionToPerform), Z_Construct_UEnum_VRExpansionPlugin_EVRMoveAction, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveActionToPerform_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionRotator,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataRequirementsForMoveAction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DataRequirementsForMoveAction_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionToPerform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveActionToPerform_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Perform a teleport in line with the move action system" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_Custom", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Custom_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn()
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms
		{
			float SnapTurnDeltaYaw;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnapTurnDeltaYaw = { UE4CodeGen_Private::EPropertyClass::Float, "SnapTurnDeltaYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms, SnapTurnDeltaYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapTurnDeltaYaw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Perform a snap turn in line with the move action system" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_SnapTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_SnapTurn_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Perform StopAllMovementImmediately in line with the move action system" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_StopAllMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport()
	{
		struct VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms
		{
			FVector TeleportLocation;
			FRotator TeleportRotation;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, TeleportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TeleportLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms, TeleportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TeleportRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TeleportLocation,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Perform a teleport in line with the move action system" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "PerformMoveAction_Teleport", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(VRBaseCharacterMovementComponent_eventPerformMoveAction_Teleport_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode()
	{
		struct VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms
		{
			bool bIsClimbing;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bIsClimbing_SetBit = [](void* Obj){ ((VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms*)Obj)->bIsClimbing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClimbing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsClimbing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsClimbing_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsClimbing,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement|Climbing" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "SetClimbingMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventSetClimbingMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight()
	{
		struct VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms
		{
			float NewCrouchedHalfHeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewCrouchedHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "NewCrouchedHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms, NewCrouchedHalfHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewCrouchedHalfHeight,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Sets the crouching half height since it isn't exposed during runtime to blueprints" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "SetCrouchedHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventSetCrouchedHalfHeight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode()
	{
		struct VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms
		{
			EVRConjoinedMovementModes NewMovementMode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMovementMode = { UE4CodeGen_Private::EPropertyClass::Enum, "NewMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms, NewMovementMode), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMovementMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMovementMode_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "* This is called client side to make a replicated movement mode change that hits the server in the saved move.\n*\n* Custom Movement Mode is currently limited to 0 - 8, the index's 0 and 1 are currently used up for the plugin movement modes.\n* So setting it to 0 or 1 would be Climbing, and LowGrav respectivly, this leaves 2-8 as open index's for use.\n* For a total of 6 Custom movement modes past the currently implemented plugin ones." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent, "SetReplicatedMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRBaseCharacterMovementComponent_eventSetReplicatedMovementMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent_NoRegister()
	{
		return UVRBaseCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement, "AddCustomReplicatedMovement" }, // 2580233865
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientAdjustPosition, "ClientAdjustPosition" }, // 1251812736
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition, "ClientVeryShortAdjustPosition" }, // 771964446
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Custom, "PerformMoveAction_Custom" }, // 3745915729
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn, "PerformMoveAction_SnapTurn" }, // 981546638
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement, "PerformMoveAction_StopAllMovement" }, // 3057406046
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport, "PerformMoveAction_Teleport" }, // 2452203661
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetClimbingMode, "SetClimbingMode" }, // 1449421774
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight, "SetCrouchedHalfHeight" }, // 2144597895
				{ &Z_Construct_UFunction_UVRBaseCharacterMovementComponent_SetReplicatedMovementMode, "SetReplicatedMovementMode" }, // 3584678800
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VRBaseCharacterMovementComponent.h" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData[] = {
				{ "Category", "VRMovement|LowGrav" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "If true then low grav will ignore the default physics volume fluid friction, useful if you have a mix of low grav and normal movement" },
			};
#endif
			auto NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit = [](void* Obj){ ((UVRBaseCharacterMovementComponent*)Obj)->VRLowGravIgnoresDefaultFluidFriction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VRLowGravIgnoresDefaultFluidFriction = { UE4CodeGen_Private::EPropertyClass::Bool, "VRLowGravIgnoresDefaultFluidFriction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRBaseCharacterMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_VRLowGravIgnoresDefaultFluidFriction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData, ARRAY_COUNT(NewProp_VRLowGravIgnoresDefaultFluidFriction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRLowGravWallFrictionScaler_MetaData[] = {
				{ "Category", "VRMovement|LowGrav" },
				{ "ClampMax", "5.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Setting this below 1.0 will change how fast you de-accelerate when touching a wall" },
				{ "UIMax", "5" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRLowGravWallFrictionScaler = { UE4CodeGen_Private::EPropertyClass::Float, "VRLowGravWallFrictionScaler", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRLowGravWallFrictionScaler), METADATA_PARAMS(NewProp_VRLowGravWallFrictionScaler_MetaData, ARRAY_COUNT(NewProp_VRLowGravWallFrictionScaler_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPostClimbMovement_MetaData[] = {
				{ "Category", "VRMovement|Climbing" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Default movement mode to switch to post climb ended, only used if SetDefaultPostClimbMovementOnStepUp is true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultPostClimbMovement = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultPostClimbMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, DefaultPostClimbMovement), Z_Construct_UEnum_VRExpansionPlugin_EVRConjoinedMovementModes, METADATA_PARAMS(NewProp_DefaultPostClimbMovement_MetaData, ARRAY_COUNT(NewProp_DefaultPostClimbMovement_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultPostClimbMovement_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRReplicateCapsuleHeight_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "If true will replicate the capsule height on to clients, allows for dynamic capsule height changes in multiplayer" },
			};
#endif
			auto NewProp_VRReplicateCapsuleHeight_SetBit = [](void* Obj){ ((UVRBaseCharacterMovementComponent*)Obj)->VRReplicateCapsuleHeight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VRReplicateCapsuleHeight = { UE4CodeGen_Private::EPropertyClass::Bool, "VRReplicateCapsuleHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRBaseCharacterMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_VRReplicateCapsuleHeight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_VRReplicateCapsuleHeight_MetaData, ARRAY_COUNT(NewProp_VRReplicateCapsuleHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VREdgeRejectDistance_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Custom distance that is required before accepting a walking stepup\n      *  This is to help promote stepping up, engine default is 0.15f, generally you want it lower than that\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VREdgeRejectDistance = { UE4CodeGen_Private::EPropertyClass::Float, "VREdgeRejectDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VREdgeRejectDistance), METADATA_PARAMS(NewProp_VREdgeRejectDistance_MetaData, ARRAY_COUNT(NewProp_VREdgeRejectDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingMaxReleaseVelocitySize_MetaData[] = {
				{ "Category", "VRMovement|Climbing" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Max velocity on releasing a climbing grip" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingMaxReleaseVelocitySize = { UE4CodeGen_Private::EPropertyClass::Float, "VRClimbingMaxReleaseVelocitySize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingMaxReleaseVelocitySize), METADATA_PARAMS(NewProp_VRClimbingMaxReleaseVelocitySize_MetaData, ARRAY_COUNT(NewProp_VRClimbingMaxReleaseVelocitySize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData[] = {
				{ "Category", "VRMovement|Climbing" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "If true will automatically set falling when a stepup occurs during climbing" },
			};
#endif
			auto NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit = [](void* Obj){ ((UVRBaseCharacterMovementComponent*)Obj)->SetDefaultPostClimbMovementOnStepUp = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetDefaultPostClimbMovementOnStepUp = { UE4CodeGen_Private::EPropertyClass::Bool, "SetDefaultPostClimbMovementOnStepUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRBaseCharacterMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SetDefaultPostClimbMovementOnStepUp_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData, ARRAY_COUNT(NewProp_SetDefaultPostClimbMovementOnStepUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepUpMultiplier_MetaData[] = {
				{ "Category", "VRMovement|Climbing" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Higher values make it easier to trigger a step up onto a platform and moves you farther in to the base *DEFUNCT*" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepUpMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VRClimbingStepUpMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepUpMultiplier), METADATA_PARAMS(NewProp_VRClimbingStepUpMultiplier_MetaData, ARRAY_COUNT(NewProp_VRClimbingStepUpMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingEdgeRejectDistance_MetaData[] = {
				{ "Category", "VRMovement|Climbing" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Custom distance that is required before accepting a climbing stepup\n      *  This is to help with cases where head wobble causes falling backwards\n      *  Do NOT set to larger than capsule radius!\n      *  #TODO: Port to SimpleCharacter as well" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingEdgeRejectDistance = { UE4CodeGen_Private::EPropertyClass::Float, "VRClimbingEdgeRejectDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingEdgeRejectDistance), METADATA_PARAMS(NewProp_VRClimbingEdgeRejectDistance_MetaData, ARRAY_COUNT(NewProp_VRClimbingEdgeRejectDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRClimbingStepHeight_MetaData[] = {
				{ "Category", "VRMovement|Climbing" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Height to auto step up" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRClimbingStepHeight = { UE4CodeGen_Private::EPropertyClass::Float, "VRClimbingStepHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRClimbingStepHeight), METADATA_PARAMS(NewProp_VRClimbingStepHeight_MetaData, ARRAY_COUNT(NewProp_VRClimbingStepHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "If true will never count a simulating component as the floor, to prevent jitter / physics problems." },
			};
#endif
			auto NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit = [](void* Obj){ ((UVRBaseCharacterMovementComponent*)Obj)->bIgnoreSimulatingComponentsInFloorCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSimulatingComponentsInFloorCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSimulatingComponentsInFloorCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRBaseCharacterMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreSimulatingComponentsInFloorCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData, ARRAY_COUNT(NewProp_bIgnoreSimulatingComponentsInFloorCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRWallSlideScaler_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "ClampMax", "5.0" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/VRBaseCharacterMovementComponent.h" },
				{ "ToolTip", "Setting this higher will divide the wall slide effect by this value, to reduce collision sliding." },
				{ "UIMax", "5" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VRWallSlideScaler = { UE4CodeGen_Private::EPropertyClass::Float, "VRWallSlideScaler", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRBaseCharacterMovementComponent, VRWallSlideScaler), METADATA_PARAMS(NewProp_VRWallSlideScaler_MetaData, ARRAY_COUNT(NewProp_VRWallSlideScaler_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRLowGravIgnoresDefaultFluidFriction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRLowGravWallFrictionScaler,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultPostClimbMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultPostClimbMovement_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRReplicateCapsuleHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VREdgeRejectDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRClimbingMaxReleaseVelocitySize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SetDefaultPostClimbMovementOnStepUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRClimbingStepUpMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRClimbingEdgeRejectDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRClimbingStepHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreSimulatingComponentsInFloorCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRWallSlideScaler,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRBaseCharacterMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRBaseCharacterMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRBaseCharacterMovementComponent, 443262159);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRBaseCharacterMovementComponent(Z_Construct_UClass_UVRBaseCharacterMovementComponent, &UVRBaseCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRBaseCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRBaseCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
