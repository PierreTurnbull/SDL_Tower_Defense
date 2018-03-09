void  reindex_target(void)
{
  int i;
  struct s_target *ptr;

  ptr = game.play.target_list.first;
  i = 0;
  while (ptr != NULL) {
    ptr->index = i;
    ptr = ptr->next;
    i++;
  }
}

struct s_target *close_play_target(struct s_target *ptr)
{
  struct s_target *prev;
  struct s_target *next;

  prev = ptr->prev;
  next = ptr->next;
  if (prev == NULL) {
    game.play.target_list.first = next;
  } else {
    prev->next = next;
  }
  if (next != NULL) {
    next->prev = prev;
  }
  free(ptr);
  reindex_target();
  return next;
}

void  close_play_target_list(void)
{
  struct s_target *ptr;

  ptr = game.play.target_list.first;
  fprintf(stderr, "%s CLOSE_TARGET_ALL\nROOT: %p\n", TIME_get_time(), game.play.target_list.first);
  while (ptr != NULL) {
    fprintf(stderr, "%d:    %p, type = %d, x = %d, y = %d, prev = %p, next = %p\n", ptr->index, ptr, ptr->type, ptr->pos.x, ptr->pos.y, ptr->prev, ptr->next);
    ptr = ptr->next;
  }
  ptr = game.play.target_list.first;
  while (ptr != NULL) {
    ptr = close_play_target(ptr);
  }
  fprintf(stderr, "DONE ROOT: %p\n\n", game.play.target_list.first);
}

void  close_play_target_all(void)
{
  SDL_DestroyTexture(game.play.target_list.target_tex[0]);
  SDL_DestroyTexture(game.play.target_list.target_tex[1]);
  SDL_DestroyTexture(game.play.target_list.target_tex[2]);
  close_play_target_list();
}
