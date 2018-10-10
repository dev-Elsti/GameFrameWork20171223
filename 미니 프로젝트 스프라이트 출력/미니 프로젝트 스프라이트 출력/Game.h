#pragma once
#include<SDL.h>
#include<iostream>
#include<SDL_image.h>


class Game
{
public:
	Game() {};
	~Game() {};
	SDL_Window* g_pWindow = 0;
	SDL_Renderer* g_pRenderer = 0;
	SDL_Texture*m_pTexture;
	SDL_Rect m_sourceRectangle;
	SDL_Rect m_destinationRectangle;
	bool init(const char*title, int xpos, int ypos, int width,
		int height, bool fullscreen);

	void render();
	void update();
	void handleEvents();
	void clean();
	bool running() { return m_bRunning; }
private:
	SDL_Window * m_pWindow;
	SDL_Renderer*m_pRenderer;
	int x = 0, y = 0;

	bool m_bRunning = true;
};