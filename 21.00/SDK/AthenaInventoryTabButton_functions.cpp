﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryTabButton

#include "Basic.hpp"

#include "AthenaInventoryTabButton_classes.hpp"
#include "AthenaInventoryTabButton_parameters.hpp"


namespace SDK
{

// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryTabButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryTabButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInventoryTabButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.ExecuteUbergraph_AthenaInventoryTabButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryTabButton_C::ExecuteUbergraph_AthenaInventoryTabButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "ExecuteUbergraph_AthenaInventoryTabButton");

	Params::AthenaInventoryTabButton_C_ExecuteUbergraph_AthenaInventoryTabButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.HandleSelectionChangedVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryTabButton_C::HandleSelectionChangedVisuals(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "HandleSelectionChangedVisuals");

	Params::AthenaInventoryTabButton_C_HandleSelectionChangedVisuals Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.InitializeButtonBorderMID
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryTabButton_C::InitializeButtonBorderMID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "InitializeButtonBorderMID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryTabButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInventoryTabButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.OnSelectedChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButtonLegacy*              Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryTabButton_C::OnSelectedChangedEvent(class UCommonButtonLegacy* Button, bool Selected_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "OnSelectedChangedEvent");

	Params::AthenaInventoryTabButton_C_OnSelectedChangedEvent Parms{};

	Parms.Button = Button;
	Parms.Selected_0 = Selected_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.OverrideIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      inSlateBrush                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaInventoryTabButton_C::OverrideIcon(bool Show, const struct FSlateBrush& inSlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "OverrideIcon");

	Params::AthenaInventoryTabButton_C_OverrideIcon Parms{};

	Parms.Show = Show;
	Parms.inSlateBrush = std::move(inSlateBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryTabButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "PreConstruct");

	Params::AthenaInventoryTabButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.SeedRandomValues
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryTabButton_C::SeedRandomValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "SeedRandomValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonText_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaInventoryTabButton_C::SetText(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "SetText");

	Params::AthenaInventoryTabButton_C_SetText Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryTabButton.AthenaInventoryTabButton_C.UpdateMIDWithRandomValues
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryTabButton_C::UpdateMIDWithRandomValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryTabButton_C", "UpdateMIDWithRandomValues");

	UObject::ProcessEvent(Func, nullptr);
}

}

