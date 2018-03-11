void  render_play_gui_text(void)
{
  SDL_RenderCopy(game.rend, game.play.gui.gold_text_tex, NULL, &game.play.gui.gold_text_pos);
}

void  render_play_gui(void)
{
  int i;
  struct s_gui *gui = &game.play.gui;

  SDL_RenderCopy(game.rend, gui->background, NULL, &gui->background_pos);
  SDL_RenderCopy(game.rend, gui->items_background, NULL, &gui->items_background_pos);
  SDL_RenderCopy(game.rend, gui->gold_background, NULL, &gui->gold_background_pos);
  for (i = 0; i < TOWER_TYPES; i++) {
    RENDER_btwn_2_tex(NULL,                     gui->item_tower[i],               &gui->item_tower_pos[i],        gui->btn_selected == BTN_SELECTED_CAT1);
  }
  RENDER_btwn_2_tex(gui->items_category,        gui->items_category_selected,     &gui->items_category_pos[0],    1);
  RENDER_btwn_2_tex(gui->items_category,        gui->items_category_selected,     &gui->items_category_pos[1],    0);
  RENDER_btwn_2_tex(gui->items_category,        gui->items_category_selected,     &gui->items_category_pos[2],    0);
  RENDER_btwn_2_tex(gui->next_wave_background,  gui->next_wave_background_hover,  &gui->next_wave_background_pos, 0);
  RENDER_btwn_2_tex(gui->menu_background,       gui->menu_background_hover,       &gui->pause_pos,                0);
  RENDER_btwn_2_tex(gui->menu_background,       gui->menu_background_hover,       &gui->options_pos,              0);
  RENDER_btwn_2_tex(gui->menu_background,       gui->menu_background_hover,       &gui->menu_pos,                 0);
  render_play_gui_text();
}
