void  reindex_proj(struct s_tower *tower_ptr)
{
  int i;
  struct s_proj *ptr;

  ptr = tower_ptr->proj_list.first;
  i = 0;
  while (ptr != NULL) {
    ptr->index = i;
    ptr = ptr->next;
    i++;
  }
}

struct s_proj *close_play_proj(struct s_tower *tower_ptr, struct s_proj *ptr)
{
  struct s_proj *prev;
  struct s_proj *next;

  prev = ptr->prev;
  next = ptr->next;
  if (prev == NULL) {
    tower_ptr->proj_list.first = next;
  } else {
    prev->next = next;
  }
  if (next != NULL) {
    next->prev = prev;
  }
  free(ptr);
  reindex_proj(tower_ptr);
  return next;
}

void  close_play_proj_list(struct s_tower *tower_ptr)
{
  struct s_proj *proj_ptr;

  proj_ptr = tower_ptr->proj_list.first;
  if (PRINT_CLOSE_PLAY_PROJ_LIST)
    fprintf(stderr, "%s CLOSE_PLAY_PROJ_LIST\nROOT: %p for tower %p\n", TIME_get_time(), proj_ptr, tower_ptr);
  while (proj_ptr != NULL) {
    if (PRINT_CLOSE_PLAY_PROJ_LIST)
      fprintf(stderr, "%d:    %p, x = %d, y = %d, prev = %p, next = %p\n", proj_ptr->index, proj_ptr, proj_ptr->pos.x, proj_ptr->pos.y, proj_ptr->prev, proj_ptr->next);
    proj_ptr = proj_ptr->next;
  }
  proj_ptr = tower_ptr->proj_list.first;
  while (proj_ptr != NULL) {
    proj_ptr = close_play_proj(tower_ptr, proj_ptr);
  }
  if (PRINT_CLOSE_PLAY_PROJ_LIST)
    fprintf(stderr, "DONE ROOT: %p\n\n", tower_ptr->proj_list.first);
}

void  close_play_proj_all(void)
{
  struct s_tower *ptr;
  int i;

  for (i = 0; i < TOWER_TYPES; i++) {
    SDL_DestroyTexture(game.play.tower_list.proj_tex[i]);
  }
  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    close_play_proj_list(ptr);
    ptr = ptr->next;
  }
}
