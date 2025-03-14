﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortReplayCameraOption

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "IconTextButton_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C
// 0x0010 (0x1190 - 0x1180)
class UFortReplayCameraOption_C final : public UIconTextButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_FortReplayCameraOption_C;           // 0x1180(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	ESpectatorCameraType                          CameraType;                                        // 0x1188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_FortReplayCameraOption(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortReplayCameraOption_C">();
	}
	static class UFortReplayCameraOption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortReplayCameraOption_C>();
	}
};
static_assert(alignof(UFortReplayCameraOption_C) == 0x000010, "Wrong alignment on UFortReplayCameraOption_C");
static_assert(sizeof(UFortReplayCameraOption_C) == 0x001190, "Wrong size on UFortReplayCameraOption_C");
static_assert(offsetof(UFortReplayCameraOption_C, UberGraphFrame_FortReplayCameraOption_C) == 0x001180, "Member 'UFortReplayCameraOption_C::UberGraphFrame_FortReplayCameraOption_C' has a wrong offset!");
static_assert(offsetof(UFortReplayCameraOption_C, CameraType) == 0x001188, "Member 'UFortReplayCameraOption_C::CameraType' has a wrong offset!");

}

