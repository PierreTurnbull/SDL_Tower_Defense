void  render(struct s_game *game)
{
  if (game->screen == SCREEN_GAME_MENU)
    render_game_menu(game);
  SDL_RenderPresent(game->rend);
}
