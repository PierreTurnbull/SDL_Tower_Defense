#include "../h/includes.h"

int main(int argc, char *argv[])
{
  struct s_game game;
stderr = freopen("stderr", "w+", stderr);
  load_game(&game);
  play_game(&game);
  close_game(&game);
  fprintf(stderr, "MAIN\nReturning status 0\nLast SDL error: \"%s\"\n\n", SDL_GetError());
  return 0;
}
