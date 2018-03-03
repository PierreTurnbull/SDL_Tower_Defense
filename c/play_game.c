void  play_game(void)
{
  // Empty event queue
  while (SDL_PollEvent(&game.event) == 1);
  game.event.type = 0;
  while (game.input.quit == SDL_FALSE)
  {
    SDL_PollEvent(&game.event);
    handle_input();
    handle_event();
    move_items();
    render_game();
    TIME_wait(&game.game_time, 15);
  }
}
