struct s_game_menu
{
  SDL_Texture         *render;
  SDL_Texture         *background;
  SDL_Texture         *choice_btn[3];
  SDL_Texture         *choice_btn_hover[3];

  SDL_Rect            render_r;
  SDL_Rect            choice_btn_r[3];

  int                 choice_selected;
  int                 size;
};

struct s_input
{
  SDL_bool  quit;

  SDL_bool  key[SDL_NUM_SCANCODES];

  SDL_bool  mouse_btn[3];
  SDL_Rect  mouse_pos;

  int       timer[SDL_NUM_SCANCODES];
};

struct s_game
{
  SDL_Renderer        *rend;
  SDL_Event           event;
  SDL_Window          *wind;
  SDL_Texture         *cursor[3];

  struct s_game_menu  game_menu;
  struct s_input      input;
  int                 screen;
  int                 current_cursor;
};
