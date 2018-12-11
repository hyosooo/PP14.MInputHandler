#pragma once
#include "GameState.h"
#include "SDLGameObject.h"
#include "TextureManager.h"
#include "InputHandler.h"
#include "PauseState.h"
#include "Game.h"
#include "Player.h"
#include "Enemy.h"
#include "GameOverState.h"


class GameObject;

class PlayState : public GameState
{
public:
	virtual void update();
	virtual void render();
	virtual bool onEnter();
	virtual bool onExit();


	virtual std::string getStateID() const { return s_playID; }

	static PlayState* Instance()
	{
		if (s_pInstance == 0)
		{
			s_pInstance = new PlayState();
		}
		return s_pInstance;
	}

	bool checkCollision(SDLGameObject* p1, SDLGameObject* p2);

private:


	static const std::string s_playID;
	static PlayState* s_pInstance;
	std::vector<GameObject*> m_gameObjects;

};