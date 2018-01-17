struct s_input
{
  SDL_bool            quit;

  SDL_bool            key[SDL_NUM_SCANCODES];
  SDL_bool            repeat[SDL_NUM_SCANCODES];
  SDL_bool            mouse_btn[3];

  SDL_Rect            mouse_pos;

  int                 timer[SDL_NUM_SCANCODES];
};

struct s_game
{
  SDL_Renderer        *rend;
  SDL_Event           event;
  SDL_Window          *wind;
  SDL_Texture         *cursor[3];

  struct s_input      input;
  struct s_main_menu  main_menu;
  struct s_play       play;
  int                 screen;
  int                 current_cursor;
  int                 game_time;
};
