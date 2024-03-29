// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarioRealRecent/Public/MarioPunchingCap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioPunchingCap() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpToMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioPunchingCap();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioPunchingCap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MarioRealRecent();
// End Cross Module References
	DEFINE_FUNCTION(AMarioPunchingCap::execTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineProgress(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMarioPunchingCap::execCupaHatRotate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CupaHatRotate();
		P_NATIVE_END;
	}
	void AMarioPunchingCap::StaticRegisterNativesAMarioPunchingCap()
	{
		UClass* Class = AMarioPunchingCap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CupaHatRotate", &AMarioPunchingCap::execCupaHatRotate },
			{ "TimelineProgress", &AMarioPunchingCap::execTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMarioPunchingCap_CupaHatRotate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioPunchingCap_CupaHatRotate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioPunchingCap_CupaHatRotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarioPunchingCap, nullptr, "CupaHatRotate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioPunchingCap_CupaHatRotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioPunchingCap_CupaHatRotate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMarioPunchingCap_CupaHatRotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioPunchingCap_CupaHatRotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics
	{
		struct MarioPunchingCap_eventTimelineProgress_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioPunchingCap_eventTimelineProgress_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarioPunchingCap, nullptr, "TimelineProgress", nullptr, nullptr, Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::MarioPunchingCap_eventTimelineProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::MarioPunchingCap_eventTimelineProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioPunchingCap);
	UClass* Z_Construct_UClass_AMarioPunchingCap_NoRegister()
	{
		return AMarioPunchingCap::StaticClass();
	}
	struct Z_Construct_UClass_AMarioPunchingCap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cupaHatCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cupaHatCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cupaHat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cupaHat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interpMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_interpMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioPunchingCap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MarioRealRecent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMarioPunchingCap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarioPunchingCap_CupaHatRotate, "CupaHatRotate" }, // 3311519499
		{ &Z_Construct_UFunction_AMarioPunchingCap_TimelineProgress, "TimelineProgress" }, // 1889190838
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPunchingCap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MarioPunchingCap.h" },
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHatCollision_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHatCollision = { "cupaHatCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPunchingCap, cupaHatCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHatCollision_MetaData), Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHatCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHat_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHat = { "cupaHat", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPunchingCap, cupaHat), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHat_MetaData), Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_interpMovement_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_interpMovement = { "interpMovement", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPunchingCap, interpMovement), Z_Construct_UClass_UInterpToMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_interpMovement_MetaData), Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_interpMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPunchingCap, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_CurveFloat_MetaData), Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_CurveFloat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_StartRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_StartRot = { "StartRot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPunchingCap, StartRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_StartRot_MetaData), Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_StartRot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_EndRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_EndRot = { "EndRot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPunchingCap, EndRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_EndRot_MetaData), Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_EndRot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ModuleRelativePath", "Public/MarioPunchingCap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioPunchingCap, offset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_offset_MetaData), Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_offset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioPunchingCap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHatCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_cupaHat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_interpMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_CurveFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_StartRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_EndRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioPunchingCap_Statics::NewProp_offset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioPunchingCap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioPunchingCap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioPunchingCap_Statics::ClassParams = {
		&AMarioPunchingCap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMarioPunchingCap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioPunchingCap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioPunchingCap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioPunchingCap()
	{
		if (!Z_Registration_Info_UClass_AMarioPunchingCap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioPunchingCap.OuterSingleton, Z_Construct_UClass_AMarioPunchingCap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioPunchingCap.OuterSingleton;
	}
	template<> MARIOREALRECENT_API UClass* StaticClass<AMarioPunchingCap>()
	{
		return AMarioPunchingCap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioPunchingCap);
	AMarioPunchingCap::~AMarioPunchingCap() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioPunchingCap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioPunchingCap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioPunchingCap, AMarioPunchingCap::StaticClass, TEXT("AMarioPunchingCap"), &Z_Registration_Info_UClass_AMarioPunchingCap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioPunchingCap), 722759364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioPunchingCap_h_523722965(TEXT("/Script/MarioRealRecent"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioPunchingCap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioPunchingCap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
