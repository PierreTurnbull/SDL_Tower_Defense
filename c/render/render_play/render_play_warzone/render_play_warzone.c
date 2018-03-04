void  render_play_warzone(void)
{
  struct s_warzone *warzone = &game.play.warzone;

  SDL_RenderCopy(game.rend, warzone->background, NULL, &warzone->background_pos);
  render_play_warzone_path();
}
