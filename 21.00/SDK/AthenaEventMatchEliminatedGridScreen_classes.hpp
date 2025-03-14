﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEventMatchEliminatedGridScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaEventMatchEliminatedGridScreen.AthenaEventMatchEliminatedGridScreen_C
// 0x0010 (0x05A0 - 0x0590)
class UAthenaEventMatchEliminatedGridScreen_C final : public UAthenaEventMatchEliminatedGridScreenBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                      EliminatedPlayersGrid;                             // 0x0598(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnActivated();
	void Construct();
	void CreateGridWidgets(TArray<class UUserWidget*>* GridWidgets);
	void ExecuteUbergraph_AthenaEventMatchEliminatedGridScreen(int32 EntryPoint);
	void OnTeamEliminated_BP();
	void ResetGrid(TArray<class UUserWidget*>& GridWidgets);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEventMatchEliminatedGridScreen_C">();
	}
	static class UAthenaEventMatchEliminatedGridScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEventMatchEliminatedGridScreen_C>();
	}
};
static_assert(alignof(UAthenaEventMatchEliminatedGridScreen_C) == 0x000008, "Wrong alignment on UAthenaEventMatchEliminatedGridScreen_C");
static_assert(sizeof(UAthenaEventMatchEliminatedGridScreen_C) == 0x0005A0, "Wrong size on UAthenaEventMatchEliminatedGridScreen_C");
static_assert(offsetof(UAthenaEventMatchEliminatedGridScreen_C, UberGraphFrame) == 0x000590, "Member 'UAthenaEventMatchEliminatedGridScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEventMatchEliminatedGridScreen_C, EliminatedPlayersGrid) == 0x000598, "Member 'UAthenaEventMatchEliminatedGridScreen_C::EliminatedPlayersGrid' has a wrong offset!");

}

