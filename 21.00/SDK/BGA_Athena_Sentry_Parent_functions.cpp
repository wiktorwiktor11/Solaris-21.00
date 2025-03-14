﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Sentry_Parent

#include "Basic.hpp"

#include "BGA_Athena_Sentry_Parent_classes.hpp"
#include "BGA_Athena_Sentry_Parent_parameters.hpp"


namespace SDK
{

// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.ActivateRays
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::ActivateRays()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "ActivateRays");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.AttemptToRegisterWithDataTrackerManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::AttemptToRegisterWithDataTrackerManager()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "AttemptToRegisterWithDataTrackerManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.BeginTargeting
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::BeginTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "BeginTargeting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_Athena_Sentry_Parent_C::BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BGA_Athena_Sentry_Parent_C_BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Sentry_Parent_C::BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::BGA_Athena_Sentry_Parent_C_BndEvt__ActivationVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Sentry_Parent_C::BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature");

	Params::BGA_Athena_Sentry_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.BP Stop Rotation Sound
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::BP_Stop_Rotation_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "BP Stop Rotation Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.BPOnSentryStateChanged
// (Event, Public, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::BPOnSentryStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "BPOnSentryStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.CanDoTargeting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Sentry_Parent_C::CanDoTargeting(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "CanDoTargeting");

	Params::BGA_Athena_Sentry_Parent_C_CanDoTargeting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.CanTargetPawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPawn*                        Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABGA_Athena_Sentry_Parent_C::CanTargetPawn(class AFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "CanTargetPawn");

	Params::BGA_Athena_Sentry_Parent_C_CanTargetPawn Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "Deactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.DeactivateRays
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::DeactivateRays()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "DeactivateRays");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.DoTargeting
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::DoTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "DoTargeting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.ExecuteUbergraph_BGA_Athena_Sentry_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Sentry_Parent_C::ExecuteUbergraph_BGA_Athena_Sentry_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "ExecuteUbergraph_BGA_Athena_Sentry_Parent");

	Params::BGA_Athena_Sentry_Parent_C_ExecuteUbergraph_BGA_Athena_Sentry_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.GetStateTagFromEnumValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                     StateTag                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                                    bFoundValidData                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Sentry_Parent_C::GetStateTagFromEnumValue(struct FGameplayTag* StateTag, bool* bFoundValidData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "GetStateTagFromEnumValue");

	Params::BGA_Athena_Sentry_Parent_C_GetStateTagFromEnumValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StateTag != nullptr)
		*StateTag = std::move(Parms.StateTag);

	if (bFoundValidData != nullptr)
		*bFoundValidData = Parms.bFoundValidData;
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.HideAndKill
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::HideAndKill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "HideAndKill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.IsUpsideDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABGA_Athena_Sentry_Parent_C::IsUpsideDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "IsUpsideDown");

	Params::BGA_Athena_Sentry_Parent_C_IsUpsideDown Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.LookLocationToWorldRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator ABGA_Athena_Sentry_Parent_C::LookLocationToWorldRotation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "LookLocationToWorldRotation");

	Params::BGA_Athena_Sentry_Parent_C_LookLocationToWorldRotation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.LostTarget
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::LostTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "LostTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_Sentry_Parent_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "OnDamageServer");

	Params::BGA_Athena_Sentry_Parent_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_Sentry_Parent_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "OnDeathServer");

	Params::BGA_Athena_Sentry_Parent_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.OnRep_RepDeath
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::OnRep_RepDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "OnRep_RepDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.Play Lost Target Sound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::Play_Lost_Target_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "Play Lost Target Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.PlayStartedIdleRotationAudio
// (Event, Public, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::PlayStartedIdleRotationAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "PlayStartedIdleRotationAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.PlayStoppedIdleRotationAudio
// (Event, Public, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::PlayStoppedIdleRotationAudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "PlayStoppedIdleRotationAudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.PostLostTargetDelay
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::PostLostTargetDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "PostLostTargetDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Sentry_Parent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "ReceiveEndPlay");

	Params::BGA_Athena_Sentry_Parent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.Scale Pos Yaw Camera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   YawIn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABGA_Athena_Sentry_Parent_C::Scale_Pos_Yaw_Camera(float YawIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "Scale Pos Yaw Camera");

	Params::BGA_Athena_Sentry_Parent_C_Scale_Pos_Yaw_Camera Parms{};

	Parms.YawIn = YawIn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.SelectClosestIdleRotation
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::SelectClosestIdleRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "SelectClosestIdleRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.SetTargetLastLoc
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::SetTargetLastLoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "SetTargetLastLoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.TL_ScaleRays__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::TL_ScaleRays__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "TL_ScaleRays__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.TL_ScaleRays__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::TL_ScaleRays__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "TL_ScaleRays__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.TrackedPawnWasSet
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::TrackedPawnWasSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "TrackedPawnWasSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Sentry_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Sentry_Parent.BGA_Athena_Sentry_Parent_C.IsValidAutoFireTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           Attacker                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABGA_Athena_Sentry_Parent_C::IsValidAutoFireTarget(const class AActor* Attacker) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Sentry_Parent_C", "IsValidAutoFireTarget");

	Params::BGA_Athena_Sentry_Parent_C_IsValidAutoFireTarget Parms{};

	Parms.Attacker = Attacker;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

