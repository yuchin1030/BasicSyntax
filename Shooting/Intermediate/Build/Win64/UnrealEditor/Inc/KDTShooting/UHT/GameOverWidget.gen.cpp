// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/GameOverWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverWidget() {}
// Cross Module References
	KDTSHOOTING_API UClass* Z_Construct_UClass_UGameOverWidget();
	KDTSHOOTING_API UClass* Z_Construct_UClass_UGameOverWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	DEFINE_FUNCTION(UGameOverWidget::execContinueGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ContinueGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameOverWidget::execQuitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameOverWidget::execRestartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartGame();
		P_NATIVE_END;
	}
	void UGameOverWidget::StaticRegisterNativesUGameOverWidget()
	{
		UClass* Class = UGameOverWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContinueGame", &UGameOverWidget::execContinueGame },
			{ "QuitGame", &UGameOverWidget::execQuitGame },
			{ "RestartGame", &UGameOverWidget::execRestartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameOverWidget_ContinueGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverWidget_ContinueGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_ContinueGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "ContinueGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_ContinueGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameOverWidget_ContinueGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameOverWidget_ContinueGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameOverWidget_ContinueGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameOverWidget_QuitGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverWidget_QuitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameOverWidget_QuitGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameOverWidget_QuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameOverWidget_QuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameOverWidget_RestartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverWidget_RestartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverWidget_RestartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverWidget, nullptr, "RestartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverWidget_RestartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameOverWidget_RestartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameOverWidget_RestartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameOverWidget_RestartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameOverWidget);
	UClass* Z_Construct_UClass_UGameOverWidget_NoRegister()
	{
		return UGameOverWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameOverWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_btn_restart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_restart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_btn_quit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_quit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_btn_continue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_btn_continue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOverWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_KDTShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameOverWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameOverWidget_ContinueGame, "ContinueGame" }, // 4252850719
		{ &Z_Construct_UFunction_UGameOverWidget_QuitGame, "QuitGame" }, // 2808434838
		{ &Z_Construct_UFunction_UGameOverWidget_RestartGame, "RestartGame" }, // 4174811064
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameOverWidget.h" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_restart_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "My Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_restart = { "btn_restart", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverWidget, btn_restart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_restart_MetaData), Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_restart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_quit_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "My Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_quit = { "btn_quit", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverWidget, btn_quit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_quit_MetaData), Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_quit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_continue_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "My Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameOverWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_continue = { "btn_continue", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverWidget, btn_continue), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_continue_MetaData), Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_continue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameOverWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_restart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_quit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverWidget_Statics::NewProp_btn_continue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOverWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameOverWidget_Statics::ClassParams = {
		&UGameOverWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameOverWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameOverWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameOverWidget()
	{
		if (!Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton, Z_Construct_UClass_UGameOverWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameOverWidget.OuterSingleton;
	}
	template<> KDTSHOOTING_API UClass* StaticClass<UGameOverWidget>()
	{
		return UGameOverWidget::StaticClass();
	}
	UGameOverWidget::UGameOverWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverWidget);
	UGameOverWidget::~UGameOverWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_GameOverWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_GameOverWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameOverWidget, UGameOverWidget::StaticClass, TEXT("UGameOverWidget"), &Z_Registration_Info_UClass_UGameOverWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameOverWidget), 557022587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_GameOverWidget_h_2028170995(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_GameOverWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_GameOverWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
