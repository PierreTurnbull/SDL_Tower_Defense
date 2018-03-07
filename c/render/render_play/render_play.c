void  render_play(void)
{
  SDL_SetRenderTarget(game.rend, game.play.render);
  SDL_SetRenderDrawColor(game.rend, 0, 0, 0, 255);
  SDL_RenderCopy(game.rend, game.play.background, NULL, &game.play.render_r);
  SDL_RenderClear(game.rend);
  render_play_warzone();
  render_play_gui();
  render_play_targets();
  render_play_towers();
  render_play_proj_all();
  SDL_SetRenderTarget(game.rend, NULL);
  SDL_RenderCopy(game.rend, game.play.render, NULL, &game.play.render_r);
}
