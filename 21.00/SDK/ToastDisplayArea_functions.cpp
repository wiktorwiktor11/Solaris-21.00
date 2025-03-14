﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastDisplayArea

#include "Basic.hpp"

#include "ToastDisplayArea_classes.hpp"
#include "ToastDisplayArea_parameters.hpp"


namespace SDK
{

// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "ExecuteUbergraph_ToastDisplayArea");

	Params::ToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ToastDisplayArea.ToastDisplayArea_C.TestFrontendToast
// (BlueprintCallable, BlueprintEvent)

void UToastDisplayArea_C::TestFrontendToast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ToastDisplayArea_C", "TestFrontendToast");

	UObject::ProcessEvent(Func, nullptr);
}

}

