void  event_handling(struct s_game *game, int which)
{
  if (which == SCREEN_GAME_MENU)
    event_game_menu(game);
  if (game->event.type != SDL_QUIT)
    game->event.type = 0;
}
