void  close_sdl(struct s_game *game)
{
  IMG_Quit();
  SDL_Quit();
}

void  close_game(struct s_game *game)
{
  fprintf(stderr, "%s CLOSE_GAME\n", get_game_time());
  SDL_DestroyRenderer(game->rend);
  SDL_DestroyWindow(game->wind);
}
