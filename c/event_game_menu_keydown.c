void  event_game_menu_keydown_up(struct s_game *game)
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

void  event_game_menu_keydown_down(struct s_game *game)
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

void  event_game_menu_keydown(struct s_game *game)
{
  if      (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    game->input.quit = SDL_TRUE;
  if      (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    event_game_menu_keydown_down(game);
  if      (game->input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    event_game_menu_keydown_up(game);
}
