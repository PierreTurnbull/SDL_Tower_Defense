void  close_play_warzone(void)
{
  struct s_warzone *warzone = &game.play.warzone;

  SDL_DestroyTexture(warzone->background);
}
