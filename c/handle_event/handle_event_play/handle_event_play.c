void  handle_event_play_mousemotion(struct s_game *game)
{}

void  handle_event_play_mousebutton(struct s_game *game)
{}

void  handle_event_play_key(struct s_game *game)
{
  if (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE && game->input.timer[SDL_SCANCODE_ESCAPE] != -1)
  {
    fprintf(stderr, "%s HANDLE_EVENT_PLAY_KEY\nSwitching screen from play to main_menu\n\n", get_game_time());
    game->screen = SCREEN_MAIN_MENU;
    game->input.key[SDL_SCANCODE_ESCAPE] = SDL_FALSE;
    game->input.timer[SDL_SCANCODE_ESCAPE] = -1;
  }
}

void  handle_event_play(struct s_game *game)
{
  // if (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
  //   game->input.quit = SDL_TRUE;
  switch (game->event.type)
  {
    case SDL_QUIT:
      game->event.type = SDL_QUIT;
      break;
    case SDL_KEYDOWN:
      handle_event_play_key(game);
      break;
    case SDL_MOUSEMOTION:
      handle_event_play_mousemotion(game);
      break;
    case SDL_MOUSEBUTTONDOWN:
      handle_event_play_mousebutton(game);
      break;
    default:
      //fprintf(stderr, "%s HANDLE_EVENT_MAIN_MENU\nCouldn't resolve event of type %d\n\n", get_game_time(), game->event.type);
      break;
  }
}
