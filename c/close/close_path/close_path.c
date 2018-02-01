void  close_path(struct s_game *game)
{
  SDL_DestroyTexture(game->play.path.path_block_tex);
  // TODO: release pointers of chained list
}
