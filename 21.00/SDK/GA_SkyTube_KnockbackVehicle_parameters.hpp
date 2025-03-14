﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SkyTube_KnockbackVehicle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_SkyTube_KnockbackVehicle.GA_SkyTube_KnockbackVehicle_C.GetKnockbackOrigin
// 0x0080 (0x0080 - 0x0000)
struct GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin final
{
public:
	class AActor*                                 OriginActor;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortSkyTube*                           K2Node_DynamicCast_AsFort_Sky_Tube;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetKnockbackOrigin_ReturnValue;           // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_FindLocationClosestToWorldLocation_ReturnValue; // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin) == 0x000008, "Wrong alignment on GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin");
static_assert(sizeof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin) == 0x000080, "Wrong size on GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin");
static_assert(offsetof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin, OriginActor) == 0x000000, "Member 'GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin::OriginActor' has a wrong offset!");
static_assert(offsetof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin, ReturnValue) == 0x000008, "Member 'GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000020, "Member 'GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin, K2Node_DynamicCast_AsFort_Sky_Tube) == 0x000028, "Member 'GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin::K2Node_DynamicCast_AsFort_Sky_Tube' has a wrong offset!");
static_assert(offsetof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin, CallFunc_GetKnockbackOrigin_ReturnValue) == 0x000050, "Member 'GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin::CallFunc_GetKnockbackOrigin_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin, CallFunc_FindLocationClosestToWorldLocation_ReturnValue) == 0x000068, "Member 'GA_SkyTube_KnockbackVehicle_C_GetKnockbackOrigin::CallFunc_FindLocationClosestToWorldLocation_ReturnValue' has a wrong offset!");

}

