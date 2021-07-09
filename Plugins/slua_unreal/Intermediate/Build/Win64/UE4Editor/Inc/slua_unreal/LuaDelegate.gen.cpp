// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaDelegate() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaDelegate_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaDelegate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ULuaDelegate::execEventTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventTrigger();
		P_NATIVE_END;
	}
	void ULuaDelegate::StaticRegisterNativesULuaDelegate()
	{
		UClass* Class = ULuaDelegate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventTrigger", &ULuaDelegate::execEventTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lua|Delegate" },
		{ "ModuleRelativePath", "Public/LuaDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaDelegate, nullptr, "EventTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaDelegate_EventTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuaDelegate_NoRegister()
	{
		return ULuaDelegate::StaticClass();
	}
	struct Z_Construct_UClass_ULuaDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaDelegate_EventTrigger, "EventTrigger" }, // 281848931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaDelegate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaDelegate.h" },
		{ "ModuleRelativePath", "Public/LuaDelegate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaDelegate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaDelegate_Statics::ClassParams = {
		&ULuaDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULuaDelegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaDelegate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaDelegate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaDelegate, 3049336704);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaDelegate>()
	{
		return ULuaDelegate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaDelegate(Z_Construct_UClass_ULuaDelegate, &ULuaDelegate::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaDelegate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaDelegate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
