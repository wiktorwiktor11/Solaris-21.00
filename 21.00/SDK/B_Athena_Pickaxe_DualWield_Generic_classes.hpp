﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_Pickaxe_DualWield_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
// 0x00A8 (0x1558 - 0x14B0)
class AB_Athena_Pickaxe_DualWield_Generic_C final : public AFortWeaponPickaxeDualWieldAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Equipped;                                          // 0x14B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               IdleFX_Location_Rule;                              // 0x14B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Rotation_Rule;                             // 0x14BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Scale_Rule;                                // 0x14BB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               SwingFX_Location_Rule;                             // 0x14BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Rotation_Rule;                            // 0x14BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Scale_Rule;                               // 0x14BE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14BF[0x1];                                     // 0x14BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x14C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;                         // 0x14C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MeleeHeavy_PSC;                                    // 0x14D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x14D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14D9[0x7];                                     // 0x14D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x14E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x14E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Offhand_Alteration_Ambient_PS;                     // 0x14F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEquipPendingInstigator;                           // 0x14F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14F9[0x3];                                     // 0x14F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Offhand_Socket_Name;                               // 0x14FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           MontageReference;                                  // 0x1500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseTimeofDayControl;                               // 0x1508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1509[0x7];                                     // 0x1509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemComponent*                     Impact_FX;                                         // 0x1510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Swing_Right_;                                      // 0x1518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_1519[0x7];                                     // 0x1519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               Left_Swing_Rotation;                               // 0x1520(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Right_Swing_Rotation;                              // 0x1538(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Swing_Right__0;                                    // 0x1550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Anim_Trails_Disable();
	void Anim_Trails_Notify(bool bActive);
	void Bind_Dual_Melee_Swing_Events();
	void Binding_Time_of_Day_Control(bool F_);
	void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32 EntryPoint);
	void HandleKillWatch();
	void K2_OnUnEquip();
	void OnEquippedWeaponDestory();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnInitWeaponCosmetics();
	void OnInstigatorSet();
	void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject* Loaded);
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(class FName StatName, int32 StatValue);
	void OnWeaponAttached();
	void OnWeaponDetached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void PlayRClickImpacts();
	void Set_Active_Alteration_Idle_Particles(bool Active, bool Reset);
	void SetWpnRarity();
	void Swing_Left();
	void Swing_Left_2();
	void Swing_Left_End();
	void Swing_Right();
	void Swing_Right_2();
	void Swing_Right_End();
	void SwingLeft_Common();
	void SwingRight_Common();
	void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void Unbind_Dual_Melee_Swing_Events();
	void UpdateBasedOnKills(int32 Watched_Kills);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Pickaxe_DualWield_Generic_C">();
	}
	static class AB_Athena_Pickaxe_DualWield_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Pickaxe_DualWield_Generic_C>();
	}
};
static_assert(alignof(AB_Athena_Pickaxe_DualWield_Generic_C) == 0x000008, "Wrong alignment on AB_Athena_Pickaxe_DualWield_Generic_C");
static_assert(sizeof(AB_Athena_Pickaxe_DualWield_Generic_C) == 0x001558, "Wrong size on AB_Athena_Pickaxe_DualWield_Generic_C");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, UberGraphFrame) == 0x0014B0, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Equipped) == 0x0014B8, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Equipped' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, IdleFX_Location_Rule) == 0x0014B9, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::IdleFX_Location_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Idle_FX_Rotation_Rule) == 0x0014BA, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Idle_FX_Rotation_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Idle_FX_Scale_Rule) == 0x0014BB, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Idle_FX_Scale_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, SwingFX_Location_Rule) == 0x0014BC, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::SwingFX_Location_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Swing_FX_Rotation_Rule) == 0x0014BD, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Swing_FX_Rotation_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Swing_FX_Scale_Rule) == 0x0014BE, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Swing_FX_Scale_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Alteration_Ambient_PS) == 0x0014C0, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, MeleeHeavy_ParticleSystem) == 0x0014C8, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::MeleeHeavy_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, MeleeHeavy_PSC) == 0x0014D0, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::MeleeHeavy_PSC' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, UseDestroyEffect) == 0x0014D8, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, WeaponDurabilityDestroyEffect) == 0x0014E0, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x0014E8, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Offhand_Alteration_Ambient_PS) == 0x0014F0, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Offhand_Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, bEquipPendingInstigator) == 0x0014F8, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::bEquipPendingInstigator' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Offhand_Socket_Name) == 0x0014FC, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Offhand_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, MontageReference) == 0x001500, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::MontageReference' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, UseTimeofDayControl) == 0x001508, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::UseTimeofDayControl' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Impact_FX) == 0x001510, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Impact_FX' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Swing_Right_) == 0x001518, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Swing_Right_' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Left_Swing_Rotation) == 0x001520, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Left_Swing_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Right_Swing_Rotation) == 0x001538, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Right_Swing_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Swing_Right__0) == 0x001550, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Swing_Right__0' has a wrong offset!");

}

