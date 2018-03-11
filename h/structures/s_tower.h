struct s_proj {
  int                 index;
  float               velx;
  float               vely;
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
  int                 state[TOWER_STATES];
  int                 reload_time;
  struct s_tower      *prev;
  struct s_tower      *next;
  struct s_proj_list  proj_list; // proj = projectile

  SDL_Rect            pos;
  SDL_Rect            range_pos;
};

struct s_tower_list {
  // TOWER

  SDL_Texture         *tower_tex[TOWER_TYPES];
  SDL_Texture         *tower_blocked_tex[TOWER_TYPES];
  SDL_Texture         *tower_range_tex[TOWER_TYPES];
  SDL_Texture         *tower_proj_tex[TOWER_TYPES];
  struct s_tower      *first;
  float               tower_proj_speed[TOWER_TYPES];
  int                 tower_size[TOWER_TYPES];
  int                 tower_range[TOWER_TYPES];
  int                 tower_reload_time[TOWER_TYPES];
  int                 tower_damage[TOWER_TYPES];
  int                 tower_proj_size[TOWER_TYPES];
  int                 tower_shoot_reload[TOWER_TYPES];
  int                 tower_price[TOWER_TYPES];

  // PROJECTILE

  SDL_Texture         *proj_tex[TOWER_TYPES];
};
