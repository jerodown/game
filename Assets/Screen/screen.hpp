#pragma once
#include <SDL3/SDL.h>

struct Resolution {
	int x;
	int y;
};

Resolution resolution;

extern SDL_Window* window;

void  Display_found();

void Create_screen();

extern struct Resolution resolution;