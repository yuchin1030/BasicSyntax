// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/BulletActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	KDTSHOOTING_API UClass* Z_Construct_UClass_ABulletActor();
	KDTSHOOTING_API UClass* Z_Construct_UClass_ABulletActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	void ABulletActor::StaticRegisterNativesABulletActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABulletActor);
	UClass* Z_Construct_UClass_ABulletActor_NoRegister()
	{
		return ABulletActor::StaticClass();
	}
	struct Z_Construct_UClass_ABulletActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_smComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_smComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABulletActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KDTShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BulletActor.h" },
		{ "ModuleRelativePath", "Public/BulletActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BulletActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletActor, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_boxComp_MetaData), Z_Construct_UClass_ABulletActor_Statics::NewProp_boxComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_smComp_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BulletActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_smComp = { "smComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletActor, smComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_smComp_MetaData), Z_Construct_UClass_ABulletActor_Statics::NewProp_smComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/BulletActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletActor, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_speed_MetaData), Z_Construct_UClass_ABulletActor_Statics::NewProp_speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABulletActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_boxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_smComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABulletActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABulletActor_Statics::ClassParams = {
		&ABulletActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABulletActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABulletActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABulletActor()
	{
		if (!Z_Registration_Info_UClass_ABulletActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABulletActor.OuterSingleton, Z_Construct_UClass_ABulletActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABulletActor.OuterSingleton;
	}
	template<> KDTSHOOTING_API UClass* StaticClass<ABulletActor>()
	{
		return ABulletActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletActor);
	ABulletActor::~ABulletActor() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_BulletActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_BulletActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABulletActor, ABulletActor::StaticClass, TEXT("ABulletActor"), &Z_Registration_Info_UClass_ABulletActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletActor), 1267201782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_BulletActor_h_152342722(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_BulletActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_BulletActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
