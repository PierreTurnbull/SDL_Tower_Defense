void  handle_input(struct s_game *game)
{
  if (game->event.type == SDL_KEYDOWN)
  {
    if (game->event.key.keysym.sym != SDLK_ESCAPE)
      game->input.key[game->event.key.keysym.scancode] = SDL_TRUE;
    else if (game->event.key.keysym.sym == SDLK_ESCAPE && game->event.key.repeat == 0)
      game->input.key[game->event.key.keysym.scancode] = SDL_TRUE;
  }
  else if (game->event.type == SDL_KEYUP)
  {
    game->input.key[game->event.key.keysym.scancode] = SDL_FALSE;
    game->input.timer[game->event.key.keysym.scancode] = 0;
  }
  else if (game->event.type == SDL_MOUSEMOTION)
    SDL_GetMouseState(&game->input.mouse_pos.x, &game->input.mouse_pos.y);
  else if (game->event.type == SDL_MOUSEBUTTONDOWN)
    game->input.mouse_btn[game->event.button.button - 1] = SDL_TRUE;
  else if (game->event.type == SDL_MOUSEBUTTONUP)
    game->input.mouse_btn[game->event.button.button - 1] = SDL_FALSE;
}
