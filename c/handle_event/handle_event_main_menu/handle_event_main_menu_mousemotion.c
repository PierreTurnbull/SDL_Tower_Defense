void  handle_event_main_menu_mousemotion(void)
{
  int i;

  for (i = 0; i < 3; i++)
    if (POS_check_mouse_in_rect(game.main_menu.choice_btn_r[i], game.input.mouse_pos) == 1)
      game.main_menu.choice_selected = i;
}
