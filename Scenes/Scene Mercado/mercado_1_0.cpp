#include "../../include/conditions.hpp"
#include "mercado_1_0.hpp"
#include "../../Assets/Button/buttonchoice.hpp"
#include "../../Assets/Screen/screen.hpp"

Button* papiro = nullptr;
Button* papel_a4 = nullptr;
Button* papel_reciclado = nullptr;

void DestroyChoices_1_0()
{
	delete papiro;
	delete papel_a4;
	delete papel_reciclado;

	papiro = nullptr;
	papel_a4 = nullptr;
	papel_reciclado = nullptr;
}


void Mercado_1_0() {
	if (cena1papeis.ativo == true)
	{
		if (papiro == nullptr) {
			static SDL_Texture* buttontextures = buttontext();


			SDL_Color color = { 0, 0, 0, 255 };

			SDL_Surface* escolha1surf = TTF_RenderText_Blended(font, "Papíro do Egito ", 0, color);
			SDL_Texture* escolha1text = SDL_CreateTextureFromSurface(renderer, escolha1surf);

			SDL_DestroySurface(escolha1surf);

			SDL_Surface* escolha2surf = TTF_RenderText_Blended(font, "Papel A4        ", 0, color);
			SDL_Texture* escolha2text = SDL_CreateTextureFromSurface(renderer, escolha2surf);

			SDL_DestroySurface(escolha2surf);

			SDL_Surface* escolha3surf = TTF_RenderText_Blended(font, "Papel reciclável", 0, color);
			SDL_Texture* escolha3text = SDL_CreateTextureFromSurface(renderer, escolha3surf);

			SDL_DestroySurface(escolha3surf);


			papiro = new Button(
				resolution.x - resolution.x / 3,
				resolution.y - resolution.y / 1.5,
				350,
				50,
				buttontextures,
				escolha1text
			);
			papel_a4 = new Button(
				resolution.x - resolution.x / 3,
				resolution.y - resolution.y / 1.5 + 50,
				350,
				50,
				buttontextures,
				escolha2text
			);
			papel_reciclado = new Button(
				resolution.x - resolution.x / 3,
				resolution.y - resolution.y / 1.5 + 100,
				350,
				50,
				buttontextures,
				escolha3text
			);

		}
		papiro->render(renderer);
		papel_a4->render(renderer);
		papel_reciclado->render(renderer);

		if (hasEvent && keyb.type == SDL_EVENT_KEY_DOWN)
		{

			if (keyb.key.key == SDLK_1)
			{
				cena1papeis.papiro_egipcio = true;
				SDL_Log("Papiro do Egito");

				DestroyChoices_1_0();
				cena1papeis.ativo = false;
				hasEvent = false;
			}
			if (keyb.key.key == SDLK_2)
			{
				cena1papeis.papel_a4 = true;
				SDL_Log("Papel A4");

				DestroyChoices_1_0();
				cena1papeis.ativo = false;
				hasEvent = false;
			}
			if (keyb.key.key == SDLK_3)
			{
				cena1papeis.papel_reciclado = true;
				SDL_Log("Papel reciclável");

				DestroyChoices_1_0();
				cena1papeis.ativo = false;
				hasEvent = false;
			}

		}






	}
}