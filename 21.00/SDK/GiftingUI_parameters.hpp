﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GiftingUI

#include "Basic.hpp"

#include "GiftingUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent
// 0x0028 (0x0028 - 0x0000)
struct AthenaGiftingConfirmationScreen_HandleGiftSent final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         IneligibleAccounts;                                // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                         ErrorCodes;                                        // 0x0018(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingConfirmationScreen_HandleGiftSent) == 0x000008, "Wrong alignment on AthenaGiftingConfirmationScreen_HandleGiftSent");
static_assert(sizeof(AthenaGiftingConfirmationScreen_HandleGiftSent) == 0x000028, "Wrong size on AthenaGiftingConfirmationScreen_HandleGiftSent");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleGiftSent, bSuccess) == 0x000000, "Member 'AthenaGiftingConfirmationScreen_HandleGiftSent::bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleGiftSent, IneligibleAccounts) == 0x000008, "Member 'AthenaGiftingConfirmationScreen_HandleGiftSent::IneligibleAccounts' has a wrong offset!");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleGiftSent, ErrorCodes) == 0x000018, "Member 'AthenaGiftingConfirmationScreen_HandleGiftSent::ErrorCodes' has a wrong offset!");

// Function GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete
// 0x0018 (0x0018 - 0x0000)
struct AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete final
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPurchasedItemInfo>             PurchasedItems;                                    // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete) == 0x000008, "Wrong alignment on AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete");
static_assert(sizeof(AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete) == 0x000018, "Wrong size on AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete, bSuccess) == 0x000000, "Member 'AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete::bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete, PurchasedItems) == 0x000008, "Member 'AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete::PurchasedItems' has a wrong offset!");

// Function GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaGiftingConfirmationScreen_OnPresentationModeChanged final
{
public:
	EGiftingPresentationMode                      NewMode;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingConfirmationScreen_OnPresentationModeChanged) == 0x000001, "Wrong alignment on AthenaGiftingConfirmationScreen_OnPresentationModeChanged");
static_assert(sizeof(AthenaGiftingConfirmationScreen_OnPresentationModeChanged) == 0x000001, "Wrong size on AthenaGiftingConfirmationScreen_OnPresentationModeChanged");
static_assert(offsetof(AthenaGiftingConfirmationScreen_OnPresentationModeChanged, NewMode) == 0x000000, "Member 'AthenaGiftingConfirmationScreen_OnPresentationModeChanged::NewMode' has a wrong offset!");

// Function GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility
// 0x0001 (0x0001 - 0x0000)
struct AthenaGiftingErrorsPanel_UpdateGiftEligibility final
{
public:
	bool                                          bStillGiftable;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingErrorsPanel_UpdateGiftEligibility) == 0x000001, "Wrong alignment on AthenaGiftingErrorsPanel_UpdateGiftEligibility");
static_assert(sizeof(AthenaGiftingErrorsPanel_UpdateGiftEligibility) == 0x000001, "Wrong size on AthenaGiftingErrorsPanel_UpdateGiftEligibility");
static_assert(offsetof(AthenaGiftingErrorsPanel_UpdateGiftEligibility, bStillGiftable) == 0x000000, "Member 'AthenaGiftingErrorsPanel_UpdateGiftEligibility::bStillGiftable' has a wrong offset!");

// Function GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode
// 0x0001 (0x0001 - 0x0000)
struct AthenaGiftingPriceWidget_SetPresentationMode final
{
public:
	EGiftingPricePresentationMode                 Mode;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingPriceWidget_SetPresentationMode) == 0x000001, "Wrong alignment on AthenaGiftingPriceWidget_SetPresentationMode");
static_assert(sizeof(AthenaGiftingPriceWidget_SetPresentationMode) == 0x000001, "Wrong size on AthenaGiftingPriceWidget_SetPresentationMode");
static_assert(offsetof(AthenaGiftingPriceWidget_SetPresentationMode, Mode) == 0x000000, "Member 'AthenaGiftingPriceWidget_SetPresentationMode::Mode' has a wrong offset!");

// Function GiftingUI.AthenaGiftingScreen.OnFilterChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaGiftingScreen_OnFilterChanged final
{
public:
	EFilterType                                   FilterType;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingScreen_OnFilterChanged) == 0x000001, "Wrong alignment on AthenaGiftingScreen_OnFilterChanged");
static_assert(sizeof(AthenaGiftingScreen_OnFilterChanged) == 0x000001, "Wrong size on AthenaGiftingScreen_OnFilterChanged");
static_assert(offsetof(AthenaGiftingScreen_OnFilterChanged, FilterType) == 0x000000, "Member 'AthenaGiftingScreen_OnFilterChanged::FilterType' has a wrong offset!");

// Function GiftingUI.AthenaGiftingScreen.OnPartyListUpdated
// 0x0001 (0x0001 - 0x0000)
struct AthenaGiftingScreen_OnPartyListUpdated final
{
public:
	bool                                          bEmpty;                                            // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingScreen_OnPartyListUpdated) == 0x000001, "Wrong alignment on AthenaGiftingScreen_OnPartyListUpdated");
static_assert(sizeof(AthenaGiftingScreen_OnPartyListUpdated) == 0x000001, "Wrong size on AthenaGiftingScreen_OnPartyListUpdated");
static_assert(offsetof(AthenaGiftingScreen_OnPartyListUpdated, bEmpty) == 0x000000, "Member 'AthenaGiftingScreen_OnPartyListUpdated::bEmpty' has a wrong offset!");

// Function GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaGiftingScreen_OnPresentationModeChanged final
{
public:
	EGiftingScreenPresentationMode                Mode;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingScreen_OnPresentationModeChanged) == 0x000001, "Wrong alignment on AthenaGiftingScreen_OnPresentationModeChanged");
