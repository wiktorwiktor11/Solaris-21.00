﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VendingDamageResponse

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct VendingDamageResponse.VendingDamageResponse
// 0x0020 (0x0020 - 0x0000)
struct FVendingDamageResponse final
{
public:
	class FName                                   DamageMaterialStyle_5_DA2E9BDA41336285B6F136818C041FAE; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DamageMessage_7_92E19AF44AB84ADD702CE4BC7D00ADF3;  // 0x0008(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FVendingDamageResponse) == 0x000008, "Wrong alignment on FVendingDamageResponse");
static_assert(sizeof(FVendingDamageResponse) == 0x000020, "Wrong size on FVendingDamageResponse");
static_assert(offsetof(FVendingDamageResponse, DamageMaterialStyle_5_DA2E9BDA41336285B6F136818C041FAE) == 0x000000, "Member 'FVendingDamageResponse::DamageMaterialStyle_5_DA2E9BDA41336285B6F136818C041FAE' has a wrong offset!");
static_assert(offsetof(FVendingDamageResponse, DamageMessage_7_92E19AF44AB84ADD702CE4BC7D00ADF3) == 0x000008, "Member 'FVendingDamageResponse::DamageMessage_7_92E19AF44AB84ADD702CE4BC7D00ADF3' has a wrong offset!");

}

