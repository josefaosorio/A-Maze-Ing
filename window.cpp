#include <stdio.h>
#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char *argv[])
{
	SDL_Window *window = NULL;
	SDL_Surface *screenSurface = NULL;
	bool quit = false;
	SDL_Event event;
	
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		cout << SDL_GetError() << endl;
	window = SDL_CreateWindow("Maze Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	
	if (window == NULL)
		cout << "Window failed to open" << endl;

	screenSurface = SDL_GetWindowSurface(window);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_RenderDrawLine(renderer, 10,10,10,10);


	//SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
	SDL_UpdateWindowSurface(window);
	SDL_Delay(3000);
	

	

}
