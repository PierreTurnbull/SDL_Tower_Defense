void  handle_event_play_keydown_escape(struct s_game *game)
{
  if (game->input.repeat[SDL_SCANCODE_ESCAPE] == SDL_FALSE)
    game->screen = SCREEN_MAIN_MENU;
}

void  handle_event_play_keydown_return(struct s_game *game)
{}

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
  else if (game->input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    handle_event_play_keydown_return(game);
  else if (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    handle_event_play_keydown_escape(game);
}
