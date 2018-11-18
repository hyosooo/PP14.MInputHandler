#pragma once
#include "SDL.h"
#include <map>
#include "GameObject.h"
#include "Vector2D.h"

class SDLGameObject : public GameObject
{
public:
	SDLGameObject(const LoaderParams* pParams);
	virtual void draw();
	virtual void update();
	virtual void clean();
protected:
	//int m_x;
	//int m_y;
	int m_width;
	int m_height;
	int m_currentRow;
	int m_currentFrame;
	Vector2D m_position;
	Vector2D m_velocity;
	Vector2D m_acceleration;

	std::string m_textureID;
};

