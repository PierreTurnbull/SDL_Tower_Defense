void  close_target_all(struct s_game *game)
{
  struct s_target *ptr;
  struct s_target *ptr2;

  ptr = game->play.target_list.first;
  fprintf(stderr, "%s CLOSE_TARGET_ALL\nROOT: %p\n", TIME_get_time(), game->play.target_list.first);
  while (ptr != NULL) {
    fprintf(stderr, "%d:    %p, x = %d, y = %d, prev = %p, next = %p\n", ptr->index, ptr, ptr->pos.x, ptr->pos.y, ptr->prev, ptr->next);
    ptr = ptr->next;
  }
  fprintf(stderr, "\n");
  ptr = game->play.target_list.first;
  game->play.target_list.first = NULL;
  while (ptr != NULL) {
    if (ptr->next != NULL) {
      ptr2 = ptr->next;
    } else {
      ptr2 = NULL;
    }
    free(ptr);
    ptr = ptr2;
  }
  fprintf(stderr, "%s CLOSE_TARGET_ALL\nDONE ROOT: %p\n\n", TIME_get_time(), game->play.target_list.first);
}
