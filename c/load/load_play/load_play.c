void  load_play(void)
{
  game.play.render      = SDL_CreateTexture(game.rend, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_TARGET, 1920, 1080);
  game.play.background  = IMG_LoadTexture(game.rend, "img/play/background.png");
  game.play.gold        = 200;

  LOAD_rect(&game.play.render_r, 0, 0, 1920, 1080);

  load_play_gui();
  load_play_warzone();
}
