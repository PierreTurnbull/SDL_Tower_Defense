int handle_hitboxes_tower_path(struct s_tower *ptr)
{
  struct s_target path_block_simulation;

  fill_path_block_simulation(&path_block_simulation);
  while (path_block_simulation.next_path_block != NULL) {
    if (handle_hitboxes_tower_target(ptr, &path_block_simulation) == 1)
      return 1;
    update_target_vel(&path_block_simulation);
    move_target(&path_block_simulation);
  }
  return 0;
}
