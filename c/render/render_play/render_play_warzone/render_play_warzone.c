void  fill_path_block_simulation(struct s_game *game, struct s_target *pbs)
{
  fill_target(game, pbs, TARGET_TYPE_1);
  pbs->pos.w        = PATH_BLOCK_SIZE;
  pbs->pos.h        = PATH_BLOCK_SIZE;
  pbs->pos.x        = game->play.path.first->pos.x - PATH_BLOCK_SIZE / 2;
  pbs->pos.y        = game->play.path.first->pos.y - PATH_BLOCK_SIZE / 2;
  pbs->pos_float_x  = pbs->pos.x;
  pbs->pos_float_y  = pbs->pos.y;
  pbs->move_speed   = PATH_BLOCK_SPEED;
  pbs->velx         = (pbs->next_path_block->pos.x - game->play.path.first->pos.x) * pbs->move_speed / sqrt(
                      (pbs->next_path_block->pos.x - game->play.path.first->pos.x) *
                      (pbs->next_path_block->pos.x - game->play.path.first->pos.x) +
                      (pbs->next_path_block->pos.y - game->play.path.first->pos.y) *
                      (pbs->next_path_block->pos.y - game->play.path.first->pos.y));
  pbs->vely         = (pbs->next_path_block->pos.y - game->play.path.first->pos.y) * pbs->move_speed / sqrt(
                      (pbs->next_path_block->pos.x - game->play.path.first->pos.x) *
                      (pbs->next_path_block->pos.x - game->play.path.first->pos.x) +
                      (pbs->next_path_block->pos.y - game->play.path.first->pos.y) *
                      (pbs->next_path_block->pos.y - game->play.path.first->pos.y));
}

void  render_play_warzone_path(struct s_game *game)
{
  struct s_target path_block_simulation;

  fill_path_block_simulation(game, &path_block_simulation);
  while (path_block_simulation.next_path_block != NULL) {
    SDL_RenderCopy(game->rend, game->play.path.path_block_tex, NULL, &path_block_simulation.pos);
    update_target_vel(game, &path_block_simulation);
    move_target(&path_block_simulation);
  }
}

void  render_play_warzone_targets(struct s_game *game)
{
  struct s_target *ptr;

  ptr = game->play.target_list.first;
  while (ptr != NULL) {
    SDL_RenderCopy(game->rend, game->play.target_list.target_tex[ptr->type], NULL, &ptr->pos);
    ptr = ptr->next;
  }
}

void  render_play_warzone(struct s_game *game)
{
  struct s_warzone *warzone = &game->play.warzone;

  SDL_RenderCopy(game->rend, warzone->background, NULL, &warzone->background_pos);
  render_play_warzone_path(game);
  render_play_warzone_targets(game);
}
