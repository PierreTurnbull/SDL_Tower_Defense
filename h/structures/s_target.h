struct s_target {
  int                 index;
  float               move_speed;
  float               velx;
  float               vely;
  float               pos_float_x;
  float               pos_float_y;
  struct s_target     *prev;
  struct s_target     *next;
  struct s_path_block *next_path_block;

  SDL_Rect            pos;
};

struct s_target_list {
  SDL_Texture         *target_tex;
  struct s_target     *first;
};