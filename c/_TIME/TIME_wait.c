void  TIME_wait(int *time, int ms)
{
  // int casting is needed here since SDL_GetTicks() returns an unsigned value
  // that would affect the comparison and give weird results like -3 >= 0 == 1
  if (ms - ((int)SDL_GetTicks() - *time) >= 0)
  {
    SDL_Delay(ms - ((int)SDL_GetTicks() - *time));
  }
  //fprintf(stderr, "Time since last loop: %d\n", SDL_GetTicks() - game->game_time);
  *time = SDL_GetTicks();
}
