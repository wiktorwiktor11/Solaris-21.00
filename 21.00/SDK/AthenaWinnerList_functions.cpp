﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaWinnerList

#include "Basic.hpp"

#include "AthenaWinnerList_classes.hpp"
#include "AthenaWinnerList_parameters.hpp"


namespace SDK
{

// Function AthenaWinnerList.AthenaWinnerList_C.ClearList
// (BlueprintCallable, BlueprintEvent)

void UAthenaWinnerList_C::ClearList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinnerList_C", "ClearList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWinnerList.AthenaWinnerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaWinnerList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinnerList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWinnerList.AthenaWinnerList_C.ExecuteUbergraph_AthenaWinnerList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWinnerList_C::ExecuteUbergraph_AthenaWinnerList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinnerList_C", "ExecuteUbergraph_AthenaWinnerList");

	Params::AthenaWinnerList_C_ExecuteUbergraph_AthenaWinnerList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaWinnerList.AthenaWinnerList_C.OnRep_isWinner
// (BlueprintCallable, BlueprintEvent)

void UAthenaWinnerList_C::OnRep_isWinner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinnerList_C", "OnRep_isWinner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaWinnerList.AthenaWinnerList_C.OnWinnersAnnounced
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FAthenaWinnerInfo                WinnerInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaWinnerList_C::OnWinnersAnnounced(const struct FAthenaWinnerInfo& WinnerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinnerList_C", "OnWinnersAnnounced");

	Params::AthenaWinnerList_C_OnWinnersAnnounced Parms{};

	Parms.WinnerInfo = std::move(WinnerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaWinnerList.AthenaWinnerList_C.TimeoutDuration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWinnerList_C::TimeoutDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinnerList_C", "TimeoutDuration");

	Params::AthenaWinnerList_C_TimeoutDuration Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaWinnerList.AthenaWinnerList_C.UpdateWinnerList
// (BlueprintCallable, BlueprintEvent)

void UAthenaWinnerList_C::UpdateWinnerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaWinnerList_C", "UpdateWinnerList");

	UObject::ProcessEvent(Func, nullptr);
}

}

