// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/PointerTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointerTestActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	KDTSHOOTING_API UClass* Z_Construct_UClass_APointerTestActor();
	KDTSHOOTING_API UClass* Z_Construct_UClass_APointerTestActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	void APointerTestActor::StaticRegisterNativesAPointerTestActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointerTestActor);
	UClass* Z_Construct_UClass_APointerTestActor_NoRegister()
	{
		return APointerTestActor::StaticClass();
	}
	struct Z_Construct_UClass_APointerTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointerTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KDTShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APointerTestActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointerTestActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PointerTestActor.h" },
		{ "ModuleRelativePath", "Public/PointerTestActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointerTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointerTestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointerTestActor_Statics::ClassParams = {
		&APointerTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APointerTestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APointerTestActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APointerTestActor()
	{
		if (!Z_Registration_Info_UClass_APointerTestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointerTestActor.OuterSingleton, Z_Construct_UClass_APointerTestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointerTestActor.OuterSingleton;
	}
	template<> KDTSHOOTING_API UClass* StaticClass<APointerTestActor>()
	{
		return APointerTestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointerTestActor);
	APointerTestActor::~APointerTestActor() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_PointerTestActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_PointerTestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointerTestActor, APointerTestActor::StaticClass, TEXT("APointerTestActor"), &Z_Registration_Info_UClass_APointerTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointerTestActor), 815725755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_PointerTestActor_h_1285604226(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_PointerTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_PointerTestActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
