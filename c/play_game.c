void  play_game(struct s_game *game)
{
  // Empty event queue
  while (SDL_PollEvent(&game->event) == 1);
  while (game->input.quit == SDL_FALSE)
  {
    SDL_PollEvent(&game->event);
    handle_input(game);
    handle_event(game);
    render(game);
    wait(game, 15);
  }
}
