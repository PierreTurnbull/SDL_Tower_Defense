void  handle_event_play_keydown_escape(struct s_game *game)
{
  if (game->input.repeat[SDL_SCANCODE_ESCAPE] == SDL_FALSE) {
    close_path(game);
    close_target_all(game);
    game->screen = SCREEN_MAIN_MENU;
  }
}

void  handle_event_play_keydown_return(struct s_game *game)
{}

void  handle_event_play_keydown_space(struct s_game *game)
{
  close_target_all(game);
}

void  handle_event_play_keydown_e(struct s_game *game)
{
  create_target(game, TARGET_TYPE_3);
}

void  handle_event_play_keydown_w(struct s_game *game)
{
  create_target(game, TARGET_TYPE_2);
}

void  handle_event_play_keydown_q(struct s_game *game)
{
  create_target(game, TARGET_TYPE_1);
}

void  handle_event_play_keydown_up(struct s_game *game)
{}

void  handle_event_play_keydown_down(struct s_game *game)
{}

void  handle_event_play_keydown(struct s_game *game)
{
  if      (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    handle_event_play_keydown_down(game);
  else if (game->input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    handle_event_play_keydown_up(game);
  else if (game->input.key[SDL_SCANCODE_Q] == SDL_TRUE)
    handle_event_play_keydown_q(game);
  else if (game->input.key[SDL_SCANCODE_W] == SDL_TRUE)
    handle_event_play_keydown_w(game);
  else if (game->input.key[SDL_SCANCODE_E] == SDL_TRUE)
    handle_event_play_keydown_e(game);
  else if (game->input.key[SDL_SCANCODE_SPACE] == SDL_TRUE)
    handle_event_play_keydown_space(game);
  else if (game->input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    handle_event_play_keydown_return(game);
  else if (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    handle_event_play_keydown_escape(game);
}
