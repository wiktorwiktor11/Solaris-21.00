﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_Generic_CurieFireball_Parent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature final
{
public:
	class AFortWaterBodyActor*                    WaterBody;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*         WaterInteractionComponent_0;                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsFirstBody;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature) == 0x000008, "Wrong alignment on B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(sizeof(B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature) == 0x000018, "Wrong size on B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature, WaterBody) == 0x000000, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature::WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature, WaterInteractionComponent_0) == 0x000008, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature::WaterInteractionComponent_0' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature, bIsFirstBody) == 0x000010, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature::bIsFirstBody' has a wrong offset!");

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent
// 0x0210 (0x0210 - 0x0000)
struct B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_Line_Trace_for_Mesh_Angle_ReturnValue;    // 0x0010(0x0060)(IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x00D8(0x00E0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x3];                                      // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x01BC(0x000C)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x01C8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D2[0x6];                                      // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWaterBodyActor*                    K2Node_ComponentBoundEvent_WaterBody;              // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*         K2Node_ComponentBoundEvent_WaterInteractionComponent; // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsFirstBody;           // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E9[0x7];                                      // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingGameplayActor*                 CallFunc_SpawnBuildingGameplayActor_ReturnValue;   // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent) == 0x000010, "Wrong alignment on B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent");
static_assert(sizeof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent) == 0x000210, "Wrong size on B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, EntryPoint) == 0x000000, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, CallFunc_Line_Trace_for_Mesh_Angle_ReturnValue) == 0x000010, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::CallFunc_Line_Trace_for_Mesh_Angle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_Event_MyComp) == 0x000070, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_Event_Other) == 0x000078, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_Event_OtherComp) == 0x000080, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_Event_bSelfMoved) == 0x000088, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_Event_HitLocation) == 0x000090, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_Event_HitNormal) == 0x0000A8, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_Event_NormalImpulse) == 0x0000C0, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_Event_Hit) == 0x0000D8, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, Temp_bool_IsClosed_Variable) == 0x0001B8, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x0001BC, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0001C8, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, Temp_bool_Has_Been_Initd_Variable) == 0x0001D0, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x0001D1, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_ComponentBoundEvent_WaterBody) == 0x0001D8, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_ComponentBoundEvent_WaterBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_ComponentBoundEvent_WaterInteractionComponent) == 0x0001E0, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_ComponentBoundEvent_WaterInteractionComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, K2Node_ComponentBoundEvent_bIsFirstBody) == 0x0001E8, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::K2Node_ComponentBoundEvent_bIsFirstBody' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001F0, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent, CallFunc_SpawnBuildingGameplayActor_ReturnValue) == 0x000208, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent::CallFunc_SpawnBuildingGameplayActor_ReturnValue' has a wrong offset!");

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Line Trace for Mesh Angle
// 0x0440 (0x0440 - 0x0000)
struct B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0078(0x0010)(ConstParm, ReferenceParm)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0060)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0120(0x00E0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_203[0x1];                                      // 0x0203(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0210(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0240(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0258(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x02A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromZX_ReturnValue;                // 0x02E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0300(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0320(0x0060)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_SelectTransform_ReturnValue;              // 0x0380(0x0060)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_SelectTransform_ReturnValue_1;            // 0x03E0(0x0060)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle) == 0x000010, "Wrong alignment on B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle");
static_assert(sizeof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle) == 0x000440, "Wrong size on B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, ReturnValue) == 0x000000, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000060, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, Temp_object_Variable) == 0x000078, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_MakeVector_ReturnValue) == 0x0000F0, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_Add_VectorVector_ReturnValue) == 0x000108, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_LineTraceSingle_OutHit) == 0x000120, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_LineTraceSingle_OutHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_LineTraceSingle_ReturnValue) == 0x000200, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_LineTraceSingle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_bBlockingHit) == 0x000201, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_bInitialOverlap) == 0x000202, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_Time) == 0x000204, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_Distance) == 0x000208, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_Location) == 0x000210, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_ImpactPoint) == 0x000228, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_Normal) == 0x000240, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_ImpactNormal) == 0x000258, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_PhysMat) == 0x000270, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_HitActor) == 0x000278, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_HitComponent) == 0x000280, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_HitBoneName) == 0x000288, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_BoneName) == 0x00028C, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_HitItem) == 0x000290, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_ElementIndex) == 0x000294, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_FaceIndex) == 0x000298, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_TraceStart) == 0x0002A0, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_BreakHitResult_TraceEnd) == 0x0002B8, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0002D0, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_MakeRotFromZX_ReturnValue) == 0x0002E8, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_MakeRotFromZX_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000300, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_MakeTransform_ReturnValue_1) == 0x000320, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_SelectTransform_ReturnValue) == 0x000380, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_SelectTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle, CallFunc_SelectTransform_ReturnValue_1) == 0x0003E0, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle::CallFunc_SelectTransform_ReturnValue_1' has a wrong offset!");

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveHit
// 0x0148 (0x0148 - 0x0000)
struct B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0068(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit) == 0x000008, "Wrong alignment on B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit");
static_assert(sizeof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit) == 0x000148, "Wrong size on B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit, MyComp) == 0x000000, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit, Other) == 0x000008, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit, OtherComp) == 0x000010, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit, HitLocation) == 0x000020, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit, HitNormal) == 0x000038, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit, Hit) == 0x000068, "Member 'B_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit::Hit' has a wrong offset!");

}

