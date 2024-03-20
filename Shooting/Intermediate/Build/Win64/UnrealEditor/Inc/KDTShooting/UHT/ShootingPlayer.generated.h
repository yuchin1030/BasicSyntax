// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShootingPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef KDTSHOOTING_ShootingPlayer_generated_h
#error "ShootingPlayer.generated.h already included, missing '#pragma once' in ShootingPlayer.h"
#endif
#define KDTSHOOTING_ShootingPlayer_generated_h

#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_SPARSE_DATA
#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintInputNumber); \
	DECLARE_FUNCTION(execGetNumberFloat); \
	DECLARE_FUNCTION(execMultiply); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execSetInputDirection); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_ACCESSORS
#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingPlayer(); \
	friend struct Z_Construct_UClass_AShootingPlayer_Statics; \
public: \
	DECLARE_CLASS(AShootingPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KDTShooting"), NO_API) \
	DECLARE_SERIALIZER(AShootingPlayer)


#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootingPlayer(AShootingPlayer&&); \
	NO_API AShootingPlayer(const AShootingPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootingPlayer) \
	NO_API virtual ~AShootingPlayer();


#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_7_PROLOG
#define FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_SPARSE_DATA \
	FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_ACCESSORS \
	FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KDTSHOOTING_API UClass* StaticClass<class AShootingPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_admin_Documents_Unreal_Projects_KDTShooting_Source_KDTShooting_Public_ShootingPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
