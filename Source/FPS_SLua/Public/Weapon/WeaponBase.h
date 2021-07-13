// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LuaActor.h"
#include "Weapon/WeaponType.h"
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

	//UPROPERTY(/*VisibleAnywhere,*/ BlueprintGetter= GetState, Category="WeaponPara|Weapon")
	EWeaponState::Type State;

	FTimerHandle WeaponAttak;

	FTimerHandle FinishedAttack;

	FTimerHandle FinishedEquip;

	FTimerHandle FinishedReload;

	float LastAttackTime;

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
	UFUNCTION(BlueprintCallable, Category="Weapon|Attack")
	void StartAttack();

	//Stop weapon attack (Does not immediately stop the attack related state)
	UFUNCTION(BlueprintCallable, Category = "Weapon|Attack")
	void StopAttack();

	//Check the weapon can attack now.
	UFUNCTION(BlueprintCallable, Category="Weapon|Attack")
	virtual bool CanAttack()const;

protected:
	//Used to start attack timer
	UFUNCTION(BlueprintNativeEvent, Category="Weapon|Attack")
	void Attack();

	//Used to end attack timer
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon|Attack")
	void EndAttack();

	//this is the real process of attack
	UFUNCTION(Category="Weapon|Attack")
	virtual bool DoAttack();

	//Do some process after "DoAttack" 
	//For example decrease the ammo count
	UFUNCTION(Category="Weapon|Attack")
	virtual void ProcessAttack();
	//////////////////////////////////////////////////////////////////////////
	// Inventory function
public:

	//Equip Weapon
	UFUNCTION(BlueprintCallable, Category="Weapon|Equip")
	virtual void Equip(APawn* PawnOwner);

	//UnEquip Wepaon
	UFUNCTION(BlueprintCallable, Category= "Weapon|Equip")
	virtual void UnEquip();

private:

	//Apply the new Owenr and instigater
	void UpdateOwner(APawn* NewOwner);

	void ProcessEquiped();

protected:

	//The extra Process when @"Euip" finished
	UFUNCTION(BlueprintCallable, Category="Weapon|Equip")
	virtual void OnEquiped();

	//The extra Process when @"UnEquip" finished
	UFUNCTION(BlueprintCallable, Category= "Weapon|Equip")
	virtual void OnUnEquiped();

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

	//Get weapon current state
	UFUNCTION(BlueprintCallable, Category="Weapon|Get")
	inline EWeaponState::Type GetWeaponState()const { return State; }

	//Set weapon current state
	UFUNCTION(BlueprintCallable, Category="Weapon|Set")
	void SetWeaponState(EWeaponState::Type NewState);

	//Check attack state
	UFUNCTION(BlueprintCallable, Category="Weapon|Check")
	bool IsAttacking() { return GetWeaponState() == EWeaponState::Attacking; }

	inline float GetAttackIntervalSurplusTime();

};
