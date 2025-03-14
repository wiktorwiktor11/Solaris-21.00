﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_Athena_BuriedChest_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prop_Athena_BuriedChest_Parent.Prop_Athena_BuriedChest_Parent_C
// 0x01A0 (0x1010 - 0x0E70)
class AProp_Athena_BuriedChest_Parent_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Dirt;                                              // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       HitBox;                                            // 0x0E80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ChestClass;                                        // 0x0E88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Athena_BuriedChest_Chest_Parent_C*   ChestObject;                                       // 0x0E90(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ZOffset;                                           // 0x0E98(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ChestRaisePerHit;                                  // 0x0EB0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumTimesHit;                                       // 0x0EC8(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTimesHit;                                       // 0x0ECC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DigParticle;                                       // 0x0ED0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        FinalHitParticle;                                  // 0x0ED8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ChestRotNormal;                                    // 0x0EE0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TraceForChestOffset;                               // 0x0EF8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ChestCurrentPos;                                   // 0x0F10(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DirtMoveOnHit;                                     // 0x0F28(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DirtScaleOnHit;                                    // 0x0F40(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRotator>                       ChestRotPattern;                                   // 0x0F58(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_F68[0x8];                                      // 0x0F68(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             DirtTransform;                                     // 0x0F70(0x0060)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	struct FRotator                               ChestCurrentRot;                                   // 0x0FD0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          MaxDug;                                            // 0x0FE8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                          BeenDug;                                           // 0x0FE9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FEA[0x6];                                      // 0x0FEA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ChestInitialLoc;                                   // 0x0FF0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClientMoveChestLoc(const struct FVector& ChestLoc);
	void ClientMoveChestRot(const struct FRotator& ChestRot);
	void ExecuteUbergraph_Prop_Athena_BuriedChest_Parent(int32 EntryPoint);
	void FindPlacementNormal();
	void MoveChest();
	void OnBeenDug();
	void OnDamageTaken(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnMaxDug();
	void OnReady_063C028E4FA3620116C853828C1FABF5(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_ChestCurrentPos();
	void OnRep_ChestCurrentRot();
	void OnRep_DirtTransform();
	void OnRep_MaxDug();
	void ReceiveBeginPlay();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void TriggerDigFX(const struct FVector& Location);
	void UnhideDirt();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prop_Athena_BuriedChest_Parent_C">();
	}
	static class AProp_Athena_BuriedChest_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_Athena_BuriedChest_Parent_C>();
	}
};
static_assert(alignof(AProp_Athena_BuriedChest_Parent_C) == 0x000010, "Wrong alignment on AProp_Athena_BuriedChest_Parent_C");
static_assert(sizeof(AProp_Athena_BuriedChest_Parent_C) == 0x001010, "Wrong size on AProp_Athena_BuriedChest_Parent_C");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, UberGraphFrame) == 0x000E70, "Member 'AProp_Athena_BuriedChest_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, Dirt) == 0x000E78, "Member 'AProp_Athena_BuriedChest_Parent_C::Dirt' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, HitBox) == 0x000E80, "Member 'AProp_Athena_BuriedChest_Parent_C::HitBox' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ChestClass) == 0x000E88, "Member 'AProp_Athena_BuriedChest_Parent_C::ChestClass' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ChestObject) == 0x000E90, "Member 'AProp_Athena_BuriedChest_Parent_C::ChestObject' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ZOffset) == 0x000E98, "Member 'AProp_Athena_BuriedChest_Parent_C::ZOffset' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ChestRaisePerHit) == 0x000EB0, "Member 'AProp_Athena_BuriedChest_Parent_C::ChestRaisePerHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, NumTimesHit) == 0x000EC8, "Member 'AProp_Athena_BuriedChest_Parent_C::NumTimesHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, MaxTimesHit) == 0x000ECC, "Member 'AProp_Athena_BuriedChest_Parent_C::MaxTimesHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, DigParticle) == 0x000ED0, "Member 'AProp_Athena_BuriedChest_Parent_C::DigParticle' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, FinalHitParticle) == 0x000ED8, "Member 'AProp_Athena_BuriedChest_Parent_C::FinalHitParticle' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ChestRotNormal) == 0x000EE0, "Member 'AProp_Athena_BuriedChest_Parent_C::ChestRotNormal' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, TraceForChestOffset) == 0x000EF8, "Member 'AProp_Athena_BuriedChest_Parent_C::TraceForChestOffset' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ChestCurrentPos) == 0x000F10, "Member 'AProp_Athena_BuriedChest_Parent_C::ChestCurrentPos' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, DirtMoveOnHit) == 0x000F28, "Member 'AProp_Athena_BuriedChest_Parent_C::DirtMoveOnHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, DirtScaleOnHit) == 0x000F40, "Member 'AProp_Athena_BuriedChest_Parent_C::DirtScaleOnHit' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ChestRotPattern) == 0x000F58, "Member 'AProp_Athena_BuriedChest_Parent_C::ChestRotPattern' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, DirtTransform) == 0x000F70, "Member 'AProp_Athena_BuriedChest_Parent_C::DirtTransform' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ChestCurrentRot) == 0x000FD0, "Member 'AProp_Athena_BuriedChest_Parent_C::ChestCurrentRot' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, MaxDug) == 0x000FE8, "Member 'AProp_Athena_BuriedChest_Parent_C::MaxDug' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, BeenDug) == 0x000FE9, "Member 'AProp_Athena_BuriedChest_Parent_C::BeenDug' has a wrong offset!");
static_assert(offsetof(AProp_Athena_BuriedChest_Parent_C, ChestInitialLoc) == 0x000FF0, "Member 'AProp_Athena_BuriedChest_Parent_C::ChestInitialLoc' has a wrong offset!");

}

