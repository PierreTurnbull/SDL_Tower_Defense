void  RENDER_btwn_2_tex(SDL_Texture *tex1, SDL_Texture *tex2, SDL_Rect *pos, int is_true)
{
  if (is_true)
    SDL_RenderCopy(game.rend, tex2, NULL, pos);
  else if (tex2 != NULL)
    SDL_RenderCopy(game.rend, tex1, NULL, pos);
}
