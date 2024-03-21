// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/EnemySpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AEnemyActor_NoRegister();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AEnemySpawner();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	void AEnemySpawner::StaticRegisterNativesAEnemySpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawner);
	UClass* Z_Construct_UClass_AEnemySpawner_NoRegister()
	{
		return AEnemySpawner::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arrowComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_arrowComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemy_bp_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_enemy_bp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KDTShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawner.h" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_rootComp_MetaData[] = {
		{ "Category", "My Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_rootComp = { "rootComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, rootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_rootComp_MetaData), Z_Construct_UClass_AEnemySpawner_Statics::NewProp_rootComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_arrowComp_MetaData[] = {
		{ "Category", "My Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_arrowComp = { "arrowComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, arrowComp), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_arrowComp_MetaData), Z_Construct_UClass_AEnemySpawner_Statics::NewProp_arrowComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_delayTime_MetaData[] = {
		{ "Category", "My Settings" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_delayTime = { "delayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, delayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_delayTime_MetaData), Z_Construct_UClass_AEnemySpawner_Statics::NewProp_delayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawner_Statics::NewProp_enemy_bp_MetaData[] = {
		{ "Category", "My Settings" },
		{ "ModuleRelativePath", "Public/EnemySpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawner_Statics::NewProp_enemy_bp = { "enemy_bp", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawner, enemy_bp), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::NewProp_enemy_bp_MetaData), Z_Construct_UClass_AEnemySpawner_Statics::NewProp_enemy_bp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_rootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_arrowComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_delayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawner_Statics::NewProp_enemy_bp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawner_Statics::ClassParams = {
		&AEnemySpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemySpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemySpawner()
	{
		if (!Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton, Z_Construct_UClass_AEnemySpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemySpawner.OuterSingleton;
	}
	template<> KDTSHOOTING_API UClass* StaticClass<AEnemySpawner>()
	{
		return AEnemySpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawner);
	AEnemySpawner::~AEnemySpawner() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemySpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemySpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawner, AEnemySpawner::StaticClass, TEXT("AEnemySpawner"), &Z_Registration_Info_UClass_AEnemySpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawner), 1049183856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemySpawner_h_1763624342(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemySpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemySpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
