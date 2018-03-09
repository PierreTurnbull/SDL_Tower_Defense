int POS_mouse_in_rect(SDL_Rect r, SDL_Rect m)
{
  return \
    m.x > r.x && \
    m.x < r.x + r.w && \
    m.y > r.y && \
    m.y < r.y + r.h;
}

int POS_rect_in_rect(SDL_Rect r1, SDL_Rect r2)
{
  return \
  // upper left corner collision
    (r1.x         >= r2.x        && \
    r1.x          <= r2.x + r2.w && \
    r1.y          >= r2.y        && \
    r1.y          <= r2.y + r2.h) || \
  // upper right corner collision
    (r1.x + r1.w  >= r2.x        && \
    r1.x  + r1.w  <= r2.x + r2.w && \
    r1.y          >= r2.y        && \
    r1.y          <= r2.y + r2.h) || \
  // bottom left corner collision
    (r1.x         >= r2.x        && \
    r1.x          <= r2.x + r2.w && \
    r1.y  + r1.h  >= r2.y        && \
    r1.y  + r1.h  <= r2.y + r2.h) || \
  // bottom right corner collision
    (r1.x + r1.w  >= r2.x        && \
    r1.x  + r1.w  <= r2.x + r2.w && \
    r1.y  + r1.h  >= r2.y        && \
    r1.y  + r1.h  <= r2.y + r2.h);
}
