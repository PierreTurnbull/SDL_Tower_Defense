#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main(int argc, char** argv)
{
    SDL_Window      *window;
    SDL_Renderer    *renderer;
    if (SDL_Init(SDL_INIT_VIDEO) != 0 )
    {
        fprintf(stdout,"Failed SDL initialization: \"%s\"\n",SDL_GetError());
        return -1;
    }
    SDL_Quit();
    return 0;
}
