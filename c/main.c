#include "../h/includes.h"

int main(int argc, char *argv[])
{
  load_game();
  play_game();
  close_game();
  if (PRINT_MAIN) {
    fprintf(stderr, "MAIN\n");
    fprintf(stderr, "Last SDL error: \"%s\"\n", SDL_GetError());
    fprintf(stderr, "Last IMG error: \"%s\"\n", IMG_GetError());
    fprintf(stderr, "Last TTF error: \"%s\"\n", TTF_GetError());
    fprintf(stderr, "Returning status 0\n\n");
  }
  return 0;
}
