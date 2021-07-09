// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaUserWidget() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaUserWidget_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaBPVar();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaTableObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULuaUserWidget::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ULuaUserWidget::StaticRegisterNativesULuaUserWidget()
	{
		UClass* Class = ULuaUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ULuaUserWidget::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics
	{
		struct LuaUserWidget_eventCallLuaMember_Parms
		{
			FString FunctionName;
			TArray<FLuaBPVar> Args;
			FLuaBPVar ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Args_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Args;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaUserWidget_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaUserWidget_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaUserWidget_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaUserWidget, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaUserWidget_eventCallLuaMember_Parms), Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaUserWidget_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaUserWidget_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuaUserWidget_NoRegister()
	{
		return ULuaUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULuaUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LuaFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LuaFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LuaStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LuaStateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaUserWidget_CallLuaMember, "CallLuaMember" }, // 1149045771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaUserWidget.h" },
		{ "ModuleRelativePath", "Public/LuaUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaUserWidget.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuaUserWidget, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuaUserWidget, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULuaUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ULuaUserWidget, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaUserWidget_Statics::ClassParams = {
		&ULuaUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaUserWidget, 704147504);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaUserWidget>()
	{
		return ULuaUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaUserWidget(Z_Construct_UClass_ULuaUserWidget, &ULuaUserWidget::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
