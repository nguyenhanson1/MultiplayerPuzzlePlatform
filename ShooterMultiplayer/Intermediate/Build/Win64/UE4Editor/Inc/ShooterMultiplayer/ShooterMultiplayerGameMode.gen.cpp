// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterMultiplayer/ShooterMultiplayerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterMultiplayerGameMode() {}
// Cross Module References
	SHOOTERMULTIPLAYER_API UClass* Z_Construct_UClass_AShooterMultiplayerGameMode_NoRegister();
	SHOOTERMULTIPLAYER_API UClass* Z_Construct_UClass_AShooterMultiplayerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShooterMultiplayer();
// End Cross Module References
	void AShooterMultiplayerGameMode::StaticRegisterNativesAShooterMultiplayerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AShooterMultiplayerGameMode_NoRegister()
	{
		return AShooterMultiplayerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShooterMultiplayerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterMultiplayerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterMultiplayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterMultiplayerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShooterMultiplayerGameMode.h" },
		{ "ModuleRelativePath", "ShooterMultiplayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterMultiplayerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterMultiplayerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterMultiplayerGameMode_Statics::ClassParams = {
		&AShooterMultiplayerGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterMultiplayerGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AShooterMultiplayerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterMultiplayerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterMultiplayerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterMultiplayerGameMode, 2112151755);
	template<> SHOOTERMULTIPLAYER_API UClass* StaticClass<AShooterMultiplayerGameMode>()
	{
		return AShooterMultiplayerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterMultiplayerGameMode(Z_Construct_UClass_AShooterMultiplayerGameMode, &AShooterMultiplayerGameMode::StaticClass, TEXT("/Script/ShooterMultiplayer"), TEXT("AShooterMultiplayerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterMultiplayerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
