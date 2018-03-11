void  load_play_gui(void)
{
  struct s_gui *gui = &game.play.gui;

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

  gui->btn_selected = BTN_SELECTED_CAT1;
}
