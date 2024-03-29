// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarioRealRecent/MarioRealRecentGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioRealRecentGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioRealRecentGameMode();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioRealRecentGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MarioRealRecent();
// End Cross Module References
	void AMarioRealRecentGameMode::StaticRegisterNativesAMarioRealRecentGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioRealRecentGameMode);
	UClass* Z_Construct_UClass_AMarioRealRecentGameMode_NoRegister()
	{
		return AMarioRealRecentGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMarioRealRecentGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioRealRecentGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MarioRealRecent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MarioRealRecentGameMode.h" },
		{ "ModuleRelativePath", "MarioRealRecentGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioRealRecentGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioRealRecentGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioRealRecentGameMode_Statics::ClassParams = {
		&AMarioRealRecentGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioRealRecentGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMarioRealRecentGameMode()
	{
		if (!Z_Registration_Info_UClass_AMarioRealRecentGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioRealRecentGameMode.OuterSingleton, Z_Construct_UClass_AMarioRealRecentGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioRealRecentGameMode.OuterSingleton;
	}
	template<> MARIOREALRECENT_API UClass* StaticClass<AMarioRealRecentGameMode>()
	{
		return AMarioRealRecentGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioRealRecentGameMode);
	AMarioRealRecentGameMode::~AMarioRealRecentGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioRealRecentGameMode, AMarioRealRecentGameMode::StaticClass, TEXT("AMarioRealRecentGameMode"), &Z_Registration_Info_UClass_AMarioRealRecentGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioRealRecentGameMode), 3447960073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentGameMode_h_2317821386(TEXT("/Script/MarioRealRecent"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
