﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent
// 0x0310 (0x0310 - 0x0000)
struct GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortItemEntry                         CallFunc_GetItemEntryCopyFromWeapon_ReturnValue;   // 0x0010(0x01A0)(ConstParm)
	bool                                          CallFunc_Is_Trajectory_Hidden_IsHidden;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x3];                                      // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortTrajectoryAbilityInterface> CallFunc_Trajectory_Placement_Preview_Campsite_Target_CastInput; // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Campsite_C*                        CallFunc_Trajectory_Placement_Preview_Campsite_target_campsite; // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Trajectory_Placement_Preview_Campsite_valid_; // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D5[0x3];                                      // 0x01D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABGA_Campsite_C*                        K2Node_CustomEvent_campsite;                       // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_valid;                          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E1[0x3];                                      // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x01E4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F5[0x3];                                      // 0x01F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x3];                                      // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x0218(0x0010)(ReferenceParm)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateAthena*                 K2Node_DynamicCast_AsFort_Player_State_Athena;     // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetSquadId_ReturnValue;                   // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_243[0x5];                                      // 0x0243(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue_1; // 0x0248(0x0010)(ReferenceParm)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1; // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0263(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0270(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_288[0x8];                                      // 0x0288(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0290(0x0060)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetValueAsBool_ReturnValue;               // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecal_CampsiteRadius_C*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent) == 0x000010, "Wrong alignment on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent");
static_assert(sizeof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent) == 0x000310, "Wrong size on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, EntryPoint) == 0x000000, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetCurrentSourceWeapon_ReturnValue) == 0x000008, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetCurrentSourceWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetItemEntryCopyFromWeapon_ReturnValue) == 0x000010, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetItemEntryCopyFromWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_Is_Trajectory_Hidden_IsHidden) == 0x0001B0, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_Is_Trajectory_Hidden_IsHidden' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetValueAtLevel_ReturnValue) == 0x0001B4, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_Trajectory_Placement_Preview_Campsite_Target_CastInput) == 0x0001B8, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_Trajectory_Placement_Preview_Campsite_Target_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_Trajectory_Placement_Preview_Campsite_target_campsite) == 0x0001C8, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_Trajectory_Placement_Preview_Campsite_target_campsite' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_Trajectory_Placement_Preview_Campsite_valid_) == 0x0001D0, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_Trajectory_Placement_Preview_Campsite_valid_' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_IsLocallyControlled_ReturnValue) == 0x0001D1, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001D2, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_IsValid_ReturnValue) == 0x0001D3, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_IsValid_ReturnValue_1) == 0x0001D4, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, K2Node_CustomEvent_campsite) == 0x0001D8, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::K2Node_CustomEvent_campsite' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, K2Node_CustomEvent_valid) == 0x0001E0, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::K2Node_CustomEvent_valid' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_SelectColor_ReturnValue) == 0x0001E4, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_IsValid_ReturnValue_2) == 0x0001F4, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001F8, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_IsValid_ReturnValue_3) == 0x000210, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000214, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000218, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000228, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_Array_Contains_ReturnValue) == 0x000230, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, K2Node_DynamicCast_AsFort_Player_State_Athena) == 0x000238, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::K2Node_DynamicCast_AsFort_Player_State_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, K2Node_DynamicCast_bSuccess) == 0x000240, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetSquadId_ReturnValue) == 0x000241, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetSquadId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000242, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetLocalFortPlayerControllers_ReturnValue_1) == 0x000248, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetLocalFortPlayerControllers_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1) == 0x000258, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_Array_Contains_ReturnValue_1) == 0x000260, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_IsValid_ReturnValue_4) == 0x000261, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000262, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000263, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_IsValid_ReturnValue_5) == 0x000264, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetValueAtLevel_ReturnValue_2) == 0x000268, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetValueAtLevel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_SelectFloat_ReturnValue) == 0x00026C, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000270, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_MakeTransform_ReturnValue) == 0x000290, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_GetValueAsBool_ReturnValue) == 0x0002F0, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0002F8, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000300, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_ExecuteUbergraph_GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.Is Trajectory Hidden
// 0x0002 (0x0002 - 0x0000)
struct GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden) == 0x000001, "Wrong alignment on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden");
static_assert(sizeof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden) == 0x000002, "Wrong size on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden, IsHidden) == 0x000000, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden::IsHidden' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden, CallFunc_BooleanAND_ReturnValue) == 0x000001, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_Is_Trajectory_Hidden::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.OnProjectileSpawned
// 0x0018 (0x0018 - 0x0000)
struct GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned final
{
public:
	class AFortProjectileBase*                    SpawnedProjectile_0;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Prj_Athena_DeployableCampsite_C*     K2Node_DynamicCast_AsB_Prj_Athena_Deployable_Campsite; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned) == 0x000008, "Wrong alignment on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned");
static_assert(sizeof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned) == 0x000018, "Wrong size on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned, SpawnedProjectile_0) == 0x000000, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned::SpawnedProjectile_0' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned, K2Node_DynamicCast_AsB_Prj_Athena_Deployable_Campsite) == 0x000008, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned::K2Node_DynamicCast_AsB_Prj_Athena_Deployable_Campsite' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_OnProjectileSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.SetupCustomCampsitePreviewMesh
// 0x0020 (0x0020 - 0x0000)
struct GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh) == 0x000008, "Wrong alignment on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh");
static_assert(sizeof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh) == 0x000020, "Wrong size on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh, Temp_int_Variable) == 0x000000, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh, CallFunc_GetMaterial_ReturnValue) == 0x000008, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh, CallFunc_SetStaticMesh_ReturnValue) == 0x000010, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh, CallFunc_GetNumMaterials_ReturnValue) == 0x000014, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupCustomCampsitePreviewMesh::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.SetupDummyProjectileRed
// 0x0090 (0x0090 - 0x0000)
struct GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0060)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*             K2Node_DynamicCast_AsBP_Projectile_Trajectory;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed) == 0x000010, "Wrong alignment on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed");
static_assert(sizeof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed) == 0x000090, "Wrong size on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed, K2Node_DynamicCast_AsBP_Projectile_Trajectory) == 0x000080, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed::K2Node_DynamicCast_AsBP_Projectile_Trajectory' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SetupDummyProjectileRed::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent.GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C.SpawnCampsiteRadiusFeedback
// 0x0010 (0x0010 - 0x0000)
struct GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback final
{
public:
	class ABGA_Campsite_C*                        Campsite;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Valid;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback) == 0x000008, "Wrong alignment on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback");
static_assert(sizeof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback) == 0x000010, "Wrong size on GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback, Campsite) == 0x000000, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback::Campsite' has a wrong offset!");
static_assert(offsetof(GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback, Valid) == 0x000008, "Member 'GA_Athena_CampsiteImprovement_Thrown_Trajectory_Parent_C_SpawnCampsiteRadiusFeedback::Valid' has a wrong offset!");

}

