﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Weapon_GrappleGloves_AttachmentPoint_Child

#include "Basic.hpp"

#include "BGA_Weapon_GrappleGloves_AttachmentPoint_Child_classes.hpp"
#include "BGA_Weapon_GrappleGloves_AttachmentPoint_Child_parameters.hpp"


namespace SDK
{

// Function BGA_Weapon_GrappleGloves_AttachmentPoint_Child.BGA_Weapon_GrappleGloves_AttachmentPoint_Child_C.ExecuteUbergraph_BGA_Weapon_GrappleGloves_AttachmentPoint_Child
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Weapon_GrappleGloves_AttachmentPoint_Child_C::ExecuteUbergraph_BGA_Weapon_GrappleGloves_AttachmentPoint_Child(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Weapon_GrappleGloves_AttachmentPoint_Child_C", "ExecuteUbergraph_BGA_Weapon_GrappleGloves_AttachmentPoint_Child");

	Params::BGA_Weapon_GrappleGloves_AttachmentPoint_Child_C_ExecuteUbergraph_BGA_Weapon_GrappleGloves_AttachmentPoint_Child Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Weapon_GrappleGloves_AttachmentPoint_Child.BGA_Weapon_GrappleGloves_AttachmentPoint_Child_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Weapon_GrappleGloves_AttachmentPoint_Child_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Weapon_GrappleGloves_AttachmentPoint_Child_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

