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
