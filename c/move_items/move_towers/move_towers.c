void  move_towers(void)
{
  struct s_tower *ptr;

  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    if (ptr->state[TOWER_STATE_GRAB] == TOWER_STATE_GRABBED) {
      SDL_GetMouseState(&game.input.mouse_pos.x, &game.input.mouse_pos.y);
      ptr->pos.x = game.input.mouse_pos.x - game.play.tower_list.tower_size[ptr->type] / 2;
      ptr->pos.y = game.input.mouse_pos.y - game.play.tower_list.tower_size[ptr->type] / 2;
    }
    ptr = ptr->next;
  }
}
