﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_PlayerSpawnedBall

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "PhysicsBall_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_PlayerSpawnedBall.B_PlayerSpawnedBall_C
// 0x0028 (0x0B10 - 0x0AE8)
class AB_PlayerSpawnedBall_C : public APhysicsBall_Master_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_PlayerSpawnedBall_C;              // 0x0AE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               ImpactFX_0;                                        // 0x0AF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CueToPlayWhenReused;                               // 0x0AF8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CueToPlayWhenExpired;                              // 0x0AFC(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFrontEndPreview;                                // 0x0B00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B01[0x7];                                      // 0x0B01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        OwningPawn;                                        // 0x0B08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_PlayerSpawnedBall(int32 EntryPoint);
	void InitializeToyInstance(class AFortPlayerController* OwningPC, int32 NumTimesSummoned);
	void InitializeToyPreviewInFrontend();
	void NotifyToyInstanceOfReuse();
	void PlayCueCenteredOnMe(const struct FGameplayTag& GameplayCueToPlay, float Raw_Magnitude);
	void ReceiveBeginPlay();
	void StartToyFadeOutDueToNewPlacement();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_PlayerSpawnedBall_C">();
	}
	static class AB_PlayerSpawnedBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_PlayerSpawnedBall_C>();
	}
};
static_assert(alignof(AB_PlayerSpawnedBall_C) == 0x000008, "Wrong alignment on AB_PlayerSpawnedBall_C");
static_assert(sizeof(AB_PlayerSpawnedBall_C) == 0x000B10, "Wrong size on AB_PlayerSpawnedBall_C");
static_assert(offsetof(AB_PlayerSpawnedBall_C, UberGraphFrame_B_PlayerSpawnedBall_C) == 0x000AE8, "Member 'AB_PlayerSpawnedBall_C::UberGraphFrame_B_PlayerSpawnedBall_C' has a wrong offset!");
static_assert(offsetof(AB_PlayerSpawnedBall_C, ImpactFX_0) == 0x000AF0, "Member 'AB_PlayerSpawnedBall_C::ImpactFX_0' has a wrong offset!");
static_assert(offsetof(AB_PlayerSpawnedBall_C, CueToPlayWhenReused) == 0x000AF8, "Member 'AB_PlayerSpawnedBall_C::CueToPlayWhenReused' has a wrong offset!");
static_assert(offsetof(AB_PlayerSpawnedBall_C, CueToPlayWhenExpired) == 0x000AFC, "Member 'AB_PlayerSpawnedBall_C::CueToPlayWhenExpired' has a wrong offset!");
static_assert(offsetof(AB_PlayerSpawnedBall_C, bIsFrontEndPreview) == 0x000B00, "Member 'AB_PlayerSpawnedBall_C::bIsFrontEndPreview' has a wrong offset!");
static_assert(offsetof(AB_PlayerSpawnedBall_C, OwningPawn) == 0x000B08, "Member 'AB_PlayerSpawnedBall_C::OwningPawn' has a wrong offset!");

}

