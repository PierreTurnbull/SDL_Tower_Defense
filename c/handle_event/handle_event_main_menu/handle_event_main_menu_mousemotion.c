void  handle_event_main_menu_mousemotion(void)
{
  int i;

  for (i = 0; i < 3; i++)
    if (POS_mouse_in_rect(game.input.mouse_pos, game.main_menu.choice_btn_r[i]) == 1)
      game.main_menu.choice_selected = i;
}
