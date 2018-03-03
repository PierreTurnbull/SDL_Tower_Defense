#include "../h/includes.h"

int main(int argc, char *argv[])
{
  load_game();
  play_game();
  close_game();
  fprintf(stderr, "MAIN\n");
  fprintf(stderr, "Last SDL error: \"%s\"\n", SDL_GetError());
  fprintf(stderr, "Last IMG error: \"%s\"\n", IMG_GetError());
  fprintf(stderr, "Returning status 0\n\n");
  return 0;
}
