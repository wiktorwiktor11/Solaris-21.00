﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidebarProfileSubPanelRegion

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidebarProfileSubPanelRegion.SidebarProfileSubPanelRegion_C
// 0x0008 (0x0350 - 0x0348)
class USidebarProfileSubPanelRegion_C final : public UFortSocialProfileRegion
{
public:
	class UImage*                                 Image_63;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelRegion_C">();
	}
	static class USidebarProfileSubPanelRegion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelRegion_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelRegion_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelRegion_C");
static_assert(sizeof(USidebarProfileSubPanelRegion_C) == 0x000350, "Wrong size on USidebarProfileSubPanelRegion_C");
static_assert(offsetof(USidebarProfileSubPanelRegion_C, Image_63) == 0x000348, "Member 'USidebarProfileSubPanelRegion_C::Image_63' has a wrong offset!");

}

