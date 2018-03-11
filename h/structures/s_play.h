struct s_warzone
{
  SDL_Texture           *background;
  struct s_path         path;
  int                   base_hp;

  SDL_Rect              background_pos;
};

struct s_gui
{
  TTF_Font              *gold_text;

  SDL_Texture           *background;
  SDL_Texture           *items_background;
  SDL_Texture           *items_category;
  SDL_Texture           *items_category_selected;
  SDL_Texture           *item_tower[TOWER_TYPES];
  SDL_Texture           *gold_background;
  SDL_Texture           *next_wave_background;
  SDL_Texture           *next_wave_background_hover;
  SDL_Texture           *menu_background;
  SDL_Texture           *menu_background_hover;

  SDL_Rect              background_pos;
  SDL_Rect              items_background_pos;
  SDL_Rect              items_category_pos[3];
  SDL_Rect              item_tower_pos[TOWER_TYPES];
  SDL_Rect              gold_background_pos;
  SDL_Rect              next_wave_background_pos;
  SDL_Rect              pause_pos;
  SDL_Rect              options_pos;
  SDL_Rect              menu_pos;

  int                   btn_selected;
};

struct s_play
{
  SDL_Texture           *render;
  SDL_Texture           *background;
  struct s_warzone      warzone;
  struct s_gui          gui;
  struct s_target_list  target_list;
  struct s_tower_list   tower_list;
  int                   gold;

  SDL_Rect              render_r;
};
