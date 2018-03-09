int check_hitboxes_tower_tower_condition(struct s_tower *ptr, struct s_tower *ptr2)
{
  if (
      (ptr->pos.x >= ptr2->pos.x &&
      ptr->pos.x <= ptr2->pos.x + game.play.tower_list.tower_size[ptr2->type] &&
      ptr->pos.y >= ptr2->pos.y &&
      ptr->pos.y <= ptr2->pos.y + game.play.tower_list.tower_size[ptr2->type]) ||
      (ptr->pos.x + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.x &&
      ptr->pos.x + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.x + game.play.tower_list.tower_size[ptr2->type] &&
      ptr->pos.y >= ptr2->pos.y &&
      ptr->pos.y <= ptr2->pos.y + game.play.tower_list.tower_size[ptr2->type]) ||
      (ptr->pos.x >= ptr2->pos.x &&
      ptr->pos.x <= ptr2->pos.x + game.play.tower_list.tower_size[ptr2->type] &&
      ptr->pos.y + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.y &&
      ptr->pos.y + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.y + game.play.tower_list.tower_size[ptr2->type]) ||
      (ptr->pos.x + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.x &&
      ptr->pos.x + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.x + game.play.tower_list.tower_size[ptr2->type] &&
      ptr->pos.y + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.y &&
      ptr->pos.y + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.y + game.play.tower_list.tower_size[ptr2->type]))
    return 1;
  return 0;
}

int check_hitboxes_tower_tower(struct s_tower *ptr)
{
  struct s_tower *ptr2;

  ptr2 = game.play.tower_list.first;
  while (ptr2 != NULL) {
    if (ptr != ptr2 && check_hitboxes_tower_tower_condition(ptr, ptr2) == 1) {
      return 1;
    }
    ptr2 = ptr2->next;
  }
  return 0;
}
