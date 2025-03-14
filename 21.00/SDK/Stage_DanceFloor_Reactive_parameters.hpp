﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Stage_DanceFloor_Reactive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Stage_DanceFloor_Reactive.Stage_DanceFloor_Reactive_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0100 (0x0100 - 0x0000)
struct Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function Stage_DanceFloor_Reactive.Stage_DanceFloor_Reactive_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Stage_DanceFloor_Reactive_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function Stage_DanceFloor_Reactive.Stage_DanceFloor_Reactive_C.ExecuteUbergraph_Stage_DanceFloor_Reactive
// 0x0170 (0x0170 - 0x0000)
struct Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0070(0x00E0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16A[0x2];                                      // 0x016A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive) == 0x000008, "Wrong alignment on Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive");
static_assert(sizeof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive) == 0x000170, "Wrong size on Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, EntryPoint) == 0x000000, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::EntryPoint' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue) == 0x000008, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_K2_SetTimer_ReturnValue) == 0x000010, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Greater_IntInt_ReturnValue) == 0x00001D, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_BooleanAND_ReturnValue) == 0x00001E, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Less_IntInt_ReturnValue_1) == 0x00001F, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Array_Length_ReturnValue_1) == 0x000020, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000024, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000025, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Less_IntInt_ReturnValue_2) == 0x000026, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_BooleanAND_ReturnValue_1) == 0x000027, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_BooleanAND_ReturnValue_2) == 0x000028, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000030, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000038, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000040, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000048, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000050, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_OtherActor) == 0x000058, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_OtherComp) == 0x000060, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000068, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_bFromSweep) == 0x00006C, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_ComponentBoundEvent_SweepResult) == 0x000070, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000150, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000160, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, K2Node_DynamicCast_bSuccess_1) == 0x000168, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Array_RemoveItem_ReturnValue) == 0x000169, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive, CallFunc_Array_Add_ReturnValue) == 0x00016C, "Member 'Stage_DanceFloor_Reactive_C_ExecuteUbergraph_Stage_DanceFloor_Reactive::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function Stage_DanceFloor_Reactive.Stage_DanceFloor_Reactive_C.RemoveOldMIDData
// 0x0010 (0x0010 - 0x0000)
struct Stage_DanceFloor_Reactive_C_RemoveOldMIDData final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Stage_DanceFloor_Reactive_C_RemoveOldMIDData) == 0x000008, "Wrong alignment on Stage_DanceFloor_Reactive_C_RemoveOldMIDData");
static_assert(sizeof(Stage_DanceFloor_Reactive_C_RemoveOldMIDData) == 0x000010, "Wrong size on Stage_DanceFloor_Reactive_C_RemoveOldMIDData");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_RemoveOldMIDData, CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue) == 0x000000, "Member 'Stage_DanceFloor_Reactive_C_RemoveOldMIDData::CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_RemoveOldMIDData, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'Stage_DanceFloor_Reactive_C_RemoveOldMIDData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_RemoveOldMIDData, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'Stage_DanceFloor_Reactive_C_RemoveOldMIDData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_RemoveOldMIDData, CallFunc_Less_IntInt_ReturnValue_1) == 0x00000D, "Member 'Stage_DanceFloor_Reactive_C_RemoveOldMIDData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_RemoveOldMIDData, CallFunc_Less_IntInt_ReturnValue_2) == 0x00000E, "Member 'Stage_DanceFloor_Reactive_C_RemoveOldMIDData::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function Stage_DanceFloor_Reactive.Stage_DanceFloor_Reactive_C.UpdatePlayerPositionsWithinTheMID
// 0x00E0 (0x00E0 - 0x0000)
struct Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item_2;                         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_2;                   // 0x00CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID) == 0x000008, "Wrong alignment on Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID");
static_assert(sizeof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID) == 0x0000E0, "Wrong size on Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue) == 0x000000, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_Array_Get_Item) == 0x000010, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_X) == 0x000038, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_Y) == 0x00003C, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_Z) == 0x000040, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000044, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, K2Node_MakeStruct_LinearColor) == 0x000048, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000058, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000068, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_Array_Get_Item_2) == 0x000080, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_X_1) == 0x000088, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_Y_1) == 0x00008C, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_Z_1) == 0x000090, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000098, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, K2Node_MakeStruct_LinearColor_1) == 0x0000B0, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_X_2) == 0x0000C0, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_Y_2) == 0x0000C4, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, CallFunc_BreakVector_Z_2) == 0x0000C8, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID, K2Node_MakeStruct_LinearColor_2) == 0x0000CC, "Member 'Stage_DanceFloor_Reactive_C_UpdatePlayerPositionsWithinTheMID::K2Node_MakeStruct_LinearColor_2' has a wrong offset!");

}

