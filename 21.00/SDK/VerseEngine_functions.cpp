﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseEngine

#include "Basic.hpp"

#include "VerseEngine_classes.hpp"


namespace SDK
{

// Function VerseEngine.VerseAssetPtr.OnRep_AssetPathName
// (Final, Native, Protected)

void UVerseAssetPtr::OnRep_AssetPathName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseAssetPtr", "OnRep_AssetPathName");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

