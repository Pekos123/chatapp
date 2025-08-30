#include <iostream>

#include <ChatApp.h>

ChatApp::ChatApp()
{
    if(!Init())
        SDL_Quit();
}
ChatApp::~ChatApp()
{
    CleanUp();
}
bool ChatApp::Init()
{
    return InitSDL() && CreateWindow() && CreateRenderer() && LoadFonts();
}
bool ChatApp::InitSDL()
{
    if(!TTF_Init())
    {
        std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return false;
    }
    if(!SDL_Init(SDL_INIT_VIDEO))
    {
        std::cerr << "TTF_Init Error: " << SDL_GetError() << std::endl;
        return false;
    }
    return true;
}
bool ChatApp::LoadFonts()
{
    // Loading Fonts Logic
    return true;
}
bool ChatApp::CreateWindow()
{
   this->window = GUICreateWindow(
        AppCfg::WINDOW_TITLE, 
        AppCfg::WINDOW_WIDTH, 
        AppCfg::WINDOW_HEIGHT, 
        AppCfg::FLAGS);
    
    if(!window)
    {
        std::cerr << "GUICreateWindow Error: " << SDL_GetError() << std::endl;
        return false;
    }
    return true;
}
bool ChatApp::CreateRenderer()
{
    this->renderer = GUICreateRenderer(this->window.get(), nullptr);
    
    if(!window)
    {
        std::cerr << "GUICreateRenderer Error: " << SDL_GetError() << std::endl;
        return false;
    }
    return true;
}
void ChatApp::Render()
{
    ClearScreen();
    SDL_RenderPresent(renderer.get());
}
void ChatApp::ClearScreen()
{
    SDL_SetRenderDrawColor(renderer.get(), 0, 0, 0, 255); // Draw Black
    SDL_RenderClear(renderer.get());
}
void ChatApp::CleanUp()
{
    TTF_Quit();
    SDL_Quit();
}

void ChatApp::HandleEvents()
{
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {
        switch (event.type) 
        {
            case SDL_EVENT_QUIT:
                running = false;
                break;
        }
    }
}
