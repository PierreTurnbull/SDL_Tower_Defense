void  handle_event_main_menu(struct s_game *game)
{
  switch (game->event.type)
  {
    case SDL_QUIT:
      game->event.type = SDL_QUIT;
      break;
    case SDL_KEYDOWN:
      handle_event_main_menu_keydown(game);
      break;
    case SDL_KEYUP:
      handle_event_main_menu_keyup(game);
      break;
    case SDL_MOUSEMOTION:
      handle_event_main_menu_mousemotion(game);
      break;
    case SDL_MOUSEBUTTONDOWN:
      handle_event_main_menu_mousebutton(game);
      break;
    default:
      //fprintf(stderr, "%s HANDLE_EVENT_MAIN_MENU\nCouldn't resolve event of type %d\n\n", get_game_time(), game->event.type);
      break;
  }
}
