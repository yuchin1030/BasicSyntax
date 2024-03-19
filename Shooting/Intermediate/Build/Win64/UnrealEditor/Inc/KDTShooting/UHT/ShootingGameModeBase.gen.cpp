// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/ShootingGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AShootingGameModeBase();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AShootingGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	void AShootingGameModeBase::StaticRegisterNativesAShootingGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingGameModeBase);
	UClass* Z_Construct_UClass_AShootingGameModeBase_NoRegister()
	{
		return AShootingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShootingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KDTShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootingGameModeBase.h" },
		{ "ModuleRelativePath", "Public/ShootingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingGameModeBase_Statics::ClassParams = {
		&AShootingGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShootingGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AShootingGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingGameModeBase.OuterSingleton, Z_Construct_UClass_AShootingGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingGameModeBase.OuterSingleton;
	}
	template<> KDTSHOOTING_API UClass* StaticClass<AShootingGameModeBase>()
	{
		return AShootingGameModeBase::StaticClass();
	}
	AShootingGameModeBase::AShootingGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingGameModeBase);
	AShootingGameModeBase::~AShootingGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingGameModeBase, AShootingGameModeBase::StaticClass, TEXT("AShootingGameModeBase"), &Z_Registration_Info_UClass_AShootingGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingGameModeBase), 4277855837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingGameModeBase_h_4258534522(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
