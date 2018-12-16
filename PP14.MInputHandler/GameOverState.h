#pragma once
#include "GameState.h"
#include "Game.h"
#include"TextureManager.h"
#include"MenuState.h"
#include "AnimatedGraphic.h"
#include "PlayState.h"
#include "MenuButton.h"
#include <iostream>

class GameObject;

class GameOverState : public GameState
{
	static void s_gameOverToMain();
	static void s_restartPlay();
	static const std::string s_gameOverID;
	std::vector<GameObject*> m_gameObjects;
public:
	//GameOverState();
	 virtual void update();
	virtual void render();
	virtual bool onEnter();
	virtual bool onExit();
	virtual std::string getStateID() const { return s_gameOverID; }
	static GameOverState* Instance()
	{
		if (s_pInstance == 0)
		{
			s_pInstance = new GameOverState();
		}
		return s_pInstance;
	}
private:
	static GameOverState* s_pInstance;

};