// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaBase() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaTableObjectInterface_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaTableObjectInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	void ULuaTableObjectInterface::StaticRegisterNativesULuaTableObjectInterface()
	{
	}
	UClass* Z_Construct_UClass_ULuaTableObjectInterface_NoRegister()
	{
		return ULuaTableObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULuaTableObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaTableObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaTableObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaTableObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILuaTableObjectInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaTableObjectInterface_Statics::ClassParams = {
		&ULuaTableObjectInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULuaTableObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaTableObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaTableObjectInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaTableObjectInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaTableObjectInterface, 4081502110);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaTableObjectInterface>()
	{
		return ULuaTableObjectInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaTableObjectInterface(Z_Construct_UClass_ULuaTableObjectInterface, &ULuaTableObjectInterface::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaTableObjectInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaTableObjectInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
