// returns 1 if mouse pointer is in m, else 0
int POS_mouse_in_rect(SDL_Rect m, SDL_Rect r)
{
  return \
    m.x > r.x && \
    m.x < r.x + r.w && \
    m.y > r.y && \
    m.y < r.y + r.h;
}

/*  note: POS_rect_in_rect and POS_rect_in_rect_fully could be factorized in 1
    function, but it would make them slightly slower due to if statements, which
    we do not want since these functions can be called very often in a limited
    time. */

// returns 1 if r1 is partially or fully in r2, else 0
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

// returns 1 if r1 is fully in r2, else 0
int POS_rect_in_rect_fully(SDL_Rect r1, SDL_Rect r2)
{
  return \
  // upper left corner collision
    (r1.x         >= r2.x        && \
    r1.x          <= r2.x + r2.w && \
    r1.y          >= r2.y        && \
    r1.y          <= r2.y + r2.h) && \
  // upper right corner collision
    (r1.x + r1.w  >= r2.x        && \
    r1.x  + r1.w  <= r2.x + r2.w && \
    r1.y          >= r2.y        && \
    r1.y          <= r2.y + r2.h) && \
  // bottom left corner collision
    (r1.x         >= r2.x        && \
    r1.x          <= r2.x + r2.w && \
    r1.y  + r1.h  >= r2.y        && \
    r1.y  + r1.h  <= r2.y + r2.h) && \
  // bottom right corner collision
    (r1.x + r1.w  >= r2.x        && \
    r1.x  + r1.w  <= r2.x + r2.w && \
    r1.y  + r1.h  >= r2.y        && \
    r1.y  + r1.h  <= r2.y + r2.h);
}
