// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Interactibles/VRButtonComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRButtonComponent() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRButtonComponent_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_UVRButtonComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonState();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition();
	VREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature()
	{
		struct _Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms
		{
			bool ButtonState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ButtonState_SetBit = [](void* Obj){ ((_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms*)Obj)->ButtonState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ButtonState = { UE4CodeGen_Private::EPropertyClass::Bool, "ButtonState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ButtonState_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Delegate for notification when the button state changes." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin, "VRButtonStateChangedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VRExpansionPlugin_eventVRButtonStateChangedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EVRButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType, Z_Construct_UPackage__Script_VRExpansionPlugin(), TEXT("EVRButtonType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRButtonType(EVRButtonType_StaticEnum, TEXT("/Script/VRExpansionPlugin"), TEXT("EVRButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_CRC() { return 4287942997U; }
	UEnum* Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRExpansionPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRButtonType"), 0, Get_Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRButtonType::Btn_Press", (int64)EVRButtonType::Btn_Press },
				{ "EVRButtonType::Btn_Toggle_Return", (int64)EVRButtonType::Btn_Toggle_Return },
				{ "EVRButtonType::Btn_Toggle_Stay", (int64)EVRButtonType::Btn_Toggle_Stay },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "// VR Button Types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVRButtonType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVRButtonType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UVRButtonComponent_ReceiveButtonStateChanged = FName(TEXT("ReceiveButtonStateChanged"));
	void UVRButtonComponent::ReceiveButtonStateChanged(bool bCurButtonState)
	{
		VRButtonComponent_eventReceiveButtonStateChanged_Parms Parms;
		Parms.bCurButtonState=bCurButtonState ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVRButtonComponent_ReceiveButtonStateChanged),&Parms);
	}
	void UVRButtonComponent::StaticRegisterNativesUVRButtonComponent()
	{
		UClass* Class = UVRButtonComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsButtonInUse", (Native)&UVRButtonComponent::execIsButtonInUse },
			{ "OnOverlapBegin", (Native)&UVRButtonComponent::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&UVRButtonComponent::execOnOverlapEnd },
			{ "ResetInitialButtonLocation", (Native)&UVRButtonComponent::execResetInitialButtonLocation },
			{ "SetButtonState", (Native)&UVRButtonComponent::execSetButtonState },
			{ "SetButtonToRestingPosition", (Native)&UVRButtonComponent::execSetButtonToRestingPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse()
	{
		struct VRButtonComponent_eventIsButtonInUse_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRButtonComponent_eventIsButtonInUse_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventIsButtonInUse_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "IsButtonInUse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(VRButtonComponent_eventIsButtonInUse_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin()
	{
		struct VRButtonComponent_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((VRButtonComponent_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventOnOverlapBegin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(VRButtonComponent_eventOnOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd()
	{
		struct VRButtonComponent_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRButtonComponent_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(VRButtonComponent_eventOnOverlapEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCurButtonState_SetBit = [](void* Obj){ ((VRButtonComponent_eventReceiveButtonStateChanged_Parms*)Obj)->bCurButtonState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurButtonState = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurButtonState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventReceiveButtonStateChanged_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCurButtonState_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCurButtonState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "DisplayName", "Button State Changed" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "ReceiveButtonStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(VRButtonComponent_eventReceiveButtonStateChanged_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Should be called after the button is moved post begin play" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "ResetInitialButtonLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonState()
	{
		struct VRButtonComponent_eventSetButtonState_Parms
		{
			bool bNewButtonState;
			bool bCallButtonChangedEvent;
			bool bSnapIntoPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bSnapIntoPosition_SetBit = [](void* Obj){ ((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bSnapIntoPosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapIntoPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapIntoPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventSetButtonState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSnapIntoPosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bCallButtonChangedEvent_SetBit = [](void* Obj){ ((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bCallButtonChangedEvent = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCallButtonChangedEvent = { UE4CodeGen_Private::EPropertyClass::Bool, "bCallButtonChangedEvent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventSetButtonState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCallButtonChangedEvent_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bNewButtonState_SetBit = [](void* Obj){ ((VRButtonComponent_eventSetButtonState_Parms*)Obj)->bNewButtonState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewButtonState = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewButtonState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventSetButtonState_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNewButtonState_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSnapIntoPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCallButtonChangedEvent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNewButtonState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRButtonComponent" },
				{ "CPP_Default_bCallButtonChangedEvent", "true" },
				{ "CPP_Default_bSnapIntoPosition", "false" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Sets the button state outside of interaction, bSnapIntoPosition is for Toggle_Stay mode, it will lerp into the new position if this is false" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "SetButtonState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRButtonComponent_eventSetButtonState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition()
	{
		struct VRButtonComponent_eventSetButtonToRestingPosition_Parms
		{
			bool bLerpToPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bLerpToPosition_SetBit = [](void* Obj){ ((VRButtonComponent_eventSetButtonToRestingPosition_Parms*)Obj)->bLerpToPosition = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLerpToPosition = { UE4CodeGen_Private::EPropertyClass::Bool, "bLerpToPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRButtonComponent_eventSetButtonToRestingPosition_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLerpToPosition_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLerpToPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRButtonComponent" },
				{ "CPP_Default_bLerpToPosition", "false" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Resets the button to its resting location (mostly for Toggle_Stay)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRButtonComponent, "SetButtonToRestingPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VRButtonComponent_eventSetButtonToRestingPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRButtonComponent_NoRegister()
	{
		return UVRButtonComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRButtonComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRButtonComponent_IsButtonInUse, "IsButtonInUse" }, // 174423263
				{ &Z_Construct_UFunction_UVRButtonComponent_OnOverlapBegin, "OnOverlapBegin" }, // 1134507931
				{ &Z_Construct_UFunction_UVRButtonComponent_OnOverlapEnd, "OnOverlapEnd" }, // 4174203254
				{ &Z_Construct_UFunction_UVRButtonComponent_ReceiveButtonStateChanged, "ReceiveButtonStateChanged" }, // 1531115755
				{ &Z_Construct_UFunction_UVRButtonComponent_ResetInitialButtonLocation, "ResetInitialButtonLocation" }, // 2182006027
				{ &Z_Construct_UFunction_UVRButtonComponent_SetButtonState, "SetButtonState" }, // 1374759507
				{ &Z_Construct_UFunction_UVRButtonComponent_SetButtonToRestingPosition, "SetButtonToRestingPosition" }, // 1877068622
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "VRExpansionPlugin" },
				{ "HideCategories", "Object Activation Components|Activation Trigger" },
				{ "IncludePath", "Interactibles/VRButtonComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenEngaging_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Minimum time before the button can be switched again" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeBetweenEngaging = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeBetweenEngaging", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, MinTimeBetweenEngaging), METADATA_PARAMS(NewProp_MinTimeBetweenEngaging_MetaData, ARRAY_COUNT(NewProp_MinTimeBetweenEngaging_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonEngageDepth_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Depth at which the button engages (switches)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ButtonEngageDepth = { UE4CodeGen_Private::EPropertyClass::Float, "ButtonEngageDepth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, ButtonEngageDepth), METADATA_PARAMS(NewProp_ButtonEngageDepth_MetaData, ARRAY_COUNT(NewProp_ButtonEngageDepth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonAxis_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Negative on this axis is the depress direction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonAxis = { UE4CodeGen_Private::EPropertyClass::Enum, "ButtonAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, ButtonAxis), Z_Construct_UEnum_VRExpansionPlugin_EVRInteractibleAxis, METADATA_PARAMS(NewProp_ButtonAxis_MetaData, ARRAY_COUNT(NewProp_ButtonAxis_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonAxis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonType_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Type of button this is" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonType = { UE4CodeGen_Private::EPropertyClass::Enum, "ButtonType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, ButtonType), Z_Construct_UEnum_VRExpansionPlugin_EVRButtonType, METADATA_PARAMS(NewProp_ButtonType_MetaData, ARRAY_COUNT(NewProp_ButtonType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepressDistance_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Distance that the button depresses" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepressDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DepressDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, DepressDistance), METADATA_PARAMS(NewProp_DepressDistance_MetaData, ARRAY_COUNT(NewProp_DepressDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepressSpeed_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Speed that the button de-presses when no longer interacted with" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepressSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "DepressSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, DepressSpeed), METADATA_PARAMS(NewProp_DepressSpeed_MetaData, ARRAY_COUNT(NewProp_DepressSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bButtonState_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Current state of the button, writable to set initial value" },
			};
#endif
			auto NewProp_bButtonState_SetBit = [](void* Obj){ ((UVRButtonComponent*)Obj)->bButtonState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bButtonState = { UE4CodeGen_Private::EPropertyClass::Bool, "bButtonState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRButtonComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bButtonState_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bButtonState_MetaData, ARRAY_COUNT(NewProp_bButtonState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Whether the button is enabled or not (can be interacted with)" },
			};
#endif
			auto NewProp_bIsEnabled_SetBit = [](void* Obj){ ((UVRButtonComponent*)Obj)->bIsEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVRButtonComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsEnabled_MetaData, ARRAY_COUNT(NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractingComponent_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_InteractingComponent = { UE4CodeGen_Private::EPropertyClass::WeakObject, "InteractingComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x001400000008001c, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, InteractingComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_InteractingComponent_MetaData, ARRAY_COUNT(NewProp_InteractingComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnButtonStateChanged_MetaData[] = {
				{ "Category", "VRButtonComponent" },
				{ "ModuleRelativePath", "Public/Interactibles/VRButtonComponent.h" },
				{ "ToolTip", "Call to use an object" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonStateChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnButtonStateChanged", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVRButtonComponent, OnButtonStateChanged), Z_Construct_UDelegateFunction_VRExpansionPlugin_VRButtonStateChangedSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnButtonStateChanged_MetaData, ARRAY_COUNT(NewProp_OnButtonStateChanged_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinTimeBetweenEngaging,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonEngageDepth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonAxis_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ButtonType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DepressDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DepressSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bButtonState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InteractingComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnButtonStateChanged,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVRButtonComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRButtonComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UVRButtonComponent, 3641057408);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRButtonComponent(Z_Construct_UClass_UVRButtonComponent, &UVRButtonComponent::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("UVRButtonComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRButtonComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
