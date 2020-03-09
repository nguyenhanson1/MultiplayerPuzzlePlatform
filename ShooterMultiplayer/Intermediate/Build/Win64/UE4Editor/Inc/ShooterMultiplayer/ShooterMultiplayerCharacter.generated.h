// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERMULTIPLAYER_ShooterMultiplayerCharacter_generated_h
#error "ShooterMultiplayerCharacter.generated.h already included, missing '#pragma once' in ShooterMultiplayerCharacter.h"
#endif
#define SHOOTERMULTIPLAYER_ShooterMultiplayerCharacter_generated_h

#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_RPC_WRAPPERS
#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_AShooterMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AShooterMultiplayerCharacter)


#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShooterMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_AShooterMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AShooterMultiplayerCharacter)


#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterMultiplayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterMultiplayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterMultiplayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterMultiplayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterMultiplayerCharacter(AShooterMultiplayerCharacter&&); \
	NO_API AShooterMultiplayerCharacter(const AShooterMultiplayerCharacter&); \
public:


#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterMultiplayerCharacter(AShooterMultiplayerCharacter&&); \
	NO_API AShooterMultiplayerCharacter(const AShooterMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterMultiplayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterMultiplayerCharacter)


#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AShooterMultiplayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AShooterMultiplayerCharacter, FollowCamera); }


#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_9_PROLOG
#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_RPC_WRAPPERS \
	ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_INCLASS \
	ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERMULTIPLAYER_API UClass* StaticClass<class AShooterMultiplayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterMultiplayer_Source_ShooterMultiplayer_ShooterMultiplayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
