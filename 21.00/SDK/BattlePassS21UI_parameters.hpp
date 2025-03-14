﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassS21UI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function BattlePassS21UI.FortBattlePassTutorialTooltipS21.SetText
// 0x0018 (0x0018 - 0x0000)
struct FortBattlePassTutorialTooltipS21_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortBattlePassTutorialTooltipS21_SetText) == 0x000008, "Wrong alignment on FortBattlePassTutorialTooltipS21_SetText");
static_assert(sizeof(FortBattlePassTutorialTooltipS21_SetText) == 0x000018, "Wrong size on FortBattlePassTutorialTooltipS21_SetText");
static_assert(offsetof(FortBattlePassTutorialTooltipS21_SetText, Text) == 0x000000, "Member 'FortBattlePassTutorialTooltipS21_SetText::Text' has a wrong offset!");

// Function BattlePassS21UI.BattlePassLandingPageS21.OnBattlePassGiftingAllowed
// 0x0001 (0x0001 - 0x0000)
struct BattlePassLandingPageS21_OnBattlePassGiftingAllowed final
{
public:
	bool                                          bGiftingAllowed;                                   // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassLandingPageS21_OnBattlePassGiftingAllowed) == 0x000001, "Wrong alignment on BattlePassLandingPageS21_OnBattlePassGiftingAllowed");
static_assert(sizeof(BattlePassLandingPageS21_OnBattlePassGiftingAllowed) == 0x000001, "Wrong size on BattlePassLandingPageS21_OnBattlePassGiftingAllowed");
static_assert(offsetof(BattlePassLandingPageS21_OnBattlePassGiftingAllowed, bGiftingAllowed) == 0x000000, "Member 'BattlePassLandingPageS21_OnBattlePassGiftingAllowed::bGiftingAllowed' has a wrong offset!");

// Function BattlePassS21UI.BattlePassLandingPageS21.OnBattlePassSubscriptionAllowed
// 0x0001 (0x0001 - 0x0000)
struct BattlePassLandingPageS21_OnBattlePassSubscriptionAllowed final
{
public:
	bool                                          bSubscriptionAllowed;                              // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassLandingPageS21_OnBattlePassSubscriptionAllowed) == 0x000001, "Wrong alignment on BattlePassLandingPageS21_OnBattlePassSubscriptionAllowed");
static_assert(sizeof(BattlePassLandingPageS21_OnBattlePassSubscriptionAllowed) == 0x000001, "Wrong size on BattlePassLandingPageS21_OnBattlePassSubscriptionAllowed");
static_assert(offsetof(BattlePassLandingPageS21_OnBattlePassSubscriptionAllowed, bSubscriptionAllowed) == 0x000000, "Member 'BattlePassLandingPageS21_OnBattlePassSubscriptionAllowed::bSubscriptionAllowed' has a wrong offset!");

// Function BattlePassS21UI.BattlePassRewardPageS21.OnInitForPageType
// 0x0001 (0x0001 - 0x0000)
struct BattlePassRewardPageS21_OnInitForPageType final
{
public:
	ERewardPageType                               InRewardPageType;                                  // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassRewardPageS21_OnInitForPageType) == 0x000001, "Wrong alignment on BattlePassRewardPageS21_OnInitForPageType");
static_assert(sizeof(BattlePassRewardPageS21_OnInitForPageType) == 0x000001, "Wrong size on BattlePassRewardPageS21_OnInitForPageType");
static_assert(offsetof(BattlePassRewardPageS21_OnInitForPageType, InRewardPageType) == 0x000000, "Member 'BattlePassRewardPageS21_OnInitForPageType::InRewardPageType' has a wrong offset!");

// Function BattlePassS21UI.BattlePassRewardPageS21.OnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct BattlePassRewardPageS21_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassRewardPageS21_OnInputMethodChanged) == 0x000001, "Wrong alignment on BattlePassRewardPageS21_OnInputMethodChanged");
static_assert(sizeof(BattlePassRewardPageS21_OnInputMethodChanged) == 0x000001, "Wrong size on BattlePassRewardPageS21_OnInputMethodChanged");
static_assert(offsetof(BattlePassRewardPageS21_OnInputMethodChanged, InputType) == 0x000000, "Member 'BattlePassRewardPageS21_OnInputMethodChanged::InputType' has a wrong offset!");

// Function BattlePassS21UI.BattlePassRewardPageS21.OnPageChanged
// 0x0004 (0x0004 - 0x0000)
struct BattlePassRewardPageS21_OnPageChanged final
{
public:
	int32                                         PageNumber;                                        // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassRewardPageS21_OnPageChanged) == 0x000004, "Wrong alignment on BattlePassRewardPageS21_OnPageChanged");
static_assert(sizeof(BattlePassRewardPageS21_OnPageChanged) == 0x000004, "Wrong size on BattlePassRewardPageS21_OnPageChanged");
static_assert(offsetof(BattlePassRewardPageS21_OnPageChanged, PageNumber) == 0x000000, "Member 'BattlePassRewardPageS21_OnPageChanged::PageNumber' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.HandleClaimRewardComplete
// 0x0018 (0x0018 - 0x0000)
struct BattlePassScreenS21_HandleClaimRewardComplete final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         OfferTemplateIdList;                               // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_HandleClaimRewardComplete) == 0x000008, "Wrong alignment on BattlePassScreenS21_HandleClaimRewardComplete");
static_assert(sizeof(BattlePassScreenS21_HandleClaimRewardComplete) == 0x000018, "Wrong size on BattlePassScreenS21_HandleClaimRewardComplete");
static_assert(offsetof(BattlePassScreenS21_HandleClaimRewardComplete, bSuccess) == 0x000000, "Member 'BattlePassScreenS21_HandleClaimRewardComplete::bSuccess' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS21_HandleClaimRewardComplete, OfferTemplateIdList) == 0x000008, "Member 'BattlePassScreenS21_HandleClaimRewardComplete::OfferTemplateIdList' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnInsufficientFunds
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS21_OnInsufficientFunds final
{
public:
	EBattlePassCurrencyType                       CurrencyType;                                      // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_OnInsufficientFunds) == 0x000001, "Wrong alignment on BattlePassScreenS21_OnInsufficientFunds");
static_assert(sizeof(BattlePassScreenS21_OnInsufficientFunds) == 0x000001, "Wrong size on BattlePassScreenS21_OnInsufficientFunds");
static_assert(offsetof(BattlePassScreenS21_OnInsufficientFunds, CurrencyType) == 0x000000, "Member 'BattlePassScreenS21_OnInsufficientFunds::CurrencyType' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnInsufficientResource
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS21_OnInsufficientResource final
{
public:
	const class UFortPersistentResourceItemDefinition* PersistentResource;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_OnInsufficientResource) == 0x000008, "Wrong alignment on BattlePassScreenS21_OnInsufficientResource");
static_assert(sizeof(BattlePassScreenS21_OnInsufficientResource) == 0x000008, "Wrong size on BattlePassScreenS21_OnInsufficientResource");
static_assert(offsetof(BattlePassScreenS21_OnInsufficientResource, PersistentResource) == 0x000000, "Member 'BattlePassScreenS21_OnInsufficientResource::PersistentResource' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnItemDelayed
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS21_OnItemDelayed final
{
public:
	struct FTimespan                              Delay;                                             // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_OnItemDelayed) == 0x000008, "Wrong alignment on BattlePassScreenS21_OnItemDelayed");
static_assert(sizeof(BattlePassScreenS21_OnItemDelayed) == 0x000008, "Wrong size on BattlePassScreenS21_OnItemDelayed");
static_assert(offsetof(BattlePassScreenS21_OnItemDelayed, Delay) == 0x000000, "Member 'BattlePassScreenS21_OnItemDelayed::Delay' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnLevelChanged
// 0x0004 (0x0004 - 0x0000)
struct BattlePassScreenS21_OnLevelChanged final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_OnLevelChanged) == 0x000004, "Wrong alignment on BattlePassScreenS21_OnLevelChanged");
static_assert(sizeof(BattlePassScreenS21_OnLevelChanged) == 0x000004, "Wrong size on BattlePassScreenS21_OnLevelChanged");
static_assert(offsetof(BattlePassScreenS21_OnLevelChanged, Level) == 0x000000, "Member 'BattlePassScreenS21_OnLevelChanged::Level' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnSetClaimedRewardInfo
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS21_OnSetClaimedRewardInfo final
{
public:
	int32                                         OwnedRewards;                                      // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalRewards;                                      // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_OnSetClaimedRewardInfo) == 0x000004, "Wrong alignment on BattlePassScreenS21_OnSetClaimedRewardInfo");
static_assert(sizeof(BattlePassScreenS21_OnSetClaimedRewardInfo) == 0x000008, "Wrong size on BattlePassScreenS21_OnSetClaimedRewardInfo");
static_assert(offsetof(BattlePassScreenS21_OnSetClaimedRewardInfo, OwnedRewards) == 0x000000, "Member 'BattlePassScreenS21_OnSetClaimedRewardInfo::OwnedRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS21_OnSetClaimedRewardInfo, TotalRewards) == 0x000004, "Member 'BattlePassScreenS21_OnSetClaimedRewardInfo::TotalRewards' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnSetDynamicInput
// 0x0010 (0x0010 - 0x0000)
struct BattlePassScreenS21_OnSetDynamicInput final
{
public:
	EBattlePassInputs                             InputType;                                         // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UBattlePassInputData*             InputData;                                         // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_OnSetDynamicInput) == 0x000008, "Wrong alignment on BattlePassScreenS21_OnSetDynamicInput");
static_assert(sizeof(BattlePassScreenS21_OnSetDynamicInput) == 0x000010, "Wrong size on BattlePassScreenS21_OnSetDynamicInput");
static_assert(offsetof(BattlePassScreenS21_OnSetDynamicInput, InputType) == 0x000000, "Member 'BattlePassScreenS21_OnSetDynamicInput::InputType' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS21_OnSetDynamicInput, InputData) == 0x000008, "Member 'BattlePassScreenS21_OnSetDynamicInput::InputData' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnSetItemPrice
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS21_OnSetItemPrice final
{
public:
	int32                                         Cost;                                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBattlePassCurrencyType                       CurrencyType;                                      // 0x0004(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BattlePassScreenS21_OnSetItemPrice) == 0x000004, "Wrong alignment on BattlePassScreenS21_OnSetItemPrice");
static_assert(sizeof(BattlePassScreenS21_OnSetItemPrice) == 0x000008, "Wrong size on BattlePassScreenS21_OnSetItemPrice");
static_assert(offsetof(BattlePassScreenS21_OnSetItemPrice, Cost) == 0x000000, "Member 'BattlePassScreenS21_OnSetItemPrice::Cost' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS21_OnSetItemPrice, CurrencyType) == 0x000004, "Member 'BattlePassScreenS21_OnSetItemPrice::CurrencyType' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnSetPrerequisiteInfo
// 0x0028 (0x0028 - 0x0000)
struct BattlePassScreenS21_OnSetPrerequisiteInfo final
{
public:
	class FText                                   Description;                                       // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         OwnedRewards;                                      // 0x0018(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NeededRewards;                                     // 0x001C(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowPrerequisiteLock;                             // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BattlePassScreenS21_OnSetPrerequisiteInfo) == 0x000008, "Wrong alignment on BattlePassScreenS21_OnSetPrerequisiteInfo");
static_assert(sizeof(BattlePassScreenS21_OnSetPrerequisiteInfo) == 0x000028, "Wrong size on BattlePassScreenS21_OnSetPrerequisiteInfo");
static_assert(offsetof(BattlePassScreenS21_OnSetPrerequisiteInfo, Description) == 0x000000, "Member 'BattlePassScreenS21_OnSetPrerequisiteInfo::Description' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS21_OnSetPrerequisiteInfo, OwnedRewards) == 0x000018, "Member 'BattlePassScreenS21_OnSetPrerequisiteInfo::OwnedRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS21_OnSetPrerequisiteInfo, NeededRewards) == 0x00001C, "Member 'BattlePassScreenS21_OnSetPrerequisiteInfo::NeededRewards' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS21_OnSetPrerequisiteInfo, bShowPrerequisiteLock) == 0x000020, "Member 'BattlePassScreenS21_OnSetPrerequisiteInfo::bShowPrerequisiteLock' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnSetResourcePrice
// 0x0010 (0x0010 - 0x0000)
struct BattlePassScreenS21_OnSetResourcePrice final
{
public:
	int32                                         Cost;                                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UFortPersistentResourceItemDefinition* PersistentResource;                                // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_OnSetResourcePrice) == 0x000008, "Wrong alignment on BattlePassScreenS21_OnSetResourcePrice");
static_assert(sizeof(BattlePassScreenS21_OnSetResourcePrice) == 0x000010, "Wrong size on BattlePassScreenS21_OnSetResourcePrice");
static_assert(offsetof(BattlePassScreenS21_OnSetResourcePrice, Cost) == 0x000000, "Member 'BattlePassScreenS21_OnSetResourcePrice::Cost' has a wrong offset!");
static_assert(offsetof(BattlePassScreenS21_OnSetResourcePrice, PersistentResource) == 0x000008, "Member 'BattlePassScreenS21_OnSetResourcePrice::PersistentResource' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.OnTransitionItemDetails
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS21_OnTransitionItemDetails final
{
public:
	bool                                          bTransitionForward;                                // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_OnTransitionItemDetails) == 0x000001, "Wrong alignment on BattlePassScreenS21_OnTransitionItemDetails");
static_assert(sizeof(BattlePassScreenS21_OnTransitionItemDetails) == 0x000001, "Wrong size on BattlePassScreenS21_OnTransitionItemDetails");
static_assert(offsetof(BattlePassScreenS21_OnTransitionItemDetails, bTransitionForward) == 0x000000, "Member 'BattlePassScreenS21_OnTransitionItemDetails::bTransitionForward' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.GetQuestPageDelay
// 0x0008 (0x0008 - 0x0000)
struct BattlePassScreenS21_GetQuestPageDelay final
{
public:
	struct FTimespan                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_GetQuestPageDelay) == 0x000008, "Wrong alignment on BattlePassScreenS21_GetQuestPageDelay");
static_assert(sizeof(BattlePassScreenS21_GetQuestPageDelay) == 0x000008, "Wrong size on BattlePassScreenS21_GetQuestPageDelay");
static_assert(offsetof(BattlePassScreenS21_GetQuestPageDelay, ReturnValue) == 0x000000, "Member 'BattlePassScreenS21_GetQuestPageDelay::ReturnValue' has a wrong offset!");

// Function BattlePassS21UI.BattlePassScreenS21.IsSeasonalCustomizationItemOwned
// 0x0001 (0x0001 - 0x0000)
struct BattlePassScreenS21_IsSeasonalCustomizationItemOwned final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BattlePassScreenS21_IsSeasonalCustomizationItemOwned) == 0x000001, "Wrong alignment on BattlePassScreenS21_IsSeasonalCustomizationItemOwned");
static_assert(sizeof(BattlePassScreenS21_IsSeasonalCustomizationItemOwned) == 0x000001, "Wrong size on BattlePassScreenS21_IsSeasonalCustomizationItemOwned");
static_assert(offsetof(BattlePassScreenS21_IsSeasonalCustomizationItemOwned, ReturnValue) == 0x000000, "Member 'BattlePassScreenS21_IsSeasonalCustomizationItemOwned::ReturnValue' has a wrong offset!");

// Function BattlePassS21UI.FortBattlePassResourcesWidgetS21.OnBattleStarRewardsSet
// 0x0004 (0x0004 - 0x0000)
struct FortBattlePassResourcesWidgetS21_OnBattleStarRewardsSet final
{
public:
	int32                                         Rewards;                                           // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortBattlePassResourcesWidgetS21_OnBattleStarRewardsSet) == 0x000004, "Wrong alignment on FortBattlePassResourcesWidgetS21_OnBattleStarRewardsSet");
static_assert(sizeof(FortBattlePassResourcesWidgetS21_OnBattleStarRewardsSet) == 0x000004, "Wrong size on FortBattlePassResourcesWidgetS21_OnBattleStarRewardsSet");
static_assert(offsetof(FortBattlePassResourcesWidgetS21_OnBattleStarRewardsSet, Rewards) == 0x000000, "Member 'FortBattlePassResourcesWidgetS21_OnBattleStarRewardsSet::Rewards' has a wrong offset!");

// Function BattlePassS21UI.FortBattlePassResourcesWidgetS21.OnStylePointsRewardsSet
// 0x0004 (0x0004 - 0x0000)
struct FortBattlePassResourcesWidgetS21_OnStylePointsRewardsSet final
{
public:
	int32                                         Rewards;                                           // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortBattlePassResourcesWidgetS21_OnStylePointsRewardsSet) == 0x000004, "Wrong alignment on FortBattlePassResourcesWidgetS21_OnStylePointsRewardsSet");
static_assert(sizeof(FortBattlePassResourcesWidgetS21_OnStylePointsRewardsSet) == 0x000004, "Wrong size on FortBattlePassResourcesWidgetS21_OnStylePointsRewardsSet");
static_assert(offsetof(FortBattlePassResourcesWidgetS21_OnStylePointsRewardsSet, Rewards) == 0x000000, "Member 'FortBattlePassResourcesWidgetS21_OnStylePointsRewardsSet::Rewards' has a wrong offset!");

}

