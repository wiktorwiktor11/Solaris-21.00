#pragma once
#include "pch.h"

inline FName LogCategory;

#define Log(format, ...) ((void(*)(const char*, int32, const FName&, uint8, const wchar_t*, ...)) Sarah::Offsets::FMsgLogf)(__FILE__, __LINE__, LogCategory, 4, format, ##__VA_ARGS__);

class Utils {
    static inline void* _NpFH = nullptr;
public:
    template <class _Ot = void*>
    static void Hook(uint64_t _Ptr, void* _Detour, _Ot& _Orig = _NpFH) {
        MH_CreateHook((LPVOID)_Ptr, _Detour, (LPVOID*)(is_same_v<_Ot, void*> ? nullptr : &_Orig));
    }

    __forceinline static void _HookVT(void** _Vt, uint32_t _Ind, void* _Detour)
    {
        DWORD _Vo;
        VirtualProtect(_Vt + _Ind, 8, PAGE_EXECUTE_READWRITE, &_Vo);
        _Vt[_Ind] = _Detour;
        VirtualProtect(_Vt + _Ind, 8, _Vo, &_Vo);
    }

    template <typename _Ct, typename _Ot = void*>
    __forceinline static void Hook(uint32_t _Ind, void* _Detour, _Ot& _Orig = _NpFH)
    {
        auto _Vt = _Ct::GetDefaultObj()->VTable;
        if (!is_same_v<_Ot, void*>)
            _Orig = (_Ot)_Vt[_Ind];

        _HookVT(_Vt, _Ind, _Detour);
    }

    template <typename _Ct>
    __forceinline static void HookEvery(uint32_t _Ind, void* _Detour)
    {
        for (int i = 0; i < UObject::GObjects->Num(); i++) {
            auto Obj = UObject::GObjects->GetByIndex(i);
            if (Obj && Obj->IsA<_Ct>()) {
                _HookVT(Obj->VTable, _Ind, _Detour);
            }
        }
    }

    template <typename _Ct, typename _Ot = void*>
    __forceinline static void ExecHookEvery(const char* ShortName, void* _Detour, _Ot& _Orig = _NpFH)
    {
        for (int i = 0; i < UObject::GObjects->Num(); i++)
        {
            auto Obj = UObject::GObjects->GetByIndex(i);
            if (Obj && Obj->IsA<_Ct>())
            {
                ExecHook(Obj->Class->FindFunction(ShortName)->GetFullName().c_str(), _Detour, _Orig);
            }
        }
    }

    template <typename _Is>
    static __forceinline void Patch(uintptr_t ptr, _Is byte)
    {
        DWORD og;
        VirtualProtect(LPVOID(ptr), sizeof(_Is), PAGE_EXECUTE_READWRITE, &og);
        *(_Is*)ptr = byte;
        VirtualProtect(LPVOID(ptr), sizeof(_Is), og, &og);
    }

    __forceinline static UObject* InternalFindObject(UEAllocatedString ObjectPath, UClass* Class)
    {
        auto StaticFindObjectInternal = (UObject * (*)(UClass*, UObject*, const wchar_t*, bool)) Sarah::Offsets::StaticFindObject;
        return StaticFindObjectInternal(Class, nullptr, UEAllocatedWString(ObjectPath.begin(), ObjectPath.end()).c_str(), false);
    }

    __forceinline static UObject* InternalLoadObject(UEAllocatedString Path, UClass* InClass, UObject* Outer = nullptr)
    {
        auto StaticLoadObjectInternal = (UObject * (*)(UClass*, UObject*, const TCHAR*, const TCHAR*, uint32_t, UObject*, bool)) Sarah::Offsets::StaticLoadObject;
        return StaticLoadObjectInternal(InClass, Outer, UEAllocatedWString(Path.begin(), Path.end()).c_str(), nullptr, 0, nullptr, false);
    }

    static UObject* FindObject(const char*, UClass*);

    template <typename _Ot>
    static _Ot* FindObject(const char* ObjectPath, UClass* Class = _Ot::StaticClass())
    {
        return (_Ot*)FindObject(ObjectPath, Class);
    }

    template <typename _Ot>
    static _Ot* FindObject(UEAllocatedString ObjectPath, UClass* Class = _Ot::StaticClass())
    {
        return (_Ot*)FindObject(ObjectPath.c_str(), Class);
    }

    static TArray<AActor*> GetAll(UClass* Class);

    template <typename _At = AActor>
    __forceinline static TArray<_At*> GetAll(UClass* Class)
    {
        return GetAll(Class);
    }

    template <typename _At = AActor>
    __forceinline static TArray<_At*> GetAll()
    {
        return GetAll(_At::StaticClass());
    }

    static AActor* SpawnActor(UClass* Class, FTransform& Transform, AActor* Owner = nullptr);

    static AActor* SpawnActor(UClass* Class, FVector& Loc, FRotator& Rot, AActor* Owner = nullptr);

