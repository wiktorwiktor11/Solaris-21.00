﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_Rock_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prop_Rock_Parent.Prop_Rock_Parent_C
// 0x0010 (0x0E80 - 0x0E70)
class AProp_Rock_Parent_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         SnowCoverageAmount;                                // 0x0E78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Prop_Rock_Parent(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prop_Rock_Parent_C">();
	}
	static class AProp_Rock_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_Rock_Parent_C>();
	}
};
static_assert(alignof(AProp_Rock_Parent_C) == 0x000008, "Wrong alignment on AProp_Rock_Parent_C");
static_assert(sizeof(AProp_Rock_Parent_C) == 0x000E80, "Wrong size on AProp_Rock_Parent_C");
static_assert(offsetof(AProp_Rock_Parent_C, UberGraphFrame) == 0x000E70, "Member 'AProp_Rock_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AProp_Rock_Parent_C, SnowCoverageAmount) == 0x000E78, "Member 'AProp_Rock_Parent_C::SnowCoverageAmount' has a wrong offset!");

}

