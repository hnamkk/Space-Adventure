#pragma once

#include <Windows.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <string>
#include <iostream>
#include <random>
#include <SDL_ttf.h>
#include <string>

static SDL_Window* window = NULL;
static SDL_Renderer* screen = NULL;
static SDL_Event event;

//Screen
const int SCREEN_W = 800;
const int SCREEN_H = 450;


#define Ship_w 50
#define Ship_h 50
#define FRAMES_PER_SECOND 30
const int THREAT_HEIGHT = 60;
const int THREAT_WIDTH = 60;

bool checkCollision(const SDL_Rect& object1,const SDL_Rect& object2);