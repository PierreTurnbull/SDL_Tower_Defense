void  load_play(struct s_game *game)
{
  game->play.render                     = SDL_CreateTexture(game->rend, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 1920, 1080);
  game->play.background                 = IMG_LoadTexture(game->rend, "img/play/background.png");

  game->play.gui.background             = IMG_LoadTexture(game->rend, "img/play/gui.png");

  LOAD_rect(&game->play.render_r, 0, 0, 1920, 1080);
  LOAD_rect(&game->play.gui.background_pos, 0, 0, 1920, 1080);
}

void  load_main_menu(struct s_game *game)
{
  game->main_menu.render                = SDL_CreateTexture(game->rend, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 1920, 1080);
  game->main_menu.background            = IMG_LoadTexture(game->rend, "img/main_menu/background.png");
  game->main_menu.choice_btn[0]         = IMG_LoadTexture(game->rend, "img/main_menu/choice_btn1.png");
  game->main_menu.choice_btn[1]         = IMG_LoadTexture(game->rend, "img/main_menu/choice_btn2.png");
  game->main_menu.choice_btn[2]         = IMG_LoadTexture(game->rend, "img/main_menu/choice_btn3.png");
  game->main_menu.choice_btn_hover[0]   = IMG_LoadTexture(game->rend, "img/main_menu/choice_btn1_hover.png");
  game->main_menu.choice_btn_hover[1]   = IMG_LoadTexture(game->rend, "img/main_menu/choice_btn2_hover.png");
  game->main_menu.choice_btn_hover[2]   = IMG_LoadTexture(game->rend, "img/main_menu/choice_btn3_hover.png");

  LOAD_rect(&game->main_menu.render_r, 0, 0, 1920, 1080);
  LOAD_rect(&game->main_menu.choice_btn_r[0], 100, 200, 500, 100);
  LOAD_rect(&game->main_menu.choice_btn_r[1], 100, 350, 500, 100);
  LOAD_rect(&game->main_menu.choice_btn_r[2], 100, 500, 500, 100);

  game->main_menu.choice_selected       = 0;
  game->main_menu.size                  = 3;
}

void  load_input(struct s_game *game)
{
  int i;

  for (i = 0; i < SDL_NUM_SCANCODES; i++)
    game->input.key[i]        = SDL_FALSE;
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
    fprintf(stdout,"Failed SDL initialization: \"%s\"\n", SDL_GetError());
    exit(EXIT_FAILURE);
  }
}

void  load_game(struct s_game *game)
{
  stderr = freopen("stderr", "w+", stderr);
  fprintf(stderr, "%s LOAD_GAME\n", get_game_time());
  load_sdl();
  game->wind      = SDL_CreateWindow("COOL WINDOW", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 480, SDL_WINDOW_FULLSCREEN);
  game->rend      = SDL_CreateRenderer(game->wind, -1, 0);
  load_cursor(game);
  load_input(game);
  load_main_menu(game);
  load_play(game);
  game->screen    = SCREEN_MAIN_MENU;
  game->game_time = SDL_GetTicks();
  fprintf(stderr, "Game loaded correctly\n\n");
}
