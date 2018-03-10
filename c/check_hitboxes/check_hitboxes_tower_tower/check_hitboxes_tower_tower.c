int check_hitboxes_tower_tower(struct s_tower *ptr)
{
  struct s_tower *ptr2;

  ptr2 = game.play.tower_list.first;
  while (ptr2 != NULL) {
    if (ptr != ptr2 && POS_rect_in_rect(ptr->pos, ptr2->pos)) {
      return 1;
    }
    ptr2 = ptr2->next;
  }
  return 0;
}
