﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaWinnerList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaWinnerList.AthenaWinnerList_C
// 0x0078 (0x0360 - 0x02E8)
class UAthenaWinnerList_C final : public UAthenaWinnersList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CommonTextBlock_WinnersTitle;                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_WinnerListStyle;              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_Winnerlist;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RichTextBlock_VerticalWinners;                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RichTextBlock_VerticalWinners_column2;             // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RichTextBlock_VerticalWinners_column3;             // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RichTextBlock_VerticalWinners_column4;             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RichTextBlock_VerticalWinners_column5;             // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         LocalWinnerList;                                   // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          isWinner;                                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_341[0x7];                                      // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCommonTextBlock*>               WinnerListTextBoxes;                               // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         OnScreenDuration;                                  // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ClearList();
	void Construct();
	void ExecuteUbergraph_AthenaWinnerList(int32 EntryPoint);
	void OnRep_isWinner();
	void OnWinnersAnnounced(const struct FAthenaWinnerInfo& WinnerInfo);
	void TimeoutDuration(float Duration);
	void UpdateWinnerList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaWinnerList_C">();
	}
	static class UAthenaWinnerList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaWinnerList_C>();
	}
};
static_assert(alignof(UAthenaWinnerList_C) == 0x000008, "Wrong alignment on UAthenaWinnerList_C");
static_assert(sizeof(UAthenaWinnerList_C) == 0x000360, "Wrong size on UAthenaWinnerList_C");
static_assert(offsetof(UAthenaWinnerList_C, UberGraphFrame) == 0x0002E8, "Member 'UAthenaWinnerList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, CommonTextBlock_WinnersTitle) == 0x0002F0, "Member 'UAthenaWinnerList_C::CommonTextBlock_WinnersTitle' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, CommonWidgetSwitcher_WinnerListStyle) == 0x0002F8, "Member 'UAthenaWinnerList_C::CommonWidgetSwitcher_WinnerListStyle' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, RetainerBox_Winnerlist) == 0x000300, "Member 'UAthenaWinnerList_C::RetainerBox_Winnerlist' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, RichTextBlock_VerticalWinners) == 0x000308, "Member 'UAthenaWinnerList_C::RichTextBlock_VerticalWinners' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, RichTextBlock_VerticalWinners_column2) == 0x000310, "Member 'UAthenaWinnerList_C::RichTextBlock_VerticalWinners_column2' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, RichTextBlock_VerticalWinners_column3) == 0x000318, "Member 'UAthenaWinnerList_C::RichTextBlock_VerticalWinners_column3' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, RichTextBlock_VerticalWinners_column4) == 0x000320, "Member 'UAthenaWinnerList_C::RichTextBlock_VerticalWinners_column4' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, RichTextBlock_VerticalWinners_column5) == 0x000328, "Member 'UAthenaWinnerList_C::RichTextBlock_VerticalWinners_column5' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, LocalWinnerList) == 0x000330, "Member 'UAthenaWinnerList_C::LocalWinnerList' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, isWinner) == 0x000340, "Member 'UAthenaWinnerList_C::isWinner' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, WinnerListTextBoxes) == 0x000348, "Member 'UAthenaWinnerList_C::WinnerListTextBoxes' has a wrong offset!");
static_assert(offsetof(UAthenaWinnerList_C, OnScreenDuration) == 0x000358, "Member 'UAthenaWinnerList_C::OnScreenDuration' has a wrong offset!");

}

