// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLuaBPVar;
#ifdef SLUA_UNREAL_LuaUserWidget_generated_h
#error "LuaUserWidget.generated.h already included, missing '#pragma once' in LuaUserWidget.h"
#endif
#define SLUA_UNREAL_LuaUserWidget_generated_h

#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_SPARSE_DATA
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallLuaMember);


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallLuaMember);


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULuaUserWidget(); \
	friend struct Z_Construct_UClass_ULuaUserWidget_Statics; \
public: \
	DECLARE_CLASS(ULuaUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<ULuaUserWidget*>(this); }


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesULuaUserWidget(); \
	friend struct Z_Construct_UClass_ULuaUserWidget_Statics; \
public: \
	DECLARE_CLASS(ULuaUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<ULuaUserWidget*>(this); }


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaUserWidget(ULuaUserWidget&&); \
	NO_API ULuaUserWidget(const ULuaUserWidget&); \
public:


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaUserWidget(ULuaUserWidget&&); \
	NO_API ULuaUserWidget(const ULuaUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaUserWidget)


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_PRIVATE_PROPERTY_OFFSET
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_23_PROLOG
#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_SPARSE_DATA \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_RPC_WRAPPERS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_INCLASS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_PRIVATE_PROPERTY_OFFSET \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_SPARSE_DATA \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_INCLASS_NO_PURE_DECLS \
	FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ULuaUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_SLua_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
