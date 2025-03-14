﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Apollo_Agency_Security_Camera_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Apollo_Agency_Security_Camera_01.Apollo_Agency_Security_Camera_01_C
// 0x0028 (0x0E98 - 0x0E70)
class AApollo_Agency_Security_Camera_01_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Camera;                                            // 0x0E78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle;                                       // 0x0E80(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RotConeInDegrees;                                  // 0x0E88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotDuration;                                       // 0x0E8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomPitch;                                       // 0x0E90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DirectionBias;                                     // 0x0E94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Apollo_Agency_Security_Camera_01(int32 EntryPoint);
	void ReceiveBeginPlay();
	void StartRotation();
	void StartTickingIfRendered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Apollo_Agency_Security_Camera_01_C">();
	}
	static class AApollo_Agency_Security_Camera_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AApollo_Agency_Security_Camera_01_C>();
	}
};
static_assert(alignof(AApollo_Agency_Security_Camera_01_C) == 0x000008, "Wrong alignment on AApollo_Agency_Security_Camera_01_C");
static_assert(sizeof(AApollo_Agency_Security_Camera_01_C) == 0x000E98, "Wrong size on AApollo_Agency_Security_Camera_01_C");
static_assert(offsetof(AApollo_Agency_Security_Camera_01_C, UberGraphFrame) == 0x000E70, "Member 'AApollo_Agency_Security_Camera_01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Security_Camera_01_C, Camera) == 0x000E78, "Member 'AApollo_Agency_Security_Camera_01_C::Camera' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Security_Camera_01_C, TimerHandle) == 0x000E80, "Member 'AApollo_Agency_Security_Camera_01_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Security_Camera_01_C, RotConeInDegrees) == 0x000E88, "Member 'AApollo_Agency_Security_Camera_01_C::RotConeInDegrees' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Security_Camera_01_C, RotDuration) == 0x000E8C, "Member 'AApollo_Agency_Security_Camera_01_C::RotDuration' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Security_Camera_01_C, RandomPitch) == 0x000E90, "Member 'AApollo_Agency_Security_Camera_01_C::RandomPitch' has a wrong offset!");
static_assert(offsetof(AApollo_Agency_Security_Camera_01_C, DirectionBias) == 0x000E94, "Member 'AApollo_Agency_Security_Camera_01_C::DirectionBias' has a wrong offset!");

}

