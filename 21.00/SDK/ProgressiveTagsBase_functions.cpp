﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressiveTagsBase

#include "Basic.hpp"

#include "ProgressiveTagsBase_classes.hpp"
#include "ProgressiveTagsBase_parameters.hpp"


namespace SDK
{

// Function ProgressiveTagsBase.ProgressiveTagsBase_C.ExecuteUbergraph_ProgressiveTagsBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveTagsBase_C::ExecuteUbergraph_ProgressiveTagsBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "ExecuteUbergraph_ProgressiveTagsBase");

	Params::ProgressiveTagsBase_C_ExecuteUbergraph_ProgressiveTagsBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressiveTagsBase.ProgressiveTagsBase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveTagsBase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "PreConstruct");

	Params::ProgressiveTagsBase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressiveTagsBase.ProgressiveTagsBase_C.UpdateColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Background_Color_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      Text_Color_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UProgressiveTagsBase_C::UpdateColor(const struct FLinearColor& Background_Color_0, const struct FSlateColor& Text_Color_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "UpdateColor");

	Params::ProgressiveTagsBase_C_UpdateColor Parms{};

	Parms.Background_Color_0 = std::move(Background_Color_0);
	Parms.Text_Color_0 = std::move(Text_Color_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressiveTagsBase.ProgressiveTagsBase_C.UpdateImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      TintColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   Angle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressiveTagsBase_C::UpdateImage(class UTexture2D* Texture, const struct FSlateColor& TintColor, float Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "UpdateImage");

	Params::ProgressiveTagsBase_C_UpdateImage Parms{};

	Parms.Texture = Texture;
	Parms.TintColor = std::move(TintColor);
	Parms.Angle = Angle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressiveTagsBase.ProgressiveTagsBase_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UProgressiveTagsBase_C::UpdateText(const class FText& Text_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveTagsBase_C", "UpdateText");

	Params::ProgressiveTagsBase_C_UpdateText Parms{};

	Parms.Text_0 = std::move(Text_0);

	UObject::ProcessEvent(Func, &Parms);
}

}

