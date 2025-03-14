﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetDebugContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NetDebugContainer.NetDebugContainer_C
// 0x0028 (0x0348 - 0x0320)
class UNetDebugContainer_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNetDebugUI_C*                          NetDebugUI;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNetGraph_C*                            NetGraph;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_NetDebugContainer(int32 EntryPoint);
	void OnVisibilitySetEvent(ESlateVisibility InVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NetDebugContainer_C">();
	}
	static class UNetDebugContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDebugContainer_C>();
	}
};
static_assert(alignof(UNetDebugContainer_C) == 0x000008, "Wrong alignment on UNetDebugContainer_C");
static_assert(sizeof(UNetDebugContainer_C) == 0x000348, "Wrong size on UNetDebugContainer_C");
static_assert(offsetof(UNetDebugContainer_C, UberGraphFrame) == 0x000320, "Member 'UNetDebugContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNetDebugContainer_C, InvalidationBox_0) == 0x000328, "Member 'UNetDebugContainer_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UNetDebugContainer_C, NetDebugUI) == 0x000330, "Member 'UNetDebugContainer_C::NetDebugUI' has a wrong offset!");
static_assert(offsetof(UNetDebugContainer_C, NetGraph) == 0x000338, "Member 'UNetDebugContainer_C::NetGraph' has a wrong offset!");
static_assert(offsetof(UNetDebugContainer_C, SizeBox_0) == 0x000340, "Member 'UNetDebugContainer_C::SizeBox_0' has a wrong offset!");

}

