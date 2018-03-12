SDL_Rect  load_play_gui_text_pos(TTF_Font *font, char *str, SDL_Rect *container, int posx, int posy)
{
  SDL_Rect pos;

  TTF_SizeText(font, str, &pos.w, &pos.h);
  if        (posx == TEXT_LEFT) {
    pos.x = container->x;
  } else if (posx == TEXT_CENTER) {
    pos.x = container->x + (container->w - pos.w) / 2;
  } else if (posx == TEXT_RIGHT) {
    pos.x = container->x + (container->w - pos.w);
  }
  if        (posy == TEXT_TOP) {
    pos.y = container->y;
  } else if (posy == TEXT_CENTER) {
    pos.y = container->y + (container->h - pos.h) / 2;
  } else if (posy == TEXT_BOT) {
    pos.y = container->y + (container->h - pos.h);
  }
  return pos;
}

void  load_play_gui_text(SDL_Texture **tex, TTF_Font *font, char *str)
{
  SDL_Surface *text_surface;
  text_surface  = TTF_RenderText_Blended(font, str, game.play.gui.text_color);
  *tex          = SDL_CreateTextureFromSurface(game.rend, text_surface);
  SDL_FreeSurface(text_surface);
}

void  load_play_gui_str(void)
{
  struct s_gui *gui;
  int i;
  int j;

  gui = &game.play.gui;
  for (i = 0; i < 9; i++) {
    gui->str_list[i] = malloc(16); // allocates 16 bytes of memory to store a string
    for (j = 0; j < 16; j++) {
      gui->str_list[i][j] = 0;
    }
  }
  gui->str_list[0] = "TURRET";
  gui->str_list[1] = "TRAPS";
  gui->str_list[2] = "CHARACTER";
  gui->str_list[3] = "650 GOLD";
  gui->str_list[4] = "NEXT WAVE";
  gui->str_list[5] = "00:00";
  gui->str_list[6] = "PAUSE";
  gui->str_list[7] = "OPTIONS";
  gui->str_list[8] = "MENU";
}

