void  render_play_proj(struct s_tower *tower_ptr)
{
  struct s_proj *ptr;

  ptr = tower_ptr->proj_list.first;
  while (ptr != NULL) {
    SDL_RenderCopy(game.rend, game.play.tower_list.tower_proj_tex[tower_ptr->type], NULL, &ptr->pos);
    ptr = ptr->next;
  }
}

void  render_play_proj_all(void)
{
  struct s_tower *ptr;

  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    render_play_proj(ptr);
    ptr = ptr->next;
  }
}
