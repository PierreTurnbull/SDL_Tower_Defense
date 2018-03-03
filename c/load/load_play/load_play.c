void  load_play_warzone(void)
{
  struct s_warzone *warzone = &game.play.warzone;

  warzone->background = IMG_LoadTexture(game.rend, "img/play/warzone_background.jpg");

  LOAD_rect(&warzone->background_pos, 25, 25, 1545, 1030);
}

void  load_play_gui(void)
{
  struct s_gui *gui = &game.play.gui;

  gui->background                 = IMG_LoadTexture(game.rend, "img/play/gui.png");
  gui->items_background           = IMG_LoadTexture(game.rend, "img/play/items_background.png");
  gui->items_category[0]          = IMG_LoadTexture(game.rend, "img/play/items_category1.png");
  gui->items_category[1]          = IMG_LoadTexture(game.rend, "img/play/items_category2.png");
  gui->items_category[2]          = IMG_LoadTexture(game.rend, "img/play/items_category3.png");
  gui->items_category_hover[0]    = IMG_LoadTexture(game.rend, "img/play/items_category_hover1.png");
  gui->items_category_hover[1]    = IMG_LoadTexture(game.rend, "img/play/items_category_hover2.png");
  gui->items_category_hover[2]    = IMG_LoadTexture(game.rend, "img/play/items_category_hover3.png");
  gui->gold_background            = IMG_LoadTexture(game.rend, "img/play/gold_background.png");
  gui->next_wave_background       = IMG_LoadTexture(game.rend, "img/play/next_wave_background.png");
  gui->next_wave_background_hover = IMG_LoadTexture(game.rend, "img/play/next_wave_background_hover.png");
  gui->pause                      = IMG_LoadTexture(game.rend, "img/play/pause.png");
  gui->pause_hover                = IMG_LoadTexture(game.rend, "img/play/pause_hover.png");
  gui->options                    = IMG_LoadTexture(game.rend, "img/play/options.png");
  gui->options_hover              = IMG_LoadTexture(game.rend, "img/play/options_hover.png");
  gui->menu                       = IMG_LoadTexture(game.rend, "img/play/menu.png");
  gui->menu_hover                 = IMG_LoadTexture(game.rend, "img/play/menu_hover.png");

  LOAD_rect(&gui->background_pos, 0, 0, 1920, 1080);
  LOAD_rect(&gui->items_background_pos, 1595, 75, 300, 835);
  LOAD_rect(&gui->items_category_pos[0], 1595, 25, 100, 50);
  LOAD_rect(&gui->items_category_pos[1], 1695, 25, 100, 50);
  LOAD_rect(&gui->items_category_pos[2], 1795, 25, 100, 50);
  LOAD_rect(&gui->gold_background_pos, 1595, 925, 300, 25);
  LOAD_rect(&gui->next_wave_background_pos, 1595, 965, 300, 55);
  LOAD_rect(&gui->pause_pos, 1595, 1030, 90, 25);
  LOAD_rect(&gui->options_pos, 1700, 1030, 90, 25);
  LOAD_rect(&gui->menu_pos, 1805, 1030, 90, 25);

  gui->btn_selected = BTN_SELECTED_NONE;
}

void  load_play(void)
{
  game.play.render     = SDL_CreateTexture(game.rend, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 1920, 1080);
  game.play.background = IMG_LoadTexture(game.rend, "img/play/background.png");

  LOAD_rect(&game.play.render_r, 0, 0, 1920, 1080);

  load_play_gui();
  load_play_warzone();
}
