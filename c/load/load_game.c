void  load_input(struct s_game *game)
{
  int i;

  for (i = 0; i < SDL_NUM_SCANCODES; i++)
    game->input.key[i]        = SDL_FALSE;
  for (i = 0; i < SDL_NUM_SCANCODES; i++)
    game->input.repeat[i]     = SDL_FALSE;
  for (i = 0; i < SDL_NUM_SCANCODES; i++)
    game->input.timer[i]      = 0;
  for (i = 0; i < 3; i++)
    game->input.mouse_btn[i]  = SDL_FALSE;
  SDL_GetMouseState(&game->input.mouse_pos.x, &game->input.mouse_pos.y);
  game->input.quit            = SDL_FALSE;
}

void  load_cursor(struct s_game *game)
{
  SDL_ShowCursor(0);
  game->cursor[0]                       = IMG_LoadTexture(game->rend, "img/cursor/normal.png");
  game->cursor[1]                       = IMG_LoadTexture(game->rend, "img/cursor/pointer.png");
  game->cursor[2]                       = IMG_LoadTexture(game->rend, "img/cursor/pointer_drag.png");
  game->current_cursor                  = 0;
  SDL_GetMouseState(&game->input.mouse_pos.x, &game->input.mouse_pos.y);
  game->input.mouse_pos.h               = 22;
  game->input.mouse_pos.w               = 16;
}

void  load_sdl(void)
{
  fprintf(stderr, "Loading SDL and SDL_Image\n");
  if (SDL_Init(SDL_INIT_VIDEO) != 0 || (IMG_Init(IMG_INIT_JPG) & IMG_INIT_JPG) != IMG_INIT_JPG)
  {
    fprintf(stderr,"Failed SDL initialization: \"%s\"\n", SDL_GetError());
    exit(EXIT_FAILURE);
  }
}

void  load_window(struct s_game *game)
{
  game->wind      = SDL_CreateWindow("TODO: give me a name", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 480, SDL_WINDOW_FULLSCREEN);
  game->rend      = SDL_CreateRenderer(game->wind, -1, 0);
  game->screen    = SCREEN_MAIN_MENU;
  game->game_time = SDL_GetTicks();
}

void  load_game(struct s_game *game)
{
  stderr = freopen("stderr", "w+", stderr);
  fprintf(stderr, "%s LOAD_GAME\n", TIME_get_time());
  load_sdl();
  load_window(game);
  load_cursor(game);
  load_input(game);
  load_main_menu(game);
  load_play(game);
  fprintf(stderr, "Game loaded correctly\n\n");
}
