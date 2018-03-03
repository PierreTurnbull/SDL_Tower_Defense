void  close_sdl(void)
{
  fprintf(stderr, "Closing SDL and SDL_Image\n");
  IMG_Quit();
  SDL_Quit();
}

void  close_cursor(void)
{
  fprintf(stderr, "Closing cursor\n");
  SDL_DestroyTexture(game.cursor[0]);
  SDL_DestroyTexture(game.cursor[1]);
  SDL_DestroyTexture(game.cursor[2]);
}

void  close_game(void)
{
  fprintf(stderr, "%s CLOSE_GAME\n", TIME_get_time());
  close_cursor();
  close_main_menu();
  close_play();
  SDL_DestroyRenderer(game.rend);
  SDL_DestroyWindow(game.wind);
  close_sdl();
  fprintf(stderr, "Game closed correctly\n\n");
}
