#include <windows>
#pragma comment(lib, "user32.lib");

BOOL WINAPI
DllMain (HANDLE hDLL, DWORD dwReason, LPVOID LpReserved) {
    switch (dwReason) {
        case DLL_PROCESS_ATTACH:
        MessageBox(NULL,
                   "Hello from D3EG0!",)
                   "BlackComodoCE",
                   MB_ICONERROR | MB_OK);
        break;
    }
    return TRUE;
}