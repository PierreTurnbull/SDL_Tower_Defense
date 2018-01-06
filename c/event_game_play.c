void  event_game_play(struct s_game *game)
{
  fprintf(stderr, "play\n");
  if      (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    game->input.quit = SDL_TRUE;
}
