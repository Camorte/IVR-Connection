// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SimpleChar/VRSimpleCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRSimpleCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVR();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDual();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	static FName NAME_UVRSimpleCharacterMovementComponent_ServerMoveVR = FName(TEXT("ServerMoveVR"));
	void UVRSimpleCharacterMovementComponent::ServerMoveVR(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRSimpleCharacterMovementComponent_ServerMoveVR),&Parms);
	}
	static FName NAME_UVRSimpleCharacterMovementComponent_ServerMoveVRDual = FName(TEXT("ServerMoveVRDual"));
	void UVRSimpleCharacterMovementComponent::ServerMoveVRDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRSimpleCharacterMovementComponent_ServerMoveVRDual),&Parms);
	}
	static FName NAME_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion = FName(TEXT("ServerMoveVRDualHybridRootMotion"));
	void UVRSimpleCharacterMovementComponent::ServerMoveVRDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion),&Parms);
	}
	void UVRSimpleCharacterMovementComponent::StaticRegisterNativesUVRSimpleCharacterMovementComponent()
	{
		UClass* Class = UVRSimpleCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerMoveVR", (Native)&UVRSimpleCharacterMovementComponent::execServerMoveVR },
			{ "ServerMoveVRDual", (Native)&UVRSimpleCharacterMovementComponent::execServerMoveVRDual },
			{ "ServerMoveVRDualHybridRootMotion", (Native)&UVRSimpleCharacterMovementComponent::execServerMoveVRDualHybridRootMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View = { UE4CodeGen_Private::EPropertyClass::UInt32, "View", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, View), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedMoveFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSimpleCharacterMovementComponent, "ServerMoveVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRSimpleCharacterMovementComponent_eventServerMoveVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View = { UE4CodeGen_Private::EPropertyClass::UInt32, "View", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, View), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSimpleCharacterMovementComponent, "ServerMoveVRDual", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRSimpleCharacterMovementComponent_eventServerMoveVRDual_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View = { UE4CodeGen_Private::EPropertyClass::UInt32, "View", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, View), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. First move is non root motion, second is root motion." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRSimpleCharacterMovementComponent, "ServerMoveVRDualHybridRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRSimpleCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent_NoRegister()
	{
		return UVRSimpleCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRSimpleCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVR, "ServerMoveVR" }, // 3277705170
				{ &Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDual, "ServerMoveVRDual" }, // 1702741516
				{ &Z_Construct_UFunction_UVRSimpleCharacterMovementComponent_ServerMoveVRDualHybridRootMotion, "ServerMoveVRDualHybridRootMotion" }, // 1403046324
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIMoveCompletedSignature, FAIRequestID, RequestID, EPathFollowingResult::Type, Result);" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipHMDChecks_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
				{ "ToolTip", "Skips checking for the HMD location on tick, for 2D pawns when a headset is connected" },
			};
#endif
			auto NewProp_bSkipHMDChecks_SetBit = [](void* Obj){ ((UVRSimpleCharacterMovementComponent*)Obj)->bSkipHMDChecks = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipHMDChecks = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipHMDChecks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRSimpleCharacterMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSkipHMDChecks_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSkipHMDChecks_MetaData, ARRAY_COUNT(NewProp_bSkipHMDChecks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRCameraComponent_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "VRCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008201c, 1, nullptr, STRUCT_OFFSET(UVRSimpleCharacterMovementComponent, VRCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_VRCameraComponent_MetaData, ARRAY_COUNT(NewProp_VRCameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SimpleChar/VRSimpleCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootCapsule = { UE4CodeGen_Private::EPropertyClass::Object, "VRRootCapsule", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008201c, 1, nullptr, STRUCT_OFFSET(UVRSimpleCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(NewProp_VRRootCapsule_MetaData, ARRAY_COUNT(NewProp_VRRootCapsule_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSkipHMDChecks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRCameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRRootCapsule,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRSimpleCharacterMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRSimpleCharacterMovementComponent::StaticClass,
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
	IMPLEMENT_CLASS(UVRSimpleCharacterMovementComponent, 2204105413);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRSimpleCharacterMovementComponent(Z_Construct_UClass_UVRSimpleCharacterMovementComponent, &UVRSimpleCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRSimpleCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRSimpleCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
