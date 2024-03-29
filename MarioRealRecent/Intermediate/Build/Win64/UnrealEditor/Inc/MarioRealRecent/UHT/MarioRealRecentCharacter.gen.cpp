// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarioRealRecent/MarioRealRecentCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarioRealRecentCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioRealRecentCharacter();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioRealRecentCharacter_NoRegister();
	MARIOREALRECENT_API UClass* Z_Construct_UClass_AMarioThrowingCap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MarioRealRecent();
// End Cross Module References
	void AMarioRealRecentCharacter::StaticRegisterNativesAMarioRealRecentCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMarioRealRecentCharacter);
	UClass* Z_Construct_UClass_AMarioRealRecentCharacter_NoRegister()
	{
		return AMarioRealRecentCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMarioRealRecentCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_arrowComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_arrowComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boxComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_boxComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isOnMario_MetaData[];
#endif
		static void NewProp_isOnMario_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isOnMario;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_throwCaps_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_throwCaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarioRealRecentCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MarioRealRecent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MarioRealRecentCharacter.h" },
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_arrowComp_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_arrowComp = { "arrowComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, arrowComp), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_arrowComp_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_arrowComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_boxComp_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_boxComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_skmComp_MetaData[] = {
		{ "Category", "MySettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_skmComp = { "skmComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, skmComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_skmComp_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_skmComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_ThrowAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input Action \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Action \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_ThrowAction = { "ThrowAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, ThrowAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_ThrowAction_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_ThrowAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_isOnMario_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_isOnMario_SetBit(void* Obj)
	{
		((AMarioRealRecentCharacter*)Obj)->isOnMario = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_isOnMario = { "isOnMario", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMarioRealRecentCharacter), &Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_isOnMario_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_isOnMario_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_isOnMario_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_throwCaps_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "MarioRealRecentCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_throwCaps = { "throwCaps", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioRealRecentCharacter, throwCaps), Z_Construct_UClass_UClass, Z_Construct_UClass_AMarioThrowingCap_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_throwCaps_MetaData), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_throwCaps_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioRealRecentCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_arrowComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_boxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_skmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_ThrowAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_isOnMario,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioRealRecentCharacter_Statics::NewProp_throwCaps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarioRealRecentCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioRealRecentCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioRealRecentCharacter_Statics::ClassParams = {
		&AMarioRealRecentCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMarioRealRecentCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioRealRecentCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioRealRecentCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMarioRealRecentCharacter()
	{
		if (!Z_Registration_Info_UClass_AMarioRealRecentCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioRealRecentCharacter.OuterSingleton, Z_Construct_UClass_AMarioRealRecentCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMarioRealRecentCharacter.OuterSingleton;
	}
	template<> MARIOREALRECENT_API UClass* StaticClass<AMarioRealRecentCharacter>()
	{
		return AMarioRealRecentCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioRealRecentCharacter);
	AMarioRealRecentCharacter::~AMarioRealRecentCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMarioRealRecentCharacter, AMarioRealRecentCharacter::StaticClass, TEXT("AMarioRealRecentCharacter"), &Z_Registration_Info_UClass_AMarioRealRecentCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioRealRecentCharacter), 1562696434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentCharacter_h_1323212008(TEXT("/Script/MarioRealRecent"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_GitHub_Unreal_MarioRealRecent_Source_MarioRealRecent_MarioRealRecentCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
