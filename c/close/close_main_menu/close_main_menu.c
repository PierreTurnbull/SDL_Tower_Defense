void  close_main_menu(struct s_game *game)
{
  fprintf(stderr, "Closing game menu\n");
  SDL_DestroyTexture(game->main_menu.background);
  SDL_DestroyTexture(game->main_menu.choice_btn[0]);
  SDL_DestroyTexture(game->main_menu.choice_btn[1]);
  SDL_DestroyTexture(game->main_menu.choice_btn[2]);
  SDL_DestroyTexture(game->main_menu.render);
}
