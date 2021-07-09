// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon/WeaponBase.h"
#include "ShootWeaponBase.generated.h"

class SoundCue;
/**
 * 
 */
UCLASS()
class FPS_SLUA_API AShootWeaponBase : public AWeaponBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, Category = "WeaponPara|Sound")
	USoundCue* LackAmmoSound;

	//The sound will play when reload ammo
	UPROPERTY(EditDefaultsOnly, Category = "WeaponPara|Sound")
	USoundCue* ReloadSound;
	
};
