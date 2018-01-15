void  render_play_gui(struct s_game *game)
{
  SDL_RenderCopy(game->rend, game->play.gui.background, NULL, &game->play.gui.background_pos);
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
