﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Stage_DJ_Booth_SkiClub

#include "Basic.hpp"

#include "Stage_DJ_Booth_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Stage_DJ_Booth_SkiClub.Stage_DJ_Booth_SkiClub_C
// 0x0010 (0x0E80 - 0x0E70)
class AStage_DJ_Booth_SkiClub_C final : public AStage_DJ_Booth_C
{
public:
	class UAudioComponent*                        Audio;                                             // 0x0E70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMusicPartyPropComponent_C*             MusicPartyPropComponent;                           // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Stage_DJ_Booth_SkiClub_C">();
	}
	static class AStage_DJ_Booth_SkiClub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStage_DJ_Booth_SkiClub_C>();
	}
};
static_assert(alignof(AStage_DJ_Booth_SkiClub_C) == 0x000008, "Wrong alignment on AStage_DJ_Booth_SkiClub_C");
static_assert(sizeof(AStage_DJ_Booth_SkiClub_C) == 0x000E80, "Wrong size on AStage_DJ_Booth_SkiClub_C");
static_assert(offsetof(AStage_DJ_Booth_SkiClub_C, Audio) == 0x000E70, "Member 'AStage_DJ_Booth_SkiClub_C::Audio' has a wrong offset!");
static_assert(offsetof(AStage_DJ_Booth_SkiClub_C, MusicPartyPropComponent) == 0x000E78, "Member 'AStage_DJ_Booth_SkiClub_C::MusicPartyPropComponent' has a wrong offset!");

}

