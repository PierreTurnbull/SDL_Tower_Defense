void  create_target(struct s_game *game)
{
  int i;
  struct s_target *new_target = malloc(sizeof(*new_target));
  struct s_target *ptr;

  i = 0;
  ptr = game->play.target_list.first;
  while (ptr != NULL) {
    ptr = ptr->next;
    i++;
  }
  if (i == 0) {
    game->play.target_list.first = new_target;
    new_target->prev = NULL;
  } else {
    ptr = game->play.target_list.first;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    new_target->prev = ptr;
    ptr->next = new_target;
  }
  new_target->index           = i;
  new_target->move_speed      = TARGET_MOVE_SPEED;
  new_target->pos.x           = game->play.path.first->pos.x - TARGET_SIZE / 2;
  new_target->pos.y           = game->play.path.first->pos.y - TARGET_SIZE / 2;
  new_target->pos_float_x     = new_target->pos.x;
  new_target->pos_float_y     = new_target->pos.y;
  new_target->pos.w           = TARGET_SIZE;
  new_target->pos.h           = TARGET_SIZE;
  new_target->next_path_block = game->play.path.first->next;
  new_target->velx            = (new_target->next_path_block->pos.x - game->play.path.first->pos.x) * new_target->move_speed / sqrt(
                                (new_target->next_path_block->pos.x - game->play.path.first->pos.x) *
                                (new_target->next_path_block->pos.x - game->play.path.first->pos.x) +
                                (new_target->next_path_block->pos.y - game->play.path.first->pos.y) *
                                (new_target->next_path_block->pos.y - game->play.path.first->pos.y));
  new_target->vely            = (new_target->next_path_block->pos.y - game->play.path.first->pos.y) * new_target->move_speed / sqrt(
                                (new_target->next_path_block->pos.x - game->play.path.first->pos.x) *
                                (new_target->next_path_block->pos.x - game->play.path.first->pos.x) +
                                (new_target->next_path_block->pos.y - game->play.path.first->pos.y) *
                                (new_target->next_path_block->pos.y - game->play.path.first->pos.y));
  new_target->next            = NULL;
  fprintf(stderr, "%s CREATE_TARGET\n%p\nindex           = %d\nmove_speed      = %f\npos             = x%d y%d\nvel             = x%f y%f\nnext_path_block = %p\nprev            = %p\nnext            = %p\n\n", TIME_get_time(), new_target, new_target->index, new_target->move_speed, new_target->pos.x, new_target->pos.y, new_target->velx, new_target->vely, new_target->next_path_block, new_target->prev, new_target->next);
}
