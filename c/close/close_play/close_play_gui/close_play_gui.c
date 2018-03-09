void  close_play_gui(void)
{
  struct s_gui *gui = &game.play.gui;

  SDL_DestroyTexture(gui->background);
  SDL_DestroyTexture(gui->items_background);
  SDL_DestroyTexture(gui->items_category[0]);
  SDL_DestroyTexture(gui->items_category[1]);
  SDL_DestroyTexture(gui->items_category[2]);
  SDL_DestroyTexture(gui->items_category_hover[0]);
  SDL_DestroyTexture(gui->items_category_hover[1]);
  SDL_DestroyTexture(gui->items_category_hover[2]);
  SDL_DestroyTexture(gui->item_tower[0]);
  SDL_DestroyTexture(gui->item_tower[1]);
  SDL_DestroyTexture(gui->item_tower[2]);
  SDL_DestroyTexture(gui->gold_background);
  SDL_DestroyTexture(gui->next_wave_background);
  SDL_DestroyTexture(gui->next_wave_background_hover);
  SDL_DestroyTexture(gui->pause);
  SDL_DestroyTexture(gui->pause_hover);
  SDL_DestroyTexture(gui->options);
  SDL_DestroyTexture(gui->options_hover);
  SDL_DestroyTexture(gui->menu);
  SDL_DestroyTexture(gui->menu_hover);
}
