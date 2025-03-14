﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConfirmationWindow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
// 0x0030 (0x0790 - 0x0760)
class UConfirmationWindow_C final : public UFortConfirmationWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0760(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               SizeBox_0;                                         // 0x0768(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TapToCloseZone;                                    // 0x0770(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           ButtonIconColor;                                   // 0x0778(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void ConfigureConfirmationButton(class UCommonButtonLegacy* Button, const struct FConfirmationDialogAction& Action, bool bSimpleConfirm);
	void ConfigureDeclineButton(class UCommonButtonLegacy* Button);
	void ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint);
	struct FDataTableRowHandle GetInputAction(class FName RowName, bool UseInputAction);
	void HandleConfigureDeclineButton(class UCommonButtonLegacy* New_Button);
	void Initialize();
	void OnBeginOutro();
	void PlayShowSound();
	void PreConstruct(bool IsDesignTime);
	void SetupNonInteractiveContent();
	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConfirmationWindow_C">();
	}
	static class UConfirmationWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfirmationWindow_C>();
	}
};
static_assert(alignof(UConfirmationWindow_C) == 0x000010, "Wrong alignment on UConfirmationWindow_C");
static_assert(sizeof(UConfirmationWindow_C) == 0x000790, "Wrong size on UConfirmationWindow_C");
static_assert(offsetof(UConfirmationWindow_C, UberGraphFrame) == 0x000760, "Member 'UConfirmationWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, SizeBox_0) == 0x000768, "Member 'UConfirmationWindow_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, TapToCloseZone) == 0x000770, "Member 'UConfirmationWindow_C::TapToCloseZone' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ButtonIconColor) == 0x000778, "Member 'UConfirmationWindow_C::ButtonIconColor' has a wrong offset!");

}

