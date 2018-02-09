void  load_path_block(struct s_game *game, int x, int y)
{
  int i;
  struct s_path_block *new_element = malloc(sizeof(*new_element));
  struct s_path_block *ptr;

  i = 0;
  ptr = game->play.path.first;
  while (ptr != NULL) {
    ptr = ptr->next;
    i++;
  }
  if (i == 0) {
    game->play.path.first = new_element;
    new_element->prev = NULL;
  } else {
    ptr = game->play.path.first;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    new_element->prev = ptr;
    ptr->next = new_element;
  }
  new_element->index = i;
  new_element->pos.x = x;
  new_element->pos.y = y;
  new_element->next  = NULL;
}

void  load_path_blocks(struct s_game *game, FILE *stream, float coordinates[256])
{
  int index;

  index = 0;
  while (coordinates[index] != -1) {
    load_path_block(game, 25 + WARZONE_W * coordinates[index] / 100, 25 + WARZONE_H * coordinates[index + 1] / 100);
    index += 2;
  }
}

void  load_path_coordinates(struct s_game *game, FILE *stream, float coordinates[256])
{
  int index;
  char c;

  index = 0;
  while ((c = fgetc(stream)) != EOF) {
    if (c >= 48 && c <= 57) {
      coordinates[index] = c - 48;
      coordinates[index] *= 10;
      coordinates[index] += fgetc(stream) - 48;
      coordinates[index] *= 10;
      coordinates[index] += fgetc(stream) - 48;
      index++;
    }
  }
  coordinates[index] = -1;
}

int   load_path_file(FILE **stream, char *which)
{
  char file_name[32] = {0};

  strcat(file_name, "path/path");
  strcat(file_name, which);
  strcat(file_name, ".lvl");
  if ((*stream = fopen(file_name, "r+")) == NULL) {
    fprintf(stderr, "%s LOAD_PATH_FILE\nFailed to open file '%s'\n\n", TIME_get_time(), file_name);
    return 1;
  }
  return 0;
}

void  load_path(struct s_game *game, char *which)
{
  FILE *stream = NULL;
  float coordinates[256];

  game->play.path.first = NULL;
  if (load_path_file(&stream, which) != 0) {
    game->screen = SCREEN_MAIN_MENU;
    return;
  }
  load_path_coordinates(game, stream, coordinates);
  fclose(stream);
  load_path_blocks(game, stream, coordinates);
  game->play.path.path_block_tex = IMG_LoadTexture(game->rend, "img/play/path_block.png");
  fprintf(stderr, "ROOT: first = %p\n", game->play.path.first);
  struct s_path_block *ptr;
  ptr = game->play.path.first;
  while (ptr != NULL) {
    fprintf(stderr, "%d:    %p, x = %d, y = %d, prev = %p, next = %p\n", ptr->index, ptr, ptr->pos.x, ptr->pos.y, ptr->prev, ptr->next);
    ptr = ptr->next;
  }
}
