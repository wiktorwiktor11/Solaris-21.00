﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_VendingMachine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_VendingMachine.B_Athena_VendingMachine_C
// 0x01D0 (0x0D60 - 0x0B90)
class AB_Athena_VendingMachine_C final : public ABuildingItemCollectorActor
{
public:
	uint8                                         Pad_B88[0x8];                                      // 0x0B88(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B90(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Destroyed_Effect_Vending;                        // 0x0B98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0BA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*                ForceFeedbackFail;                                 // 0x0BA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*                ForceFeedbackSuccess;                              // 0x0BB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        VendingMachine_Ambient;                            // 0x0BB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Loot_Effect_Vending;                             // 0x0BC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_VendingMachineQuest;                            // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         VendWobble_Flash_70FB301E43A001CE1340FE8051EE86B5; // 0x0BD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VendWobble_WobbleTime_70FB301E43A001CE1340FE8051EE86B5; // 0x0BDC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            VendWobble__Direction_70FB301E43A001CE1340FE8051EE86B5; // 0x0BE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BE1[0x7];                                      // 0x0BE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     VendWobble;                                        // 0x0BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SwitchHitch_Slide_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x0BF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SwitchHitch_Flash_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x0BF4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SwitchHitch_Wobble_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x0BF8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SwitchHitch__Direction_A93D31CA462BFD95FDDD9E8A0BE99DA5; // 0x0BFC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BFD[0x3];                                      // 0x0BFD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SwitchHitch;                                       // 0x0C00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MonitorMat;                                        // 0x0C08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MetalMat;                                          // 0x0C10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentCaptureCount;                               // 0x0C18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1C[0x4];                                      // 0x0C1C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Vend_String;                                       // 0x0C20(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             SearchSound;                                       // 0x0C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             VendFailedSound;                                   // 0x0C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CycleSound;                                        // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CostAmount;                                        // 0x0C50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C54[0x4];                                      // 0x0C54(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               MaterialType;                                      // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Vend_Succeeded_Sound;                              // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VendSuccess;                                       // 0x0C68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WasHit;                                            // 0x0C69(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C6A[0x2];                                      // 0x0C6A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CycleSoundVolume;                                  // 0x0C6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   TossOnGroundSetting;                               // 0x0C70(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                   Wood_String;                                       // 0x0C80(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Stone_String;                                      // 0x0C98(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   Metal_String;                                      // 0x0CB0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	EFortRarity                                   OverrideVendingMachineRarity;                      // 0x0CC8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC9[0x7];                                      // 0x0CC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Ambient_SoundCue;                                  // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Free_String;                                       // 0x0CD8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             DestroyedSound;                                    // 0x0CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         MaxItemsToSpawn;                                   // 0x0CF8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ItemsAreFree;                                      // 0x0D20(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ItemsAreFreeCached;                                // 0x0D48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D49[0x3];                                      // 0x0D49(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SpawnedItemCount;                                  // 0x0D4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxItemsToSpawnCached;                             // 0x0D50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D54[0x4];                                      // 0x0D54(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              InteractingPawn;                                   // 0x0D58(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void VendWobble__UpdateFunc();
	void VendWobble__Start_FF_Time__EventFunc();
	void VendWobble__FinishedFunc();
	void UpdateCollectorsActiveItem(int32 StartingSeedValue, class UFortWorldItemDefinition* InputItem, class UTexture* InputTexture, int32 CurrentGoal, int32 CurrentCollectedAmount, int32 CurrentCaptureCount_0, class UTexture* OutputTexture);
	void SwitchHitch__UpdateFunc();
	void SwitchHitch__FinishedFunc();
	void SetRarityColors(const struct FLinearColor& Color);
	void ReceiveBeginPlay();
	void PlayVendFX();
	void OnReady_21959F7346995C2CA1D67DB9455B627D(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnForcedCycle();
	void PlayVendFailFX();
	void ExecuteUbergraph_B_Athena_VendingMachine(int32 EntryPoint);
	void DoVendDeath();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn_0, const EInteractionBeingAttempted InteractionBeingAttempted);
	void PickupSpawned_Bind();
	void BlueprintOnBeginInteract(const class AFortPawn* InteractingPawn_0, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType);

