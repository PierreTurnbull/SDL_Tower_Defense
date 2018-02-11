void  close_target_all(struct s_game *game)
{
  struct s_target *ptr;
  struct s_target *ptr2;

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
}
