#ifndef CHATAPP_H
#define CHATAPP_H
#pragma once

#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>

#include <GUI/Customs.h>

namespace AppCfg
{
    constexpr SDL_WindowFlags FLAGS = 0;
    constexpr int WINDOW_WIDTH = 600;
    constexpr int WINDOW_HEIGHT = 950;
    constexpr int BUTTON_SIZE = 150;
    constexpr int TEXT_FIELD_SIZE = 200;
    constexpr int TARGET_FPS = 60;
    constexpr int FRAME_DELAY = 1000 / TARGET_FPS; // ~16ms
    constexpr int FRAME_SPACING = 50;
    
    constexpr char WINDOW_TITLE[] = "ChatApp";
    constexpr char FONTS_PATHS[] = { "../font.otf" };
    constexpr int FONT_SIZE = 256;

    constexpr int MAX_PRECISION = 6;

}

class ChatApp
{
private:
    Window window;
    Renderer renderer;

    bool running = true;

    bool Init();
    bool InitSDL();
    bool CreateWindow();
    bool CreateRenderer();
    bool LoadFonts();

    void CleanUp();
    void HandleEvents();

    void Render();
    void ClearScreen();
public:
    ChatApp();
    ~ChatApp();
    
    void run()
    {
        while(running)
        {
            Render();
            HandleEvents();
            SDL_Delay(AppCfg::FRAME_DELAY);
        }
    }
};

#endif
