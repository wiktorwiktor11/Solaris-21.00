﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Stage_DanceFloor_Reactive

#include "Basic.hpp"

#include "Parent_BuildingPropActor_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Stage_DanceFloor_Reactive.Stage_DanceFloor_Reactive_C
// 0x0040 (0x0FB8 - 0x0F78)
class AStage_DanceFloor_Reactive_C final : public AParent_BuildingPropActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Stage_DanceFloor_Reactive_C;        // 0x0F78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          CharacterDetection;                                // 0x0F80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OverallGlow_FullPanelGlow_7CABB34A4AD05402B742F0972E69E2F3; // 0x0F88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            OverallGlow__Direction_7CABB34A4AD05402B742F0972E69E2F3; // 0x0F8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F8D[0x3];                                      // 0x0F8D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     OverallGlow;                                       // 0x0F90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerPawn*>                DanceFloorPawnArray;                               // 0x0F98(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Actively_Update;                                   // 0x0FA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FA9[0x3];                                      // 0x0FA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Actor_Position_Update_Frequency;                   // 0x0FAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Previous_number_of_dancers;                        // 0x0FB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_Stage_DanceFloor_Reactive(int32 EntryPoint);
	void NumberOfPlayersUpdated();
	void OverallGlow__FinishedFunc();
	void OverallGlow__UpdateFunc();
	void RemoveOldMIDData();
	void UpdatePlayerPositionsWithinTheMID();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Stage_DanceFloor_Reactive_C">();
	}
	static class AStage_DanceFloor_Reactive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStage_DanceFloor_Reactive_C>();
	}
};
static_assert(alignof(AStage_DanceFloor_Reactive_C) == 0x000008, "Wrong alignment on AStage_DanceFloor_Reactive_C");
static_assert(sizeof(AStage_DanceFloor_Reactive_C) == 0x000FB8, "Wrong size on AStage_DanceFloor_Reactive_C");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, UberGraphFrame_Stage_DanceFloor_Reactive_C) == 0x000F78, "Member 'AStage_DanceFloor_Reactive_C::UberGraphFrame_Stage_DanceFloor_Reactive_C' has a wrong offset!");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, CharacterDetection) == 0x000F80, "Member 'AStage_DanceFloor_Reactive_C::CharacterDetection' has a wrong offset!");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, OverallGlow_FullPanelGlow_7CABB34A4AD05402B742F0972E69E2F3) == 0x000F88, "Member 'AStage_DanceFloor_Reactive_C::OverallGlow_FullPanelGlow_7CABB34A4AD05402B742F0972E69E2F3' has a wrong offset!");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, OverallGlow__Direction_7CABB34A4AD05402B742F0972E69E2F3) == 0x000F8C, "Member 'AStage_DanceFloor_Reactive_C::OverallGlow__Direction_7CABB34A4AD05402B742F0972E69E2F3' has a wrong offset!");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, OverallGlow) == 0x000F90, "Member 'AStage_DanceFloor_Reactive_C::OverallGlow' has a wrong offset!");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, DanceFloorPawnArray) == 0x000F98, "Member 'AStage_DanceFloor_Reactive_C::DanceFloorPawnArray' has a wrong offset!");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, Actively_Update) == 0x000FA8, "Member 'AStage_DanceFloor_Reactive_C::Actively_Update' has a wrong offset!");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, Actor_Position_Update_Frequency) == 0x000FAC, "Member 'AStage_DanceFloor_Reactive_C::Actor_Position_Update_Frequency' has a wrong offset!");
static_assert(offsetof(AStage_DanceFloor_Reactive_C, Previous_number_of_dancers) == 0x000FB0, "Member 'AStage_DanceFloor_Reactive_C::Previous_number_of_dancers' has a wrong offset!");

}