    template <typename T = AActor>
    static T* SpawnActorUnfinished(UClass* Class, FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
    {
        FTransform Transform(Loc, Rot);

        return (T*)UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), Class, Transform, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Owner);
    }

    template <typename T = AActor>
    static T* FinishSpawnActor(AActor* Actor, FVector Loc, FRotator Rot)
    {
        FTransform Transform(Loc, Rot);

        return (T*)UGameplayStatics::FinishSpawningActor(Actor, Transform);
    };


    template <typename T>
    static T* SpawnActor(UClass* Class, FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
    {
        return (T*)SpawnActor(Class, Loc, Rot, Owner);
    }

    template <typename T>
    static T* SpawnActor(UClass* Class, FTransform& Transform, AActor* Owner = nullptr)
    {
        return (T*)SpawnActor(Class, Transform, Owner);
    }

    template <typename T>
    static T* SpawnActor(FVector Loc, FRotator Rot = {}, AActor* Owner = nullptr)
    {
        return (T*)SpawnActor(T::StaticClass(), Loc, Rot, Owner);
    }

    template <typename T>
    static T* SpawnActor(FTransform& Transform, AActor* Owner = nullptr)
    {
        return (T*)SpawnActor(T::StaticClass(), Transform, Owner);
    }

    template <typename _Ot = void*>
    __forceinline static void ExecHook(UFunction* _Fn, void* _Detour, _Ot& _Orig = _NpFH)
    {
        if (!_Fn)
            return;
        if (!is_same_v<_Ot, void*>)
            _Orig = (_Ot)_Fn->ExecFunction;

        _Fn->ExecFunction = reinterpret_cast<UFunction::FNativeFuncPtr>(_Detour);
    }


    template <typename _Ot = void*>
    __forceinline static void ExecHook(const char* _Name, void* _Detour, _Ot& _Orig = _NpFH)
    {
        UFunction* _Fn = FindObject<UFunction>(_Name);
        ExecHook(_Fn, _Detour, _Orig);
    }


    template <typename _It>
    static _It* GetInterface(UObject* Object)
    {
        return ((_It * (*)(UObject*, UClass*)) (Sarah::Offsets::ImageBase + 0xdddbe0))(Object, _It::StaticClass());
    }

    static double precision(double f, double places)
    {
        double n = pow(10., places);
        return round(f * n) / n;
    }

    static float EvaluateScalableFloat(FScalableFloat& Float);
};

class FOutputDevice
{
public:
    bool bSuppressEventTag;
    bool bAutoEmitLineTerminator;
    uint8_t _Padding1[0x6];
};

class FFrame : public FOutputDevice
{
public:
    void** VTable;
    UFunction* Node;
    UObject* Object;
    uint8* Code;
    uint8* Locals;
    FProperty* MostRecentProperty;
    uint8_t* MostRecentPropertyAddress;
    uint8_t _Padding1[0x48];
    FField* PropertyChainForCompiledIn;

public:
    void StepCompiledIn(void* const Result, bool ForceExplicitProp = false);

    template <typename T>
    T& StepCompiledInRef() {
        T TempVal{};
        MostRecentPropertyAddress = nullptr;

        if (Code)
        {
            ((void (*)(FFrame*, UObject*, void* const)) Sarah::Offsets::Step)(this, Object, &TempVal);
        }
        else
        {
            FField* _Prop = PropertyChainForCompiledIn;
            PropertyChainForCompiledIn = _Prop->Next;
            ((void (*)(FFrame*, void* const, FField*)) Sarah::Offsets::StepExplicitProperty)(this, &TempVal, _Prop);
        }

        return MostRecentPropertyAddress ? *(T*)MostRecentPropertyAddress : TempVal;
    }

    void IncrementCode();
};
static_assert(offsetof(FFrame, Object) == 0x18, "FFrame::Object offset is wrong!");
static_assert(offsetof(FFrame, Code) == 0x20, "FFrame::Code offset is wrong!");
static_assert(offsetof(FFrame, Object) == 0x18, "FFrame::Object offset is wrong!");
static_assert(offsetof(FFrame, PropertyChainForCompiledIn) == 0x88, "FFrame::PropertyChainForCompiledIn offset is wrong!");


inline vector<void(*)()> _HookFuncs;
#define DefHookOg(_Rt, _Name, ...) static inline _Rt (*_Name##OG)(##__VA_ARGS__); static _Rt _Name(##__VA_ARGS__); 
#define DefUHookOg(_Name) static inline void (*_Name##OG)(UObject*, FFrame&); static void _Name(UObject*, FFrame&); 
#define DefUHookOgRet(_Rt, _Name) static inline _Rt (*_Name##OG)(UObject*, FFrame&, _Rt*); static _Rt _Name(UObject *, FFrame&, _Rt*); 
#define InitMinHook auto _MHInitter = MH_Initialize();
#define InitHooks static void Hook(); static int _AddHook() { _HookFuncs.push_back(Hook); return 0; }; static inline auto _HookAdder = _AddHook();
#define EnableHooks auto _MHEnabler = MH_EnableHook(MH_ALL_HOOKS);
#define DispatchHooks for (auto& DispatchHook : _HookFuncs) DispatchHook(); MH_EnableHook(MH_ALL_HOOKS);
#define getCounter() __counter__
#define __runOnce(_V) static uint32_t _ROnce_##_V = 0; if (++_ROnce_##_V == 1)
#define _runOnce(_V) __runOnce(_V)
#define runOnce _runOnce(__COUNTER__)
#define callOG(_Tr, _Pt, _Th, ...) ([&](){ auto _Fn = Utils::FindObject<UFunction>(_Pt "." # _Th); _Fn->ExecFunction = (UFunction::FNativeFuncPtr) _Th##OG; _Tr->_Th(##__VA_ARGS__); _Fn->ExecFunction = (UFunction::FNativeFuncPtr) _Th; })()
#define callOGWithRet(_Tr, _Pt, _Th, ...) ([&](){ auto _Fn = Utils::FindObject<UFunction>(_Pt "." # _Th); _Fn->ExecFunction = (UFunction::FNativeFuncPtr) _Th##OG; auto _Rt = _Tr->_Th(##__VA_ARGS__); _Fn->ExecFunction = (UFunction::FNativeFuncPtr) _Th; return _Rt; })()
