// Fill out your copyright notice in the Description page of Project Settings.
#include "Weapon/WeaponBase.h"
#include "FPS_SLua/FPS_SLua.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

CREATETESTLOG

AWeaponBase::AWeaponBase() : ALuaActor(), AttackInterval(1.0f)
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

	PrimaryActorTick.bCanEverTick = true;
	
}

void AWeaponBase::StartAttack()
{
	if (CanAttack() && !IsAttacking())
	{
		float AttackDelay = 0.f;
		
// 		if (GetWeaponState() == EWeaponState::Euiped)
// 		{
// 
// 		}
		if (GetWeaponState() == EWeaponState::WaitAttackEnd)
		{
			AttackDelay = GetAttackIntervalSurplusTime();
			GetWorld()->GetTimerManager().ClearTimer(FinishedAttack);
		}

		SetWeaponState(EWeaponState::Attacking);	
		GetWorld()->GetTimerManager().SetTimer(WeaponAttak, this, &AWeaponBase::Attack, AttackInterval, true, AttackDelay);
	}
}

void AWeaponBase::StopAttack()
{
	if (State == EWeaponState::Attacking)
	{
		SetWeaponState(EWeaponState::WaitAttackEnd);

		//Remove the "WeaponAttack" handle now, prevent to notify again before "FinishAttack"
		GetWorld()->GetTimerManager().ClearTimer(WeaponAttak);
		
		float SurplusTime = GetAttackIntervalSurplusTime();
		 
		if (SurplusTime == 0.f)
		{
			EndAttack();
		}
		else
		{	//You should wait for the current attack to complete
			GetWorld()->GetTimerManager().SetTimer(FinishedAttack, this, &AWeaponBase::EndAttack, SurplusTime, false);
		}
	}
}

void AWeaponBase::Attack_Implementation()
{
	if (CanAttack())
	{
		LastAttackTime = GetWorld()->GetTimeSeconds();
		bool Attacked = DoAttack();

		if (Attacked)
		{
			ProcessAttack();
		}
	}
}

void AWeaponBase::EndAttack_Implementation()
{
	//Only process EndAttack when the state is "WaitAttackEnd" 
	if (State == EWeaponState::WaitAttackEnd)
	{
		SetWeaponState(EWeaponState::Euiped);
	}
}

bool AWeaponBase::DoAttack()
{
	return true;
}

void AWeaponBase::ProcessAttack()
{

}

void AWeaponBase::Equip(APawn* PawnOwner)
{
	if (PawnOwner == nullptr)
		return ;

	UpdateOwner(PawnOwner);
	AttachToOwner();

	float EquipTime = PlayAnimMontage(EquipAnim);

	if(/*EquipTime > 0*/true)
	{
		GetWorld()->GetTimerManager().SetTimer(FinishedEquip, this, &AWeaponBase::ProcessEquiped,1.f,false);
	}

	OnEquiped();
}

void AWeaponBase::UnEquip()
{
	UpdateOwner(nullptr);
	SetWeaponState(EWeaponState::Unusable);

	OnUnEquiped();
}

void AWeaponBase::UpdateOwner(APawn* NewOwner)
{
	AController* OwnerCtr = nullptr;
	if (NewOwner)
	{
		OwnerCtr = NewOwner->GetController();
	}

	SetOwner(OwnerCtr);
	SetInstigator(NewOwner);
}

void AWeaponBase::ProcessEquiped()
{
	if (GetOwner())
	{
		SetWeaponState(EWeaponState::Euiped);
	}
	//GetWorld()->GetTimerManager().ClearTimer(FinishedEquip);
}

void AWeaponBase::OnEquiped()
{

}

void AWeaponBase::OnUnEquiped()
{

}



void AWeaponBase::AttachToOwner()
{
	ACharacter* PawnOwner = GetInstigator<ACharacter>();
	USkeletalMeshComponent* Mesh = PawnOwner ? PawnOwner->GetMesh() : nullptr;

	if (Mesh)
	{
		RootComponent->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform, AttachSlotName);
	}
	
}

void AWeaponBase::DetachFromOwner()
{
	RootComponent->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
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

void AWeaponBase::SetWeaponState(EWeaponState::Type NewState)
{
	if (State != NewState)
	{
		State = NewState;
	}
}

float AWeaponBase::GetAttackIntervalSurplusTime()
{
	float SurplusTime = LastAttackTime + AttackInterval - GetWorld()->GetTimeSeconds();
	SurplusTime = SurplusTime <= 0.01f ? 0.f : SurplusTime;

	return SurplusTime;
}

bool AWeaponBase::CanAttack() const
{
	return  State != EWeaponState::Unusable && State != EWeaponState::Reloadding;
	// && LastAttackTime == 0 || LastAttackTime + AttackInterval <= GetWorld()->GetTimeSeconds();		
}
