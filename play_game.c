void  play_game(struct s_game *game)
{
  SDL_Event event;
  int game_on = 1;

  // Empty event queue
  while (SDL_PollEvent(&event) == 1);
  while (game_on == 1)
  {
    SDL_PollEvent(&event);
    switch (event.type)
    {
      case SDL_KEYDOWN:
        switch (event.key.keysym.sym)
        {
          case SDLK_ESCAPE:
            game_on = 0;
            break;
          default:
            break;
        }
        break;
      case SDL_MOUSEBUTTONDOWN:
        break;
      case SDL_QUIT:
        game_on = 0;
        break;
      default:
        break;
    }
    render(game, RENDER_GAME_MENU);
    SDL_Delay(15);
  }
}
