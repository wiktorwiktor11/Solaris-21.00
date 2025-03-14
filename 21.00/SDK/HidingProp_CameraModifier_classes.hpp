﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HidingProp_CameraModifier

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HidingProp_CameraModifier.HidingProp_CameraModifier_C
// 0x0008 (0x0050 - 0x0048)
class UHidingProp_CameraModifier_C final : public UCameraModifier
{
public:
	class AFortPlayerPawn*                        Pawn;                                              // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HidingProp_CameraModifier_C">();
	}
	static class UHidingProp_CameraModifier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHidingProp_CameraModifier_C>();
	}
};
static_assert(alignof(UHidingProp_CameraModifier_C) == 0x000008, "Wrong alignment on UHidingProp_CameraModifier_C");
static_assert(sizeof(UHidingProp_CameraModifier_C) == 0x000050, "Wrong size on UHidingProp_CameraModifier_C");
static_assert(offsetof(UHidingProp_CameraModifier_C, Pawn) == 0x000048, "Member 'UHidingProp_CameraModifier_C::Pawn' has a wrong offset!");

}

