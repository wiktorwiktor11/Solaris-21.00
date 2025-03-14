﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaIndicatorLayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaIndicatorLayer.AthenaIndicatorLayer_C
// 0x0080 (0x0470 - 0x03F0)
class UAthenaIndicatorLayer_C final : public UAthenaIndicatorLayerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UInterestIndicatorWidget_C*>     AvailableInterestIndicators;                       // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UInterestIndicatorWidget_C*>     ActiveInterestIndicators;                          // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          ShowInteractionWidget;                             // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_419[0x7];                                      // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   SoftCreativeInfoIndicator;                         // 0x0420(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   SoftCreativePlayerInfoIndicator;                   // 0x0448(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Construct();
	void CreateInterestIndicatorWidget();
	void Destruct();
	void ExecuteUbergraph_AthenaIndicatorLayer(int32 EntryPoint);
	void HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const class FText& DisplayText, class UTexture2D* DisplayImage, bool SpecifyColor, const struct FLinearColor& ImageColor);
	void HandleOnPointOfInterestRemoved(class AActor* PointOfInterest);
	void OnLoaded_0BEC012C4A6FDC641FED58A2C3D8BCE1(TSubclassOf<class UObject> Loaded);
	void OnLoaded_B8452F9043C3C2A55EA7759DF18A2345(TSubclassOf<class UObject> Loaded);
	void OnReady_E8925CF449ED5EC2B87AD4AA3B994A28(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaIndicatorLayer_C">();
	}
	static class UAthenaIndicatorLayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaIndicatorLayer_C>();
	}
};
static_assert(alignof(UAthenaIndicatorLayer_C) == 0x000008, "Wrong alignment on UAthenaIndicatorLayer_C");
static_assert(sizeof(UAthenaIndicatorLayer_C) == 0x000470, "Wrong size on UAthenaIndicatorLayer_C");
static_assert(offsetof(UAthenaIndicatorLayer_C, UberGraphFrame) == 0x0003F0, "Member 'UAthenaIndicatorLayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, AvailableInterestIndicators) == 0x0003F8, "Member 'UAthenaIndicatorLayer_C::AvailableInterestIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, ActiveInterestIndicators) == 0x000408, "Member 'UAthenaIndicatorLayer_C::ActiveInterestIndicators' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, ShowInteractionWidget) == 0x000418, "Member 'UAthenaIndicatorLayer_C::ShowInteractionWidget' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, SoftCreativeInfoIndicator) == 0x000420, "Member 'UAthenaIndicatorLayer_C::SoftCreativeInfoIndicator' has a wrong offset!");
static_assert(offsetof(UAthenaIndicatorLayer_C, SoftCreativePlayerInfoIndicator) == 0x000448, "Member 'UAthenaIndicatorLayer_C::SoftCreativePlayerInfoIndicator' has a wrong offset!");

}

