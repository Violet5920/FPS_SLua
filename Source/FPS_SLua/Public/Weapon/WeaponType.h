#include "WeaponType.generated.h"
#pragma once
UENUM(BlueprintType)
namespace WeaponState
{
	enum Type
	{
		Unusable = 0,
		Euipping,
		Reloadding,
		Attacking
	};
}

