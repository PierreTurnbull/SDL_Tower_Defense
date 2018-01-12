struct s_input
{
  SDL_bool            quit;

  SDL_bool            key[SDL_NUM_SCANCODES];

  SDL_bool            mouse_btn[3];
  SDL_Rect            mouse_pos;

  int                 timer[SDL_NUM_SCANCODES];
};

struct s_warzone
{
  SDL_Texture         *background; // TODO load free

  SDL_Rect            background_pos; // TODO load
};

struct s_gui
{
  SDL_Texture         *background; // TODO load free

  SDL_Rect            background_pos; // TODO load
};

struct s_play
{
  SDL_Texture         *render;
  SDL_Texture         *background;
  struct s_warzone    warzone;
  struct s_gui        gui;

  SDL_Rect            render_r;
};

struct s_main_menu
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

struct s_game
{
  SDL_Renderer        *rend;
  SDL_Event           event;
  SDL_Window          *wind;
  SDL_Texture         *cursor[3];

  struct s_main_menu  main_menu;
  struct s_play       play;
  struct s_input      input;
  int                 screen;
  int                 current_cursor;
  int                 game_time;
};
