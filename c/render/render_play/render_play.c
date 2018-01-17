void  render_play_gui(struct s_game *game)
{
  struct s_gui *gui = &game->play.gui;
  SDL_RenderCopy(game->rend, gui->background, NULL, &gui->background_pos);
  SDL_RenderCopy(game->rend, gui->items_background, NULL, &gui->items_background_pos);
  SDL_RenderCopy(game->rend, gui->gold_background, NULL, &gui->gold_background_pos);
  RENDER_btwn_2_tex(game, gui->items_category[0],     gui->items_category_hover[0],     &gui->items_category_pos[0],    gui->btn_selected == BTN_SELECTED_CAT1);
  RENDER_btwn_2_tex(game, gui->items_category[1],     gui->items_category_hover[1],     &gui->items_category_pos[1],    gui->btn_selected == BTN_SELECTED_CAT2);
  RENDER_btwn_2_tex(game, gui->items_category[2],     gui->items_category_hover[2],     &gui->items_category_pos[2],    gui->btn_selected == BTN_SELECTED_CAT3);
  RENDER_btwn_2_tex(game, gui->next_wave_background,  gui->next_wave_background_hover,  &gui->next_wave_background_pos, gui->btn_selected == BTN_SELECTED_PAUSE);
  RENDER_btwn_2_tex(game, gui->pause,                 gui->pause_hover,                 &gui->pause_pos,                gui->btn_selected == BTN_SELECTED_PAUSE);
  RENDER_btwn_2_tex(game, gui->options,               gui->options_hover,               &gui->options_pos,              gui->btn_selected == BTN_SELECTED_OPTIONS);
  RENDER_btwn_2_tex(game, gui->menu,                  gui->menu_hover,                  &gui->menu_pos,                 gui->btn_selected == BTN_SELECTED_MENU);
}

void  render_play_warzone(struct s_game *game)
{}

void  render_play(struct s_game *game)
{
  SDL_SetRenderTarget(game->rend, game->play.render);
  SDL_SetRenderDrawColor(game->rend, 0, 0, 0, 255);
  SDL_RenderCopy(game->rend, game->play.background, NULL, &game->play.render_r);
  SDL_RenderClear(game->rend);
  render_play_warzone(game);
  render_play_gui(game);
  SDL_SetRenderTarget(game->rend, NULL);
  SDL_RenderCopy(game->rend, game->play.render, NULL, &game->play.render_r);
}
