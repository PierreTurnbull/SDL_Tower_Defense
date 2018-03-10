void  handle_event_main_menu_mousebutton(void)
{
  if      (game.input.mouse_btn[0] != SDL_TRUE)
    return;
  else if (POS_mouse_in_rect(game.input.mouse_pos, game.main_menu.choice_btn_r[0]) == 1) {
    game.screen = SCREEN_PLAY;
    load_path("1");
  }
  else if (POS_mouse_in_rect(game.input.mouse_pos, game.main_menu.choice_btn_r[1]) == 1)
    game.screen = SCREEN_MAIN_OPTIONS;
  else if (POS_mouse_in_rect(game.input.mouse_pos, game.main_menu.choice_btn_r[2]) == 1)
    game.input.quit = SDL_TRUE;
}
