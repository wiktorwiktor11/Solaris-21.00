﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Consumable_Throw_Secondary_Parent

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C
// 0x0400 (0x0F10 - 0x0B10)
class UGA_Athena_Consumable_Throw_Secondary_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbilityKeyPressed;                                 // 0x0B20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InThrowWindup;                                     // 0x0B21(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B22[0x2];                                      // 0x0B22(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AdditionalThrowAngle;                              // 0x0B24(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTossPitch;                                      // 0x0B28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2C[0x4];                                      // 0x0B2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GrenadeTargetingOriginOffset;                      // 0x0B30(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffset_Crouched;             // 0x0B48(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    SpawnedProjectile;                                 // 0x0B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Proj_ThrownProjectile;                             // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         ProjectileSpeed;                                   // 0x0B70(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ProjectileGravityScale;                            // 0x0B98(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TrajectoryUpdateInterval;                          // 0x0BC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC4[0x4];                                      // 0x0BC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CookMonage;                                        // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ThrowMontage;                                      // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_OnThrow;                                        // 0x0BD8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BDC[0x4];                                      // 0x0BDC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ProjectileTrajectory_C*             TrajectoryIndicator;                               // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorClass;                          // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyMaxSpeed;                                     // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyGravity;                                      // 0x0BF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyExtent;                                       // 0x0BF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyTimeStep;                                     // 0x0BFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TrajectoryCollisionProfileName;                    // 0x0C00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_CookLoop;                                       // 0x0C04(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_InWindup;                                       // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffsetWater;                 // 0x0C10(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            Handle_GE_InWindup;                                // 0x0C28(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_DefaultExplosion;                               // 0x0C30(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionEffectLevel;                              // 0x0C34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       ExplosionEffectContainerSpec;                      // 0x0C38(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SpawnedOnEquip;                                    // 0x0CF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CF1[0x3];                                      // 0x0CF1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           EC_DefaultHit;                                     // 0x0CF4(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         HitEffectLevel;                                    // 0x0CF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CFC[0x4];                                      // 0x0CFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       HitEffectContainerSpec;                            // 0x0D00(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void()>              OnProjectileSpawn;                                 // 0x0DB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasAdditionalExplosion;                            // 0x0DC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC9[0x3];                                      // 0x0DC9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           EC_AdditionalExplosion;                            // 0x0DCC(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         AdditionalExplodeLevel;                            // 0x0DD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD4[0x4];                                      // 0x0DD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortGameplayEffectContainerSpec       AdditionalContainerSpec;                           // 0x0DD8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  QuestCreditTargetTag;                              // 0x0E90(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                          IsThrowing;                                        // 0x0EB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ThrowInstantly;                                    // 0x0EB1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EB2[0x6];                                      // 0x0EB2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         ThrowConsumablesEnabled;                           // 0x0EB8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DummyMaxSteps;                                     // 0x0EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EE4[0x4];                                      // 0x0EE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CameraMode;                                        // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Tag_BlockAbilityActivation;                        // 0x0EF0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void AddCookGC();
	void AddValidCamera();
	void AttemptSpawnThrownProjectile();
	void Cancelled_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void CleanupTrajectory();
	void CleanupTrajectoryIndicatorOnUnequip();
	void Completed_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6(const struct FGameplayEventData& Payload);
	void EventReceived_69B60BD84BF46B2613ACDE9E1A689444(const struct FGameplayEventData& Payload);
	void ExecuteThrowGC();
	void ExecuteUbergraph_GA_Athena_Consumable_Throw_Secondary_Parent(int32 EntryPoint);
	void GetProjectileInitialGravityScaleToUse(float* GravityScaleToUse);
	void GetProjectileInitialSpeedToUse(float* ProjectileSpeedToUse);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult);
	void InitTrajectoryVariables();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnAbilityInputReleased();
	void OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1();
	void OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1();
	void OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1();
	void OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3();
	void OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1();
	void OnProjectileSetup();
	void OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile_0);
	void OnSync_65BB2FE343979EBE180BC6A76D8BF92F();
	void PostThrowCleanup();
	void PrethrowSetup();
	void RemoveCookGC();
	void SetupDummyProjectile();
	void SpawnThrownProjectile(class UClass* ProjectileClass_0, const struct FVector& ProjectileSpawnLocation, const struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec_0, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec_0, float ProjectileInitialSpeed, float ProjectileGravityScale_0, class AFortProjectileBase** SpawnedProjectile_0);
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip);
	void ThrowMontageStarted();
	void ThrowProjectile();
	void Triggered_7CDE11F247AD13935CDDCCA29666AC3E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void UpdateTrajectory();
	void UpdateTrajectorySpline();

	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn) const;
	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor() const;
	void GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation) const;
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;
	bool ShouldOnlyShowTrajectoryOnUse() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Consumable_Throw_Secondary_Parent_C">();
	}
	static class UGA_Athena_Consumable_Throw_Secondary_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Consumable_Throw_Secondary_Parent_C>();
	}
};
static_assert(alignof(UGA_Athena_Consumable_Throw_Secondary_Parent_C) == 0x000008, "Wrong alignment on UGA_Athena_Consumable_Throw_Secondary_Parent_C");
static_assert(sizeof(UGA_Athena_Consumable_Throw_Secondary_Parent_C) == 0x000F10, "Wrong size on UGA_Athena_Consumable_Throw_Secondary_Parent_C");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, UberGraphFrame) == 0x000B10, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, PlayerPawn) == 0x000B18, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, AbilityKeyPressed) == 0x000B20, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::AbilityKeyPressed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, InThrowWindup) == 0x000B21, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::InThrowWindup' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, AdditionalThrowAngle) == 0x000B24, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::AdditionalThrowAngle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, MaxTossPitch) == 0x000B28, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::MaxTossPitch' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, GrenadeTargetingOriginOffset) == 0x000B30, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::GrenadeTargetingOriginOffset' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, GrenadeTargetingOriginOffset_Crouched) == 0x000B48, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::GrenadeTargetingOriginOffset_Crouched' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, SpawnedProjectile) == 0x000B60, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::SpawnedProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, Proj_ThrownProjectile) == 0x000B68, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::Proj_ThrownProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, ProjectileSpeed) == 0x000B70, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::ProjectileSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, ProjectileGravityScale) == 0x000B98, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::ProjectileGravityScale' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, TrajectoryUpdateInterval) == 0x000BC0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::TrajectoryUpdateInterval' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, CookMonage) == 0x000BC8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::CookMonage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, ThrowMontage) == 0x000BD0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::ThrowMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, GC_OnThrow) == 0x000BD8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::GC_OnThrow' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, TrajectoryIndicator) == 0x000BE0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::TrajectoryIndicator' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, TrajectoryIndicatorClass) == 0x000BE8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::TrajectoryIndicatorClass' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, DummyMaxSpeed) == 0x000BF0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::DummyMaxSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, DummyGravity) == 0x000BF4, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::DummyGravity' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, DummyExtent) == 0x000BF8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::DummyExtent' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, DummyTimeStep) == 0x000BFC, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::DummyTimeStep' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, TrajectoryCollisionProfileName) == 0x000C00, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::TrajectoryCollisionProfileName' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, GC_CookLoop) == 0x000C04, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::GC_CookLoop' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, GE_InWindup) == 0x000C08, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::GE_InWindup' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, GrenadeTargetingOriginOffsetWater) == 0x000C10, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::GrenadeTargetingOriginOffsetWater' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, Handle_GE_InWindup) == 0x000C28, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::Handle_GE_InWindup' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, EC_DefaultExplosion) == 0x000C30, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::EC_DefaultExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, ExplosionEffectLevel) == 0x000C34, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::ExplosionEffectLevel' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, ExplosionEffectContainerSpec) == 0x000C38, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::ExplosionEffectContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, SpawnedOnEquip) == 0x000CF0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::SpawnedOnEquip' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, EC_DefaultHit) == 0x000CF4, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::EC_DefaultHit' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, HitEffectLevel) == 0x000CF8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::HitEffectLevel' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, HitEffectContainerSpec) == 0x000D00, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::HitEffectContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, OnProjectileSpawn) == 0x000DB8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::OnProjectileSpawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, HasAdditionalExplosion) == 0x000DC8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::HasAdditionalExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, EC_AdditionalExplosion) == 0x000DCC, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::EC_AdditionalExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, AdditionalExplodeLevel) == 0x000DD0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::AdditionalExplodeLevel' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, AdditionalContainerSpec) == 0x000DD8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::AdditionalContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, QuestCreditTargetTag) == 0x000E90, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::QuestCreditTargetTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, IsThrowing) == 0x000EB0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::IsThrowing' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, ThrowInstantly) == 0x000EB1, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::ThrowInstantly' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, ThrowConsumablesEnabled) == 0x000EB8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::ThrowConsumablesEnabled' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, DummyMaxSteps) == 0x000EE0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::DummyMaxSteps' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, CameraMode) == 0x000EE8, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::CameraMode' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Consumable_Throw_Secondary_Parent_C, Tag_BlockAbilityActivation) == 0x000EF0, "Member 'UGA_Athena_Consumable_Throw_Secondary_Parent_C::Tag_BlockAbilityActivation' has a wrong offset!");

}

