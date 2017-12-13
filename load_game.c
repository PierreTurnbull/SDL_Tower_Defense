void  load_sdl(struct s_game *game)
{
  fprintf(stderr, "Loading SDL and SDL_Image\n");
  if (SDL_Init(SDL_INIT_VIDEO) != 0 || (IMG_Init(IMG_INIT_JPG) & IMG_INIT_JPG) != IMG_INIT_JPG)
  {
    fprintf(stdout,"MAIN\nFailed SDL initialization: \"%s\"\n", SDL_GetError());
    exit(EXIT_FAILURE);
  }
}

void  load_game(struct s_game *game)
{
  fprintf(stderr, "%s LOAD_GAME\n", get_game_time());
  load_sdl(game);
  game->wind    = SDL_CreateWindow("COOL WINDOW", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 480, 0);
  game->rend    = SDL_CreateRenderer(game->wind, -1, 0);
  fprintf(stderr, "Game loaded correctly\n\n");
}
