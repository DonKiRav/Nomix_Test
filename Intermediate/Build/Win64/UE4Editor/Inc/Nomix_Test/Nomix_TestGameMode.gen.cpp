// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nomix_Test/Nomix_TestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNomix_TestGameMode() {}
// Cross Module References
	NOMIX_TEST_API UClass* Z_Construct_UClass_ANomix_TestGameMode_NoRegister();
	NOMIX_TEST_API UClass* Z_Construct_UClass_ANomix_TestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Nomix_Test();
// End Cross Module References
	void ANomix_TestGameMode::StaticRegisterNativesANomix_TestGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANomix_TestGameMode_NoRegister()
	{
		return ANomix_TestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANomix_TestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANomix_TestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Nomix_Test,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANomix_TestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Nomix_TestGameMode.h" },
		{ "ModuleRelativePath", "Nomix_TestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANomix_TestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANomix_TestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANomix_TestGameMode_Statics::ClassParams = {
		&ANomix_TestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANomix_TestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANomix_TestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANomix_TestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANomix_TestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANomix_TestGameMode, 965681413);
	template<> NOMIX_TEST_API UClass* StaticClass<ANomix_TestGameMode>()
	{
		return ANomix_TestGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANomix_TestGameMode(Z_Construct_UClass_ANomix_TestGameMode, &ANomix_TestGameMode::StaticClass, TEXT("/Script/Nomix_Test"), TEXT("ANomix_TestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANomix_TestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
