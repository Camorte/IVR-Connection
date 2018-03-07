// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef VREXPANSIONPLUGIN_VRSimpleCharacter_generated_h
#error "VRSimpleCharacter.generated.h already included, missing '#pragma once' in VRSimpleCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRSimpleCharacter_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTeleportLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetTeleportLocation(Z_Param_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld) \
	{ \
		P_GET_UBOOL(Z_Param_bUpdateBounds); \
		P_GET_UBOOL(Z_Param_bCalculatePureYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegenerateOffsetComponentToWorld(Z_Param_bUpdateBounds,Z_Param_bCalculatePureYaw); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTeleportLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_OriginalLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetTeleportLocation(Z_Param_OriginalLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegenerateOffsetComponentToWorld) \
	{ \
		P_GET_UBOOL(Z_Param_bUpdateBounds); \
		P_GET_UBOOL(Z_Param_bCalculatePureYaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RegenerateOffsetComponentToWorld(Z_Param_bUpdateBounds,Z_Param_bCalculatePureYaw); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRSimpleCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRSimpleCharacter(); \
public: \
	DECLARE_CLASS(AVRSimpleCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRSimpleCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAVRSimpleCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRSimpleCharacter(); \
public: \
	DECLARE_CLASS(AVRSimpleCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRSimpleCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRSimpleCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRSimpleCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRSimpleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRSimpleCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRSimpleCharacter(AVRSimpleCharacter&&); \
	NO_API AVRSimpleCharacter(const AVRSimpleCharacter&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRSimpleCharacter(AVRSimpleCharacter&&); \
	NO_API AVRSimpleCharacter(const AVRSimpleCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRSimpleCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRSimpleCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRSimpleCharacter)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_16_PROLOG
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_SimpleChar_VRSimpleCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
