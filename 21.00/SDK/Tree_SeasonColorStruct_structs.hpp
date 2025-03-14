﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Tree_SeasonColorStruct

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Tree_Color_options_structs.hpp"


namespace SDK
{

// UserDefinedStruct Tree_SeasonColorStruct.Tree_SeasonColorStruct
// 0x001C (0x001C - 0x0000)
struct FTree_SeasonColorStruct final
{
public:
	ETree_Color_options                           TreeColorOption_12_3A3FA905471B736AE59F549F3AC737AD; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Color_5_E33006414CF6D999D4D482A4D2FF03F6;          // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ValueVariation_9_4FAED9E04DA8955B0BC4EDB1E0A3C1F7; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HueVariation_10_00BFFB9140C4AD7D16C9AA9AEB01A935;  // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FTree_SeasonColorStruct) == 0x000004, "Wrong alignment on FTree_SeasonColorStruct");
static_assert(sizeof(FTree_SeasonColorStruct) == 0x00001C, "Wrong size on FTree_SeasonColorStruct");
static_assert(offsetof(FTree_SeasonColorStruct, TreeColorOption_12_3A3FA905471B736AE59F549F3AC737AD) == 0x000000, "Member 'FTree_SeasonColorStruct::TreeColorOption_12_3A3FA905471B736AE59F549F3AC737AD' has a wrong offset!");
static_assert(offsetof(FTree_SeasonColorStruct, Color_5_E33006414CF6D999D4D482A4D2FF03F6) == 0x000004, "Member 'FTree_SeasonColorStruct::Color_5_E33006414CF6D999D4D482A4D2FF03F6' has a wrong offset!");
static_assert(offsetof(FTree_SeasonColorStruct, ValueVariation_9_4FAED9E04DA8955B0BC4EDB1E0A3C1F7) == 0x000014, "Member 'FTree_SeasonColorStruct::ValueVariation_9_4FAED9E04DA8955B0BC4EDB1E0A3C1F7' has a wrong offset!");
static_assert(offsetof(FTree_SeasonColorStruct, HueVariation_10_00BFFB9140C4AD7D16C9AA9AEB01A935) == 0x000018, "Member 'FTree_SeasonColorStruct::HueVariation_10_00BFFB9140C4AD7D16C9AA9AEB01A935' has a wrong offset!");

}

