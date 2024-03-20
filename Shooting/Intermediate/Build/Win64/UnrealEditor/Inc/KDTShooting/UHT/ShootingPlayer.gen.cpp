// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KDTShooting/Public/ShootingPlayer.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingPlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	KDTSHOOTING_API UClass* Z_Construct_UClass_ABulletActor_NoRegister();
	KDTSHOOTING_API UClass* Z_Construct_UClass_APointerTestActor_NoRegister();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AShootingPlayer();
	KDTSHOOTING_API UClass* Z_Construct_UClass_AShootingPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KDTShooting();
// End Cross Module References
	DEFINE_FUNCTION(AShootingPlayer::execPrintInputNumber)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_targetNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintInputNumber(Z_Param_targetNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingPlayer::execGetNumberFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNumberFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingPlayer::execMultiply)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_num1);
		P_GET_PROPERTY(FIntProperty,Z_Param_num2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Multiply(Z_Param_num1,Z_Param_num2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingPlayer::execFire)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingPlayer::execSetInputDirection)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputDirection(Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingPlayer::execMove)
	{
		P_GET_STRUCT(FVector,Z_Param_direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_direction,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void AShootingPlayer::StaticRegisterNativesAShootingPlayer()
	{
		UClass* Class = AShootingPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AShootingPlayer::execFire },
			{ "GetNumberFloat", &AShootingPlayer::execGetNumberFloat },
			{ "Move", &AShootingPlayer::execMove },
			{ "Multiply", &AShootingPlayer::execMultiply },
			{ "PrintInputNumber", &AShootingPlayer::execPrintInputNumber },
			{ "SetInputDirection", &AShootingPlayer::execSetInputDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootingPlayer_Fire_Statics
	{
		struct ShootingPlayer_eventFire_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayer_Fire_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShootingPlayer_Fire_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventFire_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Fire_Statics::NewProp_value_MetaData), Z_Construct_UFunction_AShootingPlayer_Fire_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingPlayer_Fire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_Fire_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayer_Fire_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input\xec\x9d\x84 \xeb\x84\xa3\xec\x9d\x84 \xed\x95\xa8\xec\x88\x98\xec\x9d\x98 \xeb\xa7\xa4\xea\xb0\x9c\xeb\xb3\x80\xec\x88\x98\xeb\x8a\x94 \xeb\xac\xb4\xec\xa1\xb0\xea\xb1\xb4 const FInputActionValue& value \xec\x97\xac\xec\x95\xbc \xed\x95\xa8. (\xeb\xb3\x80\xec\x88\x98 \xec\x9d\xb4\xeb\xa6\x84 value\xeb\x8a\x94 \xec\x9e\x90\xec\x9c\xa0)\n" },
#endif
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input\xec\x9d\x84 \xeb\x84\xa3\xec\x9d\x84 \xed\x95\xa8\xec\x88\x98\xec\x9d\x98 \xeb\xa7\xa4\xea\xb0\x9c\xeb\xb3\x80\xec\x88\x98\xeb\x8a\x94 \xeb\xac\xb4\xec\xa1\xb0\xea\xb1\xb4 const FInputActionValue& value \xec\x97\xac\xec\x95\xbc \xed\x95\xa8. (\xeb\xb3\x80\xec\x88\x98 \xec\x9d\xb4\xeb\xa6\x84 value\xeb\x8a\x94 \xec\x9e\x90\xec\x9c\xa0)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingPlayer_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingPlayer, nullptr, "Fire", nullptr, nullptr, Z_Construct_UFunction_AShootingPlayer_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Fire_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingPlayer_Fire_Statics::ShootingPlayer_eventFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingPlayer_Fire_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Fire_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShootingPlayer_Fire_Statics::ShootingPlayer_eventFire_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingPlayer_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingPlayer_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics
	{
		struct ShootingPlayer_eventGetNumberFloat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventGetNumberFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingPlayer, nullptr, "GetNumberFloat", nullptr, nullptr, Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::ShootingPlayer_eventGetNumberFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::ShootingPlayer_eventGetNumberFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingPlayer_GetNumberFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingPlayer_GetNumberFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingPlayer_Move_Statics
	{
		struct ShootingPlayer_eventMove_Parms
		{
			FVector direction;
			float deltaTime;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShootingPlayer_Move_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventMove_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingPlayer_Move_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventMove_Parms, deltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingPlayer_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_Move_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_Move_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayer_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingPlayer_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingPlayer, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AShootingPlayer_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingPlayer_Move_Statics::ShootingPlayer_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingPlayer_Move_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Move_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShootingPlayer_Move_Statics::ShootingPlayer_eventMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingPlayer_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingPlayer_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingPlayer_Multiply_Statics
	{
		struct ShootingPlayer_eventMultiply_Parms
		{
			int32 num1;
			int32 num2;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_num1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_num2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::NewProp_num1 = { "num1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventMultiply_Parms, num1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::NewProp_num2 = { "num2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventMultiply_Parms, num2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventMultiply_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::NewProp_num1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::NewProp_num2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//int32 Add(int32 num1, int32 num2);\x09\x09// \xec\x84\xa0\xec\x96\xb8\xeb\xa7\x8c \xed\x95\x98\xea\xb3\xa0 Alt + Enter -> \xec\xa0\x95\xec\x9d\x98 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb8\xb0 \xeb\x88\x84\xeb\xa5\xb4\xeb\xa9\xb4 cpp\xec\x97\x90 \xec\x9e\x90\xeb\x8f\x99\xec\x9c\xbc\xeb\xa1\x9c \xed\x95\xa8\xec\x88\x98 \xec\xa0\x95\xec\x9d\x98\xea\xb0\x80 \xec\x83\x9d\xea\xb9\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nint32 Add(int32 num1, int32 num2);              \xec\x84\xa0\xec\x96\xb8\xeb\xa7\x8c \xed\x95\x98\xea\xb3\xa0 Alt + Enter -> \xec\xa0\x95\xec\x9d\x98 \xeb\xa7\x8c\xeb\x93\xa4\xea\xb8\xb0 \xeb\x88\x84\xeb\xa5\xb4\xeb\xa9\xb4 cpp\xec\x97\x90 \xec\x9e\x90\xeb\x8f\x99\xec\x9c\xbc\xeb\xa1\x9c \xed\x95\xa8\xec\x88\x98 \xec\xa0\x95\xec\x9d\x98\xea\xb0\x80 \xec\x83\x9d\xea\xb9\x80" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingPlayer, nullptr, "Multiply", nullptr, nullptr, Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::ShootingPlayer_eventMultiply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::ShootingPlayer_eventMultiply_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingPlayer_Multiply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingPlayer_Multiply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics
	{
		struct ShootingPlayer_eventPrintInputNumber_Parms
		{
			int32 targetNum;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_targetNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::NewProp_targetNum = { "targetNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventPrintInputNumber_Parms, targetNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::NewProp_targetNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1\xeb\xb6\x80\xed\x84\xb0 \xec\x9e\x85\xeb\xa0\xa5\xeb\xb0\x9b\xec\x9d\x80 \xea\xb0\x92\xea\xb9\x8c\xec\xa7\x80\xeb\xa5\xbc \xec\xb6\x9c\xeb\xa0\xa5\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\xeb\xa5\xbc \xec\x84\xa0\xec\x96\xb8\xed\x95\x98\xec\x84\xb8\xec\x9a\x94.\n" },
#endif
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1\xeb\xb6\x80\xed\x84\xb0 \xec\x9e\x85\xeb\xa0\xa5\xeb\xb0\x9b\xec\x9d\x80 \xea\xb0\x92\xea\xb9\x8c\xec\xa7\x80\xeb\xa5\xbc \xec\xb6\x9c\xeb\xa0\xa5\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\xeb\xa5\xbc \xec\x84\xa0\xec\x96\xb8\xed\x95\x98\xec\x84\xb8\xec\x9a\x94." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingPlayer, nullptr, "PrintInputNumber", nullptr, nullptr, Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::ShootingPlayer_eventPrintInputNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::ShootingPlayer_eventPrintInputNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingPlayer_PrintInputNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingPlayer_PrintInputNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics
	{
		struct ShootingPlayer_eventSetInputDirection_Parms
		{
			FInputActionValue value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShootingPlayer_eventSetInputDirection_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::NewProp_value_MetaData), Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::NewProp_value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingPlayer, nullptr, "SetInputDirection", nullptr, nullptr, Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::ShootingPlayer_eventSetInputDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::ShootingPlayer_eventSetInputDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShootingPlayer_SetInputDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingPlayer_SetInputDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingPlayer);
	UClass* Z_Construct_UClass_AShootingPlayer_NoRegister()
	{
		return AShootingPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AShootingPlayer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inputDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imc_myMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_imc_myMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_move_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_move;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ia_fire_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_fire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fireLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fireLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_age1_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_age1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numberFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_numberFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTeacher_MetaData[];
#endif
		static void NewProp_bIsTeacher_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTeacher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyTestActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyTestActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_myActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_myActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_KDTShooting,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootingPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingPlayer_Fire, "Fire" }, // 320289238
		{ &Z_Construct_UFunction_AShootingPlayer_GetNumberFloat, "GetNumberFloat" }, // 1351694123
		{ &Z_Construct_UFunction_AShootingPlayer_Move, "Move" }, // 1967268835
		{ &Z_Construct_UFunction_AShootingPlayer_Multiply, "Multiply" }, // 4271068628
		{ &Z_Construct_UFunction_AShootingPlayer_PrintInputNumber, "PrintInputNumber" }, // 1851509489
		{ &Z_Construct_UFunction_AShootingPlayer_SetInputDirection, "SetInputDirection" }, // 3153917157
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShootingPlayer.h" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_boxComp_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb6\xa9\xeb\x8f\x8c\xec\xb2\xb4 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8 \xeb\xb3\x80\xec\x88\x98\n// \xeb\xb3\x80\xec\x88\x98 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x83\x81\xec\x97\x90 \xec\xb6\x94\xea\xb0\x80\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb6\xa9\xeb\x8f\x8c\xec\xb2\xb4 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8 \xeb\xb3\x80\xec\x88\x98\n\xeb\xb3\x80\xec\x88\x98 \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x83\x81\xec\x97\x90 \xec\xb6\x94\xea\xb0\x80" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_boxComp = { "boxComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, boxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_boxComp_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_boxComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x83\x9c\xed\x8b\xb1 \xeb\xa9\x94\xec\x8b\x9c \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8 \xeb\xb3\x80\xec\x88\x98\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\x9c\xed\x8b\xb1 \xeb\xa9\x94\xec\x8b\x9c \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8 \xeb\xb3\x80\xec\x88\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, meshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_meshComp_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_meshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_speed_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_inputDir_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_inputDir = { "inputDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, inputDir), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_inputDir_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_inputDir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_imc_myMapping_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_imc_myMapping = { "imc_myMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, imc_myMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_imc_myMapping_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_imc_myMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_move_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_move = { "ia_move", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, ia_move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_move_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_move_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_fire_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_fire = { "ia_fire", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, ia_fire), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_fire_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_fire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bulletFactory_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bulletFactory = { "bulletFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, bulletFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_ABulletActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bulletFactory_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bulletFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_fireLocation_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TSubclassOf<\xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xed\x83\x80\xec\x9e\x85> : \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xeb\x84\xa3\xea\xb3\xa0\xec\x8b\xb6\xec\x9d\x84\xeb\x95\x8c\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSubclassOf<\xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xed\x83\x80\xec\x9e\x85> : \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa5\xbc \xeb\x84\xa3\xea\xb3\xa0\xec\x8b\xb6\xec\x9d\x84\xeb\x95\x8c" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_fireLocation = { "fireLocation", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, fireLocation), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_fireLocation_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_fireLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_age1_MetaData[] = {
		{ "Category", "My Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **EditAnywhere : \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4, \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd(Default)\xec\x97\x90\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xeb\xb3\xb4\xec\x9d\xb4\xea\xb3\xa0 \xea\xb0\x92 \xec\x88\x98\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5 (\xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4 : \xeb\xa0\x88\xeb\xb2\xa8\xec\x9d\x98 Outliner\xec\x9d\x98 Details\xec\xb0\xbd, \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd : \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 Details\xec\xb0\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**EditAnywhere : \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4, \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd(Default)\xec\x97\x90\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xeb\xb3\xb4\xec\x9d\xb4\xea\xb3\xa0 \xea\xb0\x92 \xec\x88\x98\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5 (\xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4 : \xeb\xa0\x88\xeb\xb2\xa8\xec\x9d\x98 Outliner\xec\x9d\x98 Details\xec\xb0\xbd, \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd : \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 Details\xec\xb0\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_age1 = { "age1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, age1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_age1_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_age1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_numberFloat_MetaData[] = {
		{ "Category", "ShootingPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **EditDefaultsOnly : \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xeb\xb3\xb4\xec\x9d\xb4\xea\xb3\xa0 \xea\xb0\x92 \xec\x88\x98\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**EditDefaultsOnly : \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xeb\xb3\xb4\xec\x9d\xb4\xea\xb3\xa0 \xea\xb0\x92 \xec\x88\x98\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_numberFloat = { "numberFloat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, numberFloat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_numberFloat_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_numberFloat_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_name_MetaData[] = {
		{ "Category", "ShootingPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **VisibleAnywhere : \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4, \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd\xec\x97\x90\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xeb\xb3\xb4\xec\x9d\xb4\xec\xa7\x80\xeb\xa7\x8c \xeb\x91\x98\xeb\x8b\xa4 \xea\xb0\x92 \xec\x88\x98\xec\xa0\x95 \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**VisibleAnywhere : \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4, \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd\xec\x97\x90\xec\x84\x9c \xeb\xaa\xa8\xeb\x91\x90 \xeb\xb3\xb4\xec\x9d\xb4\xec\xa7\x80\xeb\xa7\x8c \xeb\x91\x98\xeb\x8b\xa4 \xea\xb0\x92 \xec\x88\x98\xec\xa0\x95 \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_name_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bIsTeacher_MetaData[] = {
		{ "Category", "ShootingPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **VisibleDefaultsOnly : \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xeb\xb3\xb4\xec\x9d\xb4\xea\xb3\xa0 \xea\xb0\x92 \xec\x88\x98\xec\xa0\x95 \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**VisibleDefaultsOnly : \xec\x84\xa4\xec\xa0\x95\xec\xb0\xbd\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xeb\xb3\xb4\xec\x9d\xb4\xea\xb3\xa0 \xea\xb0\x92 \xec\x88\x98\xec\xa0\x95 \xeb\xb6\x88\xea\xb0\x80\xeb\x8a\xa5" },
#endif
	};
#endif
	void Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bIsTeacher_SetBit(void* Obj)
	{
		((AShootingPlayer*)Obj)->bIsTeacher = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bIsTeacher = { "bIsTeacher", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShootingPlayer), &Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bIsTeacher_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bIsTeacher_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bIsTeacher_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_MyTestActor_MetaData[] = {
		{ "Category", "MySettings" },
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_MyTestActor = { "MyTestActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, MyTestActor), Z_Construct_UClass_APointerTestActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_MyTestActor_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_MyTestActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingPlayer_Statics::NewProp_myActor_MetaData[] = {
		{ "Category", "MySettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa1\x9c \xeb\x90\x9c \xea\xb0\x92\xec\x9d\x84 \xeb\xb0\x9b\xec\x9c\xbc\xeb\xa0\xa4\xeb\xa9\xb4 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\xeb\xb3\x80\xec\x88\x98(\xec\xb0\xb8\xec\xa1\xb0\xed\x98\x95\xed\x83\x9c)\xeb\xa1\x9c \xeb\xb0\x9b\xeb\x8a\x94\xeb\x8b\xa4. \xec\x99\xb8\xec\x9b\x8c\xeb\x91\x90\xea\xb8\xb0.\x09\x09\xec\xbb\xb4\xed\x8c\x8c\xec\x9d\xbc\xeb\x9f\xac\xeb\x8a\x94 \xec\x96\x98\xea\xb0\x80 \xeb\xac\xb4\xec\x8a\xa8 \xeb\xb3\x80\xec\x88\x98\xec\x9d\xb8\xec\xa7\x80 \xeb\xaa\xa8\xeb\xa5\xb4\xea\xb8\xb0 \xeb\x95\x8c\xeb\xac\xb8\xec\x97\x90 \"\xec\x9d\xb4\xea\xb1\xb4 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x95\xbc\" \xec\xa0\x84\xeb\xb0\xa9\xec\x84\xa0\xec\x96\xb8\xed\x95\xb4\xec\xa4\x8c\n" },
#endif
		{ "ModuleRelativePath", "Public/ShootingPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xeb\xa1\x9c \xeb\x90\x9c \xea\xb0\x92\xec\x9d\x84 \xeb\xb0\x9b\xec\x9c\xbc\xeb\xa0\xa4\xeb\xa9\xb4 \xed\x8f\xac\xec\x9d\xb8\xed\x84\xb0\xeb\xb3\x80\xec\x88\x98(\xec\xb0\xb8\xec\xa1\xb0\xed\x98\x95\xed\x83\x9c)\xeb\xa1\x9c \xeb\xb0\x9b\xeb\x8a\x94\xeb\x8b\xa4. \xec\x99\xb8\xec\x9b\x8c\xeb\x91\x90\xea\xb8\xb0.         \xec\xbb\xb4\xed\x8c\x8c\xec\x9d\xbc\xeb\x9f\xac\xeb\x8a\x94 \xec\x96\x98\xea\xb0\x80 \xeb\xac\xb4\xec\x8a\xa8 \xeb\xb3\x80\xec\x88\x98\xec\x9d\xb8\xec\xa7\x80 \xeb\xaa\xa8\xeb\xa5\xb4\xea\xb8\xb0 \xeb\x95\x8c\xeb\xac\xb8\xec\x97\x90 \"\xec\x9d\xb4\xea\xb1\xb4 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\xec\x95\xbc\" \xec\xa0\x84\xeb\xb0\xa9\xec\x84\xa0\xec\x96\xb8\xed\x95\xb4\xec\xa4\x8c" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingPlayer_Statics::NewProp_myActor = { "myActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShootingPlayer, myActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::NewProp_myActor_MetaData), Z_Construct_UClass_AShootingPlayer_Statics::NewProp_myActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_boxComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_meshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_inputDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_imc_myMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_move,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_ia_fire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bulletFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_fireLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_age1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_numberFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_bIsTeacher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_MyTestActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingPlayer_Statics::NewProp_myActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingPlayer_Statics::ClassParams = {
		&AShootingPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootingPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShootingPlayer()
	{
		if (!Z_Registration_Info_UClass_AShootingPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingPlayer.OuterSingleton, Z_Construct_UClass_AShootingPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingPlayer.OuterSingleton;
	}
	template<> KDTSHOOTING_API UClass* StaticClass<AShootingPlayer>()
	{
		return AShootingPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingPlayer);
	AShootingPlayer::~AShootingPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingPlayer, AShootingPlayer::StaticClass, TEXT("AShootingPlayer"), &Z_Registration_Info_UClass_AShootingPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingPlayer), 4056448722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_2114483663(TEXT("/Script/KDTShooting"),
		Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
