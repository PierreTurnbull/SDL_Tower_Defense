void  handle_input(void)
{
  if (game.event.type == SDL_KEYDOWN) {
    if (game.input.key[game.event.key.keysym.scancode] == SDL_TRUE)
      game.input.key_repeat[game.event.key.keysym.scancode] = SDL_TRUE;
    game.input.key[game.event.key.keysym.scancode] = SDL_TRUE;
  }
  else if (game.event.type == SDL_KEYUP) {
    game.input.key[game.event.key.keysym.scancode] = SDL_FALSE;
    game.input.key_timer[game.event.key.keysym.scancode] = 0;
    game.input.key_repeat[game.event.key.keysym.scancode] = SDL_FALSE;
  }
  else if (game.event.type == SDL_MOUSEBUTTONDOWN) {
    if (game.input.mouse_btn[game.event.button.button - 1] == SDL_TRUE)
      game.input.mouse_btn_repeat[game.event.button.button - 1] = SDL_TRUE;
    game.input.mouse_btn[game.event.button.button - 1] = SDL_TRUE;
  }
  else if (game.event.type == SDL_MOUSEBUTTONUP) {
    game.input.mouse_btn[game.event.button.button - 1] = SDL_FALSE;
    game.input.mouse_btn_timer[game.event.button.button - 1] = 0;
    game.input.mouse_btn_repeat[game.event.button.button - 1] = SDL_FALSE;
  }
  else if (game.event.type == SDL_MOUSEMOTION)
    SDL_GetMouseState(&game.input.mouse_pos.x, &game.input.mouse_pos.y);
}
