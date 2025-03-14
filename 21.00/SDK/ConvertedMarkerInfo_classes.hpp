﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConvertedMarkerInfo

#include "Basic.hpp"

#include "GameplayTags_0_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConvertedMarkerInfo.ConvertedMarkerInfo_C
// 0x0048 (0x0328 - 0x02E0)
class UConvertedMarkerInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Avatar;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SquadMarker;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           DBNOPulseTimer;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  RelevantPlaylistTags;                              // 0x0300(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsTalking;                                        // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowBackgroundOverridden;                         // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnemyVersion;                                     // 0x0322(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ConvertedMarkerInfo(int32 EntryPoint);
	void InitPlayerState(class AFortPlayerStateAthena* PSA);
	void OnLoaded_68559753464A154900ECA9BC6BB940C0(class UObject* Loaded);
	void OverrideShowBackground(bool bShowBackground);
	void PreConstruct(bool IsDesignTime);
	void SetBackgroundVisibility(bool bOverride, bool bBackgroundVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConvertedMarkerInfo_C">();
	}
	static class UConvertedMarkerInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConvertedMarkerInfo_C>();
	}
};
static_assert(alignof(UConvertedMarkerInfo_C) == 0x000008, "Wrong alignment on UConvertedMarkerInfo_C");
static_assert(sizeof(UConvertedMarkerInfo_C) == 0x000328, "Wrong size on UConvertedMarkerInfo_C");
static_assert(offsetof(UConvertedMarkerInfo_C, UberGraphFrame) == 0x0002E0, "Member 'UConvertedMarkerInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, Image_Avatar) == 0x0002E8, "Member 'UConvertedMarkerInfo_C::Image_Avatar' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, SquadMarker) == 0x0002F0, "Member 'UConvertedMarkerInfo_C::SquadMarker' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, DBNOPulseTimer) == 0x0002F8, "Member 'UConvertedMarkerInfo_C::DBNOPulseTimer' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, RelevantPlaylistTags) == 0x000300, "Member 'UConvertedMarkerInfo_C::RelevantPlaylistTags' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, bIsTalking) == 0x000320, "Member 'UConvertedMarkerInfo_C::bIsTalking' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, bShowBackgroundOverridden) == 0x000321, "Member 'UConvertedMarkerInfo_C::bShowBackgroundOverridden' has a wrong offset!");
static_assert(offsetof(UConvertedMarkerInfo_C, bEnemyVersion) == 0x000322, "Member 'UConvertedMarkerInfo_C::bEnemyVersion' has a wrong offset!");

}

