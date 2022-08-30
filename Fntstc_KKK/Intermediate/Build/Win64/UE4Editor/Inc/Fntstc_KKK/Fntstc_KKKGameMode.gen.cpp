// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fntstc_KKK/Fntstc_KKKGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFntstc_KKKGameMode() {}
// Cross Module References
	FNTSTC_KKK_API UClass* Z_Construct_UClass_AFntstc_KKKGameMode_NoRegister();
	FNTSTC_KKK_API UClass* Z_Construct_UClass_AFntstc_KKKGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Fntstc_KKK();
// End Cross Module References
	void AFntstc_KKKGameMode::StaticRegisterNativesAFntstc_KKKGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFntstc_KKKGameMode_NoRegister()
	{
		return AFntstc_KKKGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFntstc_KKKGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFntstc_KKKGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Fntstc_KKK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFntstc_KKKGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Fntstc_KKKGameMode.h" },
		{ "ModuleRelativePath", "Fntstc_KKKGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFntstc_KKKGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFntstc_KKKGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFntstc_KKKGameMode_Statics::ClassParams = {
		&AFntstc_KKKGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFntstc_KKKGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFntstc_KKKGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFntstc_KKKGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFntstc_KKKGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFntstc_KKKGameMode, 33559765);
	template<> FNTSTC_KKK_API UClass* StaticClass<AFntstc_KKKGameMode>()
	{
		return AFntstc_KKKGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFntstc_KKKGameMode(Z_Construct_UClass_AFntstc_KKKGameMode, &AFntstc_KKKGameMode::StaticClass, TEXT("/Script/Fntstc_KKK"), TEXT("AFntstc_KKKGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFntstc_KKKGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
