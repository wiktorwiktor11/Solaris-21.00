﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressiveItem_Tall

#include "Basic.hpp"

#include "ProgressiveItem_Tall_classes.hpp"
#include "ProgressiveItem_Tall_parameters.hpp"


namespace SDK
{

// Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UProgressiveItem_Tall_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnInitializeSetInfo
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FProgressiveSetInfo              InSetInfo                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             BottomText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             BottomSubtext                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bSubscribed                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveItem_Tall_C::BP_OnInitializeSetInfo(const struct FProgressiveSetInfo& InSetInfo, const class FText& BottomText, const class FText& BottomSubtext, const bool bSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnInitializeSetInfo");

	Params::ProgressiveItem_Tall_C_BP_OnInitializeSetInfo Parms{};

	Parms.InSetInfo = std::move(InSetInfo);
	Parms.BottomText = std::move(BottomText);
	Parms.BottomSubtext = std::move(BottomSubtext);
	Parms.bSubscribed = bSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UProgressiveItem_Tall_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.ExecuteUbergraph_ProgressiveItem_Tall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveItem_Tall_C::ExecuteUbergraph_ProgressiveItem_Tall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "ExecuteUbergraph_ProgressiveItem_Tall");

	Params::ProgressiveItem_Tall_C_ExecuteUbergraph_ProgressiveItem_Tall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.Play intro
// (Public, BlueprintCallable, BlueprintEvent)

void UProgressiveItem_Tall_C::Play_intro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "Play intro");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveItem_Tall_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "PreConstruct");

	Params::ProgressiveItem_Tall_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressiveItem_Tall.ProgressiveItem_Tall_C.UpdateVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hover                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Subbed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Completed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveItem_Tall_C::UpdateVisualState(bool Hover, bool Subbed, bool Completed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItem_Tall_C", "UpdateVisualState");

	Params::ProgressiveItem_Tall_C_UpdateVisualState Parms{};

	Parms.Hover = Hover;
	Parms.Subbed = Subbed;
	Parms.Completed = Completed;

	UObject::ProcessEvent(Func, &Parms);
}

}

