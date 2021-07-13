#include "WeaponType.generated.h"
#pragma once
UENUM(BlueprintType)
namespace EWeaponState
{
	enum Type
	{
		Unusable = 0,
		Euiped,
		Reloadding,
		Attacking,
		WaitAttackEnd
	};
}

