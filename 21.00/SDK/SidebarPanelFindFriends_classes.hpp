﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarPanelFindFriends

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarPanelFindFriends.SidebarPanelFindFriends_C
// 0x0008 (0x04A0 - 0x0498)
class USidebarPanelFindFriends_C final : public UFortSidebarPanelFindFriends
{
public:
	class UImage*                                 CircularThrobber_UserSearch;                       // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelFindFriends_C">();
	}
	static class USidebarPanelFindFriends_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelFindFriends_C>();
	}
};
static_assert(alignof(USidebarPanelFindFriends_C) == 0x000008, "Wrong alignment on USidebarPanelFindFriends_C");
static_assert(sizeof(USidebarPanelFindFriends_C) == 0x0004A0, "Wrong size on USidebarPanelFindFriends_C");
static_assert(offsetof(USidebarPanelFindFriends_C, CircularThrobber_UserSearch) == 0x000498, "Member 'USidebarPanelFindFriends_C::CircularThrobber_UserSearch' has a wrong offset!");

}

