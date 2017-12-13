#include "includes.h"

int main(int argc, char *argv[])
{
  struct s_game game;

  load_game(&game);
  play_game(&game);
  close_game(&game);
  fprintf(stderr, "MAIN\nReturning status 0\n");
  return 0;
}
