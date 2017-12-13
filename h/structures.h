struct s_game_menu
{
  SDL_Texture *render;
  SDL_Texture *background;
  SDL_Texture *choice_btn[3];

  SDL_Rect    render_r;
  SDL_Rect    choice_btn_r[3];
};

struct s_game
{
  SDL_Window    *wind;
  SDL_Renderer  *rend;

  struct s_game_menu  *game_menu;
};
