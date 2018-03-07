// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SteamVRKeyboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRKeyboardComponent() {}
// Cross Module References
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenVRExpansionPlugin();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_USteamVRKeyboardComponent_NoRegister();
	OPENVREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_USteamVRKeyboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard();
	OPENVREXPANSIONPLUGIN_API UEnum* Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard();
	OPENVREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin, "VRKeyboardNullCallbackSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature()
	{
		struct _Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms
		{
			FString Text;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms, Text), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin, "VRKeyboardStringCallbackSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void USteamVRKeyboardComponent::StaticRegisterNativesUSteamVRKeyboardComponent()
	{
		UClass* Class = USteamVRKeyboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseVRKeyboard", (Native)&USteamVRKeyboardComponent::execCloseVRKeyboard },
			{ "GetVRKeyboardText", (Native)&USteamVRKeyboardComponent::execGetVRKeyboardText },
			{ "OpenVRKeyboard", (Native)&USteamVRKeyboardComponent::execOpenVRKeyboard },
			{ "ReOpenVRKeyboardForUser", (Native)&USteamVRKeyboardComponent::execReOpenVRKeyboardForUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard()
	{
		struct SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms
		{
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
				{ "ToolTip", "Closes the vrkeyboard, can fail if not already open" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRKeyboardComponent, "CloseVRKeyboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SteamVRKeyboardComponent_eventCloseVRKeyboard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText()
	{
		struct SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms
		{
			FString Text;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Str, "Text", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Text,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
				{ "ToolTip", "Closes the vrkeyboard, can fail if not already open" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRKeyboardComponent, "GetVRKeyboardText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SteamVRKeyboardComponent_eventGetVRKeyboardText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard()
	{
		struct SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms
		{
			bool bIsForPassword;
			bool bIsMultiline;
			bool bUseMinimalMode;
			bool bIsRightHand;
			int32 MaxCharacters;
			FString Description;
			FString StartingString;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartingString = { UE4CodeGen_Private::EPropertyClass::Str, "StartingString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms, StartingString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms, Description), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCharacters = { UE4CodeGen_Private::EPropertyClass::Int, "MaxCharacters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms, MaxCharacters), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsRightHand_SetBit = [](void* Obj){ ((SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms*)Obj)->bIsRightHand = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRightHand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsRightHand_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseMinimalMode_SetBit = [](void* Obj){ ((SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms*)Obj)->bUseMinimalMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMinimalMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMinimalMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMinimalMode_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsMultiline_SetBit = [](void* Obj){ ((SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms*)Obj)->bIsMultiline = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMultiline = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMultiline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsMultiline_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsForPassword_SetBit = [](void* Obj){ ((SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms*)Obj)->bIsForPassword = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForPassword = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsForPassword", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsForPassword_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartingString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCharacters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsRightHand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMinimalMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsMultiline,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsForPassword,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
				{ "ToolTip", "Opens the vrkeyboard, can fail if already open or in use" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRKeyboardComponent, "OpenVRKeyboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SteamVRKeyboardComponent_eventOpenVRKeyboard_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser()
	{
		struct SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms
		{
			bool bIsForPassword;
			bool bIsMultiline;
			bool bUseMinimalMode;
			bool bIsRightHand;
			int32 MaxCharacters;
			FString Description;
			FString StartingString;
			EBPOVRResultSwitch Result;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms, Result), Z_Construct_UEnum_OpenVRExpansionPlugin_EBPOVRResultSwitch, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartingString = { UE4CodeGen_Private::EPropertyClass::Str, "StartingString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms, StartingString), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms, Description), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCharacters = { UE4CodeGen_Private::EPropertyClass::Int, "MaxCharacters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms, MaxCharacters), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsRightHand_SetBit = [](void* Obj){ ((SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms*)Obj)->bIsRightHand = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRightHand = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsRightHand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsRightHand_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bUseMinimalMode_SetBit = [](void* Obj){ ((SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms*)Obj)->bUseMinimalMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMinimalMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMinimalMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMinimalMode_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsMultiline_SetBit = [](void* Obj){ ((SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms*)Obj)->bIsMultiline = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMultiline = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsMultiline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsMultiline_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bIsForPassword_SetBit = [](void* Obj){ ((SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms*)Obj)->bIsForPassword = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsForPassword = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsForPassword", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsForPassword_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartingString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxCharacters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsRightHand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMinimalMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsMultiline,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsForPassword,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "bIgnoreSelf", "true" },
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "ExpandEnumAsExecs", "Result" },
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
				{ "ToolTip", "Re-Opens the vr keyboard that is currently active, can be used for switching interacting hands and the like." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRKeyboardComponent, "ReOpenVRKeyboardForUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SteamVRKeyboardComponent_eventReOpenVRKeyboardForUser_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamVRKeyboardComponent_NoRegister()
	{
		return USteamVRKeyboardComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USteamVRKeyboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OpenVRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USteamVRKeyboardComponent_CloseVRKeyboard, "CloseVRKeyboard" }, // 1944023571
				{ &Z_Construct_UFunction_USteamVRKeyboardComponent_GetVRKeyboardText, "GetVRKeyboardText" }, // 3302122851
				{ &Z_Construct_UFunction_USteamVRKeyboardComponent_OpenVRKeyboard, "OpenVRKeyboard" }, // 4053262047
				{ &Z_Construct_UFunction_USteamVRKeyboardComponent_ReOpenVRKeyboardForUser, "ReOpenVRKeyboardForUser" }, // 3959664161
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "SteamVRKeyboardComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
				{ "ToolTip", "Allows displaying / hiding and sending input to and from the SteamVR keyboard. Has events for keyboard inputs\nGenerally outdated with the data table based keyboards I added, but still useful." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyboardCharInput_MetaData[] = {
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyboardCharInput = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnKeyboardCharInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamVRKeyboardComponent, OnKeyboardCharInput), Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnKeyboardCharInput_MetaData, ARRAY_COUNT(NewProp_OnKeyboardCharInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyboardClosed_MetaData[] = {
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyboardClosed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnKeyboardClosed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamVRKeyboardComponent, OnKeyboardClosed), Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardNullCallbackSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnKeyboardClosed_MetaData, ARRAY_COUNT(NewProp_OnKeyboardClosed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnKeyboardDone_MetaData[] = {
				{ "Category", "VRExpansionFunctions|SteamVR" },
				{ "ModuleRelativePath", "Public/SteamVRKeyboardComponent.h" },
				{ "ToolTip", "Keyboard Functions" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyboardDone = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnKeyboardDone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(USteamVRKeyboardComponent, OnKeyboardDone), Z_Construct_UDelegateFunction_OpenVRExpansionPlugin_VRKeyboardStringCallbackSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnKeyboardDone_MetaData, ARRAY_COUNT(NewProp_OnKeyboardDone_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnKeyboardCharInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnKeyboardClosed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnKeyboardDone,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USteamVRKeyboardComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USteamVRKeyboardComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(USteamVRKeyboardComponent, 460192581);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamVRKeyboardComponent(Z_Construct_UClass_USteamVRKeyboardComponent, &USteamVRKeyboardComponent::StaticClass, TEXT("/Script/OpenVRExpansionPlugin"), TEXT("USteamVRKeyboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRKeyboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
