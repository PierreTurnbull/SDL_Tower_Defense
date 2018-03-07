void  fill_proj(struct s_tower *tower_ptr, struct s_proj *new_proj)
{
  new_proj->pos.w = game.play.tower_list.tower_proj_size[tower_ptr->type];
  new_proj->pos.h = game.play.tower_list.tower_proj_size[tower_ptr->type];
  new_proj->pos.x = tower_ptr->pos.x + tower_ptr->pos.w / 2 - new_proj->pos.w / 2;
  new_proj->pos.y = tower_ptr->pos.y + tower_ptr->pos.h / 2 - new_proj->pos.h / 2;
  new_proj->velx  = game.play.tower_list.tower_proj_speed[tower_ptr->type];
  new_proj->vely  = 0;
}

void  append_proj(struct s_tower *tower_ptr, struct s_proj *new_proj)
{
  struct s_proj *ptr;

  int i;

  i = 0;
  ptr = tower_ptr->proj_list.first;
  while (ptr != NULL) {
    ptr = ptr->next;
    i++;
  }
  if (i == 0) {
    tower_ptr->proj_list.first = new_proj;
    new_proj->prev = NULL;
  } else {
    ptr = tower_ptr->proj_list.first;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    new_proj->prev = ptr;
    ptr->next = new_proj;
  }
  new_proj->index = i;
  new_proj->next  = NULL;
}

void  create_proj(struct s_tower *tower_ptr)
{
  struct s_proj *new_proj = malloc(sizeof(*new_proj));

  append_proj(tower_ptr, new_proj);
  fill_proj(tower_ptr, new_proj);
  fprintf(stderr, "%s CREATE_PROJ\n%p\nindex           = %d\npos             = x%d y%d\nprev            = %p\nnext            = %p\n\n", TIME_get_time(), new_proj, new_proj->index, new_proj->pos.x, new_proj->pos.y, new_proj->prev, new_proj->next);
}
