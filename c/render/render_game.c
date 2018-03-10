void  render_game(void)
{
  if      (game.screen == SCREEN_MAIN_MENU)
    render_main_menu();
  else if (game.screen == SCREEN_PLAY)
    render_play();
  else {
    if (PRINT_RENDER_GAME)
      fprintf(stderr, "%s RENDER_GAME\nScreen %d not found\n\n", TIME_get_time(), game.screen);
  }
  SDL_RenderCopy(game.rend, game.cursor[game.current_cursor], NULL, &game.input.mouse_pos);
  SDL_RenderPresent(game.rend);
}
