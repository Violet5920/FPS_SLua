// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_PropertyUtil_generated_h
#error "PropertyUtil.generated.h already included, missing '#pragma once' in PropertyUtil.h"
#endif
#define SLUA_UNREAL_PropertyUtil_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_PropertyUtil_h


#define FOREACH_ENUM_EPROPERTYCLASS(op) \
	op(EPropertyClass::Byte) \
	op(EPropertyClass::Int8) \
	op(EPropertyClass::Int16) \
	op(EPropertyClass::Int) \
	op(EPropertyClass::Int64) \
	op(EPropertyClass::UInt16) \
	op(EPropertyClass::UInt32) \
	op(EPropertyClass::UInt64) \
	op(EPropertyClass::UnsizedInt) \
	op(EPropertyClass::UnsizedUInt) \
	op(EPropertyClass::Float) \
	op(EPropertyClass::Double) \
	op(EPropertyClass::Bool) \
	op(EPropertyClass::SoftClass) \
	op(EPropertyClass::WeakObject) \
	op(EPropertyClass::LazyObject) \
	op(EPropertyClass::SoftObject) \
	op(EPropertyClass::Class) \
	op(EPropertyClass::Object) \
	op(EPropertyClass::Interface) \
	op(EPropertyClass::Name) \
	op(EPropertyClass::Str) \
	op(EPropertyClass::Array) \
	op(EPropertyClass::Map) \
	op(EPropertyClass::Set) \
	op(EPropertyClass::Struct) \
	op(EPropertyClass::Delegate) \
	op(EPropertyClass::MulticastDelegate) \
	op(EPropertyClass::Text) \
	op(EPropertyClass::Enum) 

enum class EPropertyClass;
template<> SLUA_UNREAL_API UEnum* StaticEnum<EPropertyClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
