// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/EnemyActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AEnemyActor();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AEnemyActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyActor::execOnOverlapPlayer)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapPlayer(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AEnemyActor::StaticRegisterNativesAEnemyActor()
	{
		UClass* Class = AEnemyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapPlayer", &AEnemyActor::execOnOverlapPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics
	{
		struct EnemyActor_eventOnOverlapPlayer_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyActor_eventOnOverlapPlayer_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyActor_eventOnOverlapPlayer_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyActor_eventOnOverlapPlayer_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyActor_eventOnOverlapPlayer_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((EnemyActor_eventOnOverlapPlayer_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyActor_eventOnOverlapPlayer_Parms), &Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyActor_eventOnOverlapPlayer_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EnemyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyActor, nullptr, "OnOverlapPlayer", nullptr, nullptr, Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::EnemyActor_eventOnOverlapPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::EnemyActor_eventOnOverlapPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyActor);
	UClass* Z_Construct_UClass_AEnemyActor_NoRegister()
	{
		return AEnemyActor::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyActor_OnOverlapPlayer, "OnOverlapPlayer" }, // 3434903330
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyActor_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		Z_Construct_UClass_AEnemyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AEnemyActor, AEnemyActor::StaticClass, TEXT("AEnemyActor"), &Z_Registration_Info_UClass_AEnemyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyActor), 1865671431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemyActor_h_512027208(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_EnemyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
