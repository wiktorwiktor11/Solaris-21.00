﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Car_DEFAULT

#include "Basic.hpp"

#include "Car_DEFAULT_classes.hpp"
#include "Car_DEFAULT_parameters.hpp"


namespace SDK
{

// Function Car_DEFAULT.Car_DEFAULT_C.BounceCar__FinishedFunc
// (BlueprintEvent)

void ACar_DEFAULT_C::BounceCar__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "BounceCar__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.BounceCar__UpdateFunc
// (BlueprintEvent)

void ACar_DEFAULT_C::BounceCar__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "BounceCar__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Construct Clean Up Lights
// (Public, BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::Construct_Clean_Up_Lights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Construct Clean Up Lights");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.construct_ValidateLightsOnVars
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    doesHaveLights                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_DEFAULT_C::construct_ValidateLightsOnVars(bool* doesHaveLights)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "construct_ValidateLightsOnVars");

	Params::Car_DEFAULT_C_construct_ValidateLightsOnVars Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (doesHaveLights != nullptr)
		*doesHaveLights = Parms.doesHaveLights;
}


// Function Car_DEFAULT.Car_DEFAULT_C.ExecuteUbergraph_Car_DEFAULT
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_DEFAULT_C::ExecuteUbergraph_Car_DEFAULT(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "ExecuteUbergraph_Car_DEFAULT");

	Params::Car_DEFAULT_C_ExecuteUbergraph_Car_DEFAULT Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.FadeSirenLight
// (BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::FadeSirenLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "FadeSirenLight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.FireOffCarAlarm
// (BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::FireOffCarAlarm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "FireOffCarAlarm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.generateMeshMIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::generateMeshMIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "generateMeshMIDs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.getCarMatsForLights
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> outMaterials                                           (Parm, OutParm)

void ACar_DEFAULT_C::getCarMatsForLights(TArray<class UMaterialInstanceDynamic*>* outMaterials)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "getCarMatsForLights");

	Params::Car_DEFAULT_C_getCarMatsForLights Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (outMaterials != nullptr)
		*outMaterials = std::move(Parms.outMaterials);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Hit Bounce Finished
// (BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::Hit_Bounce_Finished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Hit Bounce Finished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.MaterialEditorSine
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Look_up_value                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Period                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ACar_DEFAULT_C::MaterialEditorSine(float Look_up_value, float Period)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "MaterialEditorSine");

	Params::Car_DEFAULT_C_MaterialEditorSine Parms{};

	Parms.Look_up_value = Look_up_value;
	Parms.Period = Period;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Car_DEFAULT.Car_DEFAULT_C.OnBounceAnimationUpdate
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortBounceData                  Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ACar_DEFAULT_C::OnBounceAnimationUpdate(const struct FFortBounceData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "OnBounceAnimationUpdate");

	Params::Car_DEFAULT_C_OnBounceAnimationUpdate Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ACar_DEFAULT_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "OnDamagePlayEffects");

	Params::Car_DEFAULT_C_OnDamagePlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ACar_DEFAULT_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "OnDamageServer");

	Params::Car_DEFAULT_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortDayPhase                           CurrentDayPhase                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortDayPhase                           PreviousDayPhase                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAtCreation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_DEFAULT_C::OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "OnDayPhaseChanged");

	Params::Car_DEFAULT_C_OnDayPhaseChanged Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ACar_DEFAULT_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "OnDeathPlayEffects");

	Params::Car_DEFAULT_C_OnDeathPlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Player jump based bounce 
// (BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::Player_jump_based_bounce_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Player jump based bounce ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.PlayJumpOnCarSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_DEFAULT_C::PlayJumpOnCarSound(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "PlayJumpOnCarSound");

	Params::Car_DEFAULT_C_PlayJumpOnCarSound Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Randomize the target brightness levels
// (Public, BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::Randomize_the_target_brightness_levels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Randomize the target brightness levels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACar_DEFAULT_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_DEFAULT_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "ReceiveEndPlay");

	Params::Car_DEFAULT_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACar_DEFAULT_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "ReceiveHit");

	Params::Car_DEFAULT_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Set Light Brightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Zero_1_Intensity                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Include_Second_Emissive_Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Force                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_DEFAULT_C::Set_Light_Brightness(float Zero_1_Intensity, bool Include_Second_Emissive_Channel, bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Set Light Brightness");

	Params::Car_DEFAULT_C_Set_Light_Brightness Parms{};

	Parms.Zero_1_Intensity = Zero_1_Intensity;
	Parms.Include_Second_Emissive_Channel = Include_Second_Emissive_Channel;
	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.setcanmakebouncingnoisetrue
// (BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::setcanmakebouncingnoisetrue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "setcanmakebouncingnoisetrue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.SetCarAlarmEnabledBasedOnLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ACar_DEFAULT_C::SetCarAlarmEnabledBasedOnLocation(const struct FVector& Location, bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "SetCarAlarmEnabledBasedOnLocation");

	Params::Car_DEFAULT_C_SetCarAlarmEnabledBasedOnLocation Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

	return Parms.ReturnValue;
}


// Function Car_DEFAULT.Car_DEFAULT_C.StartSirenLight
// (BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::StartSirenLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "StartSirenLight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.StopCarAlarmFromPlaying
// (BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::StopCarAlarmFromPlaying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "StopCarAlarmFromPlaying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACar_DEFAULT_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACar_DEFAULT_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ACar_DEFAULT_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Timeline_2__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Timeline_2__FireOffNoise__EventFunc
// (BlueprintEvent)

void ACar_DEFAULT_C::Timeline_2__FireOffNoise__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Timeline_2__FireOffNoise__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ACar_DEFAULT_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "Timeline_2__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.toggle light visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACar_DEFAULT_C::toggle_light_visibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "toggle light visibility");

	Params::Car_DEFAULT_C_toggle_light_visibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Car_DEFAULT.Car_DEFAULT_C.TriggerLowHealthParticleEffect
// (BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::TriggerLowHealthParticleEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "TriggerLowHealthParticleEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Car_DEFAULT.Car_DEFAULT_C.validateLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ACar_DEFAULT_C::validateLightVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Car_DEFAULT_C", "validateLightVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

