void  handle_event_play_keydown_escape(struct s_game *game)
{
  if (game->input.repeat[SDL_SCANCODE_ESCAPE] == SDL_FALSE) {
    game->screen = SCREEN_MAIN_MENU;
    close_path(game);
  }
}

void  handle_event_play_keydown_return(struct s_game *game)
{}

void  handle_event_play_keydown_w(struct s_game *game)
{
  close_target_all(game);
}

void  handle_event_play_keydown_q(struct s_game *game)
{
  create_target(game);
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
  else if (game->input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    handle_event_play_keydown_return(game);
  else if (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    handle_event_play_keydown_escape(game);
}
