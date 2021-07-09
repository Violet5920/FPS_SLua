// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Private/LatentDelegate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatentDelegate() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULatentDelegate_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULatentDelegate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ULatentDelegate::execOnLatentCallback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_threadRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLatentCallback(Z_Param_threadRef);
		P_NATIVE_END;
	}
	void ULatentDelegate::StaticRegisterNativesULatentDelegate()
	{
		UClass* Class = ULatentDelegate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLatentCallback", &ULatentDelegate::execOnLatentCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics
	{
		struct LatentDelegate_eventOnLatentCallback_Parms
		{
			int32 threadRef;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_threadRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::NewProp_threadRef = { "threadRef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LatentDelegate_eventOnLatentCallback_Parms, threadRef), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::NewProp_threadRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lua|LatentDelegate" },
		{ "ModuleRelativePath", "Private/LatentDelegate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULatentDelegate, nullptr, "OnLatentCallback", nullptr, nullptr, sizeof(LatentDelegate_eventOnLatentCallback_Parms), Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULatentDelegate_OnLatentCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULatentDelegate_NoRegister()
	{
		return ULatentDelegate::StaticClass();
	}
	struct Z_Construct_UClass_ULatentDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULatentDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULatentDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULatentDelegate_OnLatentCallback, "OnLatentCallback" }, // 3847569348
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatentDelegate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LatentDelegate.h" },
		{ "ModuleRelativePath", "Private/LatentDelegate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULatentDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatentDelegate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULatentDelegate_Statics::ClassParams = {
		&ULatentDelegate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULatentDelegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULatentDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULatentDelegate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULatentDelegate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULatentDelegate, 1525709383);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULatentDelegate>()
	{
		return ULatentDelegate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULatentDelegate(Z_Construct_UClass_ULatentDelegate, &ULatentDelegate::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULatentDelegate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULatentDelegate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
