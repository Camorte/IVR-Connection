// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Misc/VRWheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRWheeledVehicle() {}
// Cross Module References
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister();
	VREXPANSIONPLUGIN_API UClass* Z_Construct_UClass_AVRWheeledVehicle();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_VRExpansionPlugin();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRWheeledVehicle_OnRep_Controller();
	VREXPANSIONPLUGIN_API UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput();
// End Cross Module References
	void AVRWheeledVehicle::StaticRegisterNativesAVRWheeledVehicle()
	{
		UClass* Class = AVRWheeledVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceSecondaryPossession", (Native)&AVRWheeledVehicle::execForceSecondaryPossession },
			{ "OnRep_Controller", (Native)&AVRWheeledVehicle::execOnRep_Controller },
			{ "SetBindToInput", (Native)&AVRWheeledVehicle::execSetBindToInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession()
	{
		struct VRWheeledVehicle_eventForceSecondaryPossession_Parms
		{
			AController* NewController;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRWheeledVehicle_eventForceSecondaryPossession_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRWheeledVehicle_eventForceSecondaryPossession_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewController = { UE4CodeGen_Private::EPropertyClass::Object, "NewController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRWheeledVehicle_eventForceSecondaryPossession_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, "ForceSecondaryPossession", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRWheeledVehicle_eventForceSecondaryPossession_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_OnRep_Controller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
				{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Pawn\", meta = (Keywords = \"Delete\"))\n               virtual void DetachFromControllerPendingDestroy() override\n       {\n               if (Controller != NULL && Controller->GetPawn() == this)\n               {\n                       Controller->PawnPendingDestroy(this);\n                       if (Controller != NULL)\n                       {\n                               Controller->UnPossess();\n                               Controller = NULL;\n                       }\n               }\n       }" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, "OnRep_Controller", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput()
	{
		struct VRWheeledVehicle_eventSetBindToInput_Parms
		{
			AController* CController;
			bool bBindToInput;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VRWheeledVehicle_eventSetBindToInput_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bBindToInput_SetBit = [](void* Obj){ ((VRWheeledVehicle_eventSetBindToInput_Parms*)Obj)->bBindToInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBindToInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bBindToInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBindToInput_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CController = { UE4CodeGen_Private::EPropertyClass::Object, "CController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRWheeledVehicle_eventSetBindToInput_Parms, CController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBindToInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn" },
				{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRWheeledVehicle, "SetBindToInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VRWheeledVehicle_eventSetBindToInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRWheeledVehicle_NoRegister()
	{
		return AVRWheeledVehicle::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
				(UObject* (*)())Z_Construct_UPackage__Script_VRExpansionPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVRWheeledVehicle_ForceSecondaryPossession, "ForceSecondaryPossession" }, // 3786186330
				{ &Z_Construct_UFunction_AVRWheeledVehicle_OnRep_Controller, "OnRep_Controller" }, // 2192244911
				{ &Z_Construct_UFunction_AVRWheeledVehicle_SetBindToInput, "SetBindToInput" }, // 114173702
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Misc/VRWheeledVehicle.h" },
				{ "ModuleRelativePath", "Public/Misc/VRWheeledVehicle.h" },
				{ "ToolTip", "This override of the base wheeled vehicle allows for dual pawn usage in engine.\nIt adds two new functions: SetBindToInput to bind input locally to the pawn and ForceSecondaryPossession which fakes possession so the\nplayer can control the vehicle as if they were locally possessed into it in a multiplayer enviroment (no lag)." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRWheeledVehicle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRWheeledVehicle::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRWheeledVehicle, 709645005);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRWheeledVehicle(Z_Construct_UClass_AVRWheeledVehicle, &AVRWheeledVehicle::StaticClass, TEXT("/Script/VRExpansionPlugin"), TEXT("AVRWheeledVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
