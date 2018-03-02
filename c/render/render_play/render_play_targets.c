void  render_play_targets(struct s_game *game)
{
  struct s_target *ptr;

  ptr = game->play.target_list.first;
  while (ptr != NULL) {
    SDL_RenderCopy(game->rend, game->play.target_list.target_tex[ptr->type], NULL, &ptr->pos);
    ptr = ptr->next;
  }
}
