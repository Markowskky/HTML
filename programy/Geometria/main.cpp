#include <string>
#include <cmath>
#include <iostream>
#include <SDL.h>
#include <unistd.h>


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;

bool init(){
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Geometria", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}

bool close(){
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    renderer = NULL;
    window = NULL;
    SDL_Quit();
    return true;
}

int main( int argc, char* args[])
{
    SDL_Rect rectangle ={50, 50, 300, 200};
    SDL_Rect v={50, 50, 300, 200};
    init();

    SDL_SetRenderDrawColor(renderer, 0xFF,0xFF,0xFF,0xFF);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer,0xFF,0x00,0x00,0xFF);
    SDL_RenderFillRect(renderer, &rectangle);

    SDL_RenderPresent(renderer);

    usleep(1000000);

    close();
    return 0;
}
