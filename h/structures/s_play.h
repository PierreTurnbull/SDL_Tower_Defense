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
  SDL_Texture         *next_wave_background; // TODO load free
  SDL_Texture         *next_wave_background_hover; // TODO load free
  SDL_Texture         *pause; // TODO load free
  SDL_Texture         *pause_hover; // TODO load free
  SDL_Texture         *options; // TODO load free
  SDL_Texture         *options_hover; // TODO load free
  SDL_Texture         *menu; // TODO load free
  SDL_Texture         *menu_hover; // TODO load free

  SDL_Rect            background_pos;
  SDL_Rect            items_background_pos;
  SDL_Rect            items_category_pos[3];
  SDL_Rect            gold_background_pos;
  SDL_Rect            next_wave_background_pos;
  SDL_Rect            pause_pos;
  SDL_Rect            options_pos;
  SDL_Rect            menu_pos;
};

struct s_play
{
  SDL_Texture         *render;
  SDL_Texture         *background;
  struct s_warzone    warzone;
  struct s_gui        gui;

  SDL_Rect            render_r;
};
