﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WaffleTruck_Dub

#include "Basic.hpp"

#include "B_Shotgun_Standard_Athena_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WaffleTruck_Dub.B_WaffleTruck_Dub_C
// 0x0078 (0x1778 - 0x1700)
class AB_WaffleTruck_Dub_C final : public AB_Shotgun_Standard_Athena_C
{
public:
	bool                                          Debug;                                             // 0x1700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1701[0x3];                                     // 0x1701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FXTraceYawFullAngle;                               // 0x1704(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FXTracePitchFullAngle;                             // 0x1708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_170C[0x4];                                     // 0x170C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                EndOfCenterFXTrace;                                // 0x1710(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        AllFXTraceEndPoints;                               // 0x1728(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                CurrentFXTraceEnd;                                 // 0x1738(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentFXTraceWasHit;                              // 0x1750(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1751[0x7];                                     // 0x1751(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        AllFXTracerSpawnPoints;                            // 0x1758(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SpawnTracersInsteadOfDummyImpactFX;                // 0x1768(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1769[0x3];                                     // 0x1769(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MysteriousRangeBufferForTracers;                   // 0x176C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RangeLong;                                         // 0x1770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WaffleTruck_Dub_C">();
	}
	static class AB_WaffleTruck_Dub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WaffleTruck_Dub_C>();
	}
};
static_assert(alignof(AB_WaffleTruck_Dub_C) == 0x000008, "Wrong alignment on AB_WaffleTruck_Dub_C");
static_assert(sizeof(AB_WaffleTruck_Dub_C) == 0x001778, "Wrong size on AB_WaffleTruck_Dub_C");
static_assert(offsetof(AB_WaffleTruck_Dub_C, Debug) == 0x001700, "Member 'AB_WaffleTruck_Dub_C::Debug' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, FXTraceYawFullAngle) == 0x001704, "Member 'AB_WaffleTruck_Dub_C::FXTraceYawFullAngle' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, FXTracePitchFullAngle) == 0x001708, "Member 'AB_WaffleTruck_Dub_C::FXTracePitchFullAngle' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, EndOfCenterFXTrace) == 0x001710, "Member 'AB_WaffleTruck_Dub_C::EndOfCenterFXTrace' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, AllFXTraceEndPoints) == 0x001728, "Member 'AB_WaffleTruck_Dub_C::AllFXTraceEndPoints' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, CurrentFXTraceEnd) == 0x001738, "Member 'AB_WaffleTruck_Dub_C::CurrentFXTraceEnd' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, CurrentFXTraceWasHit) == 0x001750, "Member 'AB_WaffleTruck_Dub_C::CurrentFXTraceWasHit' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, AllFXTracerSpawnPoints) == 0x001758, "Member 'AB_WaffleTruck_Dub_C::AllFXTracerSpawnPoints' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, SpawnTracersInsteadOfDummyImpactFX) == 0x001768, "Member 'AB_WaffleTruck_Dub_C::SpawnTracersInsteadOfDummyImpactFX' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, MysteriousRangeBufferForTracers) == 0x00176C, "Member 'AB_WaffleTruck_Dub_C::MysteriousRangeBufferForTracers' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Dub_C, RangeLong) == 0x001770, "Member 'AB_WaffleTruck_Dub_C::RangeLong' has a wrong offset!");

}

