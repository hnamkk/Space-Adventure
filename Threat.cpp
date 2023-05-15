#include "Threat.h"

void Threat::RandomPOS()
{
	
}


bool Threat::LoadImg(std::string path, SDL_Renderer* screen)
{
	bool ret = Core::LoadImage(path, screen);
	return ret;
}

void Threat::Show(SDL_Renderer* des)
{
	Core::Render(des);
}

void Threat::MoveThreat()
{
	rect.y += 10;
	//create random
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, SCREEN_W - THREAT_WIDTH);
	//
	if (rect.y + THREAT_HEIGHT >= SCREEN_H) {
		rect.y = -50;
		rect.x = dis(gen);
	}
}

void Threat::MoveThreatLvUp()
{
	rect.y += 8;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, SCREEN_W - THREAT_WIDTH);
	if (rect.y + THREAT_HEIGHT >= SCREEN_H) {
		rect.y = -50;
		rect.x = dis(gen);
	}
}

