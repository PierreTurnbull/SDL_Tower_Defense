struct s_target *base_takes_damage(struct s_target *target_ptr)
{
  if (PRINT_BASE_TAKES_DAMAGE)
    fprintf(stderr, "%s BASE_TAKES_DAMAGE\nBase has %dhp\nTarget hits base with %d damage\nBase has %dhp\n",
                    TIME_get_time(),
                    game.play.warzone.base_hp,
                    game.play.target_list.target_damage[target_ptr->type - 1],
                    game.play.warzone.base_hp - game.play.target_list.target_damage[target_ptr->type - 1]);
    game.play.warzone.base_hp -= game.play.target_list.target_damage[target_ptr->type - 1];
  target_ptr = close_play_target(target_ptr);
  if (game.play.warzone.base_hp <= 0) {
    if (PRINT_BASE_TAKES_DAMAGE)
      fprintf(stderr, "Base dies\n\n");
    game.play.warzone.base_hp = BASE_HP;
    game.mouse_grab = NULL;
    close_play_target_list();
    close_play_tower_list();
    close_path();
    game.screen = SCREEN_MAIN_MENU;
    return NULL;
  }
  if (PRINT_BASE_TAKES_DAMAGE)
    fprintf(stderr, "\n");
  return target_ptr;
}

void  check_hitboxes_target_base(void)
{
  struct s_target *target_ptr;

  target_ptr = game.play.target_list.first;
  while (target_ptr != NULL) {
    if (!POS_rect_in_rect(target_ptr->pos, game.play.warzone.background_pos) &&
        target_ptr->next_path_block == NULL) {
      if (PRINT_CHECK_HITBOXES_TARGET_BASE)
        fprintf(stderr, "%s CHECK_HITBOXES_TARGET_BASE\nTarget at index %d (%p) reached the end\n\n", TIME_get_time(), target_ptr->index, target_ptr);
        target_ptr = base_takes_damage(target_ptr);
    } else {
      target_ptr = target_ptr->next;
    }
  }
}
