void  handle_event_main_menu_keyup_escape(void)
{}

void  handle_event_main_menu_keyup_return(void)
{}

void  handle_event_main_menu_keyup_up(void)
{}

void  handle_event_main_menu_keyup_down(void)
{}

void  handle_event_main_menu_keyup(void)
{
  if (game.input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    game.input.quit = SDL_TRUE;
  if (game.input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    handle_event_main_menu_keyup_down();
  if (game.input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    handle_event_main_menu_keyup_up();
  if (game.input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    handle_event_main_menu_keyup_return();
}
