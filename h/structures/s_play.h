struct s_warzone
{
  SDL_Texture         *background; // TODO load free

  SDL_Rect            background_pos; // TODO load
};

struct s_gui
{
  SDL_Texture         *background; // TODO load free
  SDL_Texture         *items_background; // TODO load free
  SDL_Texture         *items_category[3]; // TODO load free
  SDL_Texture         *items_category_hover[3]; // TODO load free
  SDL_Texture         *gold_background; // TODO load free
  SDL_Texture         *next_wave_background[2]; // TODO load free
  SDL_Texture         *pause; // TODO load free
  SDL_Texture         *options; // TODO load free
  SDL_Texture         *menu; // TODO load free

  SDL_Rect            background_pos; // TODO load
  SDL_Rect            items_background_pos; // TODO load
  SDL_Rect            items_category[3]_pos; // TODO load
  SDL_Rect            items_category_hover[3]_pos; // TODO load
  SDL_Rect            gold_background_pos; // TODO load
  SDL_Rect            next_wave_background[2]_pos; // TODO load
  SDL_Rect            pause_pos; // TODO load
  SDL_Rect            options_pos; // TODO load
  SDL_Rect            menu_pos; // TODO load
};

struct s_play
{
  SDL_Texture         *render;
  SDL_Texture         *background;
  struct s_warzone    warzone;
  struct s_gui        gui;

  SDL_Rect            render_r;
};
