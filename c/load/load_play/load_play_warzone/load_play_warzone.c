void  load_play_warzone(void)
{
  struct s_warzone *warzone = &game.play.warzone;

  warzone->background = IMG_LoadTexture(game.rend, "img/play/warzone_background.jpg");
  LOAD_rect(&warzone->background_pos, 25, 25, 1545, 1030);
}
