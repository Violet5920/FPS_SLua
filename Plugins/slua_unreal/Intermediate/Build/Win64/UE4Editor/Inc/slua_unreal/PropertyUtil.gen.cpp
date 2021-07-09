// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "slua_unreal/Public/PropertyUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyUtil() {}
// Cross Module References
	SLUA_UNREAL_API UEnum* Z_Construct_UEnum_slua_unreal_EPropertyClass();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	static UEnum* EPropertyClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_slua_unreal_EPropertyClass, Z_Construct_UPackage__Script_slua_unreal(), TEXT("EPropertyClass"));
		}
		return Singleton;
	}
	template<> SLUA_UNREAL_API UEnum* StaticEnum<EPropertyClass>()
	{
		return EPropertyClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPropertyClass(EPropertyClass_StaticEnum, TEXT("/Script/slua_unreal"), TEXT("EPropertyClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_slua_unreal_EPropertyClass_Hash() { return 3053430763U; }
	UEnum* Z_Construct_UEnum_slua_unreal_EPropertyClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_slua_unreal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPropertyClass"), 0, Get_Z_Construct_UEnum_slua_unreal_EPropertyClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPropertyClass::Byte", (int64)EPropertyClass::Byte },
				{ "EPropertyClass::Int8", (int64)EPropertyClass::Int8 },
				{ "EPropertyClass::Int16", (int64)EPropertyClass::Int16 },
				{ "EPropertyClass::Int", (int64)EPropertyClass::Int },
				{ "EPropertyClass::Int64", (int64)EPropertyClass::Int64 },
				{ "EPropertyClass::UInt16", (int64)EPropertyClass::UInt16 },
				{ "EPropertyClass::UInt32", (int64)EPropertyClass::UInt32 },
				{ "EPropertyClass::UInt64", (int64)EPropertyClass::UInt64 },
				{ "EPropertyClass::UnsizedInt", (int64)EPropertyClass::UnsizedInt },
				{ "EPropertyClass::UnsizedUInt", (int64)EPropertyClass::UnsizedUInt },
				{ "EPropertyClass::Float", (int64)EPropertyClass::Float },
				{ "EPropertyClass::Double", (int64)EPropertyClass::Double },
				{ "EPropertyClass::Bool", (int64)EPropertyClass::Bool },
				{ "EPropertyClass::SoftClass", (int64)EPropertyClass::SoftClass },
				{ "EPropertyClass::WeakObject", (int64)EPropertyClass::WeakObject },
				{ "EPropertyClass::LazyObject", (int64)EPropertyClass::LazyObject },
				{ "EPropertyClass::SoftObject", (int64)EPropertyClass::SoftObject },
				{ "EPropertyClass::Class", (int64)EPropertyClass::Class },
				{ "EPropertyClass::Object", (int64)EPropertyClass::Object },
				{ "EPropertyClass::Interface", (int64)EPropertyClass::Interface },
				{ "EPropertyClass::Name", (int64)EPropertyClass::Name },
				{ "EPropertyClass::Str", (int64)EPropertyClass::Str },
				{ "EPropertyClass::Array", (int64)EPropertyClass::Array },
				{ "EPropertyClass::Map", (int64)EPropertyClass::Map },
				{ "EPropertyClass::Set", (int64)EPropertyClass::Set },
				{ "EPropertyClass::Struct", (int64)EPropertyClass::Struct },
				{ "EPropertyClass::Delegate", (int64)EPropertyClass::Delegate },
				{ "EPropertyClass::MulticastDelegate", (int64)EPropertyClass::MulticastDelegate },
				{ "EPropertyClass::Text", (int64)EPropertyClass::Text },
				{ "EPropertyClass::Enum", (int64)EPropertyClass::Enum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Array.Name", "EPropertyClass::Array" },
				{ "Bool.Name", "EPropertyClass::Bool" },
				{ "Byte.Name", "EPropertyClass::Byte" },
				{ "Class.Name", "EPropertyClass::Class" },
				{ "Comment", "// copy code from UE, avoid be removed from version 4.22\n" },
				{ "Delegate.Name", "EPropertyClass::Delegate" },
				{ "Double.Name", "EPropertyClass::Double" },
				{ "Enum.Name", "EPropertyClass::Enum" },
				{ "Float.Name", "EPropertyClass::Float" },
				{ "Int.Name", "EPropertyClass::Int" },
				{ "Int16.Name", "EPropertyClass::Int16" },
				{ "Int64.Name", "EPropertyClass::Int64" },
				{ "Int8.Name", "EPropertyClass::Int8" },
				{ "Interface.Name", "EPropertyClass::Interface" },
				{ "LazyObject.Name", "EPropertyClass::LazyObject" },
				{ "Map.Name", "EPropertyClass::Map" },
				{ "ModuleRelativePath", "Public/PropertyUtil.h" },
				{ "MulticastDelegate.Name", "EPropertyClass::MulticastDelegate" },
				{ "Name.Name", "EPropertyClass::Name" },
				{ "Object.Name", "EPropertyClass::Object" },
				{ "Set.Name", "EPropertyClass::Set" },
				{ "SoftClass.Name", "EPropertyClass::SoftClass" },
				{ "SoftObject.Name", "EPropertyClass::SoftObject" },
				{ "Str.Name", "EPropertyClass::Str" },
				{ "Struct.Name", "EPropertyClass::Struct" },
				{ "Text.Name", "EPropertyClass::Text" },
				{ "ToolTip", "copy code from UE, avoid be removed from version 4.22" },
				{ "UInt16.Name", "EPropertyClass::UInt16" },
				{ "UInt32.Name", "EPropertyClass::UInt32" },
				{ "UInt64.Name", "EPropertyClass::UInt64" },
				{ "UnsizedInt.Name", "EPropertyClass::UnsizedInt" },
				{ "UnsizedUInt.Name", "EPropertyClass::UnsizedUInt" },
				{ "WeakObject.Name", "EPropertyClass::WeakObject" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_slua_unreal,
				nullptr,
				"EPropertyClass",
				"EPropertyClass",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
