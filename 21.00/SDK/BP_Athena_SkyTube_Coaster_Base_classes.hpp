﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Athena_SkyTube_Coaster_Base

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Athena_SkyTube_Coaster_Base.BP_Athena_SkyTube_Coaster_Base_C
// 0x0278 (0x0A88 - 0x0810)
class ABP_Athena_SkyTube_Coaster_Base_C : public AFortSkyTube
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0810(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Direction_Guide_Arrow;                             // 0x0818(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Rail;                                           // 0x0820(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                AbilitySystem;                                     // 0x0828(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortSplineAudioComponent*              FortSplineAudio;                                   // 0x0830(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            SplineStaticMesh;                                  // 0x0838(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             CollisionEnabled;                                  // 0x0840(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESplineMeshAxis                               MeshForwardAxis;                                   // 0x0841(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_842[0x2];                                      // 0x0842(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CollisionProfileName;                              // 0x0844(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoSmoothTangent;                                 // 0x0848(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_849[0x3];                                      // 0x0849(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Tension;                                           // 0x084C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalBoostMultiplier;                              // 0x0850(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalBoostFlatForce;                               // 0x0854(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     SplineMeshMaterialOverride;                        // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     SplinePointTransforms;                             // 0x0860(0x0010)(Edit, BlueprintVisible)
	bool                                          ExcludeFromMediumHLOD;                             // 0x0870(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_871[0x7];                                      // 0x0871(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         DataSkytubeLaunchClamp;                            // 0x0878(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataMinBoostMultiplier;                            // 0x08A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataMaxBoostMultiplier;                            // 0x08C8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataMinFlatZBoost;                                 // 0x08F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataMaxFlatZBoost;                                 // 0x0918(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataVerticalVelocityMultiplier;                    // 0x0940(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         DataHorizontalAccelerationMultiplier;              // 0x0968(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 Ground_ParticleSystem;                             // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SplinePointSubtractor;                             // 0x0998(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99C[0x4];                                      // 0x099C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SkyTubeDestructionGEApplication_Timer;             // 0x09A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DEPRECATED_UseOldConstructionScript;               // 0x09A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A9[0x7];                                      // 0x09A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Player_Enter_Tube_Sound;                           // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Player_Exit_Tube_Sound;                            // 0x09B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Veh_Enter_Tube_Sound;                              // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Veh_Exit_Tube_Sound;                               // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TubeScale;                                         // 0x09D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min_Entry_Z;                                       // 0x09E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E4[0x4];                                      // 0x09E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class AActor*, struct FVector>           Baller_Map;                                        // 0x09E8(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FTimerHandle                           Baller_Update_Timer;                               // 0x0A38(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Exiting_Actor;                                     // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Ballercoaster_Sparks_FX_Asset;                     // 0x0A48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Mag_Field_Gameplay_Cue_Tag;                        // 0x0A50(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Sparks_Gameplay_Cue_Tag;                           // 0x0A54(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Entering_Actor;                                    // 0x0A58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         CoasterDisabled;                                   // 0x0A60(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Actor_Exit_Skytube(class AActor* OtherActor);
	void AddSplineMesh(class USplineMeshComponent** NewSplineMesh);
	void Baller_Array_Upate();
	void CalculateLaunchForce(class AFortPlayerPawn* Pawn, const struct FVector& Velocity, struct FVector* Out_Launch);
	void CheckZDirection(class AFortPlayerPawn* Pawn, const struct FVector& Velocity);
	void CoasterEnabled(bool* Coaster_Enabled);
	void ExecuteUbergraph_BP_Athena_SkyTube_Coaster_Base(int32 EntryPoint);
	void Exit_via_Boost(class AActor* Actor);
	void HandleForcedExit(class AActor* ExitingPawn);
	void Is_Still_Riding_Coaster(class AActor* Actor, bool* Still_Riding);
	void LaunchVehicle(class AFortAthenaVehicle* Vehicle);
	void OnEnabledChanged();
	void OnStartShuttingDown();
	void PlaySkytubeEnterSound();
	void PlaySkytubeExitSound();
	void PlaySkytubeVehEnterSound();
	void PlaySkytubeVehExitSound();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void Removed_C965BB264D8242A81CE17FBC12BA18E4();
	void Return_to_Skytube(class AActor* Returning_Actor);
	void Set_Arrow_Guide();
	void Should_Actor_Enter_Sky_Tube(class AActor* Actor, bool* Should_Enter);
	void SmoothTangents(const struct FVector& Location_A, const struct FVector& Tangent_A, const struct FVector& Location_B, const struct FVector& Tangent_B, struct FVector* Tangent_0, struct FVector* Tangent_1);
	void Update_Coaster_Map_Keys(class AActor* Actor_Key);
	void Update_LED_VFX(TArray<struct FVector>& Location_Values, bool* Track_Empty);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Athena_SkyTube_Coaster_Base_C">();
	}
	static class ABP_Athena_SkyTube_Coaster_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Athena_SkyTube_Coaster_Base_C>();
	}
};
static_assert(alignof(ABP_Athena_SkyTube_Coaster_Base_C) == 0x000008, "Wrong alignment on ABP_Athena_SkyTube_Coaster_Base_C");
static_assert(sizeof(ABP_Athena_SkyTube_Coaster_Base_C) == 0x000A88, "Wrong size on ABP_Athena_SkyTube_Coaster_Base_C");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, UberGraphFrame) == 0x000810, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Direction_Guide_Arrow) == 0x000818, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Direction_Guide_Arrow' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, SM_Rail) == 0x000820, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::SM_Rail' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, AbilitySystem) == 0x000828, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::AbilitySystem' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, FortSplineAudio) == 0x000830, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::FortSplineAudio' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, SplineStaticMesh) == 0x000838, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::SplineStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, CollisionEnabled) == 0x000840, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::CollisionEnabled' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, MeshForwardAxis) == 0x000841, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::MeshForwardAxis' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, CollisionProfileName) == 0x000844, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::CollisionProfileName' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, AutoSmoothTangent) == 0x000848, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::AutoSmoothTangent' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Tension) == 0x00084C, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Tension' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, FinalBoostMultiplier) == 0x000850, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::FinalBoostMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, FinalBoostFlatForce) == 0x000854, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::FinalBoostFlatForce' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, SplineMeshMaterialOverride) == 0x000858, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::SplineMeshMaterialOverride' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, SplinePointTransforms) == 0x000860, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::SplinePointTransforms' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, ExcludeFromMediumHLOD) == 0x000870, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::ExcludeFromMediumHLOD' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, DataSkytubeLaunchClamp) == 0x000878, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::DataSkytubeLaunchClamp' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, DataMinBoostMultiplier) == 0x0008A0, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::DataMinBoostMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, DataMaxBoostMultiplier) == 0x0008C8, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::DataMaxBoostMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, DataMinFlatZBoost) == 0x0008F0, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::DataMinFlatZBoost' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, DataMaxFlatZBoost) == 0x000918, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::DataMaxFlatZBoost' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, DataVerticalVelocityMultiplier) == 0x000940, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::DataVerticalVelocityMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, DataHorizontalAccelerationMultiplier) == 0x000968, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::DataHorizontalAccelerationMultiplier' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Ground_ParticleSystem) == 0x000990, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Ground_ParticleSystem' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, SplinePointSubtractor) == 0x000998, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::SplinePointSubtractor' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, SkyTubeDestructionGEApplication_Timer) == 0x0009A0, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::SkyTubeDestructionGEApplication_Timer' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, DEPRECATED_UseOldConstructionScript) == 0x0009A8, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::DEPRECATED_UseOldConstructionScript' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Player_Enter_Tube_Sound) == 0x0009B0, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Player_Enter_Tube_Sound' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Player_Exit_Tube_Sound) == 0x0009B8, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Player_Exit_Tube_Sound' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Veh_Enter_Tube_Sound) == 0x0009C0, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Veh_Enter_Tube_Sound' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Veh_Exit_Tube_Sound) == 0x0009C8, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Veh_Exit_Tube_Sound' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, TubeScale) == 0x0009D0, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::TubeScale' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Min_Entry_Z) == 0x0009E0, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Min_Entry_Z' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Baller_Map) == 0x0009E8, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Baller_Map' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Baller_Update_Timer) == 0x000A38, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Baller_Update_Timer' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Exiting_Actor) == 0x000A40, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Exiting_Actor' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Ballercoaster_Sparks_FX_Asset) == 0x000A48, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Ballercoaster_Sparks_FX_Asset' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Mag_Field_Gameplay_Cue_Tag) == 0x000A50, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Mag_Field_Gameplay_Cue_Tag' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Sparks_Gameplay_Cue_Tag) == 0x000A54, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Sparks_Gameplay_Cue_Tag' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, Entering_Actor) == 0x000A58, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::Entering_Actor' has a wrong offset!");
static_assert(offsetof(ABP_Athena_SkyTube_Coaster_Base_C, CoasterDisabled) == 0x000A60, "Member 'ABP_Athena_SkyTube_Coaster_Base_C::CoasterDisabled' has a wrong offset!");

}

