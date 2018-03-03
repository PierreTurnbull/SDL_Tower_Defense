void  handle_input(void)
{
  if (game.event.type == SDL_KEYDOWN)
  {
    if (game.input.key[game.event.key.keysym.scancode] == SDL_TRUE)
      game.input.repeat[game.event.key.keysym.scancode] = SDL_TRUE;
    game.input.key[game.event.key.keysym.scancode] = SDL_TRUE;
  }
  else if (game.event.type == SDL_KEYUP)
  {
    game.input.key[game.event.key.keysym.scancode] = SDL_FALSE;
    game.input.timer[game.event.key.keysym.scancode] = 0;
    game.input.repeat[game.event.key.keysym.scancode] = SDL_FALSE;
  }
  else if (game.event.type == SDL_MOUSEMOTION)
    SDL_GetMouseState(&game.input.mouse_pos.x, &game.input.mouse_pos.y);
  else if (game.event.type == SDL_MOUSEBUTTONDOWN)
    game.input.mouse_btn[game.event.button.button - 1] = SDL_TRUE;
  else if (game.event.type == SDL_MOUSEBUTTONUP)
    game.input.mouse_btn[game.event.button.button - 1] = SDL_FALSE;
}
