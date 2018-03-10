void  handle_event_main_menu(void)
{
  switch (game.event.type)
  {
    case SDL_QUIT:
      game.event.type = SDL_QUIT;
      break;
    case SDL_KEYDOWN:
      handle_event_main_menu_keydown();
      break;
    case SDL_KEYUP:
      handle_event_main_menu_keyup();
      break;
    case SDL_MOUSEMOTION:
      handle_event_main_menu_mousemotion();
      break;
    case SDL_MOUSEBUTTONDOWN:
      handle_event_main_menu_mousebutton();
      break;
    default:
      if (PRINT_HANDLE_EVENT_MAIN_MENU)
        fprintf(stderr, "%s HANDLE_EVENT_MAIN_MENU\nCouldn't resolve event of type %d\n\n", TIME_get_time(), game.event.type);
      break;
  }
}
