// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponBase.h"
#include "FPS_SLua/FPS_SLua.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"


AWeaponBase::AWeaponBase() : ALuaActor(), AttackInterval(0.0f)
{
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetupAttachment(RootComponent);
	WeaponMesh->bReceivesDecals = false;
	WeaponMesh->bCastDynamicShadow = false;
	WeaponMesh->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	WeaponMesh->SetCollisionObjectType(ECC_WorldDynamic);
	WeaponMesh->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Block);
	WeaponMesh->SetCollisionResponseToChannel(COLLISION_PROJECTILE, ECR_Block);

	
}

void AWeaponBase::StartAttack()
{

}

void AWeaponBase::StopAttack()
{

}

void AWeaponBase::Equip(APawn* PawnOwner)
{

}

void AWeaponBase::UnEquip()
{

}

void AWeaponBase::UpdateOwner(APawn* NewOwner)
{
	if (NewOwner)
	{
		AController* OwnerCtr = NewOwner->GetController();
		SetOwner(OwnerCtr);
	}
	
	SetOwner(nullptr);
	SetInstigator(NewOwner);
}

void AWeaponBase::OnEquip_Implementation()
{

}

void AWeaponBase::OnUnEquip_Implementation()
{

}

void AWeaponBase::AttachToOwner()
{

}

void AWeaponBase::DetachFromOwner()
{

}

UAudioComponent* AWeaponBase::PlaySound(USoundCue* Sound)
{
	UAudioComponent* AC = nullptr;
	if (Sound && GetOwner())
	{
		AC = UGameplayStatics::SpawnSoundAttached(Sound, GetOwner()->GetRootComponent());
	}
	
	return AC;
}


float AWeaponBase::PlayAnimMontage(UAnimMontage* Anim)
{
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (Player && Anim)
	{
// 		USkeletalMeshComponent* PlayerMesh = Cast<USkeletalMeshComponent>(Player->GetComponentByClass(USkeletalMeshComponent::StaticClass()));
// 		PlayerMesh->AnimScriptInstance->Montage_Play(Anim);
		return Player->PlayAnimMontage(Anim);
	}
	
	return 0.f;
}

void AWeaponBase::StopPlayAnimMontage(UAnimMontage* Anim)
{
	ACharacter* Player = Cast<ACharacter>(GetOwner());
	if (Player)
	{
		return Player->StopAnimMontage(Anim);
	}
}