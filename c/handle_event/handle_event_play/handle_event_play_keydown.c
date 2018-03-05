void  handle_event_play_keydown_escape(void)
{
  if (game.input.key_repeat[SDL_SCANCODE_ESCAPE] == SDL_FALSE) {
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

void  handle_event_play_keydown(void)
{
  if (game.input.key[SDL_SCANCODE_Q] == SDL_TRUE)
    handle_event_play_keydown_q();
  if (game.input.key[SDL_SCANCODE_W] == SDL_TRUE)
    handle_event_play_keydown_w();
  if (game.input.key[SDL_SCANCODE_E] == SDL_TRUE)
    handle_event_play_keydown_e();
  if (game.input.key[SDL_SCANCODE_SPACE] == SDL_TRUE)
    handle_event_play_keydown_space();
  if (game.input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    handle_event_play_keydown_return();
  if (game.input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    handle_event_play_keydown_escape();
}
