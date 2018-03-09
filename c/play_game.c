void  play_game(void)
{
  // empty event queue
  while (SDL_PollEvent(&game.event) == 1);
  game.event.type = 0;
  // game's main loop
  while (game.input.quit == SDL_FALSE)
  {
    SDL_PollEvent(&game.event);
    handle_input();
    handle_event();
    tower_shoot_all();
    move_items();
    check_hitboxes();
    render_game();
    TIME_wait(&game.game_time, 15);
  }
}
