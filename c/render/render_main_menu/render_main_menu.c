void  render_main_menu_choice(struct s_game *game)
{
  int i;

  for (i = 0; i < 3; i++)
  {
    if (i == game->main_menu.choice_selected)
      SDL_RenderCopy(game->rend, game->main_menu.choice_btn_hover[i], NULL, &game->main_menu.choice_btn_r[i]);
    else
      SDL_RenderCopy(game->rend, game->main_menu.choice_btn[i], NULL, &game->main_menu.choice_btn_r[i]);
  }
}

void  render_main_menu(struct s_game *game)
{
  SDL_SetRenderTarget(game->rend, game->main_menu.render);
  SDL_SetRenderDrawColor(game->rend, 0, 0, 0, 255);
  SDL_RenderClear(game->rend);
  SDL_RenderCopy(game->rend, game->main_menu.background, NULL, &game->main_menu.render_r);
  render_main_menu_choice(game);
  SDL_SetRenderTarget(game->rend, NULL);
  SDL_RenderCopy(game->rend, game->main_menu.render, NULL, &game->main_menu.render_r);
}
