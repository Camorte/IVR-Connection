// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacterMovementComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRCharacterMovementComponent();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRBaseCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	VREXPANSIONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVRConditionalMoveRep();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR2();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual2();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight2();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight2();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRRootComponent_NoRegister();
// End Cross Module References
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVR = FName(TEXT("ServerMoveVR"));
	void UVRCharacterMovementComponent::ServerMoveVR(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVR_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVR),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVR2 = FName(TEXT("ServerMoveVR2"));
	void UVRCharacterMovementComponent::ServerMoveVR2(float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVR2_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVR2),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDual = FName(TEXT("ServerMoveVRDual"));
	void UVRCharacterMovementComponent::ServerMoveVRDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDual_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.ClientYaw0=ClientYaw0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDual),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDual2 = FName(TEXT("ServerMoveVRDual2"));
	void UVRCharacterMovementComponent::ServerMoveVRDual2(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDual2_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDual2),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDualExLight = FName(TEXT("ServerMoveVRDualExLight"));
	void UVRCharacterMovementComponent::ServerMoveVRDualExLight(float TimeStamp0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.PendingFlags=PendingFlags;
		Parms.ClientYaw0=ClientYaw0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDualExLight),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDualExLight2 = FName(TEXT("ServerMoveVRDualExLight2"));
	void UVRCharacterMovementComponent::ServerMoveVRDualExLight2(float TimeStamp0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDualExLight2),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion = FName(TEXT("ServerMoveVRDualHybridRootMotion"));
	void UVRCharacterMovementComponent::ServerMoveVRDualHybridRootMotion(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint16 ClientYaw0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.ClientYaw0=ClientYaw0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2 = FName(TEXT("ServerMoveVRDualHybridRootMotion2"));
	void UVRCharacterMovementComponent::ServerMoveVRDualHybridRootMotion2(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, FVector_NetQuantize100 OldCapsuleLoc, FVRConditionalMoveRep OldConditionalReps, FVector_NetQuantize100 OldLFDiff, uint16 OldCapsuleYaw, float TimeStamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 NewFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms Parms;
		Parms.TimeStamp0=TimeStamp0;
		Parms.InAccel0=InAccel0;
		Parms.PendingFlags=PendingFlags;
		Parms.View0=View0;
		Parms.OldCapsuleLoc=OldCapsuleLoc;
		Parms.OldConditionalReps=OldConditionalReps;
		Parms.OldLFDiff=OldLFDiff;
		Parms.OldCapsuleYaw=OldCapsuleYaw;
		Parms.TimeStamp=TimeStamp;
		Parms.InAccel=InAccel;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.NewFlags=NewFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRExLight = FName(TEXT("ServerMoveVRExLight"));
	void UVRCharacterMovementComponent::ServerMoveVRExLight(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint16 ClientYaw, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRExLight_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientYaw=ClientYaw;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRExLight),&Parms);
	}
	static FName NAME_UVRCharacterMovementComponent_ServerMoveVRExLight2 = FName(TEXT("ServerMoveVRExLight2"));
	void UVRCharacterMovementComponent::ServerMoveVRExLight2(float TimeStamp, FVector_NetQuantize100 ClientLoc, FVector_NetQuantize100 CapsuleLoc, FVRConditionalMoveRep ConditionalReps, FVector_NetQuantize100 LFDiff, uint16 CapsuleYaw, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode)
	{
		VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms Parms;
		Parms.TimeStamp=TimeStamp;
		Parms.ClientLoc=ClientLoc;
		Parms.CapsuleLoc=CapsuleLoc;
		Parms.ConditionalReps=ConditionalReps;
		Parms.LFDiff=LFDiff;
		Parms.CapsuleYaw=CapsuleYaw;
		Parms.CompressedMoveFlags=CompressedMoveFlags;
		Parms.ClientRoll=ClientRoll;
		Parms.View=View;
		Parms.ClientMovementBase=ClientMovementBase;
		Parms.ClientBaseBoneName=ClientBaseBoneName;
		Parms.ClientMovementMode=ClientMovementMode;
		ProcessEvent(FindFunctionChecked(NAME_UVRCharacterMovementComponent_ServerMoveVRExLight2),&Parms);
	}
	void UVRCharacterMovementComponent::StaticRegisterNativesUVRCharacterMovementComponent()
	{
		UClass* Class = UVRCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerMoveVR", (Native)&UVRCharacterMovementComponent::execServerMoveVR },
			{ "ServerMoveVR2", (Native)&UVRCharacterMovementComponent::execServerMoveVR2 },
			{ "ServerMoveVRDual", (Native)&UVRCharacterMovementComponent::execServerMoveVRDual },
			{ "ServerMoveVRDual2", (Native)&UVRCharacterMovementComponent::execServerMoveVRDual2 },
			{ "ServerMoveVRDualExLight", (Native)&UVRCharacterMovementComponent::execServerMoveVRDualExLight },
			{ "ServerMoveVRDualExLight2", (Native)&UVRCharacterMovementComponent::execServerMoveVRDualExLight2 },
			{ "ServerMoveVRDualHybridRootMotion", (Native)&UVRCharacterMovementComponent::execServerMoveVRDualHybridRootMotion },
			{ "ServerMoveVRDualHybridRootMotion2", (Native)&UVRCharacterMovementComponent::execServerMoveVRDualHybridRootMotion2 },
			{ "ServerMoveVRExLight", (Native)&UVRCharacterMovementComponent::execServerMoveVRExLight },
			{ "ServerMoveVRExLight2", (Native)&UVRCharacterMovementComponent::execServerMoveVRExLight2 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, ClientYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedMoveFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "uint8 ClientRoll, uint32 View," },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View = { UE4CodeGen_Private::EPropertyClass::UInt32, "View", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, View), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVR2_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedMoveFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVR2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVR2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw0 = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, ClientYaw0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientYaw0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "uint8 ClientRoll, uint32 View," },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVRDual", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVRDual_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View = { UE4CodeGen_Private::EPropertyClass::UInt32, "View", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, View), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVRDual2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVRDual2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, ClientYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw0 = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, ClientYaw0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientYaw0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "uint8 ClientRoll, uint32 View," },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVRDualExLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVRDualExLight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View = { UE4CodeGen_Private::EPropertyClass::UInt32, "View", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, View), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. ExLight version is used if there was no requested velocity or customVRInputVector or Accell" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVRDualExLight2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVRDualExLight2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw0 = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, ClientYaw0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientYaw0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "uint8 ClientRoll, uint32 View," },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVRDualHybridRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View = { UE4CodeGen_Private::EPropertyClass::UInt32, "View", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, View), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "NewFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, NewFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, InAccel), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_OldCapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "OldCapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, OldCapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldLFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "OldLFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, OldLFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "OldConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, OldConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldCapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "OldCapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, OldCapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View0 = { UE4CodeGen_Private::EPropertyClass::UInt32, "View0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, View0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PendingFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "PendingFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, PendingFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAccel0 = { UE4CodeGen_Private::EPropertyClass::Struct, "InAccel0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, InAccel0), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp0 = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms, TimeStamp0), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldLFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OldCapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PendingFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAccel0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp0,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info for two moves. First move is non root motion, second is root motion." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVRDualHybridRootMotion2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVRDualHybridRootMotion2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_ClientYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "ClientYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, ClientYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedMoveFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "uint8 ClientRoll, uint32 View," },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVRExLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVRExLight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, ClientMovementMode), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClientBaseBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "ClientBaseBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, ClientBaseBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientMovementBase_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientMovementBase = { UE4CodeGen_Private::EPropertyClass::Object, "ClientMovementBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, ClientMovementBase), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_ClientMovementBase_MetaData, ARRAY_COUNT(NewProp_ClientMovementBase_MetaData)) };
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_View = { UE4CodeGen_Private::EPropertyClass::UInt32, "View", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, View), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClientRoll = { UE4CodeGen_Private::EPropertyClass::Byte, "ClientRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, ClientRoll), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressedMoveFlags = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressedMoveFlags", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, CompressedMoveFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_CapsuleYaw = { UE4CodeGen_Private::EPropertyClass::UInt16, "CapsuleYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, CapsuleYaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LFDiff = { UE4CodeGen_Private::EPropertyClass::Struct, "LFDiff", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, LFDiff), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalReps = { UE4CodeGen_Private::EPropertyClass::Struct, "ConditionalReps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, ConditionalReps), Z_Construct_UScriptStruct_FVRConditionalMoveRep, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, CapsuleLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientLoc = { UE4CodeGen_Private::EPropertyClass::Struct, "ClientLoc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, ClientLoc), Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeStamp = { UE4CodeGen_Private::EPropertyClass::Float, "TimeStamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms, TimeStamp), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientBaseBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientMovementBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_View,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CompressedMoveFlags,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LFDiff,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConditionalReps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapsuleLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClientLoc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeStamp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Replicated function sent by client to server - contains client movement and view info. ExLight version is used if there was no requested velocity or customVRInputVector or Accell" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRCharacterMovementComponent, "ServerMoveVRExLight2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220C40, sizeof(VRCharacterMovementComponent_eventServerMoveVRExLight2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent_NoRegister()
	{
		return UVRCharacterMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVRBaseCharacterMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR, "ServerMoveVR" }, // 911874012
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVR2, "ServerMoveVR2" }, // 2677336291
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual, "ServerMoveVRDual" }, // 1846676894
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDual2, "ServerMoveVRDual2" }, // 2382108012
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight, "ServerMoveVRDualExLight" }, // 1610462625
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualExLight2, "ServerMoveVRDualExLight2" }, // 2894810027
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion, "ServerMoveVRDualHybridRootMotion" }, // 3845049418
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRDualHybridRootMotion2, "ServerMoveVRDualHybridRootMotion2" }, // 3310642739
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight, "ServerMoveVRExLight" }, // 3413529226
				{ &Z_Construct_UFunction_UVRCharacterMovementComponent_ServerMoveVRExLight2, "ServerMoveVRExLight2" }, // 4054003209
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VRCharacterMovementComponent.h" },
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallRepulsionMultiplier_MetaData[] = {
				{ "Category", "VRCharacterMovementComponent" },
				{ "ClampMax", "1.0" },
				{ "ClampMin", "0.01" },
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Higher values will cause more slide but better step up" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallRepulsionMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "WallRepulsionMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRCharacterMovementComponent, WallRepulsionMultiplier), METADATA_PARAMS(NewProp_WallRepulsionMultiplier_MetaData, ARRAY_COUNT(NewProp_WallRepulsionMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowMovementMerging_MetaData[] = {
				{ "Category", "VRCharacterMovementComponent" },
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
				{ "ToolTip", "Allow merging movement replication (may cause issues when >10 players due to capsule location" },
			};
#endif
			auto NewProp_bAllowMovementMerging_SetBit = [](void* Obj){ ((UVRCharacterMovementComponent*)Obj)->bAllowMovementMerging = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowMovementMerging = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowMovementMerging", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRCharacterMovementComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowMovementMerging_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowMovementMerging_MetaData, ARRAY_COUNT(NewProp_bAllowMovementMerging_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRRootCapsule_MetaData[] = {
				{ "Category", "VRMovement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRCharacterMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRRootCapsule = { UE4CodeGen_Private::EPropertyClass::Object, "VRRootCapsule", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008201c, 1, nullptr, STRUCT_OFFSET(UVRCharacterMovementComponent, VRRootCapsule), Z_Construct_UClass_UVRRootComponent_NoRegister, METADATA_PARAMS(NewProp_VRRootCapsule_MetaData, ARRAY_COUNT(NewProp_VRRootCapsule_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WallRepulsionMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowMovementMerging,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRRootCapsule,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRCharacterMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRCharacterMovementComponent::StaticClass,
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
	IMPLEMENT_CLASS(UVRCharacterMovementComponent, 804776279);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRCharacterMovementComponent(Z_Construct_UClass_UVRCharacterMovementComponent, &UVRCharacterMovementComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
