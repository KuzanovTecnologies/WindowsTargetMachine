#include <iostream>
#include <windows.h>

using namespace std;

int main(void) {
    cout << "Hello, World" << endl;

    HINSTANCE hdLL;
    hDll = LoadLibrary(TEXT("diego.dll"));

    return 0;
}