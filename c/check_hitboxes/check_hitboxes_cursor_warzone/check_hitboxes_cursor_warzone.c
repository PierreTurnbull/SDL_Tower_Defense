int   check_hitboxes_cursor_warzone(void)
{
  if (game.mouse_grab->pos.x >= 25 &&
      game.mouse_grab->pos.x + game.play.tower_list.tower_size[game.mouse_grab->type] <= 25 + WARZONE_W &&
      game.mouse_grab->pos.y >= 25 &&
      game.mouse_grab->pos.y + game.play.tower_list.tower_size[game.mouse_grab->type] <= 25 + WARZONE_H)
    return 1;
  return 0;
}
