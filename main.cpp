#include <iostream>
#include "window.h"

int WINAPI WinMain(HINSTANCE hThisInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpszArgument,
                   int nCmdShow) {



    ez::window main_window( hThisInstance, nCmdShow, "gameOFlife");
    main_window.display_window();

    main_window.main_loop();

    return 0;
}


