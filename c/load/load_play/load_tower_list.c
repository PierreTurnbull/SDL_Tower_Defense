void  load_tower_list(void)
{
  // TOWER

  game.play.tower_list.first                 = NULL;
  game.play.tower_list.tower_tex[0]          = IMG_LoadTexture(game.rend, "img/play/towers/tower1.png");
  game.play.tower_list.tower_tex[1]          = IMG_LoadTexture(game.rend, "img/play/towers/tower2.png");
  game.play.tower_list.tower_tex[2]          = IMG_LoadTexture(game.rend, "img/play/towers/tower3.png");
  game.play.tower_list.tower_blocked_tex[0]  = IMG_LoadTexture(game.rend, "img/play/towers/tower_blocked1.png");
  game.play.tower_list.tower_blocked_tex[1]  = IMG_LoadTexture(game.rend, "img/play/towers/tower_blocked2.png");
  game.play.tower_list.tower_blocked_tex[2]  = IMG_LoadTexture(game.rend, "img/play/towers/tower_blocked3.png");
  game.play.tower_list.tower_size[0]         = TOWER_1_SIZE;
  game.play.tower_list.tower_size[1]         = TOWER_2_SIZE;
  game.play.tower_list.tower_size[2]         = TOWER_3_SIZE;
  game.play.tower_list.tower_damage[0]       = TOWER_1_DAMAGE;
  game.play.tower_list.tower_damage[1]       = TOWER_2_DAMAGE;
  game.play.tower_list.tower_damage[2]       = TOWER_3_DAMAGE;
  game.play.tower_list.tower_shoot_speed[0]  = TOWER_1_SHOOT_SPEED;
  game.play.tower_list.tower_shoot_speed[1]  = TOWER_2_SHOOT_SPEED;
  game.play.tower_list.tower_shoot_speed[2]  = TOWER_3_SHOOT_SPEED;
  game.play.tower_list.tower_shoot_reload[0] = TOWER_1_SHOOT_RELOAD;
  game.play.tower_list.tower_shoot_reload[1] = TOWER_2_SHOOT_RELOAD;
  game.play.tower_list.tower_shoot_reload[2] = TOWER_3_SHOOT_RELOAD;

  // PROJECTILE

  game.play.tower_list.proj_tex[0]           = IMG_LoadTexture(game.rend, "img/play/towers/projectiles/projectile1.png");
  game.play.tower_list.proj_tex[1]           = IMG_LoadTexture(game.rend, "img/play/towers/projectiles/projectile2.png");
  game.play.tower_list.proj_tex[2]           = IMG_LoadTexture(game.rend, "img/play/towers/projectiles/projectile3.png");
}
