void  load_path_block(int x, int y)
{
  int i;
  struct s_path_block *new_path_block = malloc(sizeof(*new_path_block));
  struct s_path_block *ptr;

  i = 0;
  ptr = game.play.warzone.path.first;
  while (ptr != NULL) {
    ptr = ptr->next;
    i++;
  }
  if (i == 0) {
    game.play.warzone.path.first = new_path_block;
    new_path_block->prev = NULL;
  } else {
    ptr = game.play.warzone.path.first;
    while (ptr->next != NULL) {
      ptr = ptr->next;
    }
    new_path_block->prev = ptr;
    ptr->next = new_path_block;
  }
  new_path_block->index = i;
  new_path_block->pos.x = x;
  new_path_block->pos.y = y;
  new_path_block->next  = NULL;
}

void  load_path_blocks(FILE *stream, float coordinates[256])
{
  int index;

  index = 0;
  while (coordinates[index] != -1) {
    load_path_block(25 + WARZONE_W * coordinates[index] / 100, 25 + WARZONE_H * coordinates[index + 1] / 100);
    index += 2;
  }
}

void  load_path_coordinates(FILE *stream, float coordinates[256])
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
    if (PRINT_LOAD_PATH)
      fprintf(stderr, "%s LOAD_PATH_FILE\nFailed to open file '%s'\n\n", TIME_get_time(), file_name);
    return 1;
  }
  return 0;
}

void  load_path(char *which)
{
  struct s_path_block *ptr;
  FILE *stream = NULL;
  float coordinates[256];

  game.play.warzone.path.first = NULL;
  if (load_path_file(&stream, which) != 0) {
    change_room_play_main_menu();
    return;
  }
  load_path_coordinates(stream, coordinates);
  fclose(stream);
  load_path_blocks(stream, coordinates);
  game.play.warzone.path.path_block_tex[0] = IMG_LoadTexture(game.rend, "img/play/path_block1.png");
  game.play.warzone.path.path_block_tex[1] = IMG_LoadTexture(game.rend, "img/play/path_block2.png");
  game.play.warzone.path.path_block_tex[2] = IMG_LoadTexture(game.rend, "img/play/path_block3.png");
  game.play.warzone.path.path_block_tex[3] = IMG_LoadTexture(game.rend, "img/play/path_block4.png");
  ptr = game.play.warzone.path.first;
  if (PRINT_LOAD_PATH)
    fprintf(stderr, "%s LOAD_PATH\nROOT: %p\n", TIME_get_time(), game.play.warzone.path.first);
  while (ptr != NULL) {
    if (PRINT_LOAD_PATH)
  fprintf(stderr, "%d:    %p, x = %d, y = %d, prev = %p, next = %p\n", ptr->index, ptr, ptr->pos.x, ptr->pos.y, ptr->prev, ptr->next);
    ptr = ptr->next;
  }
  if (PRINT_LOAD_PATH)
    fprintf(stderr, "\n");
}
