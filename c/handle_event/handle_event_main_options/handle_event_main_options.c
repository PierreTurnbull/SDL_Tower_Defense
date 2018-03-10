void  handle_event_main_options(void)
{
  if (PRINT_HANDLE_EVENT_MAIN_OPTIONS)
    fprintf(stderr, "options\n");
  if      (game.input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    game.input.quit = SDL_TRUE;
}
