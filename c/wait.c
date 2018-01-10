void  wait(struct s_game *game, int ms)
{
  SDL_Delay(ms - (SDL_GetTicks() - game->game_time));
  fprintf(stderr, "Time since last loop: %d\n", SDL_GetTicks() - game->game_time);
  game->game_time = SDL_GetTicks();
}