static_assert(sizeof(AthenaGiftingScreen_OnPresentationModeChanged) == 0x000001, "Wrong size on AthenaGiftingScreen_OnPresentationModeChanged");
static_assert(offsetof(AthenaGiftingScreen_OnPresentationModeChanged, Mode) == 0x000000, "Member 'AthenaGiftingScreen_OnPresentationModeChanged::Mode' has a wrong offset!");

// Function GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton
// 0x0010 (0x0010 - 0x0000)
struct AthenaGiftingScreen_OnSetupFilterTabButton final
{
public:
	class UCommonButtonLegacy*                    Button;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFilterType                                   FilterType;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AthenaGiftingScreen_OnSetupFilterTabButton) == 0x000008, "Wrong alignment on AthenaGiftingScreen_OnSetupFilterTabButton");
static_assert(sizeof(AthenaGiftingScreen_OnSetupFilterTabButton) == 0x000010, "Wrong size on AthenaGiftingScreen_OnSetupFilterTabButton");
static_assert(offsetof(AthenaGiftingScreen_OnSetupFilterTabButton, Button) == 0x000000, "Member 'AthenaGiftingScreen_OnSetupFilterTabButton::Button' has a wrong offset!");
static_assert(offsetof(AthenaGiftingScreen_OnSetupFilterTabButton, FilterType) == 0x000008, "Member 'AthenaGiftingScreen_OnSetupFilterTabButton::FilterType' has a wrong offset!");

// Function GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText
// 0x0001 (0x0001 - 0x0000)
struct AthenaGiftingScreen_OnShowSearchWarningText final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AthenaGiftingScreen_OnShowSearchWarningText) == 0x000001, "Wrong alignment on AthenaGiftingScreen_OnShowSearchWarningText");
static_assert(sizeof(AthenaGiftingScreen_OnShowSearchWarningText) == 0x000001, "Wrong size on AthenaGiftingScreen_OnShowSearchWarningText");
static_assert(offsetof(AthenaGiftingScreen_OnShowSearchWarningText, bShow) == 0x000000, "Member 'AthenaGiftingScreen_OnShowSearchWarningText::bShow' has a wrong offset!");

// Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged
// 0x0002 (0x0002 - 0x0000)
struct FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged final
{
public:
	bool                                          bInIsHighlighted;                                  // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPlayAnimation;                                    // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged) == 0x000001, "Wrong alignment on FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged");
static_assert(sizeof(FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged) == 0x000002, "Wrong size on FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged");
static_assert(offsetof(FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged, bInIsHighlighted) == 0x000000, "Member 'FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged::bInIsHighlighted' has a wrong offset!");
static_assert(offsetof(FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged, bPlayAnimation) == 0x000001, "Member 'FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged::bPlayAnimation' has a wrong offset!");

// Function GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode
// 0x0001 (0x0001 - 0x0000)
struct FortGiftingSocialUserListEntry_SetPresentationMode final
{
public:
	ERecipientPresentationMode                    Mode;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortGiftingSocialUserListEntry_SetPresentationMode) == 0x000001, "Wrong alignment on FortGiftingSocialUserListEntry_SetPresentationMode");
static_assert(sizeof(FortGiftingSocialUserListEntry_SetPresentationMode) == 0x000001, "Wrong size on FortGiftingSocialUserListEntry_SetPresentationMode");
static_assert(offsetof(FortGiftingSocialUserListEntry_SetPresentationMode, Mode) == 0x000000, "Member 'FortGiftingSocialUserListEntry_SetPresentationMode::Mode' has a wrong offset!");

// Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged
// 0x0018 (0x0018 - 0x0000)
struct FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged) == 0x000008, "Wrong alignment on FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged");
static_assert(sizeof(FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged) == 0x000018, "Wrong size on FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged");
static_assert(offsetof(FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged, Text) == 0x000000, "Member 'FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged::Text' has a wrong offset!");

// Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered
// 0x0020 (0x0020 - 0x0000)
struct FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered) == 0x000008, "Wrong alignment on FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered");
static_assert(sizeof(FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered) == 0x000020, "Wrong size on FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered");
static_assert(offsetof(FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered, Text) == 0x000000, "Member 'FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered::Text' has a wrong offset!");
static_assert(offsetof(FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered, CommitMethod) == 0x000018, "Member 'FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered::CommitMethod' has a wrong offset!");

// Function GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit
// 0x0001 (0x0001 - 0x0000)
struct FortGiftingUserSearchWidget_OnSearchCommit final
{
public:
	bool                                          bSearchStringShort;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FortGiftingUserSearchWidget_OnSearchCommit) == 0x000001, "Wrong alignment on FortGiftingUserSearchWidget_OnSearchCommit");
static_assert(sizeof(FortGiftingUserSearchWidget_OnSearchCommit) == 0x000001, "Wrong size on FortGiftingUserSearchWidget_OnSearchCommit");
static_assert(offsetof(FortGiftingUserSearchWidget_OnSearchCommit, bSearchStringShort) == 0x000000, "Member 'FortGiftingUserSearchWidget_OnSearchCommit::bSearchStringShort' has a wrong offset!");

}

