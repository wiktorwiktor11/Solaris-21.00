﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_TriggerAnimInputEvent

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_TriggerAnimInputEvent_C final : public UAnimNotifyState
{
public:
	class FName                                   EventName;                                         // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FString GetNotifyName() const;
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_TriggerAnimInputEvent_C">();
	}
	static class UAnimNotifyState_TriggerAnimInputEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_TriggerAnimInputEvent_C>();
	}
};
static_assert(alignof(UAnimNotifyState_TriggerAnimInputEvent_C) == 0x000008, "Wrong alignment on UAnimNotifyState_TriggerAnimInputEvent_C");
static_assert(sizeof(UAnimNotifyState_TriggerAnimInputEvent_C) == 0x000038, "Wrong size on UAnimNotifyState_TriggerAnimInputEvent_C");
static_assert(offsetof(UAnimNotifyState_TriggerAnimInputEvent_C, EventName) == 0x000030, "Member 'UAnimNotifyState_TriggerAnimInputEvent_C::EventName' has a wrong offset!");

}

