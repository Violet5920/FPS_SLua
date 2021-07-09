// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaActor() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaActor_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaBPVar();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaTableObjectInterface_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaPawn_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaCharacter_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaController_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaController();
	ENGINE_API UClass* Z_Construct_UClass_AController();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaPlayerController_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaActorComponent_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaGameModeBase_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaHUD_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
// End Cross Module References
	DEFINE_FUNCTION(ALuaActor::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ALuaActor::StaticRegisterNativesALuaActor()
	{
		UClass* Class = ALuaActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ALuaActor::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics
	{
		struct LuaActor_eventCallLuaMember_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaActor_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaActor_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaActor_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaActor, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaActor_eventCallLuaMember_Parms), Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuaActor_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALuaActor_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuaActor_NoRegister()
	{
		return ALuaActor::StaticClass();
	}
	struct Z_Construct_UClass_ALuaActor_Statics
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
	UObject* (*const Z_Construct_UClass_ALuaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaActor_CallLuaMember, "CallLuaMember" }, // 309970181
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaActor.h" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaActor, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaActor, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaActor, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuaActor_Statics::ClassParams = {
		&ALuaActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALuaActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuaActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuaActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuaActor, 1046762099);
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaActor>()
	{
		return ALuaActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuaActor(Z_Construct_UClass_ALuaActor, &ALuaActor::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ALuaActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaActor);
	DEFINE_FUNCTION(ALuaPawn::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ALuaPawn::StaticRegisterNativesALuaPawn()
	{
		UClass* Class = ALuaPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ALuaPawn::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics
	{
		struct LuaPawn_eventCallLuaMember_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaPawn_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaPawn_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaPawn_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaPawn, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaPawn_eventCallLuaMember_Parms), Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuaPawn_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALuaPawn_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuaPawn_NoRegister()
	{
		return ALuaPawn::StaticClass();
	}
	struct Z_Construct_UClass_ALuaPawn_Statics
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
	UObject* (*const Z_Construct_UClass_ALuaPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaPawn_CallLuaMember, "CallLuaMember" }, // 428532106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LuaActor.h" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaPawn, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaPawn, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaPawn_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaPawn, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuaPawn_Statics::ClassParams = {
		&ALuaPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALuaPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuaPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuaPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuaPawn, 4192403615);
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaPawn>()
	{
		return ALuaPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuaPawn(Z_Construct_UClass_ALuaPawn, &ALuaPawn::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ALuaPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaPawn);
	DEFINE_FUNCTION(ALuaCharacter::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ALuaCharacter::StaticRegisterNativesALuaCharacter()
	{
		UClass* Class = ALuaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ALuaCharacter::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics
	{
		struct LuaCharacter_eventCallLuaMember_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaCharacter_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaCharacter_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaCharacter_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaCharacter, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaCharacter_eventCallLuaMember_Parms), Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuaCharacter_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALuaCharacter_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuaCharacter_NoRegister()
	{
		return ALuaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALuaCharacter_Statics
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
	UObject* (*const Z_Construct_UClass_ALuaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaCharacter_CallLuaMember, "CallLuaMember" }, // 894454290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LuaActor.h" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaCharacter, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaCharacter, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaCharacter_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaCharacter, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuaCharacter_Statics::ClassParams = {
		&ALuaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALuaCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuaCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuaCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuaCharacter, 642445017);
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaCharacter>()
	{
		return ALuaCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuaCharacter(Z_Construct_UClass_ALuaCharacter, &ALuaCharacter::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ALuaCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaCharacter);
	DEFINE_FUNCTION(ALuaController::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ALuaController::StaticRegisterNativesALuaController()
	{
		UClass* Class = ALuaController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ALuaController::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaController_CallLuaMember_Statics
	{
		struct LuaController_eventCallLuaMember_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaController_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaController_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaController_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaController, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaController_eventCallLuaMember_Parms), Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuaController_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALuaController_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuaController_NoRegister()
	{
		return ALuaController::StaticClass();
	}
	struct Z_Construct_UClass_ALuaController_Statics
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
	UObject* (*const Z_Construct_UClass_ALuaController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AController,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaController_CallLuaMember, "CallLuaMember" }, // 2376755990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LuaActor.h" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaController_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaController_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaController, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ALuaController_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaController_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaController_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaController_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaController, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ALuaController_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaController_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaController_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaController_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaController, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuaController_Statics::ClassParams = {
		&ALuaController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALuaController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuaController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuaController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuaController, 3537925844);
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaController>()
	{
		return ALuaController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuaController(Z_Construct_UClass_ALuaController, &ALuaController::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ALuaController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaController);
	DEFINE_FUNCTION(ALuaPlayerController::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ALuaPlayerController::StaticRegisterNativesALuaPlayerController()
	{
		UClass* Class = ALuaPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ALuaPlayerController::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics
	{
		struct LuaPlayerController_eventCallLuaMember_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaPlayerController_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaPlayerController_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaPlayerController_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaPlayerController, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaPlayerController_eventCallLuaMember_Parms), Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuaPlayerController_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALuaPlayerController_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuaPlayerController_NoRegister()
	{
		return ALuaPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALuaPlayerController_Statics
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
	UObject* (*const Z_Construct_UClass_ALuaPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaPlayerController_CallLuaMember, "CallLuaMember" }, // 3887964172
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LuaActor.h" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaPlayerController, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaPlayerController, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaPlayerController, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuaPlayerController_Statics::ClassParams = {
		&ALuaPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALuaPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuaPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuaPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuaPlayerController, 2967778443);
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaPlayerController>()
	{
		return ALuaPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuaPlayerController(Z_Construct_UClass_ALuaPlayerController, &ALuaPlayerController::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ALuaPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaPlayerController);
	DEFINE_FUNCTION(ULuaActorComponent::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ULuaActorComponent::StaticRegisterNativesULuaActorComponent()
	{
		UClass* Class = ULuaActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ULuaActorComponent::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics
	{
		struct LuaActorComponent_eventCallLuaMember_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaActorComponent_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaActorComponent_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaActorComponent_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaActorComponent, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaActorComponent_eventCallLuaMember_Parms), Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaActorComponent_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaActorComponent_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuaActorComponent_NoRegister()
	{
		return ULuaActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULuaActorComponent_Statics
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
	UObject* (*const Z_Construct_UClass_ULuaActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaActorComponent_CallLuaMember, "CallLuaMember" }, // 3153213631
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LuaActor.h" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuaActorComponent, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULuaActorComponent, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULuaActorComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ULuaActorComponent, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaActorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaActorComponent_Statics::ClassParams = {
		&ULuaActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaActorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaActorComponent, 3531990829);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaActorComponent>()
	{
		return ULuaActorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaActorComponent(Z_Construct_UClass_ULuaActorComponent, &ULuaActorComponent::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaActorComponent);
	DEFINE_FUNCTION(ALuaGameModeBase::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ALuaGameModeBase::StaticRegisterNativesALuaGameModeBase()
	{
		UClass* Class = ALuaGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ALuaGameModeBase::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics
	{
		struct LuaGameModeBase_eventCallLuaMember_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaGameModeBase_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaGameModeBase_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaGameModeBase_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaGameModeBase, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaGameModeBase_eventCallLuaMember_Parms), Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuaGameModeBase_NoRegister()
	{
		return ALuaGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALuaGameModeBase_Statics
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
	UObject* (*const Z_Construct_UClass_ALuaGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaGameModeBase_CallLuaMember, "CallLuaMember" }, // 2127425286
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LuaActor.h" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaGameModeBase, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaGameModeBase, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaGameModeBase_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaGameModeBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaGameModeBase, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuaGameModeBase_Statics::ClassParams = {
		&ALuaGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaGameModeBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaGameModeBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALuaGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuaGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuaGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuaGameModeBase, 2055009505);
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaGameModeBase>()
	{
		return ALuaGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuaGameModeBase(Z_Construct_UClass_ALuaGameModeBase, &ALuaGameModeBase::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ALuaGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaGameModeBase);
	DEFINE_FUNCTION(ALuaHUD::execCallLuaMember)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=P_THIS->CallLuaMember(Z_Param_FunctionName,Z_Param_Out_Args);
		P_NATIVE_END;
	}
	void ALuaHUD::StaticRegisterNativesALuaHUD()
	{
		UClass* Class = ALuaHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallLuaMember", &ALuaHUD::execCallLuaMember },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics
	{
		struct LuaHUD_eventCallLuaMember_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaHUD_eventCallLuaMember_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaHUD_eventCallLuaMember_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaHUD_eventCallLuaMember_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaHUD, nullptr, "CallLuaMember", nullptr, nullptr, sizeof(LuaHUD_eventCallLuaMember_Parms), Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALuaHUD_CallLuaMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALuaHUD_CallLuaMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALuaHUD_NoRegister()
	{
		return ALuaHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALuaHUD_Statics
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
	UObject* (*const Z_Construct_UClass_ALuaHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaHUD_CallLuaMember, "CallLuaMember" }, // 3809455875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LuaActor.h" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaHUD, LuaFilePath), METADATA_PARAMS(Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaStateName_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaStateName = { "LuaStateName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALuaHUD, LuaStateName), METADATA_PARAMS(Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaStateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaStateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaHUD_Statics::NewProp_LuaStateName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaHUD_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaTableObjectInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaHUD, ILuaTableObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALuaHUD_Statics::ClassParams = {
		&ALuaHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaHUD_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaHUD_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALuaHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALuaHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALuaHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALuaHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALuaHUD, 3831883917);
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaHUD>()
	{
		return ALuaHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALuaHUD(Z_Construct_UClass_ALuaHUD, &ALuaHUD::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ALuaHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
