#include <iostream>
#include <GUI/Customs.h>

void SDLWindowDeleter::operator()(SDL_Window* window) const
{
    if(window)
        SDL_DestroyWindow(window);
}
Window GUICreateWindow(const char* title, int w, int h, SDL_WindowFlags flags)
{
    SDL_Window* window = SDL_CreateWindow(title, w, h, flags);
    if(!window)
    {
        std::cerr << "SDL Creating Window Error: " << SDL_GetError() << '\n';
        return nullptr;
    }
    return Window(window);
}

void SDLRendererDeleter::operator()(SDL_Renderer* renderer) const
{
    if(renderer)
        SDL_DestroyRenderer(renderer); 
}
Renderer GUICreateRenderer(SDL_Window* window, const char* name)
{
    SDL_Renderer* renderer = SDL_CreateRenderer(window, name);
    if(!renderer)
    {
        std::cerr << "SDL Creating Renderer Error: " << SDL_GetError() << '\n';
        return nullptr;
    }
    return Renderer(renderer);
}
