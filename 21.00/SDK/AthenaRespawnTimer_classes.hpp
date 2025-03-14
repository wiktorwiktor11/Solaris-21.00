﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaRespawnTimer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaRespawnTimer.AthenaRespawnTimer_C
// 0x0018 (0x0348 - 0x0330)
class UAthenaRespawnTimer_C final : public UAthenaRespawnTimer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TickDown;                                          // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           Content;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AddExtensionWidget_BP(class UWidget* Widget);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_AthenaRespawnTimer(int32 EntryPoint);
	void On_Audio_Fade_Change_Event(bool bFadeOut, float FadeTime);
	void OnTickDown();
	void OnTimeEnded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaRespawnTimer_C">();
	}
	static class UAthenaRespawnTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaRespawnTimer_C>();
	}
};
static_assert(alignof(UAthenaRespawnTimer_C) == 0x000008, "Wrong alignment on UAthenaRespawnTimer_C");
static_assert(sizeof(UAthenaRespawnTimer_C) == 0x000348, "Wrong size on UAthenaRespawnTimer_C");
static_assert(offsetof(UAthenaRespawnTimer_C, UberGraphFrame) == 0x000330, "Member 'UAthenaRespawnTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaRespawnTimer_C, TickDown) == 0x000338, "Member 'UAthenaRespawnTimer_C::TickDown' has a wrong offset!");
static_assert(offsetof(UAthenaRespawnTimer_C, Content) == 0x000340, "Member 'UAthenaRespawnTimer_C::Content' has a wrong offset!");

}

