double  VEL_get_vel(int x1, int x2, int y1, int y2, float speed, char axis)
{
  int direction;

  if        (axis == 'x') {
    direction = (x1 - x2);
  } else if (axis == 'y') {
    direction = (y1 - y2);
  } else {
    return 0;
  }
  return (double)direction * speed / sqrt((x1 - x2) *
                                          (x1 - x2) +
                                          (y1 - y2) *
                                          (y1 - y2));
}
