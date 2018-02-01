char  *TIME_get_time(void)
{
  static char str[9];

  if (SDL_GetTicks() > 9999999)
    return "9999.999+";
  str[0] = SDL_GetTicks() % 10000000 / 1000000 + 48;
  str[1] = SDL_GetTicks() % 1000000 / 100000 + 48;
  str[2] = SDL_GetTicks() % 100000 / 10000 + 48;
  str[3] = SDL_GetTicks() % 10000 / 1000 + 48;
  str[4] = '.';
  str[5] = SDL_GetTicks() % 1000 / 100 + 48;
  str[6] = SDL_GetTicks() % 100 / 10 + 48;
  str[7] = SDL_GetTicks() % 10 + 48;
  str[8] = 0;
  return str;
}
