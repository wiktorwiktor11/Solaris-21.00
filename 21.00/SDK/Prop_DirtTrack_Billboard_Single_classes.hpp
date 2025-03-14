﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_DirtTrack_Billboard_Single

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prop_DirtTrack_Billboard_Single.Prop_DirtTrack_Billboard_Single_C
// 0x0018 (0x0E88 - 0x0E70)
class AProp_DirtTrack_Billboard_Single_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWelcomePartyAudioRoutingComponent_C*   WelcomePartyAudioRoutingComponent;                 // 0x0E80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Prop_DirtTrack_Billboard_Single(int32 EntryPoint);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prop_DirtTrack_Billboard_Single_C">();
	}
	static class AProp_DirtTrack_Billboard_Single_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_DirtTrack_Billboard_Single_C>();
	}
};
static_assert(alignof(AProp_DirtTrack_Billboard_Single_C) == 0x000008, "Wrong alignment on AProp_DirtTrack_Billboard_Single_C");
static_assert(sizeof(AProp_DirtTrack_Billboard_Single_C) == 0x000E88, "Wrong size on AProp_DirtTrack_Billboard_Single_C");
static_assert(offsetof(AProp_DirtTrack_Billboard_Single_C, UberGraphFrame) == 0x000E70, "Member 'AProp_DirtTrack_Billboard_Single_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AProp_DirtTrack_Billboard_Single_C, Audio) == 0x000E78, "Member 'AProp_DirtTrack_Billboard_Single_C::Audio' has a wrong offset!");
static_assert(offsetof(AProp_DirtTrack_Billboard_Single_C, WelcomePartyAudioRoutingComponent) == 0x000E80, "Member 'AProp_DirtTrack_Billboard_Single_C::WelcomePartyAudioRoutingComponent' has a wrong offset!");

}

