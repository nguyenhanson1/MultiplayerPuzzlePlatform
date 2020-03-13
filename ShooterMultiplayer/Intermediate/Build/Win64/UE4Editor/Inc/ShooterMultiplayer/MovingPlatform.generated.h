// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERMULTIPLAYER_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define SHOOTERMULTIPLAYER_MovingPlatform_generated_h

#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_RPC_WRAPPERS
#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform)


#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public:


#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform)


#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveTriggers() { return STRUCT_OFFSET(AMovingPlatform, ActiveTriggers); }


#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_12_PROLOG
#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_RPC_WRAPPERS \
	ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_INCLASS \
	ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_INCLASS_NO_PURE_DECLS \
	ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERMULTIPLAYER_API UClass* StaticClass<class AMovingPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterMultiplayer_Source_ShooterMultiplayer_MovingPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
