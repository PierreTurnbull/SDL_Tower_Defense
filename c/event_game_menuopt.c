void  event_game_menuopt(struct s_game *game)
{
  fprintf(stderr, "options\n");
  if      (game->input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    game->input.quit = SDL_TRUE;
}
