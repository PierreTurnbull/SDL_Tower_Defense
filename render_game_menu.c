void  render_game_menu(struct s_game *game)
{
  SDL_SetRenderTarget(game->rend, game->game_menu->render);
  SDL_SetRenderDrawColor(game->rend, 0, 0, 0, 255);
  SDL_RenderClear(game->rend);
  SDL_RenderCopy(game->rend, game->game_menu->background, NULL, &game->game_menu->render_r);
  SDL_RenderCopy(game->rend, game->game_menu->choice_btn[0], NULL, &game->game_menu->choice_btn_r[0]);
  SDL_RenderCopy(game->rend, game->game_menu->choice_btn[1], NULL, &game->game_menu->choice_btn_r[1]);
  SDL_RenderCopy(game->rend, game->game_menu->choice_btn[2], NULL, &game->game_menu->choice_btn_r[2]);
  SDL_SetRenderTarget(game->rend, NULL);
  SDL_RenderCopy(game->rend, game->game_menu->render, NULL, &game->game_menu->render_r);
}
