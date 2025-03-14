﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CraftingUI

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonUI_classes.hpp"
#include "GameplayTags_0_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class CraftingUI.FortCraftingItemInfoWidget
// 0x0068 (0x0460 - 0x03F8)
class UFortCraftingItemInfoWidget final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3F8[0x8];                                      // 0x03F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   RarityTextFormat;                                  // 0x0400(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_ItemName;                                     // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_ItemRarity;                                   // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_ItemCategory;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItemCategoryIndicator*             ItemCategoryIndicator;                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_ItemDescription;                              // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaInventoryItemStatsWidget*        ItemStatsWidget;                                   // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortCraftingFormulaIngredientsWidget*  IngredientsWidget;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                    Button_StartCrafting;                              // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_458[0x8];                                      // 0x0458(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnItemRaritySet(const EFortRarity Rarity, const struct FFortRarityItemData& RarityItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingItemInfoWidget">();
	}
	static class UFortCraftingItemInfoWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingItemInfoWidget>();
	}
};
static_assert(alignof(UFortCraftingItemInfoWidget) == 0x000008, "Wrong alignment on UFortCraftingItemInfoWidget");
static_assert(sizeof(UFortCraftingItemInfoWidget) == 0x000460, "Wrong size on UFortCraftingItemInfoWidget");
static_assert(offsetof(UFortCraftingItemInfoWidget, RarityTextFormat) == 0x000400, "Member 'UFortCraftingItemInfoWidget::RarityTextFormat' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemName) == 0x000418, "Member 'UFortCraftingItemInfoWidget::Text_ItemName' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemRarity) == 0x000420, "Member 'UFortCraftingItemInfoWidget::Text_ItemRarity' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemCategory) == 0x000428, "Member 'UFortCraftingItemInfoWidget::Text_ItemCategory' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, ItemCategoryIndicator) == 0x000430, "Member 'UFortCraftingItemInfoWidget::ItemCategoryIndicator' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Text_ItemDescription) == 0x000438, "Member 'UFortCraftingItemInfoWidget::Text_ItemDescription' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, ItemStatsWidget) == 0x000440, "Member 'UFortCraftingItemInfoWidget::ItemStatsWidget' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, IngredientsWidget) == 0x000448, "Member 'UFortCraftingItemInfoWidget::IngredientsWidget' has a wrong offset!");
static_assert(offsetof(UFortCraftingItemInfoWidget, Button_StartCrafting) == 0x000450, "Member 'UFortCraftingItemInfoWidget::Button_StartCrafting' has a wrong offset!");

// Class CraftingUI.AthenaCraftingQuickBarButton
// 0x0020 (0x1010 - 0x0FF0)
class UAthenaCraftingQuickBarButton final : public UAthenaQuickBarSlotButtonBase
{
public:
	uint8                                         Pad_FF0[0x20];                                     // 0x0FF0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnCanCraftNowChanged(const bool bCanCraftNow);
	void OnIsCraftableItemChanged(const bool bIsCraftableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaCraftingQuickBarButton">();
	}
	static class UAthenaCraftingQuickBarButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCraftingQuickBarButton>();
	}
};
static_assert(alignof(UAthenaCraftingQuickBarButton) == 0x000010, "Wrong alignment on UAthenaCraftingQuickBarButton");
static_assert(sizeof(UAthenaCraftingQuickBarButton) == 0x001010, "Wrong size on UAthenaCraftingQuickBarButton");

// Class CraftingUI.AthenaEquippedItemCraftingIndicator
// 0x0020 (0x0300 - 0x02E0)
class UAthenaEquippedItemCraftingIndicator final : public UCommonUserWidget
{
public:
	uint8                                         Pad_2E0[0x20];                                     // 0x02E0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnCanCraftNowChanged(const bool bCanCraftNow);
	void OnIsCraftableItemChanged(const bool bIsCraftableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaEquippedItemCraftingIndicator">();
	}
	static class UAthenaEquippedItemCraftingIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEquippedItemCraftingIndicator>();
	}
};
static_assert(alignof(UAthenaEquippedItemCraftingIndicator) == 0x000008, "Wrong alignment on UAthenaEquippedItemCraftingIndicator");
static_assert(sizeof(UAthenaEquippedItemCraftingIndicator) == 0x000300, "Wrong size on UAthenaEquippedItemCraftingIndicator");

// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
// 0x0020 (0x0300 - 0x02E0)
class UAthenaInventoryItemInfoCraftingIndicator final : public UCommonUserWidget
{
public:
	uint8                                         Pad_2E0[0x20];                                     // 0x02E0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleInventoryItemSelected(class UFortItem* SelectedItem);
	void OnCanCraftNowChanged(const bool bCanCraftNow);
	void OnIsCraftableItemChanged(const bool bIsCraftableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaInventoryItemInfoCraftingIndicator">();
	}
	static class UAthenaInventoryItemInfoCraftingIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaInventoryItemInfoCraftingIndicator>();
	}
};
static_assert(alignof(UAthenaInventoryItemInfoCraftingIndicator) == 0x000008, "Wrong alignment on UAthenaInventoryItemInfoCraftingIndicator");
static_assert(sizeof(UAthenaInventoryItemInfoCraftingIndicator) == 0x000300, "Wrong size on UAthenaInventoryItemInfoCraftingIndicator");

// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
// 0x0030 (0x0318 - 0x02E8)
class UAthenaQuickBarSlotCraftingIndicator final : public UAthenaQuickBarSlotExtensionWidgetBase
{
public:
	uint8                                         Pad_2E8[0x20];                                     // 0x02E8(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bCheckForIngredientChangesWhenCraftable;           // 0x0308(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_309[0xF];                                      // 0x0309(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnCanCraftNowChanged(const bool bCanCraftNow);
	void OnIngredientChanged(const bool bCanCraftNow);
	void OnIsCraftableItemChanged(const bool bIsCraftableItem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaQuickBarSlotCraftingIndicator">();
	}
	static class UAthenaQuickBarSlotCraftingIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaQuickBarSlotCraftingIndicator>();
	}
};
static_assert(alignof(UAthenaQuickBarSlotCraftingIndicator) == 0x000008, "Wrong alignment on UAthenaQuickBarSlotCraftingIndicator");
static_assert(sizeof(UAthenaQuickBarSlotCraftingIndicator) == 0x000318, "Wrong size on UAthenaQuickBarSlotCraftingIndicator");
static_assert(offsetof(UAthenaQuickBarSlotCraftingIndicator, bCheckForIngredientChangesWhenCraftable) == 0x000308, "Member 'UAthenaQuickBarSlotCraftingIndicator::bCheckForIngredientChangesWhenCraftable' has a wrong offset!");

// Class CraftingUI.FortCookingScreen
// 0x0050 (0x0448 - 0x03F8)
class UFortCookingScreen final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3F8[0x8];                                      // 0x03F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CloseInputAction;                                  // 0x0400(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_410[0x8];                                      // 0x0410(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonLegacy*                    Button_EjectAll;                                   // 0x0418(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                    Button_Cancel;                                     // 0x0420(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_RecipeName;                                   // 0x0428(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_RecipeDescription;                            // 0x0430(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                 Image_Recipe;                                      // 0x0438(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortSlottedRadialMenu*                 RadialMenu_Recipes;                                // 0x0440(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCookingScreen">();
	}
	static class UFortCookingScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCookingScreen>();
	}
};
static_assert(alignof(UFortCookingScreen) == 0x000008, "Wrong alignment on UFortCookingScreen");
static_assert(sizeof(UFortCookingScreen) == 0x000448, "Wrong size on UFortCookingScreen");
static_assert(offsetof(UFortCookingScreen, CloseInputAction) == 0x000400, "Member 'UFortCookingScreen::CloseInputAction' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Button_EjectAll) == 0x000418, "Member 'UFortCookingScreen::Button_EjectAll' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Button_Cancel) == 0x000420, "Member 'UFortCookingScreen::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Text_RecipeName) == 0x000428, "Member 'UFortCookingScreen::Text_RecipeName' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Text_RecipeDescription) == 0x000430, "Member 'UFortCookingScreen::Text_RecipeDescription' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, Image_Recipe) == 0x000438, "Member 'UFortCookingScreen::Image_Recipe' has a wrong offset!");
static_assert(offsetof(UFortCookingScreen, RadialMenu_Recipes) == 0x000440, "Member 'UFortCookingScreen::RadialMenu_Recipes' has a wrong offset!");

