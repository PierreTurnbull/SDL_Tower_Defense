void  event_game_menu(struct s_game *game)
{
  switch (game->event.type)
  {
    case SDL_QUIT:
      game->event.type = SDL_QUIT;
      break;
    case SDL_KEYDOWN:
      event_game_menu_keydown(game);
      break;
    case SDL_MOUSEBUTTONDOWN:
      event_game_menu_mousebuttondown(game);
      break;
    case SDL_MOUSEMOTION:
      event_game_menu_mousemotion(game);
      break;
    default:
      break;
  }
}
