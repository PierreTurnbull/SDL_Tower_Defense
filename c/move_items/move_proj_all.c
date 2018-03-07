void  move_proj_list(struct s_tower *tower_ptr)
{
  struct s_proj *ptr;

  ptr = tower_ptr->proj_list.first;
  while (ptr != NULL) {
    ptr->pos.x += ptr->velx;
    ptr->pos.y += ptr->vely;
    ptr = ptr->next;
  }
}

void  move_proj_all(void)
{
  struct s_tower *ptr;

  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    move_proj_list(ptr);
    ptr = ptr->next;
  }
}
