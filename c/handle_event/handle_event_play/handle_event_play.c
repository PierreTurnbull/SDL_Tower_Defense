void  handle_event_play(void)
{
  // if (game.input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
  //   game.input.quit = SDL_TRUE;
  switch (game.event.type)
  {
    case SDL_QUIT:
      game.event.type = SDL_QUIT;
      break;
    case SDL_KEYDOWN:
      handle_event_play_keydown();
      break;
    case SDL_KEYUP:
      handle_event_play_keyup();
      break;
    case SDL_MOUSEMOTION:
      handle_event_play_mousemotion();
      break;
    case SDL_MOUSEBUTTONDOWN:
      handle_event_play_mousebutton();
      break;
    default:
      if (PRINT_HANDLE_EVENT_PLAY)
        fprintf(stderr, "%s HANDLE_EVENT_PLAY\nCouldn't resolve event of type %d\n\n", TIME_get_time(), game.event.type);
      break;
  }
}
