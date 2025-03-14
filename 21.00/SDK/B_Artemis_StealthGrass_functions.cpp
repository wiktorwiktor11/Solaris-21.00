﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Artemis_StealthGrass

#include "Basic.hpp"

#include "B_Artemis_StealthGrass_classes.hpp"
#include "B_Artemis_StealthGrass_parameters.hpp"


namespace SDK
{

// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.BlueprintModifyIncomingDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            InTags                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle     EffectContext                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AB_Artemis_StealthGrass_C::BlueprintModifyIncomingDamage(float Damage, const struct FGameplayTagContainer& InTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "BlueprintModifyIncomingDamage");

	Params::B_Artemis_StealthGrass_C_BlueprintModifyIncomingDamage Parms{};

	Parms.Damage = Damage;
	Parms.InTags = std::move(InTags);
	Parms.EffectContext = std::move(EffectContext);
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.BndEvt__B_Artemis_StealthGrass_CylinderOverlapVolume_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Artemis_StealthGrass_C::BndEvt__B_Artemis_StealthGrass_CylinderOverlapVolume_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "BndEvt__B_Artemis_StealthGrass_CylinderOverlapVolume_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_Artemis_StealthGrass_C_BndEvt__B_Artemis_StealthGrass_CylinderOverlapVolume_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.BndEvt__B_Artemis_StealthGrass_CylinderOverlapVolume_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Artemis_StealthGrass_C::BndEvt__B_Artemis_StealthGrass_CylinderOverlapVolume_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "BndEvt__B_Artemis_StealthGrass_CylinderOverlapVolume_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature");

	Params::B_Artemis_StealthGrass_C_BndEvt__B_Artemis_StealthGrass_CylinderOverlapVolume_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.CalculateTraceOriginWorldSpace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   LoopIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TraceVolumeBoxExtentScaledX                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          TraceVolumeBoxExtent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AB_Artemis_StealthGrass_C::CalculateTraceOriginWorldSpace(int32 LoopIndex, float TraceVolumeBoxExtentScaledX, const struct FVector& TraceVolumeBoxExtent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "CalculateTraceOriginWorldSpace");

	Params::B_Artemis_StealthGrass_C_CalculateTraceOriginWorldSpace Parms{};

	Parms.LoopIndex = LoopIndex;
	Parms.TraceVolumeBoxExtentScaledX = TraceVolumeBoxExtentScaledX;
	Parms.TraceVolumeBoxExtent = std::move(TraceVolumeBoxExtent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.CallPlaceGrass
// (BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::CallPlaceGrass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "CallPlaceGrass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.ClearDebugLines
// (BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::ClearDebugLines()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "ClearDebugLines");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.ClearISMs
// (BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::ClearISMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "ClearISMs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.ExecuteUbergraph_B_Artemis_StealthGrass
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Artemis_StealthGrass_C::ExecuteUbergraph_B_Artemis_StealthGrass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "ExecuteUbergraph_B_Artemis_StealthGrass");

	Params::B_Artemis_StealthGrass_C_ExecuteUbergraph_B_Artemis_StealthGrass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.InitializePreviewPlane
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::InitializePreviewPlane()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "InitializePreviewPlane");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.InitializeRenderTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::InitializeRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "InitializeRenderTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.InitializeVolumes
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::InitializeVolumes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "InitializeVolumes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.LookupRenderTargetColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          WorldPosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     LinearColor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Artemis_StealthGrass_C::LookupRenderTargetColor(const struct FVector& WorldPosition, struct FLinearColor* LinearColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "LookupRenderTargetColor");

	Params::B_Artemis_StealthGrass_C_LookupRenderTargetColor Parms{};

	Parms.WorldPosition = std::move(WorldPosition);

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColor != nullptr)
		*LinearColor = std::move(Parms.LinearColor);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.PerformTracesAndPlaceISMs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::PerformTracesAndPlaceISMs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "PerformTracesAndPlaceISMs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.PlaceGrass
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::PlaceGrass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "PlaceGrass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Artemis_StealthGrass_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Artemis_StealthGrass_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "ReceiveEndPlay");

	Params::B_Artemis_StealthGrass_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.SetGrassMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::SetGrassMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "SetGrassMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.TogglePreviewPlaneVisibility
// (BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::TogglePreviewPlaneVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "TogglePreviewPlaneVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.UpdateAllGrassActorsInLevel
// (BlueprintCallable, BlueprintEvent)

void AB_Artemis_StealthGrass_C::UpdateAllGrassActorsInLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "UpdateAllGrassActorsInLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Artemis_StealthGrass.B_Artemis_StealthGrass_C.GetCurieCollisionComponentOverride
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPrimitiveComponent*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* AB_Artemis_StealthGrass_C::GetCurieCollisionComponentOverride() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Artemis_StealthGrass_C", "GetCurieCollisionComponentOverride");

	Params::B_Artemis_StealthGrass_C_GetCurieCollisionComponentOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

