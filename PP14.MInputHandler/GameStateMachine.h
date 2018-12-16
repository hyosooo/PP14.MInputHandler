#pragma once
#include "GameState.h"
#include "GameObject.h"
#include <string>
#include <vector>


class GameStateMachine
{
public:

	virtual void changeState(GameState* pState);
	virtual void update() ;
	virtual void render() ;

	static GameStateMachine* Instance()
	{
		if (s_pInstance == 0)
		{
			s_pInstance = new GameStateMachine();
			return s_pInstance;
		}
		return s_pInstance;
	}

private:

	GameState * m_currentState;
	GameState* m_prevState;
	static GameStateMachine* s_pInstance;
	std::vector<GameState*> m_gameStates;
	std::vector<GameObject*> m_gameObjects;

};