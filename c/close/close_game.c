void  close_sdl(void)
{
  IMG_Quit();
  SDL_Quit();
}

void  close_cursor(void)
{
  SDL_DestroyTexture(game.cursor[0]);
  SDL_DestroyTexture(game.cursor[1]);
  SDL_DestroyTexture(game.cursor[2]);
}

void  close_game(void)
{
  close_cursor();
  close_main_menu();
  close_play();
  SDL_DestroyRenderer(game.rend);
  SDL_DestroyWindow(game.wind);
  if (PRINT_CLOSE_GAME)
    fprintf(stderr, "%s CLOSE_GAME\n", TIME_get_time());
  close_sdl();
  if (PRINT_CLOSE_GAME)
    fprintf(stderr, "Game closed correctly\n\n");
}
