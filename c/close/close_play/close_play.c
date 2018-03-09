void  close_play(void)
{
  close_play_warzone();
  close_play_gui();
  SDL_DestroyTexture(game.play.background);
  SDL_DestroyTexture(game.play.render);
}
