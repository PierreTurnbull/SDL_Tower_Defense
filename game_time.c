char  *get_game_time(void)
{
  static char str[6];

  str[0] = SDL_GetTicks() / 1000 + 48;
  str[1] = '.';
  str[2] = SDL_GetTicks() % 1000 / 100 + 48;
  str[3] = SDL_GetTicks() % 100 / 10 + 48;
  str[4] = SDL_GetTicks() % 10 + 48;
  str[5] = 0;
  return str;
}
