void  fill_target(struct s_target *new_target, int type)
{
  new_target->type            = type;
  new_target->pos.x           = game.play.warzone.path.first->pos.x - game.play.target_list.target_size[type] / 2;
  new_target->pos.y           = game.play.warzone.path.first->pos.y - game.play.target_list.target_size[type] / 2;
  new_target->pos_float_x     = new_target->pos.x;
  new_target->pos_float_y     = new_target->pos.y;
  new_target->pos.w           = game.play.target_list.target_size[type];
  new_target->pos.h           = game.play.target_list.target_size[type];
  new_target->next_path_block = game.play.warzone.path.first->next;
  new_target->hp              = game.play.target_list.target_hp[type - 1]; // first type is not a virtual path block
  new_target->move_speed      = game.play.target_list.target_move_speed[type];
  new_target->velx            = VEL_get_vel(new_target->next_path_block->pos.x,
                                            game.play.warzone.path.first->pos.x,
                                            new_target->next_path_block->pos.y,
                                            game.play.warzone.path.first->pos.y,
                                            new_target->move_speed, 'x');
  new_target->vely            = VEL_get_vel(new_target->next_path_block->pos.x,
                                            game.play.warzone.path.first->pos.x,
                                            new_target->next_path_block->pos.y,
                                            game.play.warzone.path.first->pos.y,
                                            new_target->move_speed, 'y');
}

void  append_target(struct s_target *new_target)
{
  struct s_target *ptr;
  int i;

  i = 0;
  ptr = game.play.target_list.first;
  while (ptr != NULL) {
    ptr = ptr->next;
    i++;
  }
  if (i == 0) {
    game.play.target_list.first = new_target;
    new_target->prev = NULL;
  } else {
    ptr = game.play.target_list.first;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    new_target->prev = ptr;
    ptr->next = new_target;
  }
  new_target->index = i;
  new_target->next  = NULL;
}

void  create_target(int type)
{
  struct s_target *new_target = malloc(sizeof(*new_target));

  append_target(new_target);
  fill_target(new_target, type);
  if (PRINT_CREATE_TARGET)
    fprintf(stderr, "%s CREATE_TARGET\n%p\nindex           = %d\ntype            = %d\nmove_speed      = %f\npos             = x%d y%d\nvel             = x%f y%f\nnext_path_block = %p\nprev            = %p\nnext            = %p\n\n", TIME_get_time(), new_target, new_target->index, new_target->type, new_target->move_speed, new_target->pos.x, new_target->pos.y, new_target->velx, new_target->vely, new_target->next_path_block, new_target->prev, new_target->next);
}
