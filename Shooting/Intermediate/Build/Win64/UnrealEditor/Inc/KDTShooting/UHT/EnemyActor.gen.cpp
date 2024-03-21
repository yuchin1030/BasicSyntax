// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/EnemyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AEnemyActor();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AEnemyActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	void AEnemyActor::StaticRegisterNativesAEnemyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyActor);
	UClass* Z_Construct_UClass_AEnemyActor_NoRegister()
	{
		return AEnemyActor::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyColl_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyColl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KDTShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyActor.h" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemy_MetaData[] = {
		{ "Category", "My Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyActor, enemy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemy_MetaData), Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemyColl_MetaData[] = {
		{ "Category", "My Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemyColl = { "enemyColl", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyActor, enemyColl), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemyColl_MetaData), Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemyColl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "My Settings" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyActor, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed_MetaData), Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyActor_Statics::NewProp_rate_MetaData[] = {
		{ "Category", "My Settings" },
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyActor_Statics::NewProp_rate = { "rate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyActor, rate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::NewProp_rate_MetaData), Z_Construct_UClass_AEnemyActor_Statics::NewProp_rate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyActor_Statics::NewProp_enemyColl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyActor_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyActor_Statics::NewProp_rate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyActor_Statics::ClassParams = {
		&AEnemyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyActor()
	{
		if (!Z_Registration_Info_UClass_AEnemyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyActor.OuterSingleton, Z_Construct_UClass_AEnemyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyActor.OuterSingleton;
	}
	template<> KDTSHOOTING_API UClass* StaticClass<AEnemyActor>()
	{
		return AEnemyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyActor);
	AEnemyActor::~AEnemyActor() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyActor, AEnemyActor::StaticClass, TEXT("AEnemyActor"), &Z_Registration_Info_UClass_AEnemyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyActor), 1121744549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemyActor_h_1725128197(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
