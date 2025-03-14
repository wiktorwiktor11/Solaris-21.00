﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Default_Ambient

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Default_Ambient.BP_Default_Ambient_C
// 0x0028 (0x0298 - 0x0270)
class ABP_Default_Ambient_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAmbientAudioComponent*                 AmbientAudio_Weather;                              // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAmbientAudioDataAsset*                 DefaultAudioBank;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefaultAudioBankPriority;                          // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AmbientName;                                       // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void WeatherComponentReady(class UFortTimeOfDayWeatherComponent* WeatherComponent);
	void WeatherChanged(EGlobalWeatherState WeatherState, const struct FFortReplicatedWeatherEventData& WeatherData);
	void SetWeatherTags(int32 Selection);
	void ReceiveBeginPlay();
	void OnReady_C65C4919436D0ED92141E6913B3C3C6D(class AFortTimeOfDayManager* TimeOfDayManager);
	void ExecuteUbergraph_BP_Default_Ambient(int32 EntryPoint);
	void ClearFogTags();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Default_Ambient_C">();
	}
	static class ABP_Default_Ambient_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Default_Ambient_C>();
	}
};
static_assert(alignof(ABP_Default_Ambient_C) == 0x000008, "Wrong alignment on ABP_Default_Ambient_C");
static_assert(sizeof(ABP_Default_Ambient_C) == 0x000298, "Wrong size on ABP_Default_Ambient_C");
static_assert(offsetof(ABP_Default_Ambient_C, UberGraphFrame) == 0x000270, "Member 'ABP_Default_Ambient_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Default_Ambient_C, AmbientAudio_Weather) == 0x000278, "Member 'ABP_Default_Ambient_C::AmbientAudio_Weather' has a wrong offset!");
static_assert(offsetof(ABP_Default_Ambient_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_Default_Ambient_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Default_Ambient_C, DefaultAudioBank) == 0x000288, "Member 'ABP_Default_Ambient_C::DefaultAudioBank' has a wrong offset!");
static_assert(offsetof(ABP_Default_Ambient_C, DefaultAudioBankPriority) == 0x000290, "Member 'ABP_Default_Ambient_C::DefaultAudioBankPriority' has a wrong offset!");
static_assert(offsetof(ABP_Default_Ambient_C, AmbientName) == 0x000294, "Member 'ABP_Default_Ambient_C::AmbientName' has a wrong offset!");

}

