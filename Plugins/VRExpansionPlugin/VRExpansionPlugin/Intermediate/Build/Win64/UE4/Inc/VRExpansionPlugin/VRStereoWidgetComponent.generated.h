// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VREXPANSIONPLUGIN_VRStereoWidgetComponent_generated_h
#error "VRStereoWidgetComponent.generated.h already included, missing '#pragma once' in VRStereoWidgetComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRStereoWidgetComponent_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPriority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPriority(Z_Param_InPriority); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPriority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPriority(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPriority) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InPriority); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetPriority(Z_Param_InPriority); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRStereoWidgetComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRStereoWidgetComponent(); \
public: \
	DECLARE_CLASS(UVRStereoWidgetComponent, UWidgetComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRStereoWidgetComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVRStereoWidgetComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRStereoWidgetComponent(); \
public: \
	DECLARE_CLASS(UVRStereoWidgetComponent, UWidgetComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRStereoWidgetComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRStereoWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRStereoWidgetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRStereoWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRStereoWidgetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRStereoWidgetComponent(UVRStereoWidgetComponent&&); \
	NO_API UVRStereoWidgetComponent(const UVRStereoWidgetComponent&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRStereoWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRStereoWidgetComponent(UVRStereoWidgetComponent&&); \
	NO_API UVRStereoWidgetComponent(const UVRStereoWidgetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRStereoWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRStereoWidgetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRStereoWidgetComponent)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_19_PROLOG
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VRStereoWidgetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRStereoWidgetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
