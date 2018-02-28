// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UNavigationQueryFilter;
#ifdef VREXPANSIONPLUGIN_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define VREXPANSIONPLUGIN_VRCharacter_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_RPC_WRAPPERS \
	virtual void NotifyOfTeleport_Implementation(); \
 \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyOfTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyOfTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
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


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyOfTeleport_Implementation(); \
 \
	DECLARE_FUNCTION(execExtendedSimpleMoveToLocation) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_AcceptanceRadius); \
		P_GET_UBOOL(Z_Param_bStopOnOverlap); \
		P_GET_UBOOL(Z_Param_bUsePathfinding); \
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation); \
		P_GET_UBOOL(Z_Param_bCanStrafe); \
		P_GET_OBJECT(UClass,Z_Param_FilterClass); \
		P_GET_UBOOL(Z_Param_bAllowPartialPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExtendedSimpleMoveToLocation(Z_Param_Out_GoalLocation,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyOfTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->NotifyOfTeleport_Implementation(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execSetCharacterHalfHeightVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterHalfHeightVR(Z_Param_HalfHeight,Z_Param_bUpdateOverlaps); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterSizeVR) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHalfHeight); \
		P_GET_UBOOL(Z_Param_bUpdateOverlaps); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCharacterSizeVR(Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps); \
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


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_EVENT_PARMS
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_CALLBACK_WRAPPERS
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRCharacter(); \
public: \
	DECLARE_CLASS(AVRCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_AVRCharacter(); \
public: \
	DECLARE_CLASS(AVRCharacter, AVRBaseCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_PRIVATE_PROPERTY_OFFSET
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_17_PROLOG \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_EVENT_PARMS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_INCLASS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_CALLBACK_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_INCLASS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
