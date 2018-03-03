struct s_path_block
{
  int                 index;
  SDL_Rect            pos;
  struct s_path_block *prev;
  struct s_path_block *next;
};

struct s_path
{
  SDL_Texture         *path_block_tex[4];

  struct s_path_block *first;
};
