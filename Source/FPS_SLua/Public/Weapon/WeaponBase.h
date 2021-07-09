// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaActor.h"
#include "WeaponBase.generated.h"

class USoundCue;
class USkeletalMeshComponent;

/**
 * 
 */
UCLASS(Abstract)
class FPS_SLUA_API AWeaponBase : public ALuaActor
{
	GENERATED_BODY()

public:

	AWeaponBase();

private:
	//////////////////////////////////////////////////////////////////////////
	// Self

	//The weapon's mesh
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* WeaponMesh;

	//The Interval of attack
	UPROPERTY(EditDefaultsOnly, Category="WeaponPara|Weapon", meta=(ClampMin="0"))
	float AttackInterval;

	//The name of the slot's point that we want to attached
	UPROPERTY(EditDefaultsOnly, Category="WeaponPara|Weapon")
	FName AttachSlotName;



	//////////////////////////////////////////////////////////////////////////
	// Sound
 
	//The sound will play when attacking
	UPROPERTY(EditDefaultsOnly, Category="WeaponPara|Sound")
	USoundCue* AttackSound;

	//The sound will play when equip the weapon
	UPROPERTY(EditDefaultsOnly, Category= "WeaponPara|Sound")
	USoundCue* EquipSound;

	//The sound will play when discard the weapon
	UPROPERTY(EditDefaultsOnly, Category= "WeaponPara|Sound")
	USoundCue* DiscardSound;

	//////////////////////////////////////////////////////////////////////////
	// UI

	//Weapon's Icon showed on Screen
	UPROPERTY(EditDefaultsOnly, Category= "WeaponPara|UI")
	UTexture2D* WeaponIcon;

	//////////////////////////////////////////////////////////////////////////
	// Anim

	UPROPERTY(EditDefaultsOnly, Category="WeaponPara|Anim")
	UAnimMontage* ReloadAnim;

	UPROPERTY(EditDefaultsOnly, Category="WeaponPara|Anim")
	UAnimMontage* AttackAnim;

	UPROPERTY(EditDefaultsOnly, Category="WeaponPara|Anim")
	UAnimMontage* EquipAnim;

	UPROPERTY(EditDefaultsOnly, Category="WeaponPara|Anim")
	UAnimMontage* DiscarAnim;

public:

	//////////////////////////////////////////////////////////////////////////
	// Input function

	//Attacking By Weapon
	UFUNCTION()
	virtual void StartAttack();

	//Stop weapon attack (Does not immediately stop the attack related state)
	virtual void StopAttack();

	//////////////////////////////////////////////////////////////////////////
	// Inventory function

	//Equip Weapon
	UFUNCTION(BlueprintCallable, Category=Equip)
	virtual void Equip(APawn* PawnOwner);

	//UnEquip Wepaon
	UFUNCTION(BlueprintCallable, Category=Equip)
	virtual void UnEquip();

private:

	//Apply the new Owenr and instigater
	void UpdateOwner(APawn* NewOwner);

protected:

	//The extra Process when @Euip finished
	UFUNCTION(BlueprintNativeEvent, Category=Equip)
	void OnEquip();

	//The extra Process when @UnEquip finished
	UFUNCTION(BlueprintNativeEvent, Category=Equip)
	void OnUnEquip();

	//Attach To Pawn
	void AttachToOwner();

	//Detach from Pawn
	void DetachFromOwner();

	//////////////////////////////////////////////////////////////////////////
	//Weapon use
protected:

	UAudioComponent* PlaySound(USoundCue* Sound);

	float PlayAnimMontage(UAnimMontage* Anim);

	void StopPlayAnimMontage(UAnimMontage* Anim);

};
