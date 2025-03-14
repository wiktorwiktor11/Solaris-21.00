﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaServerAddress

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaServerAddress.AthenaServerAddress_C
// 0x0010 (0x0330 - 0x0320)
class UAthenaServerAddress_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Text;                                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_AthenaServerAddress(int32 EntryPoint);
	void UpdateServerAddress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaServerAddress_C">();
	}
	static class UAthenaServerAddress_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaServerAddress_C>();
	}
};
static_assert(alignof(UAthenaServerAddress_C) == 0x000008, "Wrong alignment on UAthenaServerAddress_C");
static_assert(sizeof(UAthenaServerAddress_C) == 0x000330, "Wrong size on UAthenaServerAddress_C");
static_assert(offsetof(UAthenaServerAddress_C, UberGraphFrame) == 0x000320, "Member 'UAthenaServerAddress_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaServerAddress_C, Text) == 0x000328, "Member 'UAthenaServerAddress_C::Text' has a wrong offset!");

}

