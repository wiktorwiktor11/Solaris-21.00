﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MusicPartyManagerComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.UnregisterSpeakerComponent
// 0x0010 (0x0010 - 0x0000)
struct MusicPartyManagerComponent_C_UnregisterSpeakerComponent final
{
public:
	const class UMusicPartyPropComponent_C*       Component;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MusicPartyManagerComponent_C_UnregisterSpeakerComponent) == 0x000008, "Wrong alignment on MusicPartyManagerComponent_C_UnregisterSpeakerComponent");
static_assert(sizeof(MusicPartyManagerComponent_C_UnregisterSpeakerComponent) == 0x000010, "Wrong size on MusicPartyManagerComponent_C_UnregisterSpeakerComponent");
static_assert(offsetof(MusicPartyManagerComponent_C_UnregisterSpeakerComponent, Component) == 0x000000, "Member 'MusicPartyManagerComponent_C_UnregisterSpeakerComponent::Component' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_UnregisterSpeakerComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000008, "Member 'MusicPartyManagerComponent_C_UnregisterSpeakerComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_UnregisterSpeakerComponent, CallFunc_Array_RemoveItem_ReturnValue) == 0x000009, "Member 'MusicPartyManagerComponent_C_UnregisterSpeakerComponent::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.RegisterSpeakerComponent
// 0x0010 (0x0010 - 0x0000)
struct MusicPartyManagerComponent_C_RegisterSpeakerComponent final
{
public:
	const class UMusicPartyPropComponent_C*       Component;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MusicPartyManagerComponent_C_RegisterSpeakerComponent) == 0x000008, "Wrong alignment on MusicPartyManagerComponent_C_RegisterSpeakerComponent");
static_assert(sizeof(MusicPartyManagerComponent_C_RegisterSpeakerComponent) == 0x000010, "Wrong size on MusicPartyManagerComponent_C_RegisterSpeakerComponent");
static_assert(offsetof(MusicPartyManagerComponent_C_RegisterSpeakerComponent, Component) == 0x000000, "Member 'MusicPartyManagerComponent_C_RegisterSpeakerComponent::Component' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_RegisterSpeakerComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000008, "Member 'MusicPartyManagerComponent_C_RegisterSpeakerComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_RegisterSpeakerComponent, CallFunc_Array_AddUnique_ReturnValue) == 0x00000C, "Member 'MusicPartyManagerComponent_C_RegisterSpeakerComponent::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct MusicPartyManagerComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MusicPartyManagerComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on MusicPartyManagerComponent_C_ReceiveEndPlay");
static_assert(sizeof(MusicPartyManagerComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on MusicPartyManagerComponent_C_ReceiveEndPlay");
static_assert(offsetof(MusicPartyManagerComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'MusicPartyManagerComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.OnRep_PartyControllerActor
// 0x0028 (0x0028 - 0x0000)
struct MusicPartyManagerComponent_C_OnRep_PartyControllerActor final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMusicPartyPropComponent_C*             CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor) == 0x000008, "Wrong alignment on MusicPartyManagerComponent_C_OnRep_PartyControllerActor");
static_assert(sizeof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor) == 0x000028, "Wrong size on MusicPartyManagerComponent_C_OnRep_PartyControllerActor");
static_assert(offsetof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor, Temp_int_Array_Index_Variable) == 0x000000, "Member 'MusicPartyManagerComponent_C_OnRep_PartyControllerActor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'MusicPartyManagerComponent_C_OnRep_PartyControllerActor::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'MusicPartyManagerComponent_C_OnRep_PartyControllerActor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor, CallFunc_Array_Get_Item) == 0x000010, "Member 'MusicPartyManagerComponent_C_OnRep_PartyControllerActor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MusicPartyManagerComponent_C_OnRep_PartyControllerActor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'MusicPartyManagerComponent_C_OnRep_PartyControllerActor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_OnRep_PartyControllerActor, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'MusicPartyManagerComponent_C_OnRep_PartyControllerActor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.OnComponentsChanged
// 0x0002 (0x0002 - 0x0000)
struct MusicPartyManagerComponent_C_OnComponentsChanged final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MusicPartyManagerComponent_C_OnComponentsChanged) == 0x000001, "Wrong alignment on MusicPartyManagerComponent_C_OnComponentsChanged");
static_assert(sizeof(MusicPartyManagerComponent_C_OnComponentsChanged) == 0x000002, "Wrong size on MusicPartyManagerComponent_C_OnComponentsChanged");
static_assert(offsetof(MusicPartyManagerComponent_C_OnComponentsChanged, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MusicPartyManagerComponent_C_OnComponentsChanged::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_OnComponentsChanged, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000001, "Member 'MusicPartyManagerComponent_C_OnComponentsChanged::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");

// Function MusicPartyManagerComponent.MusicPartyManagerComponent_C.ExecuteUbergraph_MusicPartyManagerComponent
// 0x0090 (0x0090 - 0x0000)
struct MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0xA];                                        // 0x0006(0x000A)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0060)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_HollowBasePartyController_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent) == 0x000010, "Wrong alignment on MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent");
static_assert(sizeof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent) == 0x000090, "Wrong size on MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent");
static_assert(offsetof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent, EntryPoint) == 0x000000, "Member 'MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent, CallFunc_IsValid_ReturnValue_1) == 0x000078, "Member 'MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000080, "Member 'MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent, K2Node_Event_EndPlayReason) == 0x000088, "Member 'MusicPartyManagerComponent_C_ExecuteUbergraph_MusicPartyManagerComponent::K2Node_Event_EndPlayReason' has a wrong offset!");

}

