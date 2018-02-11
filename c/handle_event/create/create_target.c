void  create_target(struct s_game *game)
{
  int i;
  struct s_target *new_target = malloc(sizeof(*new_target));
  struct s_target *ptr;

  i = 0;
  ptr = game->play.target_list.first;
  while (ptr != NULL) {
    ptr = ptr->next;
    i++;
  }
  if (i == 0) {
    game->play.target_list.first = new_target;
    new_target->prev = NULL;
  } else {
    ptr = game->play.target_list.first;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    new_target->prev = ptr;
    ptr->next = new_target;
  }
  new_target->index = i;
  new_target->pos.x = game->play.path.first->pos.x;
  new_target->pos.y = game->play.path.first->pos.y;
  new_target->next  = NULL;
}
