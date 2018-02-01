void  handle_event_main_menu_mousebutton(struct s_game *game)
{
  if      (game->input.mouse_btn[0] != SDL_TRUE)
    return;
  else if (POS_check_mouse_in_rect(game->main_menu.choice_btn_r[0], game->input.mouse_pos) == 1) {
    game->screen = SCREEN_PLAY;
    load_path(game);
  }
  else if (POS_check_mouse_in_rect(game->main_menu.choice_btn_r[1], game->input.mouse_pos) == 1)
    game->screen = SCREEN_MAIN_OPTIONS;
  else if (POS_check_mouse_in_rect(game->main_menu.choice_btn_r[2], game->input.mouse_pos) == 1)
    game->input.quit = SDL_TRUE;
}
