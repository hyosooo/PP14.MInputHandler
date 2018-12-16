#pragma once
#include<string>
#include<vector>
#include "GameObject.h"

class GameState
{
protected:
	std::vector<GameObject*> m_gameObjects;

public:
	GameState() {};
	virtual void update() =0;
	virtual void render() =0;
	virtual bool onEnter() = 0;
	virtual bool onExit() = 0;
	virtual std::string getStateID() const = 0;
};

