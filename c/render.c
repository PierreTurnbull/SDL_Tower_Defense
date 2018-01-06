void  render(struct s_game *game)
{
  if (game->screen == SCREEN_GAME_MENU)
    render_game_menu(game);
  SDL_RenderCopy(game->rend, game->cursor[game->current_cursor], NULL, &game->input.mouse_pos);
  SDL_RenderPresent(game->rend);
}
