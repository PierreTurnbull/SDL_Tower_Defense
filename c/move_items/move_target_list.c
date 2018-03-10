void  move_target(struct s_target *ptr)
{
  ptr->pos_float_x += ptr->velx;
  ptr->pos_float_y += ptr->vely;
  if (ptr->pos_float_x - (int)ptr->pos_float_x > 0.5 || ptr->pos_float_x - (int)ptr->pos_float_x < -0.5) {
    ptr->pos.x = ptr->pos_float_x + 1;
  } else {
    ptr->pos.x = ptr->pos_float_x;
  }
  if (ptr->pos_float_y - (int)ptr->pos_float_y > 0.5 || ptr->pos_float_y - (int)ptr->pos_float_y < -0.5) {
    ptr->pos.y = ptr->pos_float_y + 1;
  } else {
    ptr->pos.y = ptr->pos_float_y;
  }
}

int   compare_sign(float f1, float f2)
{
    if ((f1 < 0 && f2 < 0) || (f1 > 0 && f2 > 0) || (f1 == 0 && f2 == 0))
        return 1; // same sign
    else
        return 0; // different signs
}

void  update_target_vel(struct s_target *ptr)
{
  float f1;
  float f2;
  float f3;
  float f4;

  if (ptr->next_path_block == NULL) {
    return;
  }
  f1 = VEL_get_vel(ptr->pos_float_x + ptr->pos.w / 2, ptr->next_path_block->pos.x,
                   ptr->pos_float_y + ptr->pos.w / 2, ptr->next_path_block->pos.y,
                   ptr->move_speed, 'x');
  f2 = VEL_get_vel(ptr->pos_float_x + ptr->pos.w / 2 + ptr->velx, ptr->next_path_block->pos.x,
                  ptr->pos_float_y + ptr->pos.w / 2 + ptr->vely, ptr->next_path_block->pos.y,
                  ptr->move_speed, 'x');
  f3 = VEL_get_vel(ptr->pos_float_x + ptr->pos.w / 2, ptr->next_path_block->pos.x,
                   ptr->pos_float_y + ptr->pos.w / 2, ptr->next_path_block->pos.y,
                   ptr->move_speed, 'y');
  f4 = VEL_get_vel(ptr->pos_float_x + ptr->pos.w / 2 + ptr->velx, ptr->next_path_block->pos.x,
                  ptr->pos_float_y + ptr->pos.w / 2 + ptr->vely, ptr->next_path_block->pos.y,
                  ptr->move_speed, 'y');
  if (compare_sign(f1, f2) == 0 || compare_sign(f3, f4) == 0) {
    if (ptr->next_path_block->next != NULL) {
      ptr->pos.x        = ptr->next_path_block->pos.x - ptr->pos.w / 2;
      ptr->pos_float_x  = ptr->next_path_block->pos.x - ptr->pos.w / 2;
      ptr->velx         = VEL_get_vel(ptr->next_path_block->next->pos.x, ptr->next_path_block->pos.x,
                                      ptr->next_path_block->next->pos.y, ptr->next_path_block->pos.y,
                                      ptr->move_speed, 'x');
      ptr->pos.y        = ptr->next_path_block->pos.y - ptr->pos.w / 2;
      ptr->pos_float_y  = ptr->next_path_block->pos.y - ptr->pos.w / 2;
      ptr->vely         = VEL_get_vel(ptr->next_path_block->next->pos.x, ptr->next_path_block->pos.x,
                                      ptr->next_path_block->next->pos.y, ptr->next_path_block->pos.y,
                                      ptr->move_speed, 'y');
    }
    if (ptr->next_path_block != NULL) {
      ptr->next_path_block = ptr->next_path_block->next;
    }
  }
}

void  move_target_list(void)
{
  struct s_target *ptr;

  ptr = game.play.target_list.first;
  while (ptr != NULL) {
    update_target_vel(ptr);
    move_target(ptr);
    ptr = ptr->next;
  }
}
