// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LatentDelegate_generated_h
#error "LatentDelegate.generated.h already included, missing '#pragma once' in LatentDelegate.h"
#endif
#define SLUA_UNREAL_LatentDelegate_generated_h

#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_SPARSE_DATA
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLatentCallback);


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLatentCallback);


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULatentDelegate(); \
	friend struct Z_Construct_UClass_ULatentDelegate_Statics; \
public: \
	DECLARE_CLASS(ULatentDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULatentDelegate)


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULatentDelegate(); \
	friend struct Z_Construct_UClass_ULatentDelegate_Statics; \
public: \
	DECLARE_CLASS(ULatentDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULatentDelegate)


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULatentDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULatentDelegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULatentDelegate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatentDelegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULatentDelegate(ULatentDelegate&&); \
	NO_API ULatentDelegate(const ULatentDelegate&); \
public:


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULatentDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULatentDelegate(ULatentDelegate&&); \
	NO_API ULatentDelegate(const ULatentDelegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULatentDelegate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULatentDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULatentDelegate)


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_PRIVATE_PROPERTY_OFFSET
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_24_PROLOG
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_PRIVATE_PROPERTY_OFFSET \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_SPARSE_DATA \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_RPC_WRAPPERS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_INCLASS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_PRIVATE_PROPERTY_OFFSET \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_SPARSE_DATA \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_INCLASS_NO_PURE_DECLS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LatentDelegate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ULatentDelegate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
