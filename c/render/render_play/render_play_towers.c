void  render_play_towers(void)
{
  struct s_tower *ptr;

  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    if  (game.mouse_grab == ptr &&
        (check_hitboxes_tower_tower(game.mouse_grab) == 1 ||
        check_hitboxes_tower_path(game.mouse_grab) == 1))
      SDL_RenderCopy(game.rend, game.play.tower_list.tower_blocked_tex[ptr->type], NULL, &ptr->pos);
    else
      SDL_RenderCopy(game.rend, game.play.tower_list.tower_tex[ptr->type], NULL, &ptr->pos);
    ptr = ptr->next;
  }
}
