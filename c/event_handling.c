void  event_handling(struct s_game *game)
{
  if      (game->screen == SCREEN_GAME_MENU)
    event_game_menu(game);
  else if (game->screen == SCREEN_GAME_MENU_OPTIONS)
    event_game_menuopt(game);
  else if (game->screen == SCREEN_GAME_PLAY)
    event_game_play(game);
  else
  {
    fprintf(stderr, "%s EVENT_HANDLING\nFATAL ERROR: screen of value %d not found.\n\n", get_game_time(), game->screen);
    game->input.quit = SDL_TRUE;
  }
}
