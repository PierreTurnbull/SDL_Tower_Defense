void  close_sdl(void)
{
  fprintf(stderr, "Closing SDL and SDL_Image\n");
  IMG_Quit();
  SDL_Quit();
}

void  close_cursor(struct s_game *game)
{
  fprintf(stderr, "Closing cursor\n");
  SDL_DestroyTexture(game->cursor[0]);
  SDL_DestroyTexture(game->cursor[1]);
  SDL_DestroyTexture(game->cursor[2]);
}

void  close_game(struct s_game *game)
{
  fprintf(stderr, "%s CLOSE_GAME\n", get_game_time());
  close_cursor(game);
  close_main_menu(game);
  close_play(game);
  SDL_DestroyRenderer(game->rend);
  SDL_DestroyWindow(game->wind);
  close_sdl();
  fprintf(stderr, "Game closed correctly\n\n");
}
