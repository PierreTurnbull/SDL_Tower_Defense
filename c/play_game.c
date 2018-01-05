void  play_game(struct s_game *game)
{
  // Empty event queue
  while (SDL_PollEvent(&game->event) == 1);
  while (game->input.quit == SDL_FALSE)
  {
    SDL_PollEvent(&game->event);
    input_handling(game);
    event_handling(game);
    render(game, RENDER_GAME_MENU);
    SDL_Delay(15);
  }
}
