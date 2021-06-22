#include <windows.h>
#include <shellapi.h>
#include <iostream>

int main()
{
    std::cout << "Get RickRolled m8 :P" << std::endl;
    ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);

    getchar();
    return 0;
}