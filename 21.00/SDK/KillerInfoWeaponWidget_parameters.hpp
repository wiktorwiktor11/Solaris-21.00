﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerInfoWeaponWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function KillerInfoWeaponWidget.KillerInfoWeaponWidget_C.Colorize
// 0x0001 (0x0001 - 0x0000)
struct KillerInfoWeaponWidget_C_Colorize final
{
public:
	EFortRarity                                   Rarity;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KillerInfoWeaponWidget_C_Colorize) == 0x000001, "Wrong alignment on KillerInfoWeaponWidget_C_Colorize");
static_assert(sizeof(KillerInfoWeaponWidget_C_Colorize) == 0x000001, "Wrong size on KillerInfoWeaponWidget_C_Colorize");
static_assert(offsetof(KillerInfoWeaponWidget_C_Colorize, Rarity) == 0x000000, "Member 'KillerInfoWeaponWidget_C_Colorize::Rarity' has a wrong offset!");

// Function KillerInfoWeaponWidget.KillerInfoWeaponWidget_C.ExecuteUbergraph_KillerInfoWeaponWidget
// 0x01B8 (0x01B8 - 0x0000)
struct KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   K2Node_CustomEvent_Rarity;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0008(0x0080)()
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_CustomEvent_Weapon_Icon;                    // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*              K2Node_CustomEvent_WID;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A2[0x6];                                       // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue_1;            // 0x00A8(0x0080)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0128(0x0014)()
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0140(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0190(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01A0(0x0018)()
};
static_assert(alignof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget) == 0x000008, "Wrong alignment on KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget");
static_assert(sizeof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget) == 0x0001B8, "Wrong size on KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, EntryPoint) == 0x000000, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, K2Node_CustomEvent_Rarity) == 0x000004, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::K2Node_CustomEvent_Rarity' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, CallFunc_BPGetRarityData_ReturnValue) == 0x000008, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000088, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, K2Node_CustomEvent_Weapon_Icon) == 0x000090, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::K2Node_CustomEvent_Weapon_Icon' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, K2Node_CustomEvent_WID) == 0x000098, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::K2Node_CustomEvent_WID' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, K2Node_Event_IsDesignTime) == 0x0000A0, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, CallFunc_GetRarity_ReturnValue) == 0x0000A1, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, CallFunc_BPGetRarityData_ReturnValue_1) == 0x0000A8, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::CallFunc_BPGetRarityData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, K2Node_MakeStruct_SlateColor) == 0x000128, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, K2Node_MakeStruct_FormatArgumentData) == 0x000140, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, K2Node_MakeArray_Array) == 0x000190, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget, CallFunc_Format_ReturnValue) == 0x0001A0, "Member 'KillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function KillerInfoWeaponWidget.KillerInfoWeaponWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct KillerInfoWeaponWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KillerInfoWeaponWidget_C_PreConstruct) == 0x000001, "Wrong alignment on KillerInfoWeaponWidget_C_PreConstruct");
static_assert(sizeof(KillerInfoWeaponWidget_C_PreConstruct) == 0x000001, "Wrong size on KillerInfoWeaponWidget_C_PreConstruct");
static_assert(offsetof(KillerInfoWeaponWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'KillerInfoWeaponWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function KillerInfoWeaponWidget.KillerInfoWeaponWidget_C.Set Icon And Name
// 0x0010 (0x0010 - 0x0000)
struct KillerInfoWeaponWidget_C_Set_Icon_And_Name final
{
public:
	class UTexture2D*                             Weapon_Icon;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*              WID;                                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KillerInfoWeaponWidget_C_Set_Icon_And_Name) == 0x000008, "Wrong alignment on KillerInfoWeaponWidget_C_Set_Icon_And_Name");
static_assert(sizeof(KillerInfoWeaponWidget_C_Set_Icon_And_Name) == 0x000010, "Wrong size on KillerInfoWeaponWidget_C_Set_Icon_And_Name");
static_assert(offsetof(KillerInfoWeaponWidget_C_Set_Icon_And_Name, Weapon_Icon) == 0x000000, "Member 'KillerInfoWeaponWidget_C_Set_Icon_And_Name::Weapon_Icon' has a wrong offset!");
static_assert(offsetof(KillerInfoWeaponWidget_C_Set_Icon_And_Name, WID) == 0x000008, "Member 'KillerInfoWeaponWidget_C_Set_Icon_And_Name::WID' has a wrong offset!");

}

