void  load_play_gui(struct s_game *game)
{
  game->play.gui.background = IMG_LoadTexture(game->rend, "img/play/gui.png");

  LOAD_rect(&game->play.render_r, 0, 0, 1920, 1080);
  LOAD_rect(&game->play.gui.background_pos, 0, 0, 1920, 1080);
}

void  load_play(struct s_game *game)
{
  game->play.render         = SDL_CreateTexture(game->rend, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 1920, 1080);
  game->play.background     = IMG_LoadTexture(game->rend, "img/play/background.png");

  load_play_gui(game);
}
