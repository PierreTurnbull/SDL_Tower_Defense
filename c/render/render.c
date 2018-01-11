void  render(struct s_game *game)
{
  if      (game->screen == SCREEN_MAIN_MENU)
    render_main_menu(game);
  else if (game->screen == SCREEN_PLAY)
    render_play(game);
  else
    fprintf(stderr, "%s RENDER\nScreen %d not found\n\n", get_game_time(), game->screen);
  SDL_RenderCopy(game->rend, game->cursor[game->current_cursor], NULL, &game->input.mouse_pos);
  SDL_RenderPresent(game->rend);
}
