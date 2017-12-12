#include "includes.h"

int main(int argc, char *argv[])
{
  struct s_game game;

  load_game(&game);
  SDL_Delay(1000);
  close_game(&game);
  return 0;
}
