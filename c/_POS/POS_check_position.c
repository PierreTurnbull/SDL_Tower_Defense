int   POS_check_mouse_in_rect(SDL_Rect rect, SDL_Rect mouse)
{
  return \
    mouse.x > rect.x && \
    mouse.x < rect.x + rect.w && \
    mouse.y > rect.y && \
    mouse.y < rect.y + rect.h;
}
