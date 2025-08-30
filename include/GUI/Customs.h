#ifndef CUSTOMS_H
#define CUSTOMS_H
#pragma once

#include <SDL3/SDL.h>
#include <memory>

struct SDLWindowDeleter
{
    void operator()(SDL_Window* window) const; 
};
using Window = std::unique_ptr<SDL_Window, SDLWindowDeleter>;
Window GUICreateWindow(const char* title, int w, int h, SDL_WindowFlags flags);

struct SDLRendererDeleter
{
    void operator()(SDL_Renderer* renderer) const; 
};
using Renderer = std::unique_ptr<SDL_Renderer, SDLRendererDeleter>;
Renderer GUICreateRenderer(SDL_Window* window, const char* name);

#endif
