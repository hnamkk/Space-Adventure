#pragma once

#include "Core.h"
#include "ComFunc.h"

class Ship : public Core
{
public: 
	Ship();
	~Ship();

	bool LoadImg(std::string path, SDL_Renderer* screen);
	void Show(SDL_Renderer* des);
	void Action(SDL_Event event_, SDL_Renderer* screen); //handle input
	int getXPOS() { return rect.x; }
	int getYPOS() { return rect.y; }

private:
	//bien -> khi an tang bao nhieu
	int x_val;
	int y_val;


};