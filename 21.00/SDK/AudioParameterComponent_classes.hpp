﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioParameterComponent

#include "Basic.hpp"

#include "AudioExtensions_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AudioParameterComponent.AudioParameterComponent_C
// 0x0018 (0x00B8 - 0x00A0)
class UAudioParameterComponent_C final : public UActorComponent
{
public:
	TArray<struct FAudioParameter>                Parameters;                                        // 0x00A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAudioParameterComponent_C*             RootParameterComponent;                            // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void FindOrAddGetIndex(class FName Name_0, int32* Index_0);
	void GetParameters(TArray<struct FAudioParameter>* Parameters_0);
	void GetRootParameterComponent(class UAudioParameterComponent_C** Component);
	void SetBoolParameter(class FName Name_0, bool Value);
	void SetBoolParameterInternal(class FName Name_0, bool Value);
	void SetFloatParameter(class FName Name_0, float Value);
	void SetFloatParameterInternal(class FName Name_0, float Value);
	void SetIntParameter(class FName Name_0, int32 Value);
	void SetIntParameterInternal(class FName Name_0, int32 Value);
	void UpdateRootParameterComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AudioParameterComponent_C">();
	}
	static class UAudioParameterComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioParameterComponent_C>();
	}
};
static_assert(alignof(UAudioParameterComponent_C) == 0x000008, "Wrong alignment on UAudioParameterComponent_C");
static_assert(sizeof(UAudioParameterComponent_C) == 0x0000B8, "Wrong size on UAudioParameterComponent_C");
static_assert(offsetof(UAudioParameterComponent_C, Parameters) == 0x0000A0, "Member 'UAudioParameterComponent_C::Parameters' has a wrong offset!");
static_assert(offsetof(UAudioParameterComponent_C, RootParameterComponent) == 0x0000B0, "Member 'UAudioParameterComponent_C::RootParameterComponent' has a wrong offset!");

}

