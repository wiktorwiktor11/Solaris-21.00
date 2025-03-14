﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Athena_Generic_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// 0x00F0 (0x4EC0 - 0x4DD0)
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	uint8                                         Pad_4DC8[0x8];                                     // 0x4DC8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x4DD0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMotionWarpingComponent*                MotionWarping;                                     // 0x4DD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMultiInteractActorComponent_C*         MultiInteractActorComponent;                       // 0x4DE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;                          // 0x4DE8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;                             // 0x4DF8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;                                  // 0x4E08(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;                                 // 0x4E18(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;                                 // 0x4E28(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;                                // 0x4E38(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;                                 // 0x4E48(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPostProcessComponent*                  PlayerPostProcessFX;                               // 0x4E58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;                                    // 0x4E60(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x4E70(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMulticastInlineDelegate<void(class AFortPlayerPawnAthena* JumpingPlayer)> ShootingTargetReactToJump;                         // 0x4E80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)> OnPlayHit;                                         // 0x4E90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnEnteredVehicleDispatcher;                        // 0x4EA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnExitedVehicleDispatcher;                         // 0x4EB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void OnEnteredVehicle();
	void OnExitedVehicle();
	void OnJumped();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Athena_Generic_Parent_C">();
	}
	static class APlayerPawn_Athena_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Athena_Generic_Parent_C>();
	}
};
static_assert(alignof(APlayerPawn_Athena_Generic_Parent_C) == 0x000010, "Wrong alignment on APlayerPawn_Athena_Generic_Parent_C");
static_assert(sizeof(APlayerPawn_Athena_Generic_Parent_C) == 0x004EC0, "Wrong size on APlayerPawn_Athena_Generic_Parent_C");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, UberGraphFrame) == 0x004DD0, "Member 'APlayerPawn_Athena_Generic_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, MotionWarping) == 0x004DD8, "Member 'APlayerPawn_Athena_Generic_Parent_C::MotionWarping' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, MultiInteractActorComponent) == 0x004DE0, "Member 'APlayerPawn_Athena_Generic_Parent_C::MultiInteractActorComponent' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, Default_Weapon_Materials) == 0x004DE8, "Member 'APlayerPawn_Athena_Generic_Parent_C::Default_Weapon_Materials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnBackpackMaterials) == 0x004DF8, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnBackpackMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnHatMaterials) == 0x004E08, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnHatMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnHeadMaterials) == 0x004E18, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnHeadMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnBodyMaterials) == 0x004E28, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnBodyMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnCharmMaterials) == 0x004E38, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnCharmMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnFaceMaterials) == 0x004E48, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnFaceMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PlayerPostProcessFX) == 0x004E58, "Member 'APlayerPawn_Athena_Generic_Parent_C::PlayerPostProcessFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, SkeletalMeshes) == 0x004E60, "Member 'APlayerPawn_Athena_Generic_Parent_C::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, PawnMaterials_ALL) == 0x004E70, "Member 'APlayerPawn_Athena_Generic_Parent_C::PawnMaterials_ALL' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, ShootingTargetReactToJump) == 0x004E80, "Member 'APlayerPawn_Athena_Generic_Parent_C::ShootingTargetReactToJump' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, OnPlayHit) == 0x004E90, "Member 'APlayerPawn_Athena_Generic_Parent_C::OnPlayHit' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, OnEnteredVehicleDispatcher) == 0x004EA0, "Member 'APlayerPawn_Athena_Generic_Parent_C::OnEnteredVehicleDispatcher' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_Parent_C, OnExitedVehicleDispatcher) == 0x004EB0, "Member 'APlayerPawn_Athena_Generic_Parent_C::OnExitedVehicleDispatcher' has a wrong offset!");

}

