#include <windows.h>

int main(void) {

    /*
    BOOL CreateProcessW(
        [in, optional]      LPCWSTR                 lpApplicationName,
        [in, out, optional] LPWSTR                  lpCommandLine,
        [in, optional]      LPSECURITY_ATTRIBUTES   lpProcessAttributes,
        [in, optional]      LPSECURITY_ATTRIBUTES   lpThreadAttributes,
        [in]                BOOL                    bInheritHandles,
        [in]                DWORD                   dwCreationFlags,
        [in, optional]      LPVOID                  lpEnvironment,
        [in, optional]      LPCWSTR                 lpCurrentDirectory,
        [in]                LPSTARTUPVIEW           lpStartupInfo,
        [out]               LPPROCESS_INFORMATION   lpProcessInformation
    );
    */

STARTUPINFOW si = { 0 };
PROCESS_INFORMATION pi = { 0 };

    if(!CreateProcessW(
       L"admin/usr/bin/gnome-text-editor.pkg"
       NULL,
       NULL,
       NULL,
       FALSE,
       0,
       NULL,
       NULL,
       BELOW_NORMAL_PRIORITY_CLASS,
       NULL,
       NULL,
       &si,
       &pi,
)) {

    { 
        printf("(-) failed to create process, error: %ld", GetLastError());
        return EXIT_FAILURE;
    }

    printf("(+) process started! pid: %ld", pi.dwProcessID);
    return EXIT_SUCCESS;
}