﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_DudeBro_Mini

#include "Basic.hpp"

#include "BGA_DudeBro_Mini_classes.hpp"
#include "BGA_DudeBro_Mini_parameters.hpp"


namespace SDK
{

// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.ActiveGeyser
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Mini_C::ActiveGeyser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "ActiveGeyser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.BndEvt__S_FX_GeyserCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_DudeBro_Mini_C::BndEvt__S_FX_GeyserCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "BndEvt__S_FX_GeyserCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BGA_DudeBro_Mini_C_BndEvt__S_FX_GeyserCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.BndEvt__S_FX_GeyserCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_DudeBro_Mini_C::BndEvt__S_FX_GeyserCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "BndEvt__S_FX_GeyserCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BGA_DudeBro_Mini_C_BndEvt__S_FX_GeyserCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.DeactivateGeyser
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Mini_C::DeactivateGeyser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "DeactivateGeyser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.ExecuteUbergraph_BGA_DudeBro_Mini
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_DudeBro_Mini_C::ExecuteUbergraph_BGA_DudeBro_Mini(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "ExecuteUbergraph_BGA_DudeBro_Mini");

	Params::BGA_DudeBro_Mini_C_ExecuteUbergraph_BGA_DudeBro_Mini Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.GeiserTimeout
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Mini_C::GeiserTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "GeiserTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.Grow__FinishedFunc
// (BlueprintEvent)

void ABGA_DudeBro_Mini_C::Grow__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "Grow__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.Grow__UpdateFunc
// (BlueprintEvent)

void ABGA_DudeBro_Mini_C::Grow__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "Grow__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.OnReady_4FB5731B488F3EF6AE379C861ACDFAB8
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Mini_C::OnReady_4FB5731B488F3EF6AE379C861ACDFAB8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "OnReady_4FB5731B488F3EF6AE379C861ACDFAB8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.OnRep_IsActive
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Mini_C::OnRep_IsActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "OnRep_IsActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.OnRep_IsDisabled
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Mini_C::OnRep_IsDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "OnRep_IsDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.ProjEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*              Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_DudeBro_Mini_C::ProjEnter(class AFortProjectileBase* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "ProjEnter");

	Params::BGA_DudeBro_Mini_C_ProjEnter Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.ProjExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*              Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_DudeBro_Mini_C::ProjExit(class AFortProjectileBase* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "ProjExit");

	Params::BGA_DudeBro_Mini_C_ProjExit Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_DudeBro_Mini_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.SetGeiserActive
// (BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Mini_C::SetGeiserActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "SetGeiserActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.ToyEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicsBall_Master_C*            Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_DudeBro_Mini_C::ToyEnter(class APhysicsBall_Master_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "ToyEnter");

	Params::BGA_DudeBro_Mini_C_ToyEnter Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.ToyExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicsBall_Master_C*            Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_DudeBro_Mini_C::ToyExit(class APhysicsBall_Master_C* Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "ToyExit");

	Params::BGA_DudeBro_Mini_C_ToyExit Parms{};

	Parms.Projectile = Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_DudeBro_Mini.BGA_DudeBro_Mini_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_DudeBro_Mini_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_DudeBro_Mini_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

