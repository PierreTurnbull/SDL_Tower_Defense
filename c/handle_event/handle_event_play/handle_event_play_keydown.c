void  handle_event_play_keydown_escape(void)
{
  if (game.input.repeat[SDL_SCANCODE_ESCAPE] == SDL_FALSE) {
    close_play_target_list();
    close_play_tower_list();
    close_path();
    game.screen = SCREEN_MAIN_MENU;
  }
}

void  handle_event_play_keydown_return(void)
{}

void  handle_event_play_keydown_space(void)
{
  close_play_target_list();
}

void  handle_event_play_keydown_e(void)
{
  create_target(TARGET_TYPE_3);
}

void  handle_event_play_keydown_w(void)
{
  create_target(TARGET_TYPE_2);
}

void  handle_event_play_keydown_q(void)
{
  create_target(TARGET_TYPE_1);
}

void  handle_event_play_keydown_a(void)
{
  if (game.input.repeat[SDL_SCANCODE_A] == SDL_FALSE) {
    create_tower(TOWER_TYPE_1);
  }
}

void  handle_event_play_keydown_s(void)
{
  if (game.input.repeat[SDL_SCANCODE_S] == SDL_FALSE) {
    create_tower(TOWER_TYPE_2);
  }
}

void  handle_event_play_keydown_d(void)
{
  if (game.input.repeat[SDL_SCANCODE_D] == SDL_FALSE) {
    create_tower(TOWER_TYPE_3);
  }
}

void  handle_event_play_keydown_up(void)
{}

void  handle_event_play_keydown_down(void)
{}

void  handle_event_play_keydown(void)
{
  if (game.input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    handle_event_play_keydown_down();
  if (game.input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    handle_event_play_keydown_up();
  if (game.input.key[SDL_SCANCODE_Q] == SDL_TRUE)
    handle_event_play_keydown_q();
  if (game.input.key[SDL_SCANCODE_W] == SDL_TRUE)
    handle_event_play_keydown_w();
  if (game.input.key[SDL_SCANCODE_E] == SDL_TRUE)
    handle_event_play_keydown_e();
  if (game.input.key[SDL_SCANCODE_A] == SDL_TRUE)
    handle_event_play_keydown_a();
  if (game.input.key[SDL_SCANCODE_S] == SDL_TRUE)
    handle_event_play_keydown_s();
  if (game.input.key[SDL_SCANCODE_D] == SDL_TRUE)
    handle_event_play_keydown_d();
  if (game.input.key[SDL_SCANCODE_SPACE] == SDL_TRUE)
    handle_event_play_keydown_space();
  if (game.input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    handle_event_play_keydown_return();
  if (game.input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    handle_event_play_keydown_escape();
}
