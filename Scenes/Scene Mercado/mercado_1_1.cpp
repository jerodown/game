#include "mercado_1_1.hpp"

Button* roubar = nullptr;
Button* nao_sou_assim= nullptr;


void DestroyChoices_1_1()
{
	delete roubar;
	delete nao_sou_assim;

	roubar = nullptr;
	nao_sou_assim = nullptr;
}


void Mercado_1_1() {
	if (cena1roubo.ativo == true)
	{
		if (roubar == nullptr) {
			static SDL_Texture* buttontextures_1_1 = buttontext();


			SDL_Color color = { 0, 0, 0, 255 };

			SDL_Surface* escolha1surf_1_1 = TTF_RenderText_Blended(font, "Papíro do Egito ", 0, color);
			SDL_Texture* escolha1text_1_1 = SDL_CreateTextureFromSurface(renderer, escolha1surf_1_1);

			SDL_DestroySurface(escolha1surf_1_1);

			SDL_Surface* escolha2surf_1_1 = TTF_RenderText_Blended(font, "Papel A4        ", 0, color);
			SDL_Texture* escolha2text_1_1 = SDL_CreateTextureFromSurface(renderer, escolha2surf_1_1);

			SDL_DestroySurface(escolha2surf_1_1);

			SDL_Surface* escolha3surf_1_1 = TTF_RenderText_Blended(font, "Papel reciclável", 0, color);
			SDL_Texture* escolha3text_1_1 = SDL_CreateTextureFromSurface(renderer, escolha3surf_1_1);

			SDL_DestroySurface(escolha3surf_1_1);


			roubar = new Button(
				resolution.x - resolution.x / 3,
				resolution.y - resolution.y / 1.5,
				350,
				50,
				buttontextures_1_1,
				escolha1text_1_1
			);
			nao_sou_assim = new Button(
				resolution.x - resolution.x / 3,
				resolution.y - resolution.y / 1.5 + 50,
				350,
				50,
				buttontextures_1_1,
				escolha2text_1_1
			);
		
		}
		roubar->render(renderer);
		nao_sou_assim->render(renderer);

		if (hasEvent && keyb.type == SDL_EVENT_KEY_DOWN)
		{

			if (keyb.key.key == SDLK_1)
			{
				cena1roubo.Roubar= true;
				SDL_Log("Roubar");

				DestroyChoices_1_1();
				cena1roubo.ativo = false;
				hasEvent = false;
			}
			if (keyb.key.key == SDLK_2)
			{
				cena1roubo.NaoSouAssim = true;
				SDL_Log("Papel A4");

				DestroyChoices_1_1();
				cena1roubo.ativo = false;
				hasEvent = false;
			}
		}
	}
}