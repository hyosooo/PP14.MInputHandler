#pragma once
#include "SDL.h"
#include "Vector2D.h"
#include <vector>

enum mouse_buttons
{
	LEFT = 0,
	MIDDLE = 1,
	RIGHT = 2
};

class InputHandler
{
public:

	~InputHandler() {}

	static InputHandler* Instance()
	{
		if (s_pInstance == 0)
		{
			s_pInstance = new InputHandler();
		}
		return s_pInstance;
	}

	void update();
	void clean();

	void onMouseMove(SDL_Event& event);
				
	Vector2D* m_mousePosition;
	Vector2D* getMousePosition();

private:

	InputHandler();

	static InputHandler* s_pInstance;			

};

typedef InputHandler TheInputHandler;