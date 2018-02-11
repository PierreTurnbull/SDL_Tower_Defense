struct s_target {
  int index;
  struct s_target *prev;
  struct s_target *next;

  SDL_Rect pos;
};

struct s_target_list {
  SDL_Texture *target_tex;
  struct s_target *first;
};
