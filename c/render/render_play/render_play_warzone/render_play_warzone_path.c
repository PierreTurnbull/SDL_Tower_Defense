void  fill_path_block_simulation(struct s_target *pbs, int size)
{
  pbs->type             = TARGET_TYPE_SIMULATION;
  pbs->pos.w            = size;
  pbs->pos.h            = size;
  pbs->pos.x            = game.play.warzone.path.first->pos.x - size / 2;
  pbs->pos.y            = game.play.warzone.path.first->pos.y - size / 2;
  pbs->pos_float_x      = pbs->pos.x;
  pbs->pos_float_y      = pbs->pos.y;
  pbs->next_path_block  = game.play.warzone.path.first->next;
  pbs->move_speed       = PATH_BLOCK_SPEED;
  pbs->velx             = VEL_get_vel(pbs->next_path_block->pos.x, game.play.warzone.path.first->pos.x,
                                      pbs->next_path_block->pos.y, game.play.warzone.path.first->pos.y,
                                      pbs->move_speed, 'x');
  pbs->vely             = VEL_get_vel(pbs->next_path_block->pos.x, game.play.warzone.path.first->pos.x,
                                      pbs->next_path_block->pos.y, game.play.warzone.path.first->pos.y,
                                      pbs->move_speed, 'y');
}

void  render_play_warzone_path(void)
{
  int i;
  struct s_target path_block_simulation;

  fill_path_block_simulation(&path_block_simulation, PATH_BLOCK_SIZE);
  i = 0;
  while (path_block_simulation.next_path_block != NULL) {
    SDL_RenderCopy(game.rend, game.play.warzone.path.path_block_tex[i % 4], NULL, &path_block_simulation.pos);
    update_target_vel(&path_block_simulation);
    move_target(&path_block_simulation);
    i++;
  }
}
