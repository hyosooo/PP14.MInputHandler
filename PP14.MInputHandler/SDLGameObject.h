#pragma once
#include "SDL.h"
#include <map>
#include "GameObject.h"
#include "Vector2D.h"
#include "LoaderParams.h"

class SDLGameObject : public GameObject
{
public:
	SDLGameObject(const LoaderParams* pParams);

	virtual void draw();
	virtual void update();
	virtual void clean();

	Vector2D& getPosition() { return m_position; };
	int getWidth() { return m_width; };
	int getHeight() { return m_height; };

protected:

	int m_width;
	int m_height;

	int m_currentRow;
	int m_currentFrame;
	int m_numFrames;

	Vector2D m_position;
	Vector2D m_velocity;
	Vector2D m_acceleration;

	std::string m_textureID;
};

