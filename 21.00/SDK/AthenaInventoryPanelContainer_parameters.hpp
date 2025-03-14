﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaInventoryPanelContainer

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "AthenaDragDropAction_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AthenaInventoryPanelContainer.AthenaInventoryPanelContainer_C.BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature) == 0x000008, "Wrong alignment on AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature");
static_assert(sizeof(AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature) == 0x000010, "Wrong size on AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature");
static_assert(offsetof(AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature, TabId) == 0x000000, "Member 'AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature::TabId' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature, TabButton) == 0x000008, "Member 'AthenaInventoryPanelContainer_C_BndEvt__TabList_K2Node_ComponentBoundEvent_1_OnTabButtonCreation__DelegateSignature::TabButton' has a wrong offset!");

// Function AthenaInventoryPanelContainer.AthenaInventoryPanelContainer_C.ExecuteUbergraph_AthenaInventoryPanelContainer
// 0x0040 (0x0040 - 0x0000)
struct AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_ComponentBoundEvent_TabId;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_TabButton;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTabCount_ReturnValue;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer) == 0x000008, "Wrong alignment on AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer");
static_assert(sizeof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer) == 0x000040, "Wrong size on AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, EntryPoint) == 0x000000, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, K2Node_ComponentBoundEvent_TabId) == 0x000004, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::K2Node_ComponentBoundEvent_TabId' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, K2Node_ComponentBoundEvent_TabButton) == 0x000008, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::K2Node_ComponentBoundEvent_TabButton' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, Temp_bool_Variable) == 0x000010, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, Temp_byte_Variable) == 0x000011, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, Temp_byte_Variable_1) == 0x000012, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, Temp_bool_Variable_1) == 0x000013, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, Temp_float_Variable) == 0x000014, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, Temp_float_Variable_1) == 0x000018, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, CallFunc_GetTabCount_ReturnValue) == 0x00001C, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::CallFunc_GetTabCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, CallFunc_IsMobileGame_ReturnValue) == 0x000020, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, CallFunc_Greater_IntInt_ReturnValue) == 0x000021, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, K2Node_Select_Default) == 0x000024, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, K2Node_Select_Default_1) == 0x000028, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer, CallFunc_MakeVector2D_ReturnValue) == 0x000030, "Member 'AthenaInventoryPanelContainer_C_ExecuteUbergraph_AthenaInventoryPanelContainer::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function AthenaInventoryPanelContainer.AthenaInventoryPanelContainer_C.HandleIntroAnim
// 0x0010 (0x0010 - 0x0000)
struct AthenaInventoryPanelContainer_C_HandleIntroAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryPanelContainer_C_HandleIntroAnim) == 0x000008, "Wrong alignment on AthenaInventoryPanelContainer_C_HandleIntroAnim");
static_assert(sizeof(AthenaInventoryPanelContainer_C_HandleIntroAnim) == 0x000010, "Wrong size on AthenaInventoryPanelContainer_C_HandleIntroAnim");
static_assert(offsetof(AthenaInventoryPanelContainer_C_HandleIntroAnim, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'AthenaInventoryPanelContainer_C_HandleIntroAnim::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_HandleIntroAnim, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000008, "Member 'AthenaInventoryPanelContainer_C_HandleIntroAnim::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function AthenaInventoryPanelContainer.AthenaInventoryPanelContainer_C.IsDragItemDroppable
// 0x0030 (0x0030 - 0x0000)
struct AthenaInventoryPanelContainer_C_IsDragItemDroppable final
{
public:
	class UObject*                                DragDropObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDroppable;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaInventoryDragDrop_C*             K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWorldItem*                         K2Node_DynamicCast_AsFort_World_Item;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBeDropped_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryPanelContainer_C_IsDragItemDroppable) == 0x000008, "Wrong alignment on AthenaInventoryPanelContainer_C_IsDragItemDroppable");
static_assert(sizeof(AthenaInventoryPanelContainer_C_IsDragItemDroppable) == 0x000030, "Wrong size on AthenaInventoryPanelContainer_C_IsDragItemDroppable");
static_assert(offsetof(AthenaInventoryPanelContainer_C_IsDragItemDroppable, DragDropObject) == 0x000000, "Member 'AthenaInventoryPanelContainer_C_IsDragItemDroppable::DragDropObject' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_IsDragItemDroppable, bIsDroppable) == 0x000008, "Member 'AthenaInventoryPanelContainer_C_IsDragItemDroppable::bIsDroppable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_IsDragItemDroppable, K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop) == 0x000010, "Member 'AthenaInventoryPanelContainer_C_IsDragItemDroppable::K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_IsDragItemDroppable, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AthenaInventoryPanelContainer_C_IsDragItemDroppable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_IsDragItemDroppable, K2Node_DynamicCast_AsFort_World_Item) == 0x000020, "Member 'AthenaInventoryPanelContainer_C_IsDragItemDroppable::K2Node_DynamicCast_AsFort_World_Item' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_IsDragItemDroppable, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'AthenaInventoryPanelContainer_C_IsDragItemDroppable::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_IsDragItemDroppable, CallFunc_CanBeDropped_ReturnValue) == 0x000029, "Member 'AthenaInventoryPanelContainer_C_IsDragItemDroppable::CallFunc_CanBeDropped_ReturnValue' has a wrong offset!");

// Function AthenaInventoryPanelContainer.AthenaInventoryPanelContainer_C.OnDragOver
// 0x00F0 (0x00F0 - 0x0000)
struct AthenaInventoryPanelContainer_C_OnDragOver final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0090)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaInventoryDragDrop_C*             K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop;   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaDragDropAction                         Temp_byte_Variable;                                // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDragItemDroppable_bIsDroppable;         // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaDragDropAction                         Temp_byte_Variable_1;                              // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAthenaDragDropAction                         K2Node_Select_Default;                             // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryPanelContainer_C_OnDragOver) == 0x000008, "Wrong alignment on AthenaInventoryPanelContainer_C_OnDragOver");
static_assert(sizeof(AthenaInventoryPanelContainer_C_OnDragOver) == 0x0000F0, "Wrong size on AthenaInventoryPanelContainer_C_OnDragOver");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, MyGeometry) == 0x000000, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, PointerEvent) == 0x000040, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::PointerEvent' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, Operation) == 0x0000D0, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::Operation' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, ReturnValue) == 0x0000D8, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, Temp_bool_Variable) == 0x0000D9, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop) == 0x0000E0, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, Temp_byte_Variable) == 0x0000E9, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, CallFunc_IsDragItemDroppable_bIsDroppable) == 0x0000EA, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::CallFunc_IsDragItemDroppable_bIsDroppable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, Temp_byte_Variable_1) == 0x0000EB, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDragOver, K2Node_Select_Default) == 0x0000EC, "Member 'AthenaInventoryPanelContainer_C_OnDragOver::K2Node_Select_Default' has a wrong offset!");

