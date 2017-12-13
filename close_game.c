void  close_game_menu(struct s_game *game)
{
  //TODO SDL_DestroyTexture(game->game_menu->background)
  //TODO SDL_DestroyTexture(game->game_menu->choice_btn[0])
  //TODO SDL_DestroyTexture(game->game_menu->choice_btn[1])
  //TODO SDL_DestroyTexture(game->game_menu->choice_btn[2])
}

void  close_sdl()
{
  fprintf(stderr, "Closing SDL and SDL_Image\n");
  IMG_Quit();
  SDL_Quit();
}

void  close_game(struct s_game *game)
{
  fprintf(stderr, "%s CLOSE_GAME\n", get_game_time());
  close_game_menu(game);
  SDL_DestroyRenderer(game->rend);
  SDL_DestroyWindow(game->wind);
  close_sdl();
  fprintf(stderr, "Game closed correctly\n\n");
}
