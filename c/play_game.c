void  play_game(struct s_game *game)
{
  // Empty event queue
  while (SDL_PollEvent(&game->event) == 1);
  while (game->event.type != SDL_QUIT)
  {
    SDL_PollEvent(&game->event);
    event_handling(game, game->screen);
    render(game, RENDER_GAME_MENU);
    SDL_Delay(15);
  }
}
