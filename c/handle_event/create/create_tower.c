void  fill_tower(struct s_tower *new_tower, int type)
{
  new_tower->type               = type;
  new_tower->pos.x              = new_tower->index * 100 + 200;
  new_tower->pos.y              = new_tower->index * 100 + 200;
  new_tower->pos.w              = game.play.tower_list.tower_size[type];
  new_tower->pos.h              = game.play.tower_list.tower_size[type];
}

void  append_tower(struct s_tower *new_tower)
{
  struct s_tower *ptr;
  int i;

  i = 0;
  ptr = game.play.tower_list.first;
  while (ptr != NULL) {
    ptr = ptr->next;
    i++;
  }
  if (i == 0) {
    game.play.tower_list.first = new_tower;
    new_tower->prev = NULL;
  } else {
    ptr = game.play.tower_list.first;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    new_tower->prev = ptr;
    ptr->next = new_tower;
  }
  new_tower->index = i;
  new_tower->next  = NULL;
}

void  create_tower(int type)
{
  struct s_tower *new_tower = malloc(sizeof(*new_tower));

  append_tower(new_tower);
  fill_tower(new_tower, type);
  fprintf(stderr, "%s CREATE_TOWER\n%p\nindex           = %d\ntype            = %d\npos             = x%d y%d\nprev            = %p\nnext            = %p\n\n", TIME_get_time(), new_tower, new_tower->index, new_tower->type, new_tower->pos.x, new_tower->pos.y, new_tower->prev, new_tower->next);
}