// Class CraftingUI.FortCraftingFormulaIngredientsWidget
// 0x0008 (0x02E8 - 0x02E0)
class UFortCraftingFormulaIngredientsWidget final : public UCommonUserWidget
{
public:
	class UDynamicEntryBox*                       EntryBox_Ingredients;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingFormulaIngredientsWidget">();
	}
	static class UFortCraftingFormulaIngredientsWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingFormulaIngredientsWidget>();
	}
};
static_assert(alignof(UFortCraftingFormulaIngredientsWidget) == 0x000008, "Wrong alignment on UFortCraftingFormulaIngredientsWidget");
static_assert(sizeof(UFortCraftingFormulaIngredientsWidget) == 0x0002E8, "Wrong size on UFortCraftingFormulaIngredientsWidget");
static_assert(offsetof(UFortCraftingFormulaIngredientsWidget, EntryBox_Ingredients) == 0x0002E0, "Member 'UFortCraftingFormulaIngredientsWidget::EntryBox_Ingredients' has a wrong offset!");

// Class CraftingUI.FortCraftingIngredientWidget
// 0x0028 (0x0308 - 0x02E0)
class UFortCraftingIngredientWidget final : public UCommonUserWidget
{
public:
	uint8                                         Pad_2E0[0x8];                                      // 0x02E0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTextBlock*                       Text_NumAvailable;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_NumRequired;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaItemIcon*                        ItemIcon;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLazyImage*                       LazyImage_Icon;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnIngredientWidgetUpdated(const int32 NumAvailable, const int32 NumRequired, const bool bIsPrimaryIngredient, const bool bIsLastIngredient);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingIngredientWidget">();
	}
	static class UFortCraftingIngredientWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingIngredientWidget>();
	}
};
static_assert(alignof(UFortCraftingIngredientWidget) == 0x000008, "Wrong alignment on UFortCraftingIngredientWidget");
static_assert(sizeof(UFortCraftingIngredientWidget) == 0x000308, "Wrong size on UFortCraftingIngredientWidget");
static_assert(offsetof(UFortCraftingIngredientWidget, Text_NumAvailable) == 0x0002E8, "Member 'UFortCraftingIngredientWidget::Text_NumAvailable' has a wrong offset!");
static_assert(offsetof(UFortCraftingIngredientWidget, Text_NumRequired) == 0x0002F0, "Member 'UFortCraftingIngredientWidget::Text_NumRequired' has a wrong offset!");
static_assert(offsetof(UFortCraftingIngredientWidget, ItemIcon) == 0x0002F8, "Member 'UFortCraftingIngredientWidget::ItemIcon' has a wrong offset!");
static_assert(offsetof(UFortCraftingIngredientWidget, LazyImage_Icon) == 0x000300, "Member 'UFortCraftingIngredientWidget::LazyImage_Icon' has a wrong offset!");

// Class CraftingUI.FortCraftingListEntry
// 0x0020 (0x1050 - 0x1030)
class UFortCraftingListEntry final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1028[0x8];                                     // 0x1028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaItemIcon*                        ItemIcon;                                          // 0x1030(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bCanCraftItem;                                     // 0x1038(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1039[0x17];                                    // 0x1039(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnCraftingListItemSet();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingListEntry">();
	}
	static class UFortCraftingListEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingListEntry>();
	}
};
static_assert(alignof(UFortCraftingListEntry) == 0x000010, "Wrong alignment on UFortCraftingListEntry");
static_assert(sizeof(UFortCraftingListEntry) == 0x001050, "Wrong size on UFortCraftingListEntry");
static_assert(offsetof(UFortCraftingListEntry, ItemIcon) == 0x001030, "Member 'UFortCraftingListEntry::ItemIcon' has a wrong offset!");
static_assert(offsetof(UFortCraftingListEntry, bCanCraftItem) == 0x001038, "Member 'UFortCraftingListEntry::bCanCraftItem' has a wrong offset!");

// Class CraftingUI.FortCraftingListItem
// 0x00C8 (0x00F0 - 0x0028)
class UFortCraftingListItem final : public UObject
{
public:
	uint8                                         Pad_28[0xC8];                                      // 0x0028(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingListItem">();
	}
	static class UFortCraftingListItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingListItem>();
	}
};
static_assert(alignof(UFortCraftingListItem) == 0x000008, "Wrong alignment on UFortCraftingListItem");
static_assert(sizeof(UFortCraftingListItem) == 0x0000F0, "Wrong size on UFortCraftingListItem");

