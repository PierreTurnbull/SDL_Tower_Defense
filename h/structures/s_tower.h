struct s_proj {
  int                 index;
  struct s_proj       *prev;
  struct s_proj       *next;

  SDL_Rect            pos;
};

struct s_proj_list {
  struct s_proj       *first;
};

struct s_tower {
  int                 index;
  int                 type;
  struct s_tower      *prev;
  struct s_tower      *next;
  struct s_proj_list  proj_list; // proj = projectile

  SDL_Rect            pos;
};

struct s_tower_list {
  // TOWER

  SDL_Texture         *tower_tex[TOWER_TYPES];
  struct s_tower      *first;
  int                 tower_size[TOWER_TYPES];
  int                 tower_damage[TOWER_TYPES];
  int                 tower_shoot_speed[TOWER_TYPES];
  int                 tower_shoot_reload[TOWER_TYPES];

  // PROJECTILE

  SDL_Texture         *proj_tex[TOWER_TYPES];
};
