void  close_play_gui(void)
{
  struct s_gui *gui = &game.play.gui;
  
  TTF_CloseFont(gui->font_bold_16);
  TTF_CloseFont(gui->font_bold_20);
  TTF_CloseFont(gui->font_bold_28);

  SDL_DestroyTexture(gui->background);
  SDL_DestroyTexture(gui->items_background);
  SDL_DestroyTexture(gui->items_category);
  SDL_DestroyTexture(gui->items_category_selected);
  SDL_DestroyTexture(gui->item_tower[0]);
  SDL_DestroyTexture(gui->item_tower[1]);
  SDL_DestroyTexture(gui->item_tower[2]);
  SDL_DestroyTexture(gui->gold_background);
  SDL_DestroyTexture(gui->next_wave_background);
  SDL_DestroyTexture(gui->next_wave_background_hover);
  SDL_DestroyTexture(gui->menu_background);
  SDL_DestroyTexture(gui->menu_background_hover);

  SDL_DestroyTexture(gui->items_category_text[0]);
  SDL_DestroyTexture(gui->items_category_text[1]);
  SDL_DestroyTexture(gui->items_category_text[2]);
  SDL_DestroyTexture(gui->gold_text);
  SDL_DestroyTexture(gui->next_wave_text);
  SDL_DestroyTexture(gui->next_wave_time_text);
  SDL_DestroyTexture(gui->menu_text[0]);
  SDL_DestroyTexture(gui->menu_text[1]);
  SDL_DestroyTexture(gui->menu_text[2]);
}
