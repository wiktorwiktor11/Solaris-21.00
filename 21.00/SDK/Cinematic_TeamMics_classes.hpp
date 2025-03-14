﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cinematic_TeamMics

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
// 0x0270 (0x0550 - 0x02E0)
class UCinematic_TeamMics_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMicIndicator_C*                        MicIndicator;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            SwitcherConnectingStranger;                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBlock_6;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Pad_308[0x8];                                      // 0x0308(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x0310(0x0240)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_Cinematic_TeamMics(int32 EntryPoint);
	void Update(const struct FFortTeamMemberInfo& UpdatedMemberInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cinematic-TeamMics_C">();
	}
	static class UCinematic_TeamMics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCinematic_TeamMics_C>();
	}
};
static_assert(alignof(UCinematic_TeamMics_C) == 0x000010, "Wrong alignment on UCinematic_TeamMics_C");
static_assert(sizeof(UCinematic_TeamMics_C) == 0x000550, "Wrong size on UCinematic_TeamMics_C");
static_assert(offsetof(UCinematic_TeamMics_C, UberGraphFrame) == 0x0002E0, "Member 'UCinematic_TeamMics_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, MicIndicator) == 0x0002E8, "Member 'UCinematic_TeamMics_C::MicIndicator' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, SwitcherConnectingStranger) == 0x0002F0, "Member 'UCinematic_TeamMics_C::SwitcherConnectingStranger' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, TextBlock_6) == 0x0002F8, "Member 'UCinematic_TeamMics_C::TextBlock_6' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, TextPlayerName) == 0x000300, "Member 'UCinematic_TeamMics_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UCinematic_TeamMics_C, MemberInfo) == 0x000310, "Member 'UCinematic_TeamMics_C::MemberInfo' has a wrong offset!");

}

