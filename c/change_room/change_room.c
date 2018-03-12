/*  this file deals with changing the state of the game to pass from a room to
    another. A room is a part of the game. Ex: change_room_main_menu_play()
    makes the changes needed to go to the play part of the game, from the main
    menu */

void  change_room_main_menu_play(void)
{
  game.screen = SCREEN_PLAY;
  load_path("1");
}

void  change_room_main_menu_options(void)
{
  game.screen = SCREEN_MAIN_OPTIONS;
}

void  change_room_play_main_menu(void)
{
  game.play.warzone.base_hp = BASE_HP;
  game.play.gold = 0;
  new_gold_value();
  game.mouse_grab = NULL;
  close_play_target_list();
  close_play_tower_list();
  close_path();
  game.screen = SCREEN_MAIN_MENU;
}
