void  check_hitboxes_proj_wall(void)
{
  struct s_tower  *tower_ptr;
  struct s_proj   *proj_ptr;

  tower_ptr = game.play.tower_list.first;
  while (tower_ptr != NULL) {
    proj_ptr = tower_ptr->proj_list.first;
    while (proj_ptr != NULL) {
      if (!POS_rect_in_rect_fully(proj_ptr->pos, game.play.warzone.background_pos)) {
        if (PRINT_CHECK_HITBOXES_PROJ_WALL)
          fprintf(stderr, "%s CHECK_HITBOXES_PROJ_WALL\nProj at index %d (%p) hits the wall\n\n", TIME_get_time(), proj_ptr->index, proj_ptr);
        proj_ptr = close_play_proj(tower_ptr, proj_ptr);
      } else {
        proj_ptr = proj_ptr->next;
      }
    }
    tower_ptr = tower_ptr->next;
  }
}
