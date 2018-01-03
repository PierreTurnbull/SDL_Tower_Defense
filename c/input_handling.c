void  input_handling(struct s_game *game)
{
  if      (game->event.type == SDL_KEYDOWN)
  {
    game->input.key[game->event.key.keysym.scancode] = SDL_TRUE;
    fprintf(stderr, "%s INPUT_HANDLING\nkey pressed: %d\n\n", get_game_time(), game->event.key.keysym.scancode);
  }
  else if (game->event.type == SDL_KEYUP)
  {
    game->input.key[game->event.key.keysym.scancode] = SDL_FALSE;
    game->input.timer[game->event.key.keysym.scancode] = 0;
  }
}
