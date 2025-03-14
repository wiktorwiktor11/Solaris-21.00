﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Tree_Crown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Tree_Crown.BP_Tree_Crown_C
// 0x0098 (0x0308 - 0x0270)
class ABP_Tree_Crown_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        AudioLocation;                                     // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Tree_Crown;                                     // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FallingTreeTop_GlobalRotate_874EE12049FA6ADD01D9B295F40A0260; // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FallingTreeTop_Fall_in_Z_874EE12049FA6ADD01D9B295F40A0260; // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FallingTreeTop_Bend_Angle_874EE12049FA6ADD01D9B295F40A0260; // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FallingTreeTop__Direction_874EE12049FA6ADD01D9B295F40A0260; // 0x029C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29D[0x3];                                      // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FallingTreeTop;                                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AxisRotationAngle;                                 // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BendAngle;                                         // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactLocation;                                    // 0x02B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactNormal;                                      // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           UpdateTreeDataTimerHandle;                         // 0x02E0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHeight;                                         // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinHeight;                                         // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FallVector;                                        // 0x02F0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Tree_Crown(int32 EntryPoint);
	void FallingTreeTop__FinishedFunc();
	void FallingTreeTop__UpdateFunc();
	void ReceiveBeginPlay();
	void Set_NSTree_Info(const float AxisRotationAngle_0, const float MinHeight_0, const float MaxHeight_0, const float BendAngle_0, const struct FVector& FallVector_0);
	void UpdateTreeData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Tree_Crown_C">();
	}
	static class ABP_Tree_Crown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Tree_Crown_C>();
	}
};
static_assert(alignof(ABP_Tree_Crown_C) == 0x000008, "Wrong alignment on ABP_Tree_Crown_C");
static_assert(sizeof(ABP_Tree_Crown_C) == 0x000308, "Wrong size on ABP_Tree_Crown_C");
static_assert(offsetof(ABP_Tree_Crown_C, UberGraphFrame) == 0x000270, "Member 'ABP_Tree_Crown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, AudioLocation) == 0x000278, "Member 'ABP_Tree_Crown_C::AudioLocation' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, NS_Tree_Crown) == 0x000280, "Member 'ABP_Tree_Crown_C::NS_Tree_Crown' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_Tree_Crown_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, FallingTreeTop_GlobalRotate_874EE12049FA6ADD01D9B295F40A0260) == 0x000290, "Member 'ABP_Tree_Crown_C::FallingTreeTop_GlobalRotate_874EE12049FA6ADD01D9B295F40A0260' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, FallingTreeTop_Fall_in_Z_874EE12049FA6ADD01D9B295F40A0260) == 0x000294, "Member 'ABP_Tree_Crown_C::FallingTreeTop_Fall_in_Z_874EE12049FA6ADD01D9B295F40A0260' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, FallingTreeTop_Bend_Angle_874EE12049FA6ADD01D9B295F40A0260) == 0x000298, "Member 'ABP_Tree_Crown_C::FallingTreeTop_Bend_Angle_874EE12049FA6ADD01D9B295F40A0260' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, FallingTreeTop__Direction_874EE12049FA6ADD01D9B295F40A0260) == 0x00029C, "Member 'ABP_Tree_Crown_C::FallingTreeTop__Direction_874EE12049FA6ADD01D9B295F40A0260' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, FallingTreeTop) == 0x0002A0, "Member 'ABP_Tree_Crown_C::FallingTreeTop' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, AxisRotationAngle) == 0x0002A8, "Member 'ABP_Tree_Crown_C::AxisRotationAngle' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, BendAngle) == 0x0002AC, "Member 'ABP_Tree_Crown_C::BendAngle' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, ImpactLocation) == 0x0002B0, "Member 'ABP_Tree_Crown_C::ImpactLocation' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, ImpactNormal) == 0x0002C8, "Member 'ABP_Tree_Crown_C::ImpactNormal' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, UpdateTreeDataTimerHandle) == 0x0002E0, "Member 'ABP_Tree_Crown_C::UpdateTreeDataTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, MaxHeight) == 0x0002E8, "Member 'ABP_Tree_Crown_C::MaxHeight' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, MinHeight) == 0x0002EC, "Member 'ABP_Tree_Crown_C::MinHeight' has a wrong offset!");
static_assert(offsetof(ABP_Tree_Crown_C, FallVector) == 0x0002F0, "Member 'ABP_Tree_Crown_C::FallVector' has a wrong offset!");

}

