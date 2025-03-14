﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Player_Slide

#include "Basic.hpp"

#include "GameplayTags_0_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Player_Slide.GA_Athena_Player_Slide_C
// 0x0BA8 (0x16B8 - 0x0B10)
class UGA_Athena_Player_Slide_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class UCameraShakeBase>           CameraShake;                                       // 0x0B18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UFortCameraMode>            Camera_Mode_Class;                                 // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTag                           CameraShakeGCNL;                                   // 0x0B28(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2C[0x4];                                      // 0x0B2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UCameraModifier>            CameraModifier;                                    // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         MinAngleForMomentum;                               // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SpeedlinesCue;                                     // 0x0B3C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UCameraShakeBase>           StartSlideCameraShake;                             // 0x0B40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         AdditionalLaunchVelocityOffRamp;                   // 0x0B48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4C[0x4];                                      // 0x0B4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlidingControlParams                  DefaultSlidingParams;                              // 0x0B50(0x0550)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlidingControlParams                  PostDashGroundSlidingParams;                       // 0x10A0(0x0550)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         LevelGroundSlideDuration;                          // 0x15F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15F4[0x4];                                     // 0x15F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           EndLevelGroundSlideTimerHandle;                    // 0x15F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         DashDuration;                                      // 0x1600(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                           CameraFXDelay;                                     // 0x1628(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           PlayerGameplayCue;                                 // 0x1630(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         CameraShakeDelay;                                  // 0x1634(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         MinAdditionalMomentum;                             // 0x1638(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MaxAdditionalMomentum;                             // 0x1660(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MinAngleForAdditionalMomentum;                     // 0x1688(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Prev_FallingGracePeriodState;                      // 0x16B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddMomentum();
	void CameraFX();
	void EndLevelGroundSlide();
	void ExecuteUbergraph_GA_Athena_Player_Slide(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinishedCharacterCustomization_Event_0(class AFortPlayerPawn* Pawn);

	bool BuildDataRegistryResolverScope(TArray<class FName>* InOutResolverScopes, int32* InOutPriority) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Player_Slide_C">();
	}
	static class UGA_Athena_Player_Slide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Player_Slide_C>();
	}
};
static_assert(alignof(UGA_Athena_Player_Slide_C) == 0x000008, "Wrong alignment on UGA_Athena_Player_Slide_C");
static_assert(sizeof(UGA_Athena_Player_Slide_C) == 0x0016B8, "Wrong size on UGA_Athena_Player_Slide_C");
static_assert(offsetof(UGA_Athena_Player_Slide_C, UberGraphFrame) == 0x000B10, "Member 'UGA_Athena_Player_Slide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraShake) == 0x000B18, "Member 'UGA_Athena_Player_Slide_C::CameraShake' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, Camera_Mode_Class) == 0x000B20, "Member 'UGA_Athena_Player_Slide_C::Camera_Mode_Class' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraShakeGCNL) == 0x000B28, "Member 'UGA_Athena_Player_Slide_C::CameraShakeGCNL' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraModifier) == 0x000B30, "Member 'UGA_Athena_Player_Slide_C::CameraModifier' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, MinAngleForMomentum) == 0x000B38, "Member 'UGA_Athena_Player_Slide_C::MinAngleForMomentum' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, SpeedlinesCue) == 0x000B3C, "Member 'UGA_Athena_Player_Slide_C::SpeedlinesCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, StartSlideCameraShake) == 0x000B40, "Member 'UGA_Athena_Player_Slide_C::StartSlideCameraShake' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, AdditionalLaunchVelocityOffRamp) == 0x000B48, "Member 'UGA_Athena_Player_Slide_C::AdditionalLaunchVelocityOffRamp' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, DefaultSlidingParams) == 0x000B50, "Member 'UGA_Athena_Player_Slide_C::DefaultSlidingParams' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, PostDashGroundSlidingParams) == 0x0010A0, "Member 'UGA_Athena_Player_Slide_C::PostDashGroundSlidingParams' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, LevelGroundSlideDuration) == 0x0015F0, "Member 'UGA_Athena_Player_Slide_C::LevelGroundSlideDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, EndLevelGroundSlideTimerHandle) == 0x0015F8, "Member 'UGA_Athena_Player_Slide_C::EndLevelGroundSlideTimerHandle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, DashDuration) == 0x001600, "Member 'UGA_Athena_Player_Slide_C::DashDuration' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraFXDelay) == 0x001628, "Member 'UGA_Athena_Player_Slide_C::CameraFXDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, PlayerGameplayCue) == 0x001630, "Member 'UGA_Athena_Player_Slide_C::PlayerGameplayCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, CameraShakeDelay) == 0x001634, "Member 'UGA_Athena_Player_Slide_C::CameraShakeDelay' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, MinAdditionalMomentum) == 0x001638, "Member 'UGA_Athena_Player_Slide_C::MinAdditionalMomentum' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, MaxAdditionalMomentum) == 0x001660, "Member 'UGA_Athena_Player_Slide_C::MaxAdditionalMomentum' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, MinAngleForAdditionalMomentum) == 0x001688, "Member 'UGA_Athena_Player_Slide_C::MinAngleForAdditionalMomentum' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Player_Slide_C, Prev_FallingGracePeriodState) == 0x0016B0, "Member 'UGA_Athena_Player_Slide_C::Prev_FallingGracePeriodState' has a wrong offset!");

}

