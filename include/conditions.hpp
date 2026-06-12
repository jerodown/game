#pragma once
#include <SDL3/SDL.h>
#include <SDL3/SDL_ttf.h>
#include <SDL3/SDL_image.h>


struct Papiro_PapelNormal_PapelReciclado
{

	bool ativo = false;
	bool papiro_egipcio = false;
	bool papel_a4 = false;
	bool papel_reciclado = false;

};

struct Roubar_NaoSouAssim
{
	bool ativo = false;
	bool Roubar = false;
	bool NaoSouAssim = false;

};

struct Choice_1c
{
	bool choice1_1c = false;
	bool choice2_1c = false;
	bool choice3_1c = false;
	bool choice4_1c = false;

};

struct Choice_1d
{
	bool choice1_1d = false;
	bool choice2_1d = false;
	bool choice3_1d = false;
	bool choice4_1d = false;

};

struct Choice_1e
{
	bool choice1_1e;
	bool choice2_1e;
	bool choice3_1e;
	bool choice4_1e;

};

struct Choice_1f
{
	bool choice1_1f = false;
	bool choice2_1f = false;
	bool choice3_1f = false;
	bool choice4_1f = false;

};

struct Choice_1g
{
	bool choice1_1g = false;
	bool choice2_1g = false;
	bool choice3_1g = false;
	bool choice4_1g = false;

};

extern Papiro_PapelNormal_PapelReciclado cena1papeis;

extern Roubar_NaoSouAssim cena1roubo;

extern SDL_Renderer* renderer;

extern SDL_Event* event;

extern SDL_Event keyb;

extern bool hasEvent;