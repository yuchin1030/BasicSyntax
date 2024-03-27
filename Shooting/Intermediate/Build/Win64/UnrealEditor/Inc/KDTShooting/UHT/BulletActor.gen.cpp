// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/BulletActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	KDTSHOOTING_API UClass* Z_Construct_UClass_ABulletActor();
	KDTSHOOTING_API UClass* Z_Construct_UClass_ABulletActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	DEFINE_FUNCTION(ABulletActor::execOnOverlapEnemy)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnemy(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABulletActor::StaticRegisterNativesABulletActor()
	{
		UClass* Class = ABulletActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapEnemy", &ABulletActor::execOnOverlapEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics
	{
		struct BulletActor_eventOnOverlapEnemy_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletActor_eventOnOverlapEnemy_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletActor_eventOnOverlapEnemy_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletActor_eventOnOverlapEnemy_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletActor_eventOnOverlapEnemy_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BulletActor_eventOnOverlapEnemy_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BulletActor_eventOnOverlapEnemy_Parms), &Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BulletActor_eventOnOverlapEnemy_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb8\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xd7\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xda\xb5\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.) -> \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd bind \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BulletActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb8\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xd7\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xda\xb5\xe5\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.) -> \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd bind \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABulletActor, nullptr, "OnOverlapEnemy", nullptr, nullptr, Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::BulletActor_eventOnOverlapEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::BulletActor_eventOnOverlapEnemy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABulletActor_OnOverlapEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABulletActor_OnOverlapEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABulletActor);
	UClass* Z_Construct_UClass_ABulletActor_NoRegister()
	{
		return ABulletActor::StaticClass();
	}
	struct Z_Construct_UClass_ABulletActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_explosionFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_explosionFX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABulletActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KDTShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABulletActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABulletActor_OnOverlapEnemy, "OnOverlapEnemy" }, // 2584252662
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletActor_Statics::NewProp_explosionFX_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/BulletActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABulletActor_Statics::NewProp_explosionFX = { "explosionFX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletActor, explosionFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletActor_Statics::NewProp_explosionFX_MetaData), Z_Construct_UClass_ABulletActor_Statics::NewProp_explosionFX_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABulletActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_boxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_smComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletActor_Statics::NewProp_explosionFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABulletActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABulletActor_Statics::ClassParams = {
		&ABulletActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABulletActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ABulletActor, ABulletActor::StaticClass, TEXT("ABulletActor"), &Z_Registration_Info_UClass_ABulletActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletActor), 3495255537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_BulletActor_h_1822995613(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_BulletActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_BulletActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
