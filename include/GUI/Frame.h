#ifndef FRAME_H
#define FRAME_H
#pragma once

#include <SDL3/SDL.h>
#include <vector>
#include <GUI/GUIElement.h>

enum Aligment
{
    Horizontal,
    Vertical,
    Grid,
    Center
};

class GUIElement;
class Frame
{
private:
    std::vector<GUIElement*> elements;
    SDL_FRect bounds;
    float padding; 
    
    void CalculatePositions();
    void AlignGrid();
    void AlignHorizontal();
    void AlignVertical();
public:
    Frame(const SDL_FRect& bounds, const float padding = 0.0f);
    
    Aligment elementsAligment = Aligment::Center;

    void AddElement(GUIElement* element);
    void AlignElements();
};

#endif
