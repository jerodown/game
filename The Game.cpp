#define SDL_MAIN_USE_CALLBACKS
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_image.h>
#include <SDL3/SDL_ttf.h>
#include <vector>
#include "include/conditions.hpp"

#include "Assets/Button/buttonchoice.hpp"
#include "Assets/Screen/screen.hpp"
#include "Scenes/Scene Mercado/mercado_1_0.hpp"
#include "Scenes/Scene Mercado/mercado_1_1.hpp"
#include "Scenes/Scene Mercado/mercado_1_2.hpp"
#include "Scenes/Scene Mercado/mercado_1_3.hpp"
#include "Scenes/Scene Mercado/mercado_1_4.hpp"
#include "gamevoid.hpp"

SDL_AppResult SDL_AppInit(void** appstate, int argc, char* argv[])
{
	SDL_Init(SDL_INIT_VIDEO);
	TTF_Init();


	cena1papeis.ativo = true;
	hasEvent = true;

	Display_found();

	Create_screen();


	renderer = SDL_CreateRenderer(window, nullptr);


	ttf();

	return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppEvent(void* appstate, SDL_Event* event)
{
	keyb = *event;






	return SDL_APP_CONTINUE;
}

SDL_AppResult SDL_AppIterate(void* appstate)
{
	SDL_SetRenderDrawColor(renderer, 255, 100, 100, 255);
	SDL_RenderClear(renderer);


	full_scene();



	SDL_RenderPresent(renderer);

	return SDL_APP_CONTINUE;
}
void SDL_AppQuit(void* appstate, SDL_AppResult result)
{



	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);

	SDL_Quit();
}