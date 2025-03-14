﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_QuestUpdate

#include "Basic.hpp"


namespace SDK::Params
{

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AnnouncementStopped
// 0x0008 (0x0008 - 0x0000)
struct Announcement_QuestUpdate_C_AnnouncementStopped final
{
public:
	class AFortClientAnnouncement*                Announcement;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announcement_QuestUpdate_C_AnnouncementStopped) == 0x000008, "Wrong alignment on Announcement_QuestUpdate_C_AnnouncementStopped");
static_assert(sizeof(Announcement_QuestUpdate_C_AnnouncementStopped) == 0x000008, "Wrong size on Announcement_QuestUpdate_C_AnnouncementStopped");
static_assert(offsetof(Announcement_QuestUpdate_C_AnnouncementStopped, Announcement) == 0x000000, "Member 'Announcement_QuestUpdate_C_AnnouncementStopped::Announcement' has a wrong offset!");

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
// 0x0028 (0x0028 - 0x0000)
struct Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortClientAnnouncement*                K2Node_Event_Announcement_1;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAnnounce_QuestUpdate_C*                K2Node_DynamicCast_AsAnnounce_Quest_Update;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortClientAnnouncement*                K2Node_Event_Announcement;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate) == 0x000008, "Wrong alignment on Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate");
static_assert(sizeof(Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate) == 0x000028, "Wrong size on Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate");
static_assert(offsetof(Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate, EntryPoint) == 0x000000, "Member 'Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate::EntryPoint' has a wrong offset!");
static_assert(offsetof(Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate, K2Node_Event_Announcement_1) == 0x000008, "Member 'Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate::K2Node_Event_Announcement_1' has a wrong offset!");
static_assert(offsetof(Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate, K2Node_DynamicCast_AsAnnounce_Quest_Update) == 0x000010, "Member 'Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate::K2Node_DynamicCast_AsAnnounce_Quest_Update' has a wrong offset!");
static_assert(offsetof(Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate, K2Node_Event_Announcement) == 0x000020, "Member 'Announcement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate::K2Node_Event_Announcement' has a wrong offset!");

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
// 0x0008 (0x0008 - 0x0000)
struct Announcement_QuestUpdate_C_UpdateWidgetData final
{
public:
	class AFortClientAnnouncement*                Announcement;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announcement_QuestUpdate_C_UpdateWidgetData) == 0x000008, "Wrong alignment on Announcement_QuestUpdate_C_UpdateWidgetData");
static_assert(sizeof(Announcement_QuestUpdate_C_UpdateWidgetData) == 0x000008, "Wrong size on Announcement_QuestUpdate_C_UpdateWidgetData");
static_assert(offsetof(Announcement_QuestUpdate_C_UpdateWidgetData, Announcement) == 0x000000, "Member 'Announcement_QuestUpdate_C_UpdateWidgetData::Announcement' has a wrong offset!");

}

