void  tower_shoot(struct s_tower *tower_ptr, struct s_target *target_ptr)
{
  create_proj(tower_ptr);
  tower_ptr->reload_time = game.play.tower_list.tower_reload_time[tower_ptr->type];
}

void  check_tower_shoot(struct s_tower *tower_ptr)
{
  struct s_target *target_ptr;

  target_ptr = game.play.target_list.first;
  while (target_ptr != NULL) {
    if (TOWER_CAN_SHOOT) {
      tower_shoot(tower_ptr, target_ptr);
      break;
    }
    target_ptr = target_ptr->next;
  }
}

void  tower_shoot_all(void)
{
  struct s_tower  *ptr;

  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    if (ptr->reload_time <= 0 && ptr->state[TOWER_STATE_GRAB] == TOWER_STATE_NOT_GRABBED) {
      check_tower_shoot(ptr);
    } else if (ptr->reload_time > 0) {
      ptr->reload_time--;
    }
    ptr = ptr->next;
  }
}
