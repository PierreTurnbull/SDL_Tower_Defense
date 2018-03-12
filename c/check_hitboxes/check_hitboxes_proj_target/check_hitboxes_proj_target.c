int   target_takes_damage(struct s_target *target_ptr, struct s_tower *tower_ptr)
{
  if (PRINT_TARGET_TAKES_DAMAGE)
    fprintf(stderr, "%s TARGET_TAKES_DAMAGE\nTarget of type %d (%p) has %d / %d hp\nTarget takes %d damage and has %d hp\n",
                    TIME_get_time(),
                    target_ptr->type,
                    target_ptr,
                    target_ptr->hp,
                    game.play.target_list.target_hp[target_ptr->type - 1],
                    game.play.tower_list.tower_damage[tower_ptr->type],
                    target_ptr->hp - game.play.tower_list.tower_damage[tower_ptr->type]);
  target_ptr->hp -= game.play.tower_list.tower_damage[tower_ptr->type];
  if (target_ptr->hp <= 0) {
    if (PRINT_TARGET_TAKES_DAMAGE)
      fprintf(stderr, "Target dies\n\n");
      new_gold_value();
    close_play_target(target_ptr);
    return 1;
  }
  if (PRINT_TARGET_TAKES_DAMAGE)
    fprintf(stderr, "\n");
  return 0;
}

void  proj_hits_target(struct s_tower *tower_ptr, struct s_proj *proj_ptr, struct s_target *target_ptr)
{
  close_play_proj(tower_ptr, proj_ptr);
  // if the following is true, the target was killed
  if (target_takes_damage(target_ptr, tower_ptr)) {
    target_ptr = NULL;
  }
}

void  check_hitboxes_proj_target(void)
{
  struct s_tower  *tower_ptr;
  struct s_proj   *proj_ptr;
  struct s_target *target_ptr;

  tower_ptr = game.play.tower_list.first;
  while (tower_ptr != NULL) {
    target_ptr = game.play.target_list.first;
    while (target_ptr != NULL) {
      proj_ptr = tower_ptr->proj_list.first;
      while (proj_ptr != NULL) {
        if (POS_rect_in_rect(proj_ptr->pos, target_ptr->pos)) {
          proj_hits_target(tower_ptr, proj_ptr, target_ptr);
          break;
        }
        proj_ptr = proj_ptr->next;
      }
      if (target_ptr != NULL) {
        target_ptr = target_ptr->next;
      }
    }
    tower_ptr = tower_ptr->next;
  }
}
