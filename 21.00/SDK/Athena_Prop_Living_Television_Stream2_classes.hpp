﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Prop_Living_Television_Stream2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Prop_Living_Television_Stream2.Athena_Prop_Living_Television_Stream2_C
// 0x0068 (0x0ED8 - 0x0E70)
class AAthena_Prop_Living_Television_Stream2_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        AudioLoc;                                          // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Spawn_Location;                                    // 0x0E80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bKillSound;                                        // 0x0E88(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E89[0x7];                                      // 0x0E89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_Screen;                                        // 0x0E90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StaticSound;                                       // 0x0E98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StaticLayerWarningSound;                           // 0x0EA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StaticLayerCheckTime;                              // 0x0EA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EAC[0x4];                                      // 0x0EAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        StaticLayerComp;                                   // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             StaticLayerMSound;                                 // 0x0EB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WarningLayerSpawnTime;                             // 0x0EC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC4[0x4];                                      // 0x0EC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        WarningLayerComp;                                  // 0x0EC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        StaticComp;                                        // 0x0ED0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Athena_Prop_Living_Television_Stream2(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Prop_Living_Television_Stream2_C">();
	}
	static class AAthena_Prop_Living_Television_Stream2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Prop_Living_Television_Stream2_C>();
	}
};
static_assert(alignof(AAthena_Prop_Living_Television_Stream2_C) == 0x000008, "Wrong alignment on AAthena_Prop_Living_Television_Stream2_C");
static_assert(sizeof(AAthena_Prop_Living_Television_Stream2_C) == 0x000ED8, "Wrong size on AAthena_Prop_Living_Television_Stream2_C");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, UberGraphFrame) == 0x000E70, "Member 'AAthena_Prop_Living_Television_Stream2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, AudioLoc) == 0x000E78, "Member 'AAthena_Prop_Living_Television_Stream2_C::AudioLoc' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, Spawn_Location) == 0x000E80, "Member 'AAthena_Prop_Living_Television_Stream2_C::Spawn_Location' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, bKillSound) == 0x000E88, "Member 'AAthena_Prop_Living_Television_Stream2_C::bKillSound' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, MID_Screen) == 0x000E90, "Member 'AAthena_Prop_Living_Television_Stream2_C::MID_Screen' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, StaticSound) == 0x000E98, "Member 'AAthena_Prop_Living_Television_Stream2_C::StaticSound' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, StaticLayerWarningSound) == 0x000EA0, "Member 'AAthena_Prop_Living_Television_Stream2_C::StaticLayerWarningSound' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, StaticLayerCheckTime) == 0x000EA8, "Member 'AAthena_Prop_Living_Television_Stream2_C::StaticLayerCheckTime' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, StaticLayerComp) == 0x000EB0, "Member 'AAthena_Prop_Living_Television_Stream2_C::StaticLayerComp' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, StaticLayerMSound) == 0x000EB8, "Member 'AAthena_Prop_Living_Television_Stream2_C::StaticLayerMSound' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, WarningLayerSpawnTime) == 0x000EC0, "Member 'AAthena_Prop_Living_Television_Stream2_C::WarningLayerSpawnTime' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, WarningLayerComp) == 0x000EC8, "Member 'AAthena_Prop_Living_Television_Stream2_C::WarningLayerComp' has a wrong offset!");
static_assert(offsetof(AAthena_Prop_Living_Television_Stream2_C, StaticComp) == 0x000ED0, "Member 'AAthena_Prop_Living_Television_Stream2_C::StaticComp' has a wrong offset!");

}

