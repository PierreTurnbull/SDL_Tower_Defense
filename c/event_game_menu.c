void  event_game_menu_keydown(struct s_game *game)
{
  if      (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    game->input.quit = SDL_TRUE;
  if      (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE && game->input.timer[SDL_SCANCODE_DOWN] == 0)
  {
    game->input.timer[SDL_SCANCODE_DOWN] = SDL_GetTicks() + 200;
    MENU_change_choice(&game->game_menu.choice_selected, MENU_DOWN, game->game_menu.size);
  }
  else if (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE && game->input.timer[SDL_SCANCODE_DOWN] + 80 < SDL_GetTicks())
  {
    game->input.timer[SDL_SCANCODE_DOWN] = SDL_GetTicks();
    MENU_change_choice(&game->game_menu.choice_selected, MENU_DOWN, game->game_menu.size);
  }
  if      (game->input.key[SDL_SCANCODE_UP] == SDL_TRUE && game->input.timer[SDL_SCANCODE_UP] == 0)
  {
    game->input.timer[SDL_SCANCODE_UP] = SDL_GetTicks() + 200;
    MENU_change_choice(&game->game_menu.choice_selected, MENU_UP, game->game_menu.size);
  }
  else if (game->input.key[SDL_SCANCODE_UP] == SDL_TRUE && game->input.timer[SDL_SCANCODE_UP] + 80 < SDL_GetTicks())
  {
    game->input.timer[SDL_SCANCODE_UP] = SDL_GetTicks();
    MENU_change_choice(&game->game_menu.choice_selected, MENU_UP, game->game_menu.size);
  }
}

void  event_game_menu_mousebuttondown(struct s_game *game)
{}

void  event_game_menu_mousemotion(struct s_game *game)
{}

void  event_game_menu(struct s_game *game)
{
  switch (game->event.type)
  {
    case SDL_QUIT:
      game->event.type = SDL_QUIT;
      break;
    case SDL_KEYDOWN:
      event_game_menu_keydown(game);
      break;
    case SDL_MOUSEBUTTONDOWN:
      event_game_menu_mousebuttondown(game);
      break;
    case SDL_MOUSEMOTION:
      event_game_menu_mousemotion(game);
      break;
    default:
      break;
  }
}
