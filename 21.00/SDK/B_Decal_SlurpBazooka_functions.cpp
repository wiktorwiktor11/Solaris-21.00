﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Decal_SlurpBazooka

#include "Basic.hpp"

#include "B_Decal_SlurpBazooka_classes.hpp"
#include "B_Decal_SlurpBazooka_parameters.hpp"


namespace SDK
{

// Function B_Decal_SlurpBazooka.B_Decal_SlurpBazooka_C.ExecuteUbergraph_B_Decal_SlurpBazooka
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Decal_SlurpBazooka_C::ExecuteUbergraph_B_Decal_SlurpBazooka(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Decal_SlurpBazooka_C", "ExecuteUbergraph_B_Decal_SlurpBazooka");

	Params::B_Decal_SlurpBazooka_C_ExecuteUbergraph_B_Decal_SlurpBazooka Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Decal_SlurpBazooka.B_Decal_SlurpBazooka_C.FadeIn__FinishedFunc
// (BlueprintEvent)

void AB_Decal_SlurpBazooka_C::FadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Decal_SlurpBazooka_C", "FadeIn__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Decal_SlurpBazooka.B_Decal_SlurpBazooka_C.FadeIn__UpdateFunc
// (BlueprintEvent)

void AB_Decal_SlurpBazooka_C::FadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Decal_SlurpBazooka_C", "FadeIn__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Decal_SlurpBazooka.B_Decal_SlurpBazooka_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Decal_SlurpBazooka_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Decal_SlurpBazooka_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Decal_SlurpBazooka.B_Decal_SlurpBazooka_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Decal_SlurpBazooka_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Decal_SlurpBazooka_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

