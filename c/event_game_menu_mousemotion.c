void  event_game_menu_mousemotion(struct s_game *game)
{
  int i;

  for (i = 0; i < 3; i++)
    if (POSCHECK_mouse_in_rect(game->game_menu.choice_btn_r[i], game->input.mouse_pos) == 1)
      game->game_menu.choice_selected = i;
}
