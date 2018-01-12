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
