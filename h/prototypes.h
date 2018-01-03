char  *get_game_time(void);

void  load_game(struct s_game *game);
  void  load_sdl();
void  close_game(struct s_game *game);
  void  close_sdl();
void  play_game(struct s_game *game);
  void  event_handling(struct s_game *game, int which);
    void  event_game_menu(struct s_game *game);
      void  event_game_menu_mousemotion(struct s_game *game);
      void  event_game_menu_mousebuttondown(struct s_game *game);
      void  event_game_menu_keydown(struct s_game *game);
  void  render(struct s_game *game, int which);
    void  render_game_menu(struct s_game *game);
      void  render_game_menu_choice(struct s_game *game);
