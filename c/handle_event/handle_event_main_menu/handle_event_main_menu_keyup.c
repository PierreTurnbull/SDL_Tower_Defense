void  handle_event_main_menu_keyup_escape(struct s_game *game)
{}

void  handle_event_main_menu_keyup_return(struct s_game *game)
{}

void  handle_event_main_menu_keyup_up(struct s_game *game)
{}

void  handle_event_main_menu_keyup_down(struct s_game *game)
{}

void  handle_event_main_menu_keyup(struct s_game *game)
{
  if      (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    game->input.quit = SDL_TRUE;
  else if (game->input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    handle_event_main_menu_keyup_down(game);
  else if (game->input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    handle_event_main_menu_keyup_up(game);
  else if (game->input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    handle_event_main_menu_keyup_return(game);
}
