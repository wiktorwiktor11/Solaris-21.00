﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Galileo_VideoPreBuffer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MeshNetwork_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Galileo_VideoPreBuffer.BP_Galileo_VideoPreBuffer_C
// 0x0030 (0x02A0 - 0x0270)
class ABP_Galileo_VideoPreBuffer_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int64                                         CurrentPiPCounter;                                 // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentHiddenPiPHF;                                // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentPiPLiveByDefault;                           // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentLiveStreamInMatch;                          // 0x028A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28B[0x5];                                      // 0x028B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CounterBuffer;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Tmp;                                               // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Galileo_VideoPreBuffer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Galileo_VideoPreBuffer_C">();
	}
	static class ABP_Galileo_VideoPreBuffer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Galileo_VideoPreBuffer_C>();
	}
};
static_assert(alignof(ABP_Galileo_VideoPreBuffer_C) == 0x000008, "Wrong alignment on ABP_Galileo_VideoPreBuffer_C");
static_assert(sizeof(ABP_Galileo_VideoPreBuffer_C) == 0x0002A0, "Wrong size on ABP_Galileo_VideoPreBuffer_C");
static_assert(offsetof(ABP_Galileo_VideoPreBuffer_C, UberGraphFrame) == 0x000270, "Member 'ABP_Galileo_VideoPreBuffer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Galileo_VideoPreBuffer_C, DefaultSceneRoot) == 0x000278, "Member 'ABP_Galileo_VideoPreBuffer_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Galileo_VideoPreBuffer_C, CurrentPiPCounter) == 0x000280, "Member 'ABP_Galileo_VideoPreBuffer_C::CurrentPiPCounter' has a wrong offset!");
static_assert(offsetof(ABP_Galileo_VideoPreBuffer_C, CurrentHiddenPiPHF) == 0x000288, "Member 'ABP_Galileo_VideoPreBuffer_C::CurrentHiddenPiPHF' has a wrong offset!");
static_assert(offsetof(ABP_Galileo_VideoPreBuffer_C, CurrentPiPLiveByDefault) == 0x000289, "Member 'ABP_Galileo_VideoPreBuffer_C::CurrentPiPLiveByDefault' has a wrong offset!");
static_assert(offsetof(ABP_Galileo_VideoPreBuffer_C, CurrentLiveStreamInMatch) == 0x00028A, "Member 'ABP_Galileo_VideoPreBuffer_C::CurrentLiveStreamInMatch' has a wrong offset!");
static_assert(offsetof(ABP_Galileo_VideoPreBuffer_C, CounterBuffer) == 0x000290, "Member 'ABP_Galileo_VideoPreBuffer_C::CounterBuffer' has a wrong offset!");
static_assert(offsetof(ABP_Galileo_VideoPreBuffer_C, Tmp) == 0x000298, "Member 'ABP_Galileo_VideoPreBuffer_C::Tmp' has a wrong offset!");

}

