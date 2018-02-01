void  handle_event(struct s_game *game)
{
  if      (game->screen == SCREEN_MAIN_MENU)
    handle_event_main_menu(game);
  else if (game->screen == SCREEN_MAIN_OPTIONS)
    handle_event_main_options(game);
  else if (game->screen == SCREEN_PLAY)
    handle_event_play(game);
  else
  {
    fprintf(stderr, "%s HANDLE_EVENT\nFATAL ERROR: screen of value %d not found.\n\n", TIME_get_time(), game->screen);
    game->input.quit = SDL_TRUE;
  }
}
