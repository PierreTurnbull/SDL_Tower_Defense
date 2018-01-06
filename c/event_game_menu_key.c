void  event_game_menu_key_return(struct s_game *game)
{
  if (game->game_menu.choice_selected == GAME_MENU_PLAY)
    game->screen = SCREEN_GAME_PLAY;
  if (game->game_menu.choice_selected == GAME_MENU_OPTIONS)
    game->screen = SCREEN_GAME_MENU_OPTIONS;
  if (game->game_menu.choice_selected == GAME_MENU_QUIT)
    game->input.quit = SDL_TRUE;
}

void  event_game_menu_key_up(struct s_game *game)
{
  if (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    return;
  else if (game->input.key[SDL_SCANCODE_UP] == SDL_TRUE && game->input.timer[SDL_SCANCODE_UP] == 0)
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

void  event_game_menu_key_down(struct s_game *game)
{
  if (game->input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    return;
  else if (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE && game->input.timer[SDL_SCANCODE_DOWN] == 0)
  {
    game->input.timer[SDL_SCANCODE_DOWN] = SDL_GetTicks() + 200;
    MENU_change_choice(&game->game_menu.choice_selected, MENU_DOWN, game->game_menu.size);
  }
  else if (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE && game->input.timer[SDL_SCANCODE_DOWN] + 80 < SDL_GetTicks())
  {
    game->input.timer[SDL_SCANCODE_DOWN] = SDL_GetTicks();
    MENU_change_choice(&game->game_menu.choice_selected, MENU_DOWN, game->game_menu.size);
  }
}

void  event_game_menu_key(struct s_game *game)
{
  if      (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    game->input.quit = SDL_TRUE;
  if      (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    event_game_menu_key_down(game);
  if      (game->input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    event_game_menu_key_up(game);
  if      (game->input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    event_game_menu_key_return(game);
}
