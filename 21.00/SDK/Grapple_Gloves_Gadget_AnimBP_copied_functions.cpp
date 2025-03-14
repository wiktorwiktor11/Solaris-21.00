﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grapple_Gloves_Gadget_AnimBP_copied

#include "Basic.hpp"

#include "Grapple_Gloves_Gadget_AnimBP_copied_classes.hpp"
#include "Grapple_Gloves_Gadget_AnimBP_copied_parameters.hpp"


namespace SDK
{

// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "AnimGraph");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.AnimNotify_EnterNearGroundToPull
// (BlueprintCallable, BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::AnimNotify_EnterNearGroundToPull()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "AnimNotify_EnterNearGroundToPull");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.AnimNotify_EnterSwingInAir
// (BlueprintCallable, BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::AnimNotify_EnterSwingInAir()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "AnimNotify_EnterSwingInAir");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.AnimNotify_EnterSwingNearGround
// (BlueprintCallable, BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::AnimNotify_EnterSwingNearGround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "AnimNotify_EnterSwingNearGround");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.AnimNotify_EnterWebCast
// (BlueprintCallable, BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::AnimNotify_EnterWebCast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "AnimNotify_EnterWebCast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::BlueprintPostEvaluateAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "BlueprintPostEvaluateAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.BlueprintProcessAnimInputEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAnimInputEvent*              AnimInputEvent                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::BlueprintProcessAnimInputEvent(const class UFortAnimInputEvent* AnimInputEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "BlueprintProcessAnimInputEvent");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_BlueprintProcessAnimInputEvent Parms{};

	Parms.AnimInputEvent = AnimInputEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "BlueprintUpdateAnimation");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.CharacterSkeletalControlPostLegIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPosePostLegIK                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        CharacterSkeletalControlPostLegIK_0                    (Parm, OutParm, NoDestructor)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::CharacterSkeletalControlPostLegIK(const struct FPoseLink& InPosePostLegIK, struct FPoseLink* CharacterSkeletalControlPostLegIK_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "CharacterSkeletalControlPostLegIK");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_CharacterSkeletalControlPostLegIK Parms{};

	Parms.InPosePostLegIK = std::move(InPosePostLegIK);

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterSkeletalControlPostLegIK_0 != nullptr)
		*CharacterSkeletalControlPostLegIK_0 = std::move(Parms.CharacterSkeletalControlPostLegIK_0);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_BlendListByBool_1273F6EE4B28E301DE184B81C1C8D087
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_BlendListByBool_1273F6EE4B28E301DE184B81C1C8D087()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_BlendListByBool_1273F6EE4B28E301DE184B81C1C8D087");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_1AD776BB4B627BA880245AB41C35875E
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_1AD776BB4B627BA880245AB41C35875E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_1AD776BB4B627BA880245AB41C35875E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_4DB02A82428FB7624FE2D79F149D8BCD
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_4DB02A82428FB7624FE2D79F149D8BCD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_4DB02A82428FB7624FE2D79F149D8BCD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_5EA13A62431BBA9002159DA742079B0A
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_5EA13A62431BBA9002159DA742079B0A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_5EA13A62431BBA9002159DA742079B0A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_6FB1045F42F45CF82AF588BB0E857C2A
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_6FB1045F42F45CF82AF588BB0E857C2A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_6FB1045F42F45CF82AF588BB0E857C2A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_82C35E8E47F7251BF722F980194DF83E
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_82C35E8E47F7251BF722F980194DF83E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_82C35E8E47F7251BF722F980194DF83E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_B4A8874946AB322AD3EFA6B3E2D0EB5B
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_B4A8874946AB322AD3EFA6B3E2D0EB5B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_B4A8874946AB322AD3EFA6B3E2D0EB5B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_B967E687489C1D5B2A56F0910A83733A
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_B967E687489C1D5B2A56F0910A83733A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_B967E687489C1D5B2A56F0910A83733A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_BA7F56F74172854E0419C3BD4382C2E3
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_BA7F56F74172854E0419C3BD4382C2E3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_BA7F56F74172854E0419C3BD4382C2E3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_D411B23743446B5F7ABBE1A3D2E7E4B1
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_D411B23743446B5F7ABBE1A3D2E7E4B1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_D411B23743446B5F7ABBE1A3D2E7E4B1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_F83A25AD4D40783DC8CDC8BAB63E866A
// (BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_F83A25AD4D40783DC8CDC8BAB63E866A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied_AnimGraphNode_TransitionResult_F83A25AD4D40783DC8CDC8BAB63E866A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_ExecuteUbergraph_Grapple_Gloves_Gadget_AnimBP_copied Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        PassThroughFullBodyPose                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        FullBodyOverride_0                                     (Parm, OutParm, NoDestructor)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "FullBodyOverride");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_FullBodyOverride Parms{};

	Parms.PassThroughFullBodyPose = std::move(PassThroughFullBodyPose);

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride_0 != nullptr)
		*FullBodyOverride_0 = std::move(Parms.FullBodyOverride_0);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.JustLanded
// (BlueprintCallable, BlueprintEvent)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::JustLanded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "JustLanded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.SplitVector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Vec                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Magnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::SplitVector(const struct FVector& Vec, float* Magnitude, struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "SplitVector");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_SplitVector Parms{};

	Parms.Vec = std::move(Vec);

	UObject::ProcessEvent(Func, &Parms);

	if (Magnitude != nullptr)
		*Magnitude = Parms.Magnitude;

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.SwingReleaseSelection_-90
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext               Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference               Node                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::SwingReleaseSelection__90(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "SwingReleaseSelection_-90");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_SwingReleaseSelection__90 Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.SwingReleaseSelection_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext               Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference               Node                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::SwingReleaseSelection_0(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "SwingReleaseSelection_0");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_SwingReleaseSelection_0 Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.SwingReleaseSelection_45
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext               Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference               Node                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::SwingReleaseSelection_45(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "SwingReleaseSelection_45");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_SwingReleaseSelection_45 Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Grapple_Gloves_Gadget_AnimBP_copied.Grapple_Gloves_Gadget_AnimBP_copied_C.SwingReleaseSelection_90
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext               Context                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAnimNodeReference               Node                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UGrapple_Gloves_Gadget_AnimBP_copied_C::SwingReleaseSelection_90(const struct FAnimUpdateContext& Context, const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Grapple_Gloves_Gadget_AnimBP_copied_C", "SwingReleaseSelection_90");

	Params::Grapple_Gloves_Gadget_AnimBP_copied_C_SwingReleaseSelection_90 Parms{};

	Parms.Context = std::move(Context);
	Parms.Node = std::move(Node);

	UObject::ProcessEvent(Func, &Parms);
}

}

