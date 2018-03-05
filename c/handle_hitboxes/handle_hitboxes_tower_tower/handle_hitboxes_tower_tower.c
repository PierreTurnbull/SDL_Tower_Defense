int handle_hitboxes_tower_tower(struct s_tower *ptr)
{
  struct s_tower *ptr2;

  ptr2 = game.play.tower_list.first;
  while (ptr2 != NULL) {
    if (ptr != ptr2 && HITBOX_TOWER_HIT_TOWER) {
      return 0;
    }
    ptr2 = ptr2->next;
  }
  return 1;
}
