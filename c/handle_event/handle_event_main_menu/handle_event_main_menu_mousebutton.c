void  handle_event_main_menu_mousebutton(void)
{
  if      (game.input.mouse_btn[0] != SDL_TRUE)
    return;
  else if (POS_mouse_in_rect(game.input.mouse_pos, game.main_menu.choice_btn_r[0]) == 1)
    change_room_main_menu_play();
  else if (POS_mouse_in_rect(game.input.mouse_pos, game.main_menu.choice_btn_r[1]) == 1)
    change_room_main_menu_options();
  else if (POS_mouse_in_rect(game.input.mouse_pos, game.main_menu.choice_btn_r[2]) == 1)
    game.input.quit = SDL_TRUE;
}
