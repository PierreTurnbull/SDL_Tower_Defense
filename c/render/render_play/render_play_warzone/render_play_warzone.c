void  render_play_targets(struct s_game *game)
{
  struct s_target *ptr;

  ptr = game->play.target_list.first;
  while (ptr != NULL) {
    SDL_RenderCopy(game->rend, game->play.target_list.target_tex, NULL, &ptr->pos);
    ptr = ptr->next;
  }
}

void  render_play_warzone(struct s_game *game)
{
  struct s_warzone *warzone = &game->play.warzone;

  SDL_RenderCopy(game->rend, warzone->background, NULL, &warzone->background_pos);
  render_play_targets(game);
}
