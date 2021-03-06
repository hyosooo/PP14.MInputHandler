#pragma once
#include <SDL_image.h>
#include <iostream>
#include"SDLGameObject.h"
#include"Inputhandler.h"
#include"Game.h"


class Player : public SDLGameObject
{
public:
	Player(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean();
private:
	void handleInput();

};