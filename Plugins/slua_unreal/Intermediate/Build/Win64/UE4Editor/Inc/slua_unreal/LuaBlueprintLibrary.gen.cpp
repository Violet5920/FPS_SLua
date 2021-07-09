// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/LuaBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaBlueprintLibrary() {}
// Cross Module References
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaBPVar();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaBlueprintLibrary_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FLuaBPVar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SLUA_UNREAL_API uint32 Get_Z_Construct_UScriptStruct_FLuaBPVar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuaBPVar, Z_Construct_UPackage__Script_slua_unreal(), TEXT("LuaBPVar"), sizeof(FLuaBPVar), Get_Z_Construct_UScriptStruct_FLuaBPVar_Hash());
	}
	return Singleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FLuaBPVar>()
{
	return FLuaBPVar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLuaBPVar(FLuaBPVar::StaticStruct, TEXT("/Script/slua_unreal"), TEXT("LuaBPVar"), false, nullptr, nullptr);
static struct FScriptStruct_slua_unreal_StaticRegisterNativesFLuaBPVar
{
	FScriptStruct_slua_unreal_StaticRegisterNativesFLuaBPVar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LuaBPVar")),new UScriptStruct::TCppStructOps<FLuaBPVar>);
	}
} ScriptStruct_slua_unreal_StaticRegisterNativesFLuaBPVar;
	struct Z_Construct_UScriptStruct_FLuaBPVar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaBPVar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuaBPVar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuaBPVar>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuaBPVar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"LuaBPVar",
		sizeof(FLuaBPVar),
		alignof(FLuaBPVar),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLuaBPVar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaBPVar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLuaBPVar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLuaBPVar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_slua_unreal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LuaBPVar"), sizeof(FLuaBPVar), Get_Z_Construct_UScriptStruct_FLuaBPVar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLuaBPVar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLuaBPVar_Hash() { return 2350068284U; }
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetObjectFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=ULuaBlueprintLibrary::GetObjectFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetBoolFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULuaBlueprintLibrary::GetBoolFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetStringFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULuaBlueprintLibrary::GetStringFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetNumberFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULuaBlueprintLibrary::GetNumberFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetIntFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULuaBlueprintLibrary::GetIntFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromObject(Z_Param_WorldContextObject,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromBool)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromBool(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromNumber)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromNumber(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromInt(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCallToLua)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CallToLua(Z_Param_WorldContextObject,Z_Param_FunctionName,Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCallToLuaWithArgs)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CallToLuaWithArgs(Z_Param_WorldContextObject,Z_Param_FunctionName,Z_Param_Out_Args,Z_Param_StateName);
		P_NATIVE_END;
	}
	void ULuaBlueprintLibrary::StaticRegisterNativesULuaBlueprintLibrary()
	{
		UClass* Class = ULuaBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallToLua", &ULuaBlueprintLibrary::execCallToLua },
			{ "CallToLuaWithArgs", &ULuaBlueprintLibrary::execCallToLuaWithArgs },
			{ "CreateVarFromBool", &ULuaBlueprintLibrary::execCreateVarFromBool },
			{ "CreateVarFromInt", &ULuaBlueprintLibrary::execCreateVarFromInt },
			{ "CreateVarFromNumber", &ULuaBlueprintLibrary::execCreateVarFromNumber },
			{ "CreateVarFromObject", &ULuaBlueprintLibrary::execCreateVarFromObject },
			{ "CreateVarFromString", &ULuaBlueprintLibrary::execCreateVarFromString },
			{ "GetBoolFromVar", &ULuaBlueprintLibrary::execGetBoolFromVar },
			{ "GetIntFromVar", &ULuaBlueprintLibrary::execGetIntFromVar },
			{ "GetNumberFromVar", &ULuaBlueprintLibrary::execGetNumberFromVar },
			{ "GetObjectFromVar", &ULuaBlueprintLibrary::execGetObjectFromVar },
			{ "GetStringFromVar", &ULuaBlueprintLibrary::execGetStringFromVar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics
	{
		struct LuaBlueprintLibrary_eventCallToLua_Parms
		{
			UObject* WorldContextObject;
			FString FunctionName;
			FString StateName;
			FLuaBPVar ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLua_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLua_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLua_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLua_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "DisplayName", "Call To Lua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CallToLua", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventCallToLua_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics
	{
		struct LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms
		{
			UObject* WorldContextObject;
			FString FunctionName;
			TArray<FLuaBPVar> Args;
			FString StateName;
			FLuaBPVar ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Args_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Args;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, FunctionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "Comment", "/** Call a lua function with args */" },
		{ "DisplayName", "Call To Lua With Arguments" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
		{ "ToolTip", "Call a lua function with args" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CallToLuaWithArgs", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromBool_Parms
		{
			bool Value;
			FLuaBPVar ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((LuaBlueprintLibrary_eventCreateVarFromBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LuaBlueprintLibrary_eventCreateVarFromBool_Parms), &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromBool", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventCreateVarFromBool_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromInt_Parms
		{
			int32 Value;
			FLuaBPVar ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromInt", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventCreateVarFromInt_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromNumber_Parms
		{
			float Value;
			FLuaBPVar ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromNumber_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromNumber", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventCreateVarFromNumber_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromObject_Parms
		{
			UObject* WorldContextObject;
			UObject* Value;
			FLuaBPVar ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromObject_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromObject", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventCreateVarFromObject_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromString_Parms
		{
			FString Value;
			FLuaBPVar ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromString", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventCreateVarFromString_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetBoolFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetBoolFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetBoolFromVar_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LuaBlueprintLibrary_eventGetBoolFromVar_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LuaBlueprintLibrary_eventGetBoolFromVar_Parms), &Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetBoolFromVar", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventGetBoolFromVar_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetIntFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetIntFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetIntFromVar_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetIntFromVar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetIntFromVar", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventGetIntFromVar_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetNumberFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetNumberFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetNumberFromVar_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetNumberFromVar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetNumberFromVar", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventGetNumberFromVar_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetObjectFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetObjectFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetObjectFromVar_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetObjectFromVar_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetObjectFromVar", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventGetObjectFromVar_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetStringFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetStringFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetStringFromVar_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetStringFromVar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetStringFromVar", nullptr, nullptr, sizeof(LuaBlueprintLibrary_eventGetStringFromVar_Parms), Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULuaBlueprintLibrary_NoRegister()
	{
		return ULuaBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULuaBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua, "CallToLua" }, // 2980704033
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs, "CallToLuaWithArgs" }, // 323859035
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool, "CreateVarFromBool" }, // 4265247864
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt, "CreateVarFromInt" }, // 2092521292
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber, "CreateVarFromNumber" }, // 3545297319
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject, "CreateVarFromObject" }, // 375020013
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString, "CreateVarFromString" }, // 3052801239
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar, "GetBoolFromVar" }, // 3267459054
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar, "GetIntFromVar" }, // 249617785
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar, "GetNumberFromVar" }, // 1223359693
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar, "GetObjectFromVar" }, // 2803034854
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar, "GetStringFromVar" }, // 2079146752
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULuaBlueprintLibrary_Statics::ClassParams = {
		&ULuaBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULuaBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULuaBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULuaBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULuaBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULuaBlueprintLibrary, 1682465733);
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaBlueprintLibrary>()
	{
		return ULuaBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULuaBlueprintLibrary(Z_Construct_UClass_ULuaBlueprintLibrary, &ULuaBlueprintLibrary::StaticClass, TEXT("/Script/slua_unreal"), TEXT("ULuaBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