// Function AthenaInventoryPanelContainer.AthenaInventoryPanelContainer_C.OnDrop
// 0x0168 (0x0168 - 0x0000)
struct AthenaInventoryPanelContainer_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0090)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00D8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaInventoryDragDrop_C*             Local_InventoryDragDrop;                           // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItem*                         Local_ItemBeingDropped;                            // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaInventoryDragDrop_C*             K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop;   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetActiveWidget_ReturnValue;              // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDragItemDroppable_bIsDroppable;         // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWorldItem*                         K2Node_DynamicCast_AsFort_World_Item;              // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A[0x6];                                      // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputEvent                            CallFunc_GetInputEventFromPointerEvent_ReturnValue; // 0x0130(0x0018)()
	bool                                          CallFunc_InputEvent_IsShiftDown_ReturnValue;       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumInStack_ReturnValue;                // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_155[0x3];                                      // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DropItem_ReturnValue;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaInventoryPanelContainer_C_OnDrop) == 0x000008, "Wrong alignment on AthenaInventoryPanelContainer_C_OnDrop");
static_assert(sizeof(AthenaInventoryPanelContainer_C_OnDrop) == 0x000168, "Wrong size on AthenaInventoryPanelContainer_C_OnDrop");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, MyGeometry) == 0x000000, "Member 'AthenaInventoryPanelContainer_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, PointerEvent) == 0x000040, "Member 'AthenaInventoryPanelContainer_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, Operation) == 0x0000D0, "Member 'AthenaInventoryPanelContainer_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, ReturnValue) == 0x0000D8, "Member 'AthenaInventoryPanelContainer_C_OnDrop::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, Local_InventoryDragDrop) == 0x0000E0, "Member 'AthenaInventoryPanelContainer_C_OnDrop::Local_InventoryDragDrop' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, Local_ItemBeingDropped) == 0x0000E8, "Member 'AthenaInventoryPanelContainer_C_OnDrop::Local_ItemBeingDropped' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop) == 0x0000F0, "Member 'AthenaInventoryPanelContainer_C_OnDrop::K2Node_DynamicCast_AsAthena_Inventory_Drag_Drop' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, K2Node_DynamicCast_bSuccess) == 0x0000F8, "Member 'AthenaInventoryPanelContainer_C_OnDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_GetActiveWidget_ReturnValue) == 0x000100, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_GetActiveWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_IsDragItemDroppable_bIsDroppable) == 0x000108, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_IsDragItemDroppable_bIsDroppable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, K2Node_DynamicCast_AsFort_World_Item) == 0x000110, "Member 'AthenaInventoryPanelContainer_C_OnDrop::K2Node_DynamicCast_AsFort_World_Item' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, K2Node_DynamicCast_bSuccess_1) == 0x000118, "Member 'AthenaInventoryPanelContainer_C_OnDrop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, Temp_bool_Variable) == 0x000119, "Member 'AthenaInventoryPanelContainer_C_OnDrop::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_GetContext_ReturnValue) == 0x000120, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000128, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_GetInputEventFromPointerEvent_ReturnValue) == 0x000130, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_GetInputEventFromPointerEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_InputEvent_IsShiftDown_ReturnValue) == 0x000148, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_InputEvent_IsShiftDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_GetNumInStack_ReturnValue) == 0x00014C, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_GetNumInStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_Divide_IntInt_ReturnValue) == 0x000150, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_BooleanOR_ReturnValue) == 0x000154, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_Max_ReturnValue) == 0x000158, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, K2Node_Select_Default) == 0x00015C, "Member 'AthenaInventoryPanelContainer_C_OnDrop::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaInventoryPanelContainer_C_OnDrop, CallFunc_DropItem_ReturnValue) == 0x000160, "Member 'AthenaInventoryPanelContainer_C_OnDrop::CallFunc_DropItem_ReturnValue' has a wrong offset!");

}

