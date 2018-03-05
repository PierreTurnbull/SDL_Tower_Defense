void  handle_event_play_mousebutton_right(void)
{
}

void  handle_event_play_mousebutton_middle(void)
{
}

void  handle_event_play_mousebutton_left(void)
{
  if        (CLICK_ON_ITEM_TOWER_1 && game.mouse_grab == MOUSE_IS_FREE) {
    game.mouse_grab = create_tower(TOWER_TYPE_1);
  } else if (CLICK_ON_ITEM_TOWER_1) {
    close_play_tower(game.mouse_grab, 1);
    game.mouse_grab = create_tower(TOWER_TYPE_1);
  } else if (CLICK_ON_ITEM_TOWER_2 && game.mouse_grab == MOUSE_IS_FREE) {
    game.mouse_grab = create_tower(TOWER_TYPE_2);
  } else if (CLICK_ON_ITEM_TOWER_2) {
    close_play_tower(game.mouse_grab, 2);
    game.mouse_grab = create_tower(TOWER_TYPE_2);
  } else if (CLICK_ON_ITEM_TOWER_3 && game.mouse_grab == MOUSE_IS_FREE) {
    game.mouse_grab = create_tower(TOWER_TYPE_3);
  } else if (CLICK_ON_ITEM_TOWER_3) {
    close_play_tower(game.mouse_grab, 3);
    game.mouse_grab = create_tower(TOWER_TYPE_3);
  }
}

void  handle_event_play_mousebutton(void)
{
  SDL_GetMouseState(&game.input.mouse_pos.x, &game.input.mouse_pos.y);
  if (game.input.mouse_btn[0] == SDL_TRUE && game.input.mouse_btn_repeat[0] == SDL_FALSE)
    handle_event_play_mousebutton_left();
  if (game.input.mouse_btn[1] == SDL_TRUE && game.input.mouse_btn_repeat[1] == SDL_FALSE)
    handle_event_play_mousebutton_middle();
  if (game.input.mouse_btn[2] == SDL_TRUE && game.input.mouse_btn_repeat[2] == SDL_FALSE)
    handle_event_play_mousebutton_right();
}
