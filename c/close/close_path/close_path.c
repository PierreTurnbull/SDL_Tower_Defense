void  close_path_blocks(struct s_game *game)
{
  struct s_path_block *ptr;
  struct s_path_block *ptr2;

  ptr = game->play.path.first;
  game->play.path.first = NULL;
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

void  close_path(struct s_game *game)
{
  SDL_DestroyTexture(game->play.path.path_block_tex);
  close_path_blocks(game);
  fprintf(stderr, "%s CLOSE_PATH\nROOT: %p\n\n", TIME_get_time(), game->play.path.first);
}
