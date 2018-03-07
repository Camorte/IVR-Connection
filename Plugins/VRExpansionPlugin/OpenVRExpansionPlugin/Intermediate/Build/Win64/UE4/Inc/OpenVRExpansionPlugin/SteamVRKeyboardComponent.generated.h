// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPOVRResultSwitch : uint8;
#ifdef OPENVREXPANSIONPLUGIN_SteamVRKeyboardComponent_generated_h
#error "SteamVRKeyboardComponent.generated.h already included, missing '#pragma once' in SteamVRKeyboardComponent.h"
#endif
#define OPENVREXPANSIONPLUGIN_SteamVRKeyboardComponent_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_19_DELEGATE \
static inline void FVRKeyboardNullCallbackSignature_DelegateWrapper(const FMulticastScriptDelegate& VRKeyboardNullCallbackSignature) \
{ \
	VRKeyboardNullCallbackSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_18_DELEGATE \
struct _Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms \
{ \
	FString Text; \
}; \
static inline void FVRKeyboardStringCallbackSignature_DelegateWrapper(const FMulticastScriptDelegate& VRKeyboardStringCallbackSignature, const FString& Text) \
{ \
	_Script_OpenVRExpansionPlugin_eventVRKeyboardStringCallbackSignature_Parms Parms; \
	Parms.Text=Text; \
	VRKeyboardStringCallbackSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVRKeyboardText) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Text); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetVRKeyboardText(Z_Param_Out_Text,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReOpenVRKeyboardForUser) \
	{ \
		P_GET_UBOOL(Z_Param_bIsForPassword); \
		P_GET_UBOOL(Z_Param_bIsMultiline); \
		P_GET_UBOOL(Z_Param_bUseMinimalMode); \
		P_GET_UBOOL(Z_Param_bIsRightHand); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxCharacters); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Description); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StartingString); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReOpenVRKeyboardForUser(Z_Param_bIsForPassword,Z_Param_bIsMultiline,Z_Param_bUseMinimalMode,Z_Param_bIsRightHand,Z_Param_MaxCharacters,Z_Param_Description,Z_Param_StartingString,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseVRKeyboard) \
	{ \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CloseVRKeyboard((EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenVRKeyboard) \
	{ \
		P_GET_UBOOL(Z_Param_bIsForPassword); \
		P_GET_UBOOL(Z_Param_bIsMultiline); \
		P_GET_UBOOL(Z_Param_bUseMinimalMode); \
		P_GET_UBOOL(Z_Param_bIsRightHand); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxCharacters); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Description); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StartingString); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenVRKeyboard(Z_Param_bIsForPassword,Z_Param_bIsMultiline,Z_Param_bUseMinimalMode,Z_Param_bIsRightHand,Z_Param_MaxCharacters,Z_Param_Description,Z_Param_StartingString,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVRKeyboardText) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Text); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetVRKeyboardText(Z_Param_Out_Text,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReOpenVRKeyboardForUser) \
	{ \
		P_GET_UBOOL(Z_Param_bIsForPassword); \
		P_GET_UBOOL(Z_Param_bIsMultiline); \
		P_GET_UBOOL(Z_Param_bUseMinimalMode); \
		P_GET_UBOOL(Z_Param_bIsRightHand); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxCharacters); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Description); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StartingString); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReOpenVRKeyboardForUser(Z_Param_bIsForPassword,Z_Param_bIsMultiline,Z_Param_bUseMinimalMode,Z_Param_bIsRightHand,Z_Param_MaxCharacters,Z_Param_Description,Z_Param_StartingString,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseVRKeyboard) \
	{ \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CloseVRKeyboard((EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenVRKeyboard) \
	{ \
		P_GET_UBOOL(Z_Param_bIsForPassword); \
		P_GET_UBOOL(Z_Param_bIsMultiline); \
		P_GET_UBOOL(Z_Param_bUseMinimalMode); \
		P_GET_UBOOL(Z_Param_bIsRightHand); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxCharacters); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Description); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StartingString); \
		P_GET_ENUM_REF(EBPOVRResultSwitch,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OpenVRKeyboard(Z_Param_bIsForPassword,Z_Param_bIsMultiline,Z_Param_bUseMinimalMode,Z_Param_bIsRightHand,Z_Param_MaxCharacters,Z_Param_Description,Z_Param_StartingString,(EBPOVRResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamVRKeyboardComponent(); \
	friend OPENVREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_USteamVRKeyboardComponent(); \
public: \
	DECLARE_CLASS(USteamVRKeyboardComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OpenVRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(USteamVRKeyboardComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUSteamVRKeyboardComponent(); \
	friend OPENVREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_USteamVRKeyboardComponent(); \
public: \
	DECLARE_CLASS(USteamVRKeyboardComponent, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OpenVRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(USteamVRKeyboardComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRKeyboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRKeyboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRKeyboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRKeyboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRKeyboardComponent(USteamVRKeyboardComponent&&); \
	NO_API USteamVRKeyboardComponent(const USteamVRKeyboardComponent&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamVRKeyboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamVRKeyboardComponent(USteamVRKeyboardComponent&&); \
	NO_API USteamVRKeyboardComponent(const USteamVRKeyboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamVRKeyboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamVRKeyboardComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamVRKeyboardComponent)


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_25_PROLOG
#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SteamVRKeyboardComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_OpenVRExpansionPlugin_Source_OpenVRExpansionPlugin_Public_SteamVRKeyboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
