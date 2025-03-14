﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LatencyUI

#include "Basic.hpp"

#include "LatencyUI_classes.hpp"


namespace SDK
{

// Function LatencyUI.LatencyWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)

void ULatencyWidget::StartTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LatencyWidget", "StartTimer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function LatencyUI.LatencyWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)

void ULatencyWidget::StopTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LatencyWidget", "StopTimer");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

