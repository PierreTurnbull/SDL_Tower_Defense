void  render_play_towers(void)
{
  struct s_tower *ptr;

  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    SDL_RenderCopy(game.rend, game.play.tower_list.tower_tex[ptr->type], NULL, &ptr->pos);
    ptr = ptr->next;
  }
}
