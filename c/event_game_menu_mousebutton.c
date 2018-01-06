void  event_game_menu_mousebutton(struct s_game *game)
{
  if (game->input.mouse_btn[0] != SDL_TRUE)
    return;
  if (POSCHECK_mouse_in_rect(game->game_menu.choice_btn_r[0], game->input.mouse_pos) == 1)
    game->screen = SCREEN_GAME_PLAY;
  if (POSCHECK_mouse_in_rect(game->game_menu.choice_btn_r[1], game->input.mouse_pos) == 1)
    game->screen = SCREEN_GAME_MENU_OPTIONS;
  if (POSCHECK_mouse_in_rect(game->game_menu.choice_btn_r[2], game->input.mouse_pos) == 1)
    game->input.quit = SDL_TRUE;
}
