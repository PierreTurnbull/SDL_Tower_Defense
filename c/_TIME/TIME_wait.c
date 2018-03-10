void  TIME_wait(int *time, int ms)
{
  /* int casting is needed here since SDL_GetTicks() returns an unsigned value
     that would affect the comparison and give weird results like -3 >= 0 == 1 */
  if (ms - ((int)SDL_GetTicks() - *time) >= 0)
    SDL_Delay(ms - ((int)SDL_GetTicks() - *time));
  if (PRINT_TIME_WAIT)
    fprintf(stderr, "Game time is %ss. Time since last loop: %dms\n", TIME_get_time(), SDL_GetTicks() - game.game_time);
  *time = SDL_GetTicks();
}
