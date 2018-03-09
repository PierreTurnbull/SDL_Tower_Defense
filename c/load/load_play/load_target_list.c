void  load_target_list(void)
{
  game.play.target_list.first                = NULL;
  game.play.target_list.target_tex[0]        = IMG_LoadTexture(game.rend, "img/play/targets/target1.png");
  game.play.target_list.target_tex[1]        = IMG_LoadTexture(game.rend, "img/play/targets/target2.png");
  game.play.target_list.target_tex[2]        = IMG_LoadTexture(game.rend, "img/play/targets/target3.png");
  game.play.target_list.target_size[0]       = TARGET_1_SIZE;
  game.play.target_list.target_size[1]       = TARGET_2_SIZE;
  game.play.target_list.target_size[2]       = TARGET_3_SIZE;
  game.play.target_list.target_move_speed[0] = TARGET_1_MOVE_SPEED;
  game.play.target_list.target_move_speed[1] = TARGET_2_MOVE_SPEED;
  game.play.target_list.target_move_speed[2] = TARGET_3_MOVE_SPEED;
}