void  load_play_gui(void)
{
  struct s_gui *gui = &game.play.gui;

  load_play_gui_str();

  gui->text_color.r               = 30;
  gui->text_color.g               = 0;
  gui->text_color.b               = 0;
  gui->text_color.a               = 255;

  gui->font_bold_16               = TTF_OpenFont("fonts/oxygen/oxygen_bold.ttf", 16);
  gui->font_bold_20               = TTF_OpenFont("fonts/oxygen/oxygen_bold.ttf", 20);
  gui->font_bold_28               = TTF_OpenFont("fonts/oxygen/oxygen_bold.ttf", 28);

  gui->background                 = IMG_LoadTexture(game.rend, "img/play/gui.png");
  gui->items_background           = IMG_LoadTexture(game.rend, "img/play/item_background.png");
  gui->items_category             = IMG_LoadTexture(game.rend, "img/play/item_category.png");
  gui->items_category_selected    = IMG_LoadTexture(game.rend, "img/play/item_category_selected.png");
  gui->item_tower[0]              = IMG_LoadTexture(game.rend, "img/play/towers/tower1.png");
  gui->item_tower[1]              = IMG_LoadTexture(game.rend, "img/play/towers/tower2.png");
  gui->item_tower[2]              = IMG_LoadTexture(game.rend, "img/play/towers/tower3.png");
  gui->gold_background            = IMG_LoadTexture(game.rend, "img/play/gold_background.png");
  gui->next_wave_background       = IMG_LoadTexture(game.rend, "img/play/next_wave_background.png");
  gui->next_wave_background_hover = IMG_LoadTexture(game.rend, "img/play/next_wave_background_hover.png");
  gui->menu_background            = IMG_LoadTexture(game.rend, "img/play/menu_background.png");
  gui->menu_background_hover      = IMG_LoadTexture(game.rend, "img/play/menu_background_hover.png");

  load_play_gui_text(&gui->items_category_text[0], gui->font_bold_16, gui->str_list[0]);
  load_play_gui_text(&gui->items_category_text[1], gui->font_bold_16, gui->str_list[1]);
  load_play_gui_text(&gui->items_category_text[2], gui->font_bold_16, gui->str_list[2]);
  load_play_gui_text(&gui->gold_text, gui->font_bold_16, gui->str_list[3]);
  load_play_gui_text(&gui->next_wave_text, gui->font_bold_28, gui->str_list[4]);
  load_play_gui_text(&gui->next_wave_time_text, gui->font_bold_20, gui->str_list[5]);
  load_play_gui_text(&gui->menu_text[0], gui->font_bold_16, gui->str_list[6]);
  load_play_gui_text(&gui->menu_text[1], gui->font_bold_16, gui->str_list[7]);
  load_play_gui_text(&gui->menu_text[2], gui->font_bold_16, gui->str_list[8]);

  LOAD_rect(&gui->background_pos, 0, 0, 1920, 1080);
  LOAD_rect(&gui->items_background_pos, 1595, 75, 300, 835);
  LOAD_rect(&gui->items_category_pos[0], 1595, 25, 100, 50);
  LOAD_rect(&gui->items_category_pos[1], 1695, 25, 100, 50);
  LOAD_rect(&gui->items_category_pos[2], 1795, 25, 100, 50);
  LOAD_rect(&gui->item_tower_pos[0], 1630, 125, TOWER_1_SIZE, TOWER_1_SIZE);
  LOAD_rect(&gui->item_tower_pos[1], 1630, 250, TOWER_2_SIZE, TOWER_2_SIZE);
  LOAD_rect(&gui->item_tower_pos[2], 1630, 375, TOWER_3_SIZE, TOWER_3_SIZE);
  LOAD_rect(&gui->gold_background_pos, 1595, 925, 300, 25);
  LOAD_rect(&gui->next_wave_background_pos, 1595, 965, 300, 55);
  LOAD_rect(&gui->pause_pos, 1595, 1030, 90, 25);
  LOAD_rect(&gui->options_pos, 1700, 1030, 90, 25);
  LOAD_rect(&gui->menu_pos, 1805, 1030, 90, 25);

  gui->items_category_text_pos[0] = load_play_gui_text_pos(gui->font_bold_16, gui->str_list[0], &gui->items_category_pos[0], TEXT_CENTER, TEXT_CENTER);
  gui->items_category_text_pos[1] = load_play_gui_text_pos(gui->font_bold_16, gui->str_list[1], &gui->items_category_pos[1], TEXT_CENTER, TEXT_CENTER);
  gui->items_category_text_pos[2] = load_play_gui_text_pos(gui->font_bold_16, gui->str_list[2], &gui->items_category_pos[2], TEXT_CENTER, TEXT_CENTER);
  gui->gold_text_pos              = load_play_gui_text_pos(gui->font_bold_16, gui->str_list[3], &gui->gold_background_pos, TEXT_CENTER, TEXT_CENTER);
  gui->next_wave_text_pos         = load_play_gui_text_pos(gui->font_bold_28, gui->str_list[4], &gui->next_wave_background_pos, TEXT_CENTER, TEXT_TOP);
  gui->next_wave_time_text_pos    = load_play_gui_text_pos(gui->font_bold_20, gui->str_list[5], &gui->next_wave_background_pos, TEXT_CENTER, TEXT_BOT);
  gui->menu_text_pos[0]           = load_play_gui_text_pos(gui->font_bold_16, gui->str_list[6], &gui->pause_pos, TEXT_CENTER, TEXT_CENTER);
  gui->menu_text_pos[1]           = load_play_gui_text_pos(gui->font_bold_16, gui->str_list[7], &gui->options_pos, TEXT_CENTER, TEXT_CENTER);
  gui->menu_text_pos[2]           = load_play_gui_text_pos(gui->font_bold_16, gui->str_list[8], &gui->menu_pos, TEXT_CENTER, TEXT_CENTER);

  gui->btn_selected = BTN_SELECTED_CAT1;
}
