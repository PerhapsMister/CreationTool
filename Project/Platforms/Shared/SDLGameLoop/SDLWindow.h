//
// Created by PERHAPS-MACHINE on 2/23/2021.
//

#ifndef CREATIONTOOL_SDLWINDOW_H
#define CREATIONTOOL_SDLWINDOW_H
#include "Core/Runtime/ScreenWindow.h"

struct SDL_Window;
namespace CT
{
    class SDLWindow : ScreenWindow {
    public:

        void SwapBuffers() override;
        inline ScreenWindowInfo GetInfo() override;

        SDL_Window* sdlWindow;
    };
}

#endif //CREATIONTOOL_SDLWINDOW_H
