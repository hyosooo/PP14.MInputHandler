#include "Inputhandler.h"
#include "Game.h"

InputHandler*InputHandler::s_pInstance = 0;

InputHandler::InputHandler()
{
	m_mousePosition = new Vector2D(0, 0);
}

void InputHandler::clean()
{

}

void InputHandler::update()
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			onMouseMove(event);
			break;
		default:
			break;
		}
	}
}

Vector2D* InputHandler::getMousePosition()
{
	return m_mousePosition;
}

void InputHandler::onMouseMove(SDL_Event& event)
{
	m_mousePosition->setX(event.motion.x);
	m_mousePosition->setY(event.motion.y);
}

