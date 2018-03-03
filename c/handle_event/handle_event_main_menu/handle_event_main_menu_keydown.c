void  handle_event_main_menu_keydown_escape(void)
{
  if (game.input.repeat[SDL_SCANCODE_ESCAPE] == SDL_FALSE)
    game.input.quit = SDL_TRUE;
}

void  handle_event_main_menu_keydown_return(void)
{
  if (game.input.repeat[SDL_SCANCODE_RETURN] == SDL_TRUE)
    return;
  if (game.main_menu.choice_selected == MAIN_MENU_BTN_PLAY) {
    game.screen = SCREEN_PLAY;
    load_path("1");
  }
  if (game.main_menu.choice_selected == MAIN_MENU_BTN_OPTIONS)
    game.screen = SCREEN_MAIN_OPTIONS;
  if (game.main_menu.choice_selected == MAIN_MENU_BTN_QUIT)
    game.input.quit = SDL_TRUE;
}

void  handle_event_main_menu_keydown_up(void)
{
  if (game.input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    return;
  else if (game.input.key[SDL_SCANCODE_UP] == SDL_TRUE && game.input.timer[SDL_SCANCODE_UP] == 0)
  {
    game.input.timer[SDL_SCANCODE_UP] = SDL_GetTicks() + 200;
    MENU_change_choice(&game.main_menu.choice_selected, MENU_UP, game.main_menu.size);
  }
  else if (game.input.key[SDL_SCANCODE_UP] == SDL_TRUE && game.input.timer[SDL_SCANCODE_UP] + 80 < SDL_GetTicks())
  {
    game.input.timer[SDL_SCANCODE_UP] = SDL_GetTicks();
    MENU_change_choice(&game.main_menu.choice_selected, MENU_UP, game.main_menu.size);
  }
}

void  handle_event_main_menu_keydown_down(void)
{
  if (game.input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    return;
  else if (game.input.key[SDL_SCANCODE_DOWN] == SDL_TRUE && game.input.timer[SDL_SCANCODE_DOWN] == 0)
  {
    game.input.timer[SDL_SCANCODE_DOWN] = SDL_GetTicks() + 200;
    MENU_change_choice(&game.main_menu.choice_selected, MENU_DOWN, game.main_menu.size);
  }
  else if (game.input.key[SDL_SCANCODE_DOWN] == SDL_TRUE && game.input.timer[SDL_SCANCODE_DOWN] + 80 < SDL_GetTicks())
  {
    game.input.timer[SDL_SCANCODE_DOWN] = SDL_GetTicks();
    MENU_change_choice(&game.main_menu.choice_selected, MENU_DOWN, game.main_menu.size);
  }
}

void  handle_event_main_menu_keydown(void)
{
  if (game.input.key[SDL_SCANCODE_DOWN] == SDL_TRUE)
    handle_event_main_menu_keydown_down();
  if (game.input.key[SDL_SCANCODE_UP] == SDL_TRUE)
    handle_event_main_menu_keydown_up();
  if (game.input.key[SDL_SCANCODE_RETURN] == SDL_TRUE)
    handle_event_main_menu_keydown_return();
  if (game.input.key[SDL_SCANCODE_ESCAPE] == SDL_TRUE)
    handle_event_main_menu_keydown_escape();
}
