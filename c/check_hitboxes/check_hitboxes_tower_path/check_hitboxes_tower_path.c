int check_hitboxes_tower_path(struct s_tower *ptr)
{
  struct s_target path_block_simulation;

  fill_path_block_simulation(&path_block_simulation, PATH_BLOCK_HITBOX_SIZE);
  while (path_block_simulation.next_path_block != NULL) {
    SDL_RenderCopy(game.rend, game.play.tower_list.tower_tex[0], NULL, &path_block_simulation.pos);
    if (POS_rect_in_rect(ptr->pos, path_block_simulation.pos))
      return 1;
    update_target_vel(&path_block_simulation);
    move_target(&path_block_simulation);
  }
  return 0;
}
