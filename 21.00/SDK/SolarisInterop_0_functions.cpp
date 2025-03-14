﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SolarisInterop_0

#include "Basic.hpp"

#include "SolarisInterop_0_classes.hpp"
#include "SolarisInterop_0_parameters.hpp"


namespace SDK
{

// Function SolarisInterop.task.$InitCDO
// ()

void Utask::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SolarisInterop.task.$InitInstance
// ()

void Utask::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RActive
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FOptionProperty_                        RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RActive(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RActive");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RActive Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RAsString
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FVerseStringProperty_                   RetVal                                                 (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RAsString(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RAsString");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RAsString Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RCancel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)

void Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RCancel(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RCancel");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RCancel Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RCancelled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FOptionProperty_                        RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RCancelled(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RCancelled");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RCancelled Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RCancelling
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FOptionProperty_                        RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RCancelling(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RCancelling");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RCancelling Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FOptionProperty_                        RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RCompleted(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RCompleted");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RCompleted Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RInterrupted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FOptionProperty_                        RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RInterrupted(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RInterrupted");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RInterrupted Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RSettled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FOptionProperty_                        RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RSettled(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RSettled");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RSettled Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RUninterrupted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FOptionProperty_                        RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RUninterrupted(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RUninterrupted");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RUninterrupted Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task._L_2fVerse_2eorg_2fInterop_2ftask_N_RUnsettled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FOptionProperty_                        RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ Utask::_L_2fVerse_2eorg_2fInterop_2ftask_N_RUnsettled(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "_L_2fVerse_2eorg_2fInterop_2ftask_N_RUnsettled");

	Params::task__L_2fVerse_2eorg_2fInterop_2ftask_N_RUnsettled Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.task.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                          __verse_0xC1E81372_CallingTask                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   __verse_0xA3A00DDB_CallerResumeState                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   __verse_0x2AC0E4D8_CallerCancelState                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// class UObject*                          RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* Utask::Await(class UObject* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("task", "Await");

	Params::task_Await Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SolarisInterop.Context_task$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                                   RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UContext_task_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Context_task$Await", "Update");

	Params::Context_task_Await_Update Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.Attributes.$InitCDO
// ()

void UAttributes::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Attributes", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SolarisInterop.Interop.$InitCDO
// ()

void UInterop::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Interop", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SolarisInterop.mind.$InitCDO
// ()

void Umind::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mind", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SolarisInterop.mind.$InitInstance
// ()

void Umind::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mind", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SolarisInterop.mind._L_2fVerse_2eorg_2fInterop_2fmind_N_RAsString
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// FVerseStringProperty_                   RetVal                                                 (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ Umind::_L_2fVerse_2eorg_2fInterop_2fmind_N_RAsString(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mind", "_L_2fVerse_2eorg_2fInterop_2fmind_N_RAsString");

	Params::mind__L_2fVerse_2eorg_2fInterop_2fmind_N_RAsString Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SolarisInterop.mind._L_2fVerse_2eorg_2fInterop_2fmind_N_RCancelAll
// (Native, Public, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)

void Umind::_L_2fVerse_2eorg_2fInterop_2fmind_N_RCancelAll(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mind", "_L_2fVerse_2eorg_2fInterop_2fmind_N_RCancelAll");

	Params::mind__L_2fVerse_2eorg_2fInterop_2fmind_N_RCancelAll Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function SolarisInterop.mind._L_2fVerse_2eorg_2fInterop_2fmind_N_RGetNumActive
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct SolarisInterop_0::Ftuple_L_R     __verse_0xB2CDDD72_Argument                            (Parm, HasGetValueTypeHash)
// int64                                   RetVal                                                 (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 Umind::_L_2fVerse_2eorg_2fInterop_2fmind_N_RGetNumActive(const struct SolarisInterop_0::Ftuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mind", "_L_2fVerse_2eorg_2fInterop_2fmind_N_RGetNumActive");

	Params::mind__L_2fVerse_2eorg_2fInterop_2fmind_N_RGetNumActive Parms{};

	Parms.__verse_0xB2CDDD72_Argument = std::move(__verse_0xB2CDDD72_Argument);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

