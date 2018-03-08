void  tower_shoot(struct s_tower *tower_ptr, struct s_target *target_ptr, int x, int y)
{
  create_proj(tower_ptr, x, y);
  tower_ptr->reload_time = game.play.tower_list.tower_reload_time[tower_ptr->type];
}

int check_tower_shoot_hits(struct s_tower *tower_ptr, struct s_target *target_ptr, SDL_Rect *aim)
{
  int i;
  struct s_target target_simulation;

  i = 0;
  memcpy(&target_simulation, target_ptr, sizeof(*target_ptr));
  while (VEL_get_distance(TARGET_SIMULATION_X, TOWER_X, TARGET_SIMULATION_Y, TOWER_Y) <=
         game.play.tower_list.tower_range[tower_ptr->type]) {
    if (VEL_get_distance(tower_ptr->pos.x,
                        target_simulation.pos.x,
                        tower_ptr->pos.y,
                        target_simulation.pos.y) <=
        i * game.play.tower_list.tower_proj_speed[tower_ptr->type]) {
          aim->x = target_simulation.pos.x + game.play.target_list.target_size[target_simulation.type] / 2;
          aim->y = target_simulation.pos.y + game.play.target_list.target_size[target_simulation.type] / 2;
          fprintf(stderr, "i = %d\n", i);
          return 1;
        };
    update_target_vel(&target_simulation);
    move_target(&target_simulation);
    i++;
  }
  return 0;
}

void  check_tower_shoot(struct s_tower *tower_ptr)
{
  SDL_Rect aim;
  struct s_target *target_ptr;

  target_ptr = game.play.target_list.first;
  while (target_ptr != NULL) {
    if (!(VEL_get_distance(TARGET_X, TOWER_X, TARGET_Y, TOWER_Y) <=
        game.play.tower_list.tower_range[tower_ptr->type])) {
    } else if (!check_tower_shoot_hits(tower_ptr, target_ptr, &aim)) {
    } else {
      tower_shoot(tower_ptr,
                  target_ptr,
                  aim.x,
                  aim.y);
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
