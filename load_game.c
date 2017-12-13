void  load_game_menu(struct s_game *game)
{
  game->game_menu = malloc(sizeof(*game->game_menu));
  game->game_menu->render = SDL_CreateTexture(game->rend, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 1920, 1080);
  game->game_menu->background = IMG_LoadTexture(game->rend, "img/game_menu/background.jpg");
  game->game_menu->choice_btn[0] = IMG_LoadTexture(game->rend, "img/game_menu/choice_btn1.jpg");
  game->game_menu->choice_btn[1] = IMG_LoadTexture(game->rend, "img/game_menu/choice_btn2.jpg");
  game->game_menu->choice_btn[2] = IMG_LoadTexture(game->rend, "img/game_menu/choice_btn3.jpg");
  game->game_menu->render_r.x = 0;
  game->game_menu->render_r.y = 0;
  game->game_menu->render_r.w = 1920;
  game->game_menu->render_r.h = 1080;

  game->game_menu->choice_btn_r[0].x = 100;
  game->game_menu->choice_btn_r[0].y = 200;
  game->game_menu->choice_btn_r[0].w = 500;
  game->game_menu->choice_btn_r[0].h = 100;

  game->game_menu->choice_btn_r[1].x = 100;
  game->game_menu->choice_btn_r[1].y = 350;
  game->game_menu->choice_btn_r[1].w = 500;
  game->game_menu->choice_btn_r[1].h = 100;

  game->game_menu->choice_btn_r[2].x = 100;
  game->game_menu->choice_btn_r[2].y = 500;
  game->game_menu->choice_btn_r[2].w = 500;
  game->game_menu->choice_btn_r[2].h = 100;
}

void  load_sdl()
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
  load_sdl();
  game->wind    = SDL_CreateWindow("COOL WINDOW", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 480, SDL_WINDOW_FULLSCREEN);
  game->rend    = SDL_CreateRenderer(game->wind, -1, 0);
  load_game_menu(game);
  fprintf(stderr, "Game loaded correctly\n\n");
}
