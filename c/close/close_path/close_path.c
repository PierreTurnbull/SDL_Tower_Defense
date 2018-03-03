void  close_path_blocks(void)
{
  struct s_path_block *ptr;
  struct s_path_block *ptr2;

  ptr = game.play.warzone.path.first;
  game.play.warzone.path.first = NULL;
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

void  close_path(void)
{
  struct s_path_block *ptr;

  ptr = game.play.warzone.path.first;
  fprintf(stderr, "%s CLOSE_PATH\nROOT: %p\n", TIME_get_time(), game.play.warzone.path.first);
  while (ptr != NULL) {
    fprintf(stderr, "%d:    %p, x = %d, y = %d, prev = %p, next = %p\n", ptr->index, ptr, ptr->pos.x, ptr->pos.y, ptr->prev, ptr->next);
    ptr = ptr->next;
  }
  fprintf(stderr, "\n");
  SDL_DestroyTexture(game.play.warzone.path.path_block_tex[0]);
  SDL_DestroyTexture(game.play.warzone.path.path_block_tex[1]);
  SDL_DestroyTexture(game.play.warzone.path.path_block_tex[2]);
  SDL_DestroyTexture(game.play.warzone.path.path_block_tex[3]);
  close_path_blocks();
  fprintf(stderr, "%s CLOSE_PATH\nDONE ROOT: %p\n\n", TIME_get_time(), game.play.warzone.path.first);
}
