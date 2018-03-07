// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPVRComponentPosRep;
struct FMinimalViewInfo;
#ifdef VREXPANSIONPLUGIN_ReplicatedVRCameraComponent_generated_h
#error "ReplicatedVRCameraComponent.generated.h already included, missing '#pragma once' in ReplicatedVRCameraComponent.h"
#endif
#define VREXPANSIONPLUGIN_ReplicatedVRCameraComponent_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_RPC_WRAPPERS \
	virtual bool Server_SendCameraTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendCameraTransform_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execServer_SendCameraTransform) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendCameraTransform_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendCameraTransform_Validate")); \
			return; \
		} \
		this->Server_SendCameraTransform_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedCameraTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedCameraTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_DesiredView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCameraView(Z_Param_DeltaTime,Z_Param_Out_DesiredView); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendCameraTransform_Validate(FBPVRComponentPosRep ); \
	virtual void Server_SendCameraTransform_Implementation(FBPVRComponentPosRep NewTransform); \
 \
	DECLARE_FUNCTION(execServer_SendCameraTransform) \
	{ \
		P_GET_STRUCT(FBPVRComponentPosRep,Z_Param_NewTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!this->Server_SendCameraTransform_Validate(Z_Param_NewTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendCameraTransform_Validate")); \
			return; \
		} \
		this->Server_SendCameraTransform_Implementation(Z_Param_NewTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedCameraTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_ReplicatedCameraTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_DesiredView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCameraView(Z_Param_DeltaTime,Z_Param_Out_DesiredView); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_EVENT_PARMS \
	struct ReplicatedVRCameraComponent_eventServer_SendCameraTransform_Parms \
	{ \
		FBPVRComponentPosRep NewTransform; \
	};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_CALLBACK_WRAPPERS
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicatedVRCameraComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UReplicatedVRCameraComponent(); \
public: \
	DECLARE_CLASS(UReplicatedVRCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UReplicatedVRCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUReplicatedVRCameraComponent(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UReplicatedVRCameraComponent(); \
public: \
	DECLARE_CLASS(UReplicatedVRCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UReplicatedVRCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicatedVRCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicatedVRCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicatedVRCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicatedVRCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicatedVRCameraComponent(UReplicatedVRCameraComponent&&); \
	NO_API UReplicatedVRCameraComponent(const UReplicatedVRCameraComponent&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicatedVRCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicatedVRCameraComponent(UReplicatedVRCameraComponent&&); \
	NO_API UReplicatedVRCameraComponent(const UReplicatedVRCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicatedVRCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicatedVRCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicatedVRCameraComponent)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_14_PROLOG \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_EVENT_PARMS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReplicatedVRCameraComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_ReplicatedVRCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
