struct s_tower {
  int                 index;
  int                 type;
  struct s_tower      *prev;
  struct s_tower      *next;

  SDL_Rect            pos;
};

struct s_tower_list {
  SDL_Texture         *tower_tex[3];
  struct s_tower      *first;
  int                 tower_size[TOWER_TYPES];
};
