﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UEKittUI

#include "Basic.hpp"

#include "UEKittUI_classes.hpp"
#include "UEKittUI_parameters.hpp"


namespace SDK
{

// Function UEKittUI.UEKittUIPanelWidget.SetupInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bSetup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUEKittUIPanelWidget::SetupInput(bool bSetup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UEKittUIPanelWidget", "SetupInput");

	Params::UEKittUIPanelWidget_SetupInput Parms{};

	Parms.bSetup = bSetup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

