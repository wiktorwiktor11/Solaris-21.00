﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_ChillBronco

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_Prj_ThrownConsumable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C
// 0x0170 (0x0C08 - 0x0A98)
class AB_Prj_Athena_ChillBronco_C final : public AB_Prj_ThrownConsumable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_Athena_ChillBronco_C;         // 0x0A98(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Proj_Trail;                                        // 0x0AA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_ChugBomb;                                       // 0x0AA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_InAirLoop;                                   // 0x0AB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              PlayerPawn;                                        // 0x0AB8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0AC0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0AD8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HealthHealAmount;                                  // 0x0AF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShieldHealAmount;                                  // 0x0AF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHealAmount;                                     // 0x0AF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AFC[0x4];                                      // 0x0AFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         MaxHealValue;                                      // 0x0B00(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         HealPool_Duration;                                 // 0x0B28(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          GrantHealth;                                       // 0x0B50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GrantShield;                                       // 0x0B51(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B52[0x6];                                      // 0x0B52(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraSystem*                         HealOnlyFX;                                        // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Stopped;                                           // 0x0B60(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B61[0x7];                                      // 0x0B61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         HitActors;                                         // 0x0B68(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPlayerPawn*                        HitPlayerPawn;                                     // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      Owning_Player_Quest_Manager;                       // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Heal_Teammate_TC;                                  // 0x0B88(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  Heal_Squadmate_TC;                                 // 0x0BA8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         WaterTraceRadius;                                  // 0x0BC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BCC[0x4];                                      // 0x0BCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      WaterTraceObjectTypes;                             // 0x0BD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         LandscapeExtinguishRadius;                         // 0x0BE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE4[0x4];                                      // 0x0BE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TraceIgnoreTags;                                   // 0x0BE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ApplyWaterInRadiusIfCurieEnabled(const struct FHitResult& HitResult);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent_0, bool bIsFirstBody);
	void DoHealCheck(const TArray<class AActor*>& HitActors_0);
	void EnableCollision();
	void ExecuteUbergraph_B_Prj_Athena_ChillBronco(int32 EntryPoint);
	void GetMissingHealth(float* MissingHealth);
	void GetMissingShield(float* MissingShield);
	void HealPlayer();
	void KillDelay();
	void OnExploded(const TArray<class AActor*>& HitActors_0, const TArray<struct FHitResult>& HitResults);
	void OnRep_PlayerPawn();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void QuestCheckSquadMember(class AFortPawn* PlayerPawnHit);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation_0, const struct FVector& HitNormal_0, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ResetVariables();
	void UpdateHealthShieldHealAmounts();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_ChillBronco_C">();
	}
	static class AB_Prj_Athena_ChillBronco_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_ChillBronco_C>();
	}
};
static_assert(alignof(AB_Prj_Athena_ChillBronco_C) == 0x000008, "Wrong alignment on AB_Prj_Athena_ChillBronco_C");
static_assert(sizeof(AB_Prj_Athena_ChillBronco_C) == 0x000C08, "Wrong size on AB_Prj_Athena_ChillBronco_C");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, UberGraphFrame_B_Prj_Athena_ChillBronco_C) == 0x000A98, "Member 'AB_Prj_Athena_ChillBronco_C::UberGraphFrame_B_Prj_Athena_ChillBronco_C' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, Proj_Trail) == 0x000AA0, "Member 'AB_Prj_Athena_ChillBronco_C::Proj_Trail' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, SK_ChugBomb) == 0x000AA8, "Member 'AB_Prj_Athena_ChillBronco_C::SK_ChugBomb' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, Audio_InAirLoop) == 0x000AB0, "Member 'AB_Prj_Athena_ChillBronco_C::Audio_InAirLoop' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, PlayerPawn) == 0x000AB8, "Member 'AB_Prj_Athena_ChillBronco_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, HitLocation) == 0x000AC0, "Member 'AB_Prj_Athena_ChillBronco_C::HitLocation' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, HitNormal) == 0x000AD8, "Member 'AB_Prj_Athena_ChillBronco_C::HitNormal' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, HealthHealAmount) == 0x000AF0, "Member 'AB_Prj_Athena_ChillBronco_C::HealthHealAmount' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, ShieldHealAmount) == 0x000AF4, "Member 'AB_Prj_Athena_ChillBronco_C::ShieldHealAmount' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, MaxHealAmount) == 0x000AF8, "Member 'AB_Prj_Athena_ChillBronco_C::MaxHealAmount' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, MaxHealValue) == 0x000B00, "Member 'AB_Prj_Athena_ChillBronco_C::MaxHealValue' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, HealPool_Duration) == 0x000B28, "Member 'AB_Prj_Athena_ChillBronco_C::HealPool_Duration' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, GrantHealth) == 0x000B50, "Member 'AB_Prj_Athena_ChillBronco_C::GrantHealth' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, GrantShield) == 0x000B51, "Member 'AB_Prj_Athena_ChillBronco_C::GrantShield' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, HealOnlyFX) == 0x000B58, "Member 'AB_Prj_Athena_ChillBronco_C::HealOnlyFX' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, Stopped) == 0x000B60, "Member 'AB_Prj_Athena_ChillBronco_C::Stopped' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, HitActors) == 0x000B68, "Member 'AB_Prj_Athena_ChillBronco_C::HitActors' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, HitPlayerPawn) == 0x000B78, "Member 'AB_Prj_Athena_ChillBronco_C::HitPlayerPawn' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, Owning_Player_Quest_Manager) == 0x000B80, "Member 'AB_Prj_Athena_ChillBronco_C::Owning_Player_Quest_Manager' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, Heal_Teammate_TC) == 0x000B88, "Member 'AB_Prj_Athena_ChillBronco_C::Heal_Teammate_TC' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, Heal_Squadmate_TC) == 0x000BA8, "Member 'AB_Prj_Athena_ChillBronco_C::Heal_Squadmate_TC' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, WaterTraceRadius) == 0x000BC8, "Member 'AB_Prj_Athena_ChillBronco_C::WaterTraceRadius' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, WaterTraceObjectTypes) == 0x000BD0, "Member 'AB_Prj_Athena_ChillBronco_C::WaterTraceObjectTypes' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, LandscapeExtinguishRadius) == 0x000BE0, "Member 'AB_Prj_Athena_ChillBronco_C::LandscapeExtinguishRadius' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_ChillBronco_C, TraceIgnoreTags) == 0x000BE8, "Member 'AB_Prj_Athena_ChillBronco_C::TraceIgnoreTags' has a wrong offset!");

}

