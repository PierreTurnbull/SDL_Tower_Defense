void  check_hitboxes_target_base(void)
{
  struct s_target *target_ptr;

  target_ptr = game.play.target_list.first;
  while (target_ptr != NULL) {
    if (!POS_rect_in_rect(target_ptr->pos, game.play.warzone.background_pos) &&
        target_ptr->next_path_block == NULL) {
      if (PRINT_CHECK_HITBOXES_TARGET_BASE)
        fprintf(stderr, "%s CHECK_HITBOXES_TARGET_BASE\nTarget at index %d (%p) reached the end\n\n", TIME_get_time(), target_ptr->index, target_ptr);
      target_ptr = close_play_target(target_ptr);
    } else {
      target_ptr = target_ptr->next;
    }
  }
}
