void  MENU_previous_choice(int *index, int size)
{
  if (*index < size - 1)
    *index += 1;
  else
    *index = 0;
}

void  MENU_next_choice(int *index, int size)
{
  if (*index > 0)
    *index -= 1;
  else
    *index = size - 1;
}

void  MENU_change_choice(int *index, int direction, int size)
{
  if (direction == MENU_DOWN)
    MENU_previous_choice(index, size);
  if (direction == MENU_UP)
    MENU_next_choice(index, size);
}
