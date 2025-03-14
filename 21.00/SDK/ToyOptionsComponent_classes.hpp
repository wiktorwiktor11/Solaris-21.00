﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToyOptionsComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
// 0x00A8 (0x02D8 - 0x0230)
class UToyOptionsComponent_C final : public UFortActorOptionsComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UClass>                   OptionsWidgetClass;                                // 0x0238(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   MyIslandTabList;                                   // 0x0260(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AFortPlayerController*                  InteractingPlayer;                                 // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInteractSuccess;                                  // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 ClassToLoad;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   PropertyEditorWidgetClass;                         // 0x02A0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedDisplayWidget;                               // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadingAssets;                                     // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	void DisplayOptions(class APlayerController* InteractingPlayer_0, TSoftClassPtr<class UClass> WidgetClass);
	void ExecuteUbergraph_ToyOptionsComponent(int32 EntryPoint);
	void OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToyOptionsComponent_C">();
	}
	static class UToyOptionsComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UToyOptionsComponent_C>();
	}
};
static_assert(alignof(UToyOptionsComponent_C) == 0x000008, "Wrong alignment on UToyOptionsComponent_C");
static_assert(sizeof(UToyOptionsComponent_C) == 0x0002D8, "Wrong size on UToyOptionsComponent_C");
static_assert(offsetof(UToyOptionsComponent_C, UberGraphFrame) == 0x000230, "Member 'UToyOptionsComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UToyOptionsComponent_C, OptionsWidgetClass) == 0x000238, "Member 'UToyOptionsComponent_C::OptionsWidgetClass' has a wrong offset!");
static_assert(offsetof(UToyOptionsComponent_C, MyIslandTabList) == 0x000260, "Member 'UToyOptionsComponent_C::MyIslandTabList' has a wrong offset!");
static_assert(offsetof(UToyOptionsComponent_C, InteractingPlayer) == 0x000288, "Member 'UToyOptionsComponent_C::InteractingPlayer' has a wrong offset!");
static_assert(offsetof(UToyOptionsComponent_C, bInteractSuccess) == 0x000290, "Member 'UToyOptionsComponent_C::bInteractSuccess' has a wrong offset!");
static_assert(offsetof(UToyOptionsComponent_C, ClassToLoad) == 0x000298, "Member 'UToyOptionsComponent_C::ClassToLoad' has a wrong offset!");
static_assert(offsetof(UToyOptionsComponent_C, PropertyEditorWidgetClass) == 0x0002A0, "Member 'UToyOptionsComponent_C::PropertyEditorWidgetClass' has a wrong offset!");
static_assert(offsetof(UToyOptionsComponent_C, CachedDisplayWidget) == 0x0002C8, "Member 'UToyOptionsComponent_C::CachedDisplayWidget' has a wrong offset!");
static_assert(offsetof(UToyOptionsComponent_C, LoadingAssets) == 0x0002D0, "Member 'UToyOptionsComponent_C::LoadingAssets' has a wrong offset!");

}

