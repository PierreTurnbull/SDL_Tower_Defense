void  close_sdl(struct s_game *game)
{
  fprintf(stderr, "Closing SDL and SDL_Image\n");
  IMG_Quit();
  SDL_Quit();
}

void  close_game(struct s_game *game)
{
  fprintf(stderr, "%s CLOSE_GAME\n", get_game_time());
  SDL_DestroyRenderer(game->rend);
  SDL_DestroyWindow(game->wind);
  close_sdl(game);
  fprintf(stderr, "Game closed correctly\n\n");
}
