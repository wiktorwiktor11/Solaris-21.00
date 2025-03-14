// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "Utils.h"

DWORD WINAPI HotKeyThread(LPVOID)
{
    while (true)
    {
        if (GetAsyncKeyState(VK_F7))
        {
            UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"STARTAIRCRAFT", nullptr);
        }

        Sleep(1000 / 30);
    }
}

void Main()
{
    InitOffsets;
    LogCategory = FName(L"LogGameserver");
    InitMinHook;
    DispatchHooks;
    AllocConsole();
    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);
    SetConsoleTitleA("Sarah 21.00: Setting up");
    Sleep(5000);

    srand((uint32_t) time(0));

    CreateThread(0, 0, HotKeyThread, 0, 0, 0);

    *(bool*)Sarah::Offsets::GIsClient = false;
    *(bool*)(Sarah::Offsets::GIsClient + 1) = true;
    UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);
    UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"open Artemis_Terrain", nullptr);
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        thread(Main).detach();
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

