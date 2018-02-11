void  load_target(struct s_game *game)
{
  game->play.target_list.first      = NULL;
  game->play.target_list.target_tex = IMG_LoadTexture(game->rend, "img/play/target/target.png");
}
