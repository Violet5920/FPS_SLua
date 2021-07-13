// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define COLLISION_WEAPON ECC_GameTraceChannel1
#define COLLISION_PROJECTILE ECC_GameTraceChannel2
#define COLLISION_PICUP ECC_GameTraceChannel3

#define CREATETESTLOG DECLARE_LOG_CATEGORY_EXTERN(TestLog, Log, All);\
					DEFINE_LOG_CATEGORY(TestLog);