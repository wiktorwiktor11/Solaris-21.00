﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_ThrownConsumable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct B_Prj_ThrownConsumable_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_UserConstructionScript) == 0x000001, "Wrong alignment on B_Prj_ThrownConsumable_C_UserConstructionScript");
static_assert(sizeof(B_Prj_ThrownConsumable_C_UserConstructionScript) == 0x000001, "Wrong size on B_Prj_ThrownConsumable_C_UserConstructionScript");
static_assert(offsetof(B_Prj_ThrownConsumable_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnStop
// 0x00E0 (0x00E0 - 0x0000)
struct B_Prj_ThrownConsumable_C_OnStop final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_OnStop) == 0x000008, "Wrong alignment on B_Prj_ThrownConsumable_C_OnStop");
static_assert(sizeof(B_Prj_ThrownConsumable_C_OnStop) == 0x0000E0, "Wrong size on B_Prj_ThrownConsumable_C_OnStop");
static_assert(offsetof(B_Prj_ThrownConsumable_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_OnStop::Hit' has a wrong offset!");

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnExploded
// 0x0020 (0x0020 - 0x0000)
struct B_Prj_ThrownConsumable_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_ThrownConsumable_C_OnExploded");
static_assert(sizeof(B_Prj_ThrownConsumable_C_OnExploded) == 0x000020, "Wrong size on B_Prj_ThrownConsumable_C_OnExploded");
static_assert(offsetof(B_Prj_ThrownConsumable_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_ThrownConsumable_C_OnExploded::HitResults' has a wrong offset!");

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnBounce
// 0x00E0 (0x00E0 - 0x0000)
struct B_Prj_ThrownConsumable_C_OnBounce final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_OnBounce) == 0x000008, "Wrong alignment on B_Prj_ThrownConsumable_C_OnBounce");
static_assert(sizeof(B_Prj_ThrownConsumable_C_OnBounce) == 0x0000E0, "Wrong size on B_Prj_ThrownConsumable_C_OnBounce");
static_assert(offsetof(B_Prj_ThrownConsumable_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_OnBounce::Hit' has a wrong offset!");

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ExecuteUbergraph_B_Prj_ThrownConsumable
// 0x03C8 (0x03C8 - 0x0000)
struct B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerController*>          Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	uint8                                         CallFunc_GetActorTeam_ReturnValue;                 // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit_1;                                // 0x00B0(0x00E0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_193[0x1];                                      // 0x0193(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetActorTeam_ReturnValue_1;               // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_262[0x6];                                      // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array_1;                          // 0x0270(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_Event_HitActors;                            // 0x02A0(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FHitResult>                     K2Node_Event_HitResults;                           // 0x02B0(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x02C0(0x00E0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnCollision_OutResult;                    // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A2[0x2];                                      // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_OnCollision_OutMagnitude;                 // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerController*>          Temp_object_Variable_1;                            // 0x03B0(0x0010)(ConstParm, ReferenceParm)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable) == 0x000008, "Wrong alignment on B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable");
static_assert(sizeof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable) == 0x0003C8, "Wrong size on B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, EntryPoint) == 0x000000, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, Temp_object_Variable) == 0x000008, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsDedicatedServer_ReturnValue) == 0x000018, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00001C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000050, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000068, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x000080, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_MakeArray_Array) == 0x000098, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_GetActorTeam_ReturnValue) == 0x0000A8, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_Event_Hit_1) == 0x0000B0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_Event_Hit_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsValid_ReturnValue) == 0x000190, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_bBlockingHit) == 0x000191, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_bInitialOverlap) == 0x000192, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_Time) == 0x000194, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_Distance) == 0x000198, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_Location) == 0x0001A0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_ImpactPoint) == 0x0001B8, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_Normal) == 0x0001D0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_ImpactNormal) == 0x0001E8, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_PhysMat) == 0x000200, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_HitActor) == 0x000208, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_HitComponent) == 0x000210, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_HitBoneName) == 0x000218, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_BoneName) == 0x00021C, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_HitItem) == 0x000220, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_ElementIndex) == 0x000224, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_FaceIndex) == 0x000228, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_TraceStart) == 0x000230, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_BreakHitResult_TraceEnd) == 0x000248, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsValid_ReturnValue_1) == 0x000260, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_GetActorTeam_ReturnValue_1) == 0x000261, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_GetActorTeam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_GetInstigator_ReturnValue) == 0x000268, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_MakeArray_Array_1) == 0x000270, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsLocallyControlled_ReturnValue) == 0x000280, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000288, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_Event_HitActors) == 0x0002A0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_Event_HitResults) == 0x0002B0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, K2Node_Event_Hit) == 0x0002C0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0003A0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_OnCollision_OutResult) == 0x0003A1, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_OnCollision_OutResult' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_OnCollision_OutMagnitude) == 0x0003A4, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_OnCollision_OutMagnitude' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x0003A8, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, Temp_object_Variable_1) == 0x0003B0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0003C0, "Member 'B_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");

}

