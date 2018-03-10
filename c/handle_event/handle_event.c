void  handle_event(void)
{
  if      (game.screen == SCREEN_MAIN_MENU)
    handle_event_main_menu();
  else if (game.screen == SCREEN_MAIN_OPTIONS)
    handle_event_main_options();
  else if (game.screen == SCREEN_PLAY)
    handle_event_play();
  else
  {
    if (PRINT_HANDLE_EVENT)
      fprintf(stderr, "%s HANDLE_EVENT\nFATAL ERROR: screen of value %d not found.\n\n", TIME_get_time(), game.screen);
    game.input.quit = SDL_TRUE;
  }
}
