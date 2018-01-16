void  close_play_gui(struct s_game *game)
{
  SDL_DestroyTexture(game->play.gui.background);
  //TODO
}

void  close_play(struct s_game *game)
{
  close_play_gui(game);
  SDL_DestroyTexture(game->play.background);
  SDL_DestroyTexture(game->play.render);
}
