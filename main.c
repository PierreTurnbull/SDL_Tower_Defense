#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>

int main(int argc, char** argv)
{
    SDL_Window      *window;
    SDL_Renderer    *rend;

    if (SDL_Init(SDL_INIT_VIDEO) != 0 || (IMG_Init(IMG_INIT_JPG) & IMG_INIT_JPG) != IMG_INIT_JPG)
    {
        fprintf(stdout,"Failed SDL initialization: \"%s\"\n",SDL_GetError());
        return -1;
    }
    window  = SDL_CreateWindow("COOL WINDOW", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 480, 0);
    rend    = SDL_CreateRenderer(window, -1, 0);
    SDL_RenderClear(rend);
    SDL_Delay(2000);
    SDL_DestroyRenderer(rend);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;




    // TODO: speed test: blit on window every object separately at each frame, or prepare a surface and then blit it, once per frame
}
