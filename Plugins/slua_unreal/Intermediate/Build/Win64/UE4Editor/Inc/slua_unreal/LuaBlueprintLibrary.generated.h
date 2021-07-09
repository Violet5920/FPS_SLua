// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLuaBPVar;
class UObject;
#ifdef SLUA_UNREAL_LuaBlueprintLibrary_generated_h
#error "LuaBlueprintLibrary.generated.h already included, missing '#pragma once' in LuaBlueprintLibrary.h"
#endif
#define SLUA_UNREAL_LuaBlueprintLibrary_generated_h

#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLuaBPVar_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<struct FLuaBPVar>();

#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_SPARSE_DATA
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetObjectFromVar); \
	DECLARE_FUNCTION(execGetBoolFromVar); \
	DECLARE_FUNCTION(execGetStringFromVar); \
	DECLARE_FUNCTION(execGetNumberFromVar); \
	DECLARE_FUNCTION(execGetIntFromVar); \
	DECLARE_FUNCTION(execCreateVarFromObject); \
	DECLARE_FUNCTION(execCreateVarFromBool); \
	DECLARE_FUNCTION(execCreateVarFromNumber); \
	DECLARE_FUNCTION(execCreateVarFromString); \
	DECLARE_FUNCTION(execCreateVarFromInt); \
	DECLARE_FUNCTION(execCallToLua); \
	DECLARE_FUNCTION(execCallToLuaWithArgs);


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjectFromVar); \
	DECLARE_FUNCTION(execGetBoolFromVar); \
	DECLARE_FUNCTION(execGetStringFromVar); \
	DECLARE_FUNCTION(execGetNumberFromVar); \
	DECLARE_FUNCTION(execGetIntFromVar); \
	DECLARE_FUNCTION(execCreateVarFromObject); \
	DECLARE_FUNCTION(execCreateVarFromBool); \
	DECLARE_FUNCTION(execCreateVarFromNumber); \
	DECLARE_FUNCTION(execCreateVarFromString); \
	DECLARE_FUNCTION(execCreateVarFromInt); \
	DECLARE_FUNCTION(execCallToLua); \
	DECLARE_FUNCTION(execCallToLuaWithArgs);


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULuaBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuaBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaBlueprintLibrary)


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_INCLASS \
private: \
	static void StaticRegisterNativesULuaBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULuaBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuaBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaBlueprintLibrary)


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaBlueprintLibrary(ULuaBlueprintLibrary&&); \
	NO_API ULuaBlueprintLibrary(const ULuaBlueprintLibrary&); \
public:


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaBlueprintLibrary(ULuaBlueprintLibrary&&); \
	NO_API ULuaBlueprintLibrary(const ULuaBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaBlueprintLibrary)


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_PRIVATE_PROPERTY_OFFSET
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_PROLOG
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_SPARSE_DATA \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_RPC_WRAPPERS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_INCLASS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_SPARSE_DATA \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_INCLASS_NO_PURE_DECLS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LuaBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ULuaBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
