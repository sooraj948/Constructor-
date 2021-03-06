#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <iostream>

#include "SDL_image.h"
using namespace std;
class Game
{
public:
	Game();
	~Game();
	void handleevents();
	void update();
	void render();
	bool running() { return isrunning; }
	bool init(const char * title);
	int getcount() { return count; }

private:
	bool isrunning=true;
	SDL_Window* window;
	SDL_Surface* gScreenSurface = NULL;
	SDL_Renderer* renderer;
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;
	int count = 0;
};