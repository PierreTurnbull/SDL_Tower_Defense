void  reindex_tower(void)
{
  int i;
  struct s_tower *ptr;

  ptr = game.play.tower_list.first;
  i = 0;
  while (ptr != NULL) {
    ptr->index = i;
    ptr = ptr->next;
    i++;
  }
}

struct s_tower  *close_play_tower(struct s_tower *ptr, int mouse_grab_reset)
{
  struct s_tower *prev;
  struct s_tower *next;

  prev = ptr->prev;
  next = ptr->next;
  if (prev == NULL) {
    game.play.tower_list.first = next;
  } else {
    prev->next = next;
  }
  if (next != NULL) {
    next->prev = prev;
  }
  free(ptr);
  reindex_tower();
  if (mouse_grab_reset)
    game.mouse_grab = NULL;
  return next;
}

void  close_play_tower_list(void)
{
  struct s_tower *ptr;

  ptr = game.play.tower_list.first;
  fprintf(stderr, "%s CLOSE_TOWER_ALL\nROOT: %p\n", TIME_get_time(), game.play.tower_list.first);
  while (ptr != NULL) {
    fprintf(stderr, "%d:    %p, type = %d, x = %d, y = %d, prev = %p, next = %p\n", ptr->index, ptr, ptr->type, ptr->pos.x, ptr->pos.y, ptr->prev, ptr->next);
    ptr = ptr->next;
  }
  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    ptr = close_play_tower(ptr, 0);
  }
  fprintf(stderr, "DONE ROOT: %p\n\n", game.play.tower_list.first);
}

void  close_play_tower_all(void)
{
  SDL_DestroyTexture(game.play.tower_list.tower_tex[0]);
  SDL_DestroyTexture(game.play.tower_list.tower_tex[1]);
  SDL_DestroyTexture(game.play.tower_list.tower_tex[2]);
  close_play_tower_list();
}