// Class CraftingUI.FortCraftingTab
// 0x0138 (0x0530 - 0x03F8)
class UFortCraftingTab final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3F8[0x8];                                      // 0x03F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TabNameID;                                         // 0x0400(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_404[0xC];                                      // 0x0404(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTabButtonLabelInfo                TabButtonLabelInfo;                                // 0x0410(0x00E0)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  PrimaryIngredientTags;                             // 0x04F0(0x0020)(Edit, NativeAccessSpecifierPrivate)
	class UFortCraftingItemInfoWidget*            CraftingItemInfo;                                  // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonListView*                        ListView_Recipes;                                  // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAthenaQuickbarEditorBase*              QuickbarEditor;                                    // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_528[0x8];                                      // 0x0528(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleInventoryItemSelected(class UFortItem* Item);
	void OnFormulaListUpdated(const int32 NumFormulas);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCraftingTab">();
	}
	static class UFortCraftingTab* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCraftingTab>();
	}
};
static_assert(alignof(UFortCraftingTab) == 0x000010, "Wrong alignment on UFortCraftingTab");
static_assert(sizeof(UFortCraftingTab) == 0x000530, "Wrong size on UFortCraftingTab");
static_assert(offsetof(UFortCraftingTab, TabNameID) == 0x000400, "Member 'UFortCraftingTab::TabNameID' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, TabButtonLabelInfo) == 0x000410, "Member 'UFortCraftingTab::TabButtonLabelInfo' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, PrimaryIngredientTags) == 0x0004F0, "Member 'UFortCraftingTab::PrimaryIngredientTags' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, CraftingItemInfo) == 0x000510, "Member 'UFortCraftingTab::CraftingItemInfo' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, ListView_Recipes) == 0x000518, "Member 'UFortCraftingTab::ListView_Recipes' has a wrong offset!");
static_assert(offsetof(UFortCraftingTab, QuickbarEditor) == 0x000520, "Member 'UFortCraftingTab::QuickbarEditor' has a wrong offset!");

// Class CraftingUI.FortPotContentsPopup
// 0x0028 (0x02E0 - 0x02B8)
class UFortPotContentsPopup final : public UUserWidget
{
public:
	int32                                         MaxItemsToShow;                                    // 0x02B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2BC[0xC];                                      // 0x02BC(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTileView*                        TileView_PotContents;                              // 0x02C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_MoreItems;                                    // 0x02D0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                Overlay_Popup;                                     // 0x02D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void SetOwningCraftingObject(class ACraftingObjectBGA* InCraftingObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPotContentsPopup">();
	}
	static class UFortPotContentsPopup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPotContentsPopup>();
	}
};
static_assert(alignof(UFortPotContentsPopup) == 0x000008, "Wrong alignment on UFortPotContentsPopup");
static_assert(sizeof(UFortPotContentsPopup) == 0x0002E0, "Wrong size on UFortPotContentsPopup");
static_assert(offsetof(UFortPotContentsPopup, MaxItemsToShow) == 0x0002B8, "Member 'UFortPotContentsPopup::MaxItemsToShow' has a wrong offset!");
static_assert(offsetof(UFortPotContentsPopup, TileView_PotContents) == 0x0002C8, "Member 'UFortPotContentsPopup::TileView_PotContents' has a wrong offset!");
static_assert(offsetof(UFortPotContentsPopup, Text_MoreItems) == 0x0002D0, "Member 'UFortPotContentsPopup::Text_MoreItems' has a wrong offset!");
static_assert(offsetof(UFortPotContentsPopup, Overlay_Popup) == 0x0002D8, "Member 'UFortPotContentsPopup::Overlay_Popup' has a wrong offset!");

// Class CraftingUI.FortPotContentsTile
// 0x0010 (0x1040 - 0x1030)
class UFortPotContentsTile final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1028[0x8];                                     // 0x1028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonLazyImage*                       Image_Item;                                        // 0x1030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1038[0x8];                                     // 0x1038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPotContentsTile">();
	}
	static class UFortPotContentsTile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPotContentsTile>();
	}
};
static_assert(alignof(UFortPotContentsTile) == 0x000010, "Wrong alignment on UFortPotContentsTile");
static_assert(sizeof(UFortPotContentsTile) == 0x001040, "Wrong size on UFortPotContentsTile");
static_assert(offsetof(UFortPotContentsTile, Image_Item) == 0x001030, "Member 'UFortPotContentsTile::Image_Item' has a wrong offset!");

}