	bool GetOverrideRarity(EFortRarity* Rarity) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn_0, const EInteractionBeingAttempted InteractionBeingAttempted) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_VendingMachine_C">();
	}
	static class AB_Athena_VendingMachine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_VendingMachine_C>();
	}
};
static_assert(alignof(AB_Athena_VendingMachine_C) == 0x000010, "Wrong alignment on AB_Athena_VendingMachine_C");
static_assert(sizeof(AB_Athena_VendingMachine_C) == 0x000D60, "Wrong size on AB_Athena_VendingMachine_C");
static_assert(offsetof(AB_Athena_VendingMachine_C, UberGraphFrame) == 0x000B90, "Member 'AB_Athena_VendingMachine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, P_Destroyed_Effect_Vending) == 0x000B98, "Member 'AB_Athena_VendingMachine_C::P_Destroyed_Effect_Vending' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SpotLight) == 0x000BA0, "Member 'AB_Athena_VendingMachine_C::SpotLight' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, ForceFeedbackFail) == 0x000BA8, "Member 'AB_Athena_VendingMachine_C::ForceFeedbackFail' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, ForceFeedbackSuccess) == 0x000BB0, "Member 'AB_Athena_VendingMachine_C::ForceFeedbackSuccess' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, VendingMachine_Ambient) == 0x000BB8, "Member 'AB_Athena_VendingMachine_C::VendingMachine_Ambient' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, P_Loot_Effect_Vending) == 0x000BC0, "Member 'AB_Athena_VendingMachine_C::P_Loot_Effect_Vending' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SM_VendingMachineQuest) == 0x000BC8, "Member 'AB_Athena_VendingMachine_C::SM_VendingMachineQuest' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, DefaultSceneRoot) == 0x000BD0, "Member 'AB_Athena_VendingMachine_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, VendWobble_Flash_70FB301E43A001CE1340FE8051EE86B5) == 0x000BD8, "Member 'AB_Athena_VendingMachine_C::VendWobble_Flash_70FB301E43A001CE1340FE8051EE86B5' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, VendWobble_WobbleTime_70FB301E43A001CE1340FE8051EE86B5) == 0x000BDC, "Member 'AB_Athena_VendingMachine_C::VendWobble_WobbleTime_70FB301E43A001CE1340FE8051EE86B5' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, VendWobble__Direction_70FB301E43A001CE1340FE8051EE86B5) == 0x000BE0, "Member 'AB_Athena_VendingMachine_C::VendWobble__Direction_70FB301E43A001CE1340FE8051EE86B5' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, VendWobble) == 0x000BE8, "Member 'AB_Athena_VendingMachine_C::VendWobble' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SwitchHitch_Slide_A93D31CA462BFD95FDDD9E8A0BE99DA5) == 0x000BF0, "Member 'AB_Athena_VendingMachine_C::SwitchHitch_Slide_A93D31CA462BFD95FDDD9E8A0BE99DA5' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SwitchHitch_Flash_A93D31CA462BFD95FDDD9E8A0BE99DA5) == 0x000BF4, "Member 'AB_Athena_VendingMachine_C::SwitchHitch_Flash_A93D31CA462BFD95FDDD9E8A0BE99DA5' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SwitchHitch_Wobble_A93D31CA462BFD95FDDD9E8A0BE99DA5) == 0x000BF8, "Member 'AB_Athena_VendingMachine_C::SwitchHitch_Wobble_A93D31CA462BFD95FDDD9E8A0BE99DA5' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SwitchHitch__Direction_A93D31CA462BFD95FDDD9E8A0BE99DA5) == 0x000BFC, "Member 'AB_Athena_VendingMachine_C::SwitchHitch__Direction_A93D31CA462BFD95FDDD9E8A0BE99DA5' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SwitchHitch) == 0x000C00, "Member 'AB_Athena_VendingMachine_C::SwitchHitch' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, MonitorMat) == 0x000C08, "Member 'AB_Athena_VendingMachine_C::MonitorMat' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, MetalMat) == 0x000C10, "Member 'AB_Athena_VendingMachine_C::MetalMat' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, CurrentCaptureCount) == 0x000C18, "Member 'AB_Athena_VendingMachine_C::CurrentCaptureCount' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, Vend_String) == 0x000C20, "Member 'AB_Athena_VendingMachine_C::Vend_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SearchSound) == 0x000C38, "Member 'AB_Athena_VendingMachine_C::SearchSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, VendFailedSound) == 0x000C40, "Member 'AB_Athena_VendingMachine_C::VendFailedSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, CycleSound) == 0x000C48, "Member 'AB_Athena_VendingMachine_C::CycleSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, CostAmount) == 0x000C50, "Member 'AB_Athena_VendingMachine_C::CostAmount' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, MaterialType) == 0x000C58, "Member 'AB_Athena_VendingMachine_C::MaterialType' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, Vend_Succeeded_Sound) == 0x000C60, "Member 'AB_Athena_VendingMachine_C::Vend_Succeeded_Sound' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, VendSuccess) == 0x000C68, "Member 'AB_Athena_VendingMachine_C::VendSuccess' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, WasHit) == 0x000C69, "Member 'AB_Athena_VendingMachine_C::WasHit' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, CycleSoundVolume) == 0x000C6C, "Member 'AB_Athena_VendingMachine_C::CycleSoundVolume' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, TossOnGroundSetting) == 0x000C70, "Member 'AB_Athena_VendingMachine_C::TossOnGroundSetting' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, Wood_String) == 0x000C80, "Member 'AB_Athena_VendingMachine_C::Wood_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, Stone_String) == 0x000C98, "Member 'AB_Athena_VendingMachine_C::Stone_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, Metal_String) == 0x000CB0, "Member 'AB_Athena_VendingMachine_C::Metal_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, OverrideVendingMachineRarity) == 0x000CC8, "Member 'AB_Athena_VendingMachine_C::OverrideVendingMachineRarity' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, Ambient_SoundCue) == 0x000CD0, "Member 'AB_Athena_VendingMachine_C::Ambient_SoundCue' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, Free_String) == 0x000CD8, "Member 'AB_Athena_VendingMachine_C::Free_String' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, DestroyedSound) == 0x000CF0, "Member 'AB_Athena_VendingMachine_C::DestroyedSound' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, MaxItemsToSpawn) == 0x000CF8, "Member 'AB_Athena_VendingMachine_C::MaxItemsToSpawn' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, ItemsAreFree) == 0x000D20, "Member 'AB_Athena_VendingMachine_C::ItemsAreFree' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, ItemsAreFreeCached) == 0x000D48, "Member 'AB_Athena_VendingMachine_C::ItemsAreFreeCached' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, SpawnedItemCount) == 0x000D4C, "Member 'AB_Athena_VendingMachine_C::SpawnedItemCount' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, MaxItemsToSpawnCached) == 0x000D50, "Member 'AB_Athena_VendingMachine_C::MaxItemsToSpawnCached' has a wrong offset!");
static_assert(offsetof(AB_Athena_VendingMachine_C, InteractingPawn) == 0x000D58, "Member 'AB_Athena_VendingMachine_C::InteractingPawn' has a wrong offset!");

}

