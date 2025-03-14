﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarProfile

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarProfile.SidebarProfile_C
// 0x0008 (0x04C0 - 0x04B8)
class USidebarProfile_C final : public UFortSocialProfilePanel
{
public:
	class USidebarProfileSubPanelFriendRequest_C* SubPanelFriendRequest;                             // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfile_C">();
	}
	static class USidebarProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfile_C>();
	}
};
static_assert(alignof(USidebarProfile_C) == 0x000008, "Wrong alignment on USidebarProfile_C");
static_assert(sizeof(USidebarProfile_C) == 0x0004C0, "Wrong size on USidebarProfile_C");
static_assert(offsetof(USidebarProfile_C, SubPanelFriendRequest) == 0x0004B8, "Member 'USidebarProfile_C::SubPanelFriendRequest' has a wrong offset!");

}

