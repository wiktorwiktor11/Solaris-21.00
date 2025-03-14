﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_RealityFlower_Seed

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_RealityFlower_Seed.BGA_Athena_RealityFlower_Seed_C
// 0x0428 (0x0D98 - 0x0970)
class ABGA_Athena_RealityFlower_Seed_C final : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0970(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_RealitySeed_Trail;                              // 0x0978(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0980(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0988(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*       FortProjectileMovement;                            // 0x0990(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SpeedSpinTimeline_NewTrack_0_C81136A04C6F48BC3C7A9DAFDD599406; // 0x0998(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SpeedSpinTimeline__Direction_C81136A04C6F48BC3C7A9DAFDD599406; // 0x099C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99D[0x3];                                      // 0x099D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SpeedSpinTimeline;                                 // 0x09A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialSpeedDecay_Alpha_8F2336344469DFC331ADC299FA13B3FD; // 0x09A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            InitialSpeedDecay__Direction_8F2336344469DFC331ADC299FA13B3FD; // 0x09AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AD[0x3];                                      // 0x09AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     InitialSpeedDecay;                                 // 0x09B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text_Interact;                                     // 0x09B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_MaxLifespan;                                   // 0x09D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_SeedCollisionRadius;                           // 0x09F8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_InteractTime;                                  // 0x0A20(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*               Item_Seed;                                         // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Collect;                                        // 0x0A50(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Destroyed;                                      // 0x0A54(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location_Start;                                    // 0x0A58(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_Leash_Radius;                                  // 0x0A70(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                RandomUnitVector;                                  // 0x0A98(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_Drift_TimeBetweenDirectionChanges_Min;         // 0x0AB0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Drift_TimeBetweenDirectionChanges_Max;         // 0x0AD8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Debug;                                             // 0x0B00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B01[0x7];                                      // 0x0B01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_Drift_ZComponent_Min;                          // 0x0B08(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Drift_ZComponent_Max;                          // 0x0B30(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Acceleration;                                  // 0x0B58(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Bounciness;                                    // 0x0B80(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_BounceFriction;                                // 0x0BA8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Initial_Speed;                                 // 0x0BD0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Initial_GravityScale;                          // 0x0BF8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Initial_Velocity_Pitch_Min;                    // 0x0C20(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Initial_Velocity_Pitch_Max;                    // 0x0C48(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Initial_SpeedDecayDuration;                    // 0x0C70(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Final_Speed;                                   // 0x0C98(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Final_GravityScale;                            // 0x0CC0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Bounce_ZNormalMinThresholdToPop;               // 0x0CE8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_Bounce_ZImpactVelocityToPop_Min;               // 0x0D10(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                InitialVelocityRep;                                // 0x0D38(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasSpawnedItem;                                    // 0x0D50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BounceFXOnCooldown;                                // 0x0D51(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D52[0x6];                                      // 0x0D52(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_BounceFXCooldown;                              // 0x0D58(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           GC_HitWater;                                       // 0x0D80(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_HitWorld;                                       // 0x0D84(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_InAir;                                          // 0x0D88(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RotationRate;                                      // 0x0D8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SeedSpinPlayRate;                                  // 0x0D90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SeedSpinSpeed;                                     // 0x0D94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void BndEvt__BGA_Athena_RealityFlower_Seed_FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void DebugServerLocation();
	void DoRandomDriftAfterRandomTime();
	void ExecuteUbergraph_BGA_Athena_RealityFlower_Seed(int32 EntryPoint);
	void InitialSpeedDecay__FinishedFunc();
	void InitialSpeedDecay__UpdateFunc();
	void InitialVelocity();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void PlayFX_Idle();
	void RandomDrift();
	void ReceiveBeginPlay();
	void RepSetInitialVelocity();
	void SetBounceFXCooldown();
	void SetMaxSpeedAndGavityByAlpha(float Alpha);
	void SpawnItemPickupAndDie();
	void SpeedSpinTimeline__FinishedFunc();
	void SpeedSpinTimeline__UpdateFunc();
	void SpinSeed();
	void UserConstructionScript();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_RealityFlower_Seed_C">();
	}
	static class ABGA_Athena_RealityFlower_Seed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_RealityFlower_Seed_C>();
	}
};
static_assert(alignof(ABGA_Athena_RealityFlower_Seed_C) == 0x000008, "Wrong alignment on ABGA_Athena_RealityFlower_Seed_C");
static_assert(sizeof(ABGA_Athena_RealityFlower_Seed_C) == 0x000D98, "Wrong size on ABGA_Athena_RealityFlower_Seed_C");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, UberGraphFrame) == 0x000970, "Member 'ABGA_Athena_RealityFlower_Seed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, NS_RealitySeed_Trail) == 0x000978, "Member 'ABGA_Athena_RealityFlower_Seed_C::NS_RealitySeed_Trail' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, StaticMesh) == 0x000980, "Member 'ABGA_Athena_RealityFlower_Seed_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Sphere) == 0x000988, "Member 'ABGA_Athena_RealityFlower_Seed_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, FortProjectileMovement) == 0x000990, "Member 'ABGA_Athena_RealityFlower_Seed_C::FortProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, SpeedSpinTimeline_NewTrack_0_C81136A04C6F48BC3C7A9DAFDD599406) == 0x000998, "Member 'ABGA_Athena_RealityFlower_Seed_C::SpeedSpinTimeline_NewTrack_0_C81136A04C6F48BC3C7A9DAFDD599406' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, SpeedSpinTimeline__Direction_C81136A04C6F48BC3C7A9DAFDD599406) == 0x00099C, "Member 'ABGA_Athena_RealityFlower_Seed_C::SpeedSpinTimeline__Direction_C81136A04C6F48BC3C7A9DAFDD599406' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, SpeedSpinTimeline) == 0x0009A0, "Member 'ABGA_Athena_RealityFlower_Seed_C::SpeedSpinTimeline' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, InitialSpeedDecay_Alpha_8F2336344469DFC331ADC299FA13B3FD) == 0x0009A8, "Member 'ABGA_Athena_RealityFlower_Seed_C::InitialSpeedDecay_Alpha_8F2336344469DFC331ADC299FA13B3FD' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, InitialSpeedDecay__Direction_8F2336344469DFC331ADC299FA13B3FD) == 0x0009AC, "Member 'ABGA_Athena_RealityFlower_Seed_C::InitialSpeedDecay__Direction_8F2336344469DFC331ADC299FA13B3FD' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, InitialSpeedDecay) == 0x0009B0, "Member 'ABGA_Athena_RealityFlower_Seed_C::InitialSpeedDecay' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Text_Interact) == 0x0009B8, "Member 'ABGA_Athena_RealityFlower_Seed_C::Text_Interact' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_MaxLifespan) == 0x0009D0, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_MaxLifespan' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_SeedCollisionRadius) == 0x0009F8, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_SeedCollisionRadius' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_InteractTime) == 0x000A20, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_InteractTime' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Item_Seed) == 0x000A48, "Member 'ABGA_Athena_RealityFlower_Seed_C::Item_Seed' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, GC_Collect) == 0x000A50, "Member 'ABGA_Athena_RealityFlower_Seed_C::GC_Collect' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, GC_Destroyed) == 0x000A54, "Member 'ABGA_Athena_RealityFlower_Seed_C::GC_Destroyed' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Location_Start) == 0x000A58, "Member 'ABGA_Athena_RealityFlower_Seed_C::Location_Start' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Leash_Radius) == 0x000A70, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Leash_Radius' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, RandomUnitVector) == 0x000A98, "Member 'ABGA_Athena_RealityFlower_Seed_C::RandomUnitVector' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Drift_TimeBetweenDirectionChanges_Min) == 0x000AB0, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Drift_TimeBetweenDirectionChanges_Min' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Drift_TimeBetweenDirectionChanges_Max) == 0x000AD8, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Drift_TimeBetweenDirectionChanges_Max' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Debug) == 0x000B00, "Member 'ABGA_Athena_RealityFlower_Seed_C::Debug' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Drift_ZComponent_Min) == 0x000B08, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Drift_ZComponent_Min' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Drift_ZComponent_Max) == 0x000B30, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Drift_ZComponent_Max' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Acceleration) == 0x000B58, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Acceleration' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Bounciness) == 0x000B80, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Bounciness' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_BounceFriction) == 0x000BA8, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_BounceFriction' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Initial_Speed) == 0x000BD0, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Initial_Speed' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Initial_GravityScale) == 0x000BF8, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Initial_GravityScale' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Initial_Velocity_Pitch_Min) == 0x000C20, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Initial_Velocity_Pitch_Min' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Initial_Velocity_Pitch_Max) == 0x000C48, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Initial_Velocity_Pitch_Max' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Initial_SpeedDecayDuration) == 0x000C70, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Initial_SpeedDecayDuration' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Final_Speed) == 0x000C98, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Final_Speed' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Final_GravityScale) == 0x000CC0, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Final_GravityScale' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Bounce_ZNormalMinThresholdToPop) == 0x000CE8, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Bounce_ZNormalMinThresholdToPop' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_Bounce_ZImpactVelocityToPop_Min) == 0x000D10, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_Bounce_ZImpactVelocityToPop_Min' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, InitialVelocityRep) == 0x000D38, "Member 'ABGA_Athena_RealityFlower_Seed_C::InitialVelocityRep' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, HasSpawnedItem) == 0x000D50, "Member 'ABGA_Athena_RealityFlower_Seed_C::HasSpawnedItem' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, BounceFXOnCooldown) == 0x000D51, "Member 'ABGA_Athena_RealityFlower_Seed_C::BounceFXOnCooldown' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, Row_BounceFXCooldown) == 0x000D58, "Member 'ABGA_Athena_RealityFlower_Seed_C::Row_BounceFXCooldown' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, GC_HitWater) == 0x000D80, "Member 'ABGA_Athena_RealityFlower_Seed_C::GC_HitWater' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, GC_HitWorld) == 0x000D84, "Member 'ABGA_Athena_RealityFlower_Seed_C::GC_HitWorld' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, GC_InAir) == 0x000D88, "Member 'ABGA_Athena_RealityFlower_Seed_C::GC_InAir' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, RotationRate) == 0x000D8C, "Member 'ABGA_Athena_RealityFlower_Seed_C::RotationRate' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, SeedSpinPlayRate) == 0x000D90, "Member 'ABGA_Athena_RealityFlower_Seed_C::SeedSpinPlayRate' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_RealityFlower_Seed_C, SeedSpinSpeed) == 0x000D94, "Member 'ABGA_Athena_RealityFlower_Seed_C::SeedSpinSpeed' has a wrong offset!");

}

