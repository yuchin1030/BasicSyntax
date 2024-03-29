// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarioRealRecent/Public/MarioThrowingCap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioThrowingCap() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioThrowingCap();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioThrowingCap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MarioRealRecent();
// End Cross Module References
	DEFINE_FUNCTION(AMarioThrowingCap::execReturnToPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToPlayer();
		P_NATIVE_END;
	}
	void AMarioThrowingCap::StaticRegisterNativesAMarioThrowingCap()
	{
		UClass* Class = AMarioThrowingCap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReturnToPlayer", &AMarioThrowingCap::execReturnToPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMarioThrowingCap_ReturnToPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMarioThrowingCap_ReturnToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MarioThrowingCap.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioThrowingCap_ReturnToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMarioThrowingCap, nullptr, "ReturnToPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioThrowingCap_ReturnToPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioThrowingCap_ReturnToPlayer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMarioThrowingCap_ReturnToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioThrowingCap_ReturnToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioThrowingCap);
	UClass* Z_Construct_UClass_AMarioThrowingCap_NoRegister()
	{
		return AMarioThrowingCap::StaticClass();
	}
	struct Z_Construct_UClass_AMarioThrowingCap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_throwCapColl_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_throwCapColl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rotMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_proMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_proMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultSceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_defaultSceneRoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioThrowingCap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MarioRealRecent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMarioThrowingCap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarioThrowingCap_ReturnToPlayer, "ReturnToPlayer" }, // 1238183342
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioThrowingCap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MarioThrowingCap.h" },
		{ "ModuleRelativePath", "Public/MarioThrowingCap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_cap_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MarioThrowingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_cap = { "cap", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioThrowingCap, cap), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_cap_MetaData), Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_cap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_throwCapColl_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MarioThrowingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_throwCapColl = { "throwCapColl", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioThrowingCap, throwCapColl), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_throwCapColl_MetaData), Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_throwCapColl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_rotMovement_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MarioThrowingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_rotMovement = { "rotMovement", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioThrowingCap, rotMovement), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_rotMovement_MetaData), Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_rotMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_proMovement_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MarioThrowingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_proMovement = { "proMovement", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioThrowingCap, proMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_proMovement_MetaData), Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_proMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_defaultSceneRoot_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MarioThrowingCap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_defaultSceneRoot = { "defaultSceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioThrowingCap, defaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_defaultSceneRoot_MetaData), Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_defaultSceneRoot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioThrowingCap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_cap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_throwCapColl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_rotMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_proMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioThrowingCap_Statics::NewProp_defaultSceneRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioThrowingCap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioThrowingCap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioThrowingCap_Statics::ClassParams = {
		&AMarioThrowingCap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMarioThrowingCap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioThrowingCap_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioThrowingCap_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioThrowingCap()
	{
		if (!Z_Registration_Info_UClass_AMarioThrowingCap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioThrowingCap.OuterSingleton, Z_Construct_UClass_AMarioThrowingCap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioThrowingCap.OuterSingleton;
	}
	template<> MARIOREALRECENT_API UClass* StaticClass<AMarioThrowingCap>()
	{
		return AMarioThrowingCap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioThrowingCap);
	AMarioThrowingCap::~AMarioThrowingCap() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioThrowingCap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioThrowingCap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioThrowingCap, AMarioThrowingCap::StaticClass, TEXT("AMarioThrowingCap"), &Z_Registration_Info_UClass_AMarioThrowingCap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioThrowingCap), 612517914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioThrowingCap_h_505479116(TEXT("/Script/MarioRealRecent"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioThrowingCap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_Public_MarioThrowingCap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
