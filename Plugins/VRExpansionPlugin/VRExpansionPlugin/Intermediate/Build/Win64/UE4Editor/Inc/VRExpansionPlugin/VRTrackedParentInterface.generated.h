// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class EBPVRWaistTrackingMode : uint8;
#ifdef VREXPANSIONPLUGIN_VRTrackedParentInterface_generated_h
#error "VRTrackedParentInterface.generated.h already included, missing '#pragma once' in VRTrackedParentInterface.h"
#endif
#define VREXPANSIONPLUGIN_VRTrackedParentInterface_generated_h

#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTrackedParent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WaistRadius); \
		P_GET_ENUM(EBPVRWaistTrackingMode,Z_Param_WaistTrackingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackedParent(Z_Param_NewParentComponent,Z_Param_WaistRadius,EBPVRWaistTrackingMode(Z_Param_WaistTrackingMode)); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTrackedParent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewParentComponent); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WaistRadius); \
		P_GET_ENUM(EBPVRWaistTrackingMode,Z_Param_WaistTrackingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTrackedParent(Z_Param_NewParentComponent,Z_Param_WaistRadius,EBPVRWaistTrackingMode(Z_Param_WaistTrackingMode)); \
		P_NATIVE_END; \
	}


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRTrackedParentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRTrackedParentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRTrackedParentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRTrackedParentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRTrackedParentInterface(UVRTrackedParentInterface&&); \
	NO_API UVRTrackedParentInterface(const UVRTrackedParentInterface&); \
public:


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRTrackedParentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRTrackedParentInterface(UVRTrackedParentInterface&&); \
	NO_API UVRTrackedParentInterface(const UVRTrackedParentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRTrackedParentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRTrackedParentInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRTrackedParentInterface)


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVRTrackedParentInterface(); \
	friend VREXPANSIONPLUGIN_API class UClass* Z_Construct_UClass_UVRTrackedParentInterface(); \
public: \
	DECLARE_CLASS(UVRTrackedParentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRTrackedParentInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_GENERATED_UINTERFACE_BODY() \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_GENERATED_UINTERFACE_BODY() \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVRTrackedParentInterface() {} \
public: \
	typedef UVRTrackedParentInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IVRTrackedParentInterface() {} \
public: \
	typedef UVRTrackedParentInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_13_PROLOG
#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_RPC_WRAPPERS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID IVR_Connection_Plugins_VRExpansionPlugin_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRTrackedParentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
