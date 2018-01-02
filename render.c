void  render(struct s_game *game, int which)
{
  if (which == 0)
    render_game_menu(game);
  SDL_RenderPresent(game->rend);
}
