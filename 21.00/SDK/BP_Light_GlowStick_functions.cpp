﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Light_GlowStick

#include "Basic.hpp"

#include "BP_Light_GlowStick_classes.hpp"
#include "BP_Light_GlowStick_parameters.hpp"


namespace SDK
{

// Function BP_Light_GlowStick.BP_Light_GlowStick_C.ExecuteUbergraph_BP_Light_GlowStick
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Light_GlowStick_C::ExecuteUbergraph_BP_Light_GlowStick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Light_GlowStick_C", "ExecuteUbergraph_BP_Light_GlowStick");

	Params::BP_Light_GlowStick_C_ExecuteUbergraph_BP_Light_GlowStick Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Light_GlowStick.BP_Light_GlowStick_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Light_GlowStick_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Light_GlowStick_C", "OnDamageServer");

	Params::BP_Light_GlowStick_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Light_GlowStick.BP_Light_GlowStick_C.OnRep_Destroy
// (BlueprintCallable, BlueprintEvent)

void ABP_Light_GlowStick_C::OnRep_Destroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Light_GlowStick_C", "OnRep_Destroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Light_GlowStick.BP_Light_GlowStick_C.SetLightBrightness
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Light_GlowStick_C::SetLightBrightness()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Light_GlowStick_C", "SetLightBrightness");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Light_GlowStick.BP_Light_GlowStick_C.SetLightColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Light_GlowStick_C::SetLightColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Light_GlowStick_C", "SetLightColor");

	Params::BP_Light_GlowStick_C_SetLightColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Light_GlowStick.BP_Light_GlowStick_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Light_GlowStick_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Light_GlowStick_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

