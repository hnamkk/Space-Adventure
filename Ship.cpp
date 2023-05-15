
#include "Ship.h"
#include "ComFunc.h"

Ship::Ship()
{
    y_val = 0;
    x_val = 0;   
}

Ship::~Ship()
{
    Free();
}

void Ship::Action(SDL_Event events, SDL_Renderer* screen)
{
    if (events.type == SDL_KEYDOWN)
    {
        switch (events.key.keysym.sym)
        {
        case SDLK_UP:
        {
            y_val = -20;
            break;
        }
        case SDLK_LEFT:
        {
            x_val = -20;
            break;
        }
        case SDLK_RIGHT:
        {
            x_val = 20;
            break;
        }
        case SDLK_DOWN:
        {
            y_val = 20;
            break;
        }
        }
    }
    else if (events.type == SDL_KEYUP)
    {
        switch (events.key.keysym.sym)
        {
        case SDLK_UP:
        {
            y_val += 20;
        }
        break;

        case SDLK_LEFT:
        {
            x_val += 20;
        }
        break;
        case SDLK_RIGHT:
        {
            x_val -= 20;
        }
        break;
        case SDLK_DOWN:
        {
            y_val -= 20;
        }
        break;
        }
    }
}


bool Ship::LoadImg(std::string path, SDL_Renderer* screen)
{
    bool ret = Core::LoadImage(path, screen);
    return ret;
}

void Ship::Show(SDL_Renderer* des)
{  
    rect.y += y_val;
    if (rect.y + Ship_h >= SCREEN_H || rect.y < 0)
    {
        rect.y -= y_val;
    }
    rect.x += x_val;
    if (rect.x + Ship_w >= SCREEN_W || rect.x < 0)
    {
        rect.x -= x_val;
    }
    Core::Render(des);
}

