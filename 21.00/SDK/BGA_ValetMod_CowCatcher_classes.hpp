﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_ValetMod_CowCatcher

#include "Basic.hpp"

#include "GameplayTags_0_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_ValetMod_CowCatcher.BGA_ValetMod_CowCatcher_C
// 0x0080 (0x09F0 - 0x0970)
class ABGA_ValetMod_CowCatcher_C final : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0970(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0978(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortVehicleInterface> AttachedVehicle;                                   // 0x0980(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpinMag;                                           // 0x0990(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_994[0x4];                                      // 0x0994(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             CowCatcherRemovedSound;                            // 0x0998(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                         FX_CowCatcherApplied_NS;                           // 0x09A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CowCatcherAppliedSound;                            // 0x09A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Health_ToShowDmgCrinkle;                           // 0x09B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxCrinkleSeverity;                                // 0x09B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealthMaterialQuantizeSteps;                       // 0x09B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BC[0x4];                                      // 0x09BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         FX_CowCatcherRemoved_NS;                           // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BindVehicleSkeletalHitEvents;                      // 0x09C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartTrackingVehicleSkeletalMeshHits;              // 0x09C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CA[0x6];                                      // 0x09CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  HealingTag;                                        // 0x09D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BindVehicleHealthEvents();
	void CalculateLaunchDirection(struct FVector* LaunchDirection);
	bool CanDestroyBuilding(class AActor* Actor);
	void CleanupOwnerVehicleHealthBindings();
	void CreativeCleanup();
	void ExecuteUbergraph_BGA_ValetMod_CowCatcher(int32 EntryPoint);
	void HandleCreativeNullOwnerDestroy();
	void HealthChanged();
	void IgnoreEarlyCollisionOver();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnOwnerVehicleExploded(const class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle);
	void OnVehicleOwnerOutOfHealth(class AFortAthenaVehicle* DeadVehicle, const struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser);
	struct FVector RandomizeSpinThrust();
	void SFX();
	void ReceiveBeginPlay();
	void SetAttachedVehicle(TScriptInterface<class IFortVehicleInterface> AttachedVehicle_0);
	void SetupVehicleSkeletalHitNotifications();
	void UpdateDamageMaterials();
	void VehicleSkeletalMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_ValetMod_CowCatcher_C">();
	}
	static class ABGA_ValetMod_CowCatcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_ValetMod_CowCatcher_C>();
	}
};
static_assert(alignof(ABGA_ValetMod_CowCatcher_C) == 0x000008, "Wrong alignment on ABGA_ValetMod_CowCatcher_C");
static_assert(sizeof(ABGA_ValetMod_CowCatcher_C) == 0x0009F0, "Wrong size on ABGA_ValetMod_CowCatcher_C");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, UberGraphFrame) == 0x000970, "Member 'ABGA_ValetMod_CowCatcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, StaticMesh) == 0x000978, "Member 'ABGA_ValetMod_CowCatcher_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, AttachedVehicle) == 0x000980, "Member 'ABGA_ValetMod_CowCatcher_C::AttachedVehicle' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, SpinMag) == 0x000990, "Member 'ABGA_ValetMod_CowCatcher_C::SpinMag' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, CowCatcherRemovedSound) == 0x000998, "Member 'ABGA_ValetMod_CowCatcher_C::CowCatcherRemovedSound' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, FX_CowCatcherApplied_NS) == 0x0009A0, "Member 'ABGA_ValetMod_CowCatcher_C::FX_CowCatcherApplied_NS' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, CowCatcherAppliedSound) == 0x0009A8, "Member 'ABGA_ValetMod_CowCatcher_C::CowCatcherAppliedSound' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, Health_ToShowDmgCrinkle) == 0x0009B0, "Member 'ABGA_ValetMod_CowCatcher_C::Health_ToShowDmgCrinkle' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, MaxCrinkleSeverity) == 0x0009B4, "Member 'ABGA_ValetMod_CowCatcher_C::MaxCrinkleSeverity' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, HealthMaterialQuantizeSteps) == 0x0009B8, "Member 'ABGA_ValetMod_CowCatcher_C::HealthMaterialQuantizeSteps' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, FX_CowCatcherRemoved_NS) == 0x0009C0, "Member 'ABGA_ValetMod_CowCatcher_C::FX_CowCatcherRemoved_NS' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, BindVehicleSkeletalHitEvents) == 0x0009C8, "Member 'ABGA_ValetMod_CowCatcher_C::BindVehicleSkeletalHitEvents' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, StartTrackingVehicleSkeletalMeshHits) == 0x0009C9, "Member 'ABGA_ValetMod_CowCatcher_C::StartTrackingVehicleSkeletalMeshHits' has a wrong offset!");
static_assert(offsetof(ABGA_ValetMod_CowCatcher_C, HealingTag) == 0x0009D0, "Member 'ABGA_ValetMod_CowCatcher_C::HealingTag' has a wrong offset!");

}

