void  tower_shoot(struct s_tower *ptr)
{
  fprintf(stderr, "%s SHOOT\n", TIME_get_time());
  ptr->reload_time = game.play.tower_list.tower_reload_time[ptr->type];
}

void  check_tower_shoot(struct s_tower *ptr)
{
  tower_shoot(ptr);
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
