void  handle_event_play_mousebutton_right(void)
{
}

void  handle_event_play_mousebutton_middle(void)
{
}

void  handle_event_play_mousebutton_left(void)
{
}

void  handle_event_play_mousebutton(void)
{
  if (game.input.mouse_btn[0] == SDL_TRUE && game.input.mouse_btn_repeat[0] == SDL_FALSE)
    handle_event_play_mousebutton_left();
  if (game.input.mouse_btn[1] == SDL_TRUE && game.input.mouse_btn_repeat[1] == SDL_FALSE)
    handle_event_play_mousebutton_middle();
  if (game.input.mouse_btn[2] == SDL_TRUE && game.input.mouse_btn_repeat[2] == SDL_FALSE)
    handle_event_play_mousebutton_right();
}
