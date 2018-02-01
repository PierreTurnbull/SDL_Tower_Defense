void  play_game(struct s_game *game)
{
  // Empty event queue
  while (SDL_PollEvent(&game->event) == 1);
  game->event.type = 0;
  while (game->input.quit == SDL_FALSE)
  {
    SDL_PollEvent(&game->event);
    handle_input(game);
    handle_event(game);
    render(game);
    TIME_wait(&game->game_time, 15);
  }
}
