void  render_play(struct s_game *game)
{
  SDL_SetRenderTarget(game->rend, game->play.render);
  SDL_SetRenderDrawColor(game->rend, 0, 0, 0, 255);
  SDL_RenderClear(game->rend);
  SDL_RenderCopy(game->rend, game->play.background, NULL, &game->play.render_r);
  SDL_SetRenderTarget(game->rend, NULL);
  SDL_RenderCopy(game->rend, game->play.render, NULL, &game->play.render_r);
}
