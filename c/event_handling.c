void  event_handling(struct s_game *game)
{
  if (game->screen == SCREEN_GAME_MENU)
    event_game_menu(game);
}
