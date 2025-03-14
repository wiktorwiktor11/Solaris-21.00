﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryItemInfo

#include "Basic.hpp"

#include "AthenaInventoryItemInfo_classes.hpp"
#include "AthenaInventoryItemInfo_parameters.hpp"


namespace SDK
{

// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInventoryItemInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.ExecuteUbergraph_AthenaInventoryItemInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryItemInfo_C::ExecuteUbergraph_AthenaInventoryItemInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "ExecuteUbergraph_AthenaInventoryItemInfo");

	Params::AthenaInventoryItemInfo_C_ExecuteUbergraph_AthenaInventoryItemInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.OnExtensionWidgetAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ExtensionWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryItemInfo_C::OnExtensionWidgetAdded(class UUserWidget* ExtensionWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "OnExtensionWidgetAdded");

	Params::AthenaInventoryItemInfo_C_OnExtensionWidgetAdded Parms{};

	Parms.ExtensionWidget = ExtensionWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.OnInspectItemInput
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPressed                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryItemInfo_C::OnInspectItemInput(const bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "OnInspectItemInput");

	Params::AthenaInventoryItemInfo_C_OnInspectItemInput Parms{};

	Parms.bPressed = bPressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.OnItemCategoryIconUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bHasCategoryIcon                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryItemInfo_C::OnItemCategoryIconUpdated(const bool bHasCategoryIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "OnItemCategoryIconUpdated");

	Params::AthenaInventoryItemInfo_C_OnItemCategoryIconUpdated Parms{};

	Parms.bHasCategoryIcon = bHasCategoryIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.OnItemRarityUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortRarity                             ItemRarity                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData              RarityItemData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaInventoryItemInfo_C::OnItemRarityUpdated(const EFortRarity ItemRarity, const struct FFortRarityItemData& RarityItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "OnItemRarityUpdated");

	Params::AthenaInventoryItemInfo_C_OnItemRarityUpdated Parms{};

	Parms.ItemRarity = ItemRarity;
	Parms.RarityItemData = std::move(RarityItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaInventoryItemInfo_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "OnMouseButtonDown");

	Params::AthenaInventoryItemInfo_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.OnOwnerDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryItemInfo_C::OnOwnerDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "OnOwnerDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.OnPostItemToRepresentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                        ItemToRepresent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryItemInfo_C::OnPostItemToRepresentChanged(const class UFortItem* ItemToRepresent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "OnPostItemToRepresentChanged");

	Params::AthenaInventoryItemInfo_C_OnPostItemToRepresentChanged Parms{};

	Parms.ItemToRepresent = ItemToRepresent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.PlayInspectAudio
// (BlueprintCallable, BlueprintEvent)

void UAthenaInventoryItemInfo_C::PlayInspectAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "PlayInspectAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryItemInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "PreConstruct");

	Params::AthenaInventoryItemInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.SetRarityGlowColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Specified_Color                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortRarity                             Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryItemInfo_C::SetRarityGlowColors(const struct FLinearColor& Specified_Color, EFortRarity Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "SetRarityGlowColors");

	Params::AthenaInventoryItemInfo_C_SetRarityGlowColors Parms{};

	Parms.Specified_Color = std::move(Specified_Color);
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaInventoryItemInfo.AthenaInventoryItemInfo_C.UpdateRarityInfoVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaInventoryItemInfo_C::UpdateRarityInfoVisibility(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaInventoryItemInfo_C", "UpdateRarityInfoVisibility");

	Params::AthenaInventoryItemInfo_C_UpdateRarityInfoVisibility Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

}

