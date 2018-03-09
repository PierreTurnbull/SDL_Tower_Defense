int check_hitboxes_tower_target(struct s_tower *ptr, struct s_target *ptr2)
{
  if (
      (ptr->pos.x >= ptr2->pos.x &&
      ptr->pos.x <= ptr2->pos.x + PATH_BLOCK_SIZE &&
      ptr->pos.y >= ptr2->pos.y &&
      ptr->pos.y <= ptr2->pos.y + PATH_BLOCK_SIZE) ||
      (ptr->pos.x + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.x &&
      ptr->pos.x + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.x + PATH_BLOCK_SIZE &&
      ptr->pos.y >= ptr2->pos.y &&
      ptr->pos.y <= ptr2->pos.y + PATH_BLOCK_SIZE) ||
      (ptr->pos.x >= ptr2->pos.x &&
      ptr->pos.x <= ptr2->pos.x + PATH_BLOCK_SIZE &&
      ptr->pos.y + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.y &&
      ptr->pos.y + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.y + PATH_BLOCK_SIZE) ||
      (ptr->pos.x + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.x &&
      ptr->pos.x + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.x + PATH_BLOCK_SIZE &&
      ptr->pos.y + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.y &&
      ptr->pos.y + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.y + PATH_BLOCK_SIZE))
    return 1;
  return 0;
}
