﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventModeUI

#include "Basic.hpp"

#include "EventModeUI_classes.hpp"
#include "EventModeUI_parameters.hpp"


namespace SDK
{

// Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged
// (Final, Native, Private)
// Parameters:
// bool                                    bCanUseEventModeFocus                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFocusButton::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusButton", "HandleCanUseEventModeFocusChanged");

	Params::FocusButton_HandleCanUseEventModeFocusChanged Parms{};

	Parms.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EventModeUI.FocusButton.HandleEventModeFocusingChanged
// (Final, Native, Private)
// Parameters:
// bool                                    bIsEventModeFocusing                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFocusButton::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FocusButton", "HandleEventModeFocusingChanged");

	Params::FocusButton_HandleEventModeFocusingChanged Parms{};

	Parms.bIsEventModeFocusing = bIsEventModeFocusing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsFocusAvailable                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventModeEmotesWidget::OnFocusAvailableChanged(bool bIsFocusAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventModeEmotesWidget", "OnFocusAvailableChanged");

	Params::FortEventModeEmotesWidget_OnFocusAvailableChanged Parms{};

	Parms.bIsFocusAvailable = bIsFocusAvailable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsFocusing                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEventModeEmotesWidget::OnFocusStateChanged(bool bIsFocusing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortEventModeEmotesWidget", "OnFocusStateChanged");

	Params::FortEventModeEmotesWidget_OnFocusStateChanged Parms{};

	Parms.bIsFocusing = bIsFocusing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged
// (Final, Native, Private)
// Parameters:
// bool                                    bCanUseEventModeFocus                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileActionButtonBehavior_Focus::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_Focus", "HandleCanUseEventModeFocusChanged");

	Params::FortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged Parms{};

	Parms.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged
// (Final, Native, Private)
// Parameters:
// bool                                    bIsEventModeFocusing                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMobileActionButtonBehavior_Focus::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortMobileActionButtonBehavior_Focus", "HandleEventModeFocusingChanged");

	Params::FortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged Parms{};

	Parms.bIsEventModeFocusing = bIsEventModeFocusing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

