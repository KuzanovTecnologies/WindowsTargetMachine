#include <windows.h>

int main(void) {
    MessageBox( NULL, L"My first message box!", L"Hello World!", MB_YESNOCANCEL | MB_ICONEXCLAMATION
    return EXIT_SUCCESS;


HANDLE CreateRemoteThread();
   [in]  HANDLE                 hProcess,
   [in]  LPSECURITY             lpThreadAttributes,
   [in]  SIZE_T                 dwStackSize,
   [in]  LPTHREAD_START_ROUTINE lpStartAddress,
   [in]  LPVOID                 lpParameter,
   [in]  DWORD                  dwCreationFlags,
   [in]  LPDWORD                lpThreadId


HANDLE CreateRemoteThreadEx();
   [in]               HANDLE                        hProcess,
   [in, optional]     LPSECURITY_ATTRIBUTES         lpThreadAttributes,
   [in]               SIZE_T                        dwStackSize,
   [in]               LPTHREAD_START_ROUTINE        lpStartAddress,
   [in, optional]     LPVOID                        lpParameter,
   [in]               DWORD                         dwCreationFlags,
   [in, optional]     LPPROC_THREAD_ATTRIBUTE_LIST  lpAttributeList,
   [out, optional]    LPDWORD                       lpThreadId
);

}