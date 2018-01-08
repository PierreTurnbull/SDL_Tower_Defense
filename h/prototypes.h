/* GENERIC FUNCTIONS */

char  *get_game_time(void);

void  LOAD_rect(SDL_Rect *rect, int x, int y, int w, int h);

void  MENU_change_choice(int *index, int direction, int size);
  void  MENU_next_choice(int *index, int size);
  void  MENU_previous_choice(int *index, int size);

int   POSCHECK_mouse_in_rect(SDL_Rect rect, SDL_Rect mouse);

/* GAME BODY */

void  load_game(struct s_game *game);
  void  load_sdl(void);
  void  load_cursor(struct s_game *game);
  void  load_game_menu(struct s_game *game);
  void  load_game_input(struct s_game *game);
void  close_game(struct s_game *game);
  void  close_cursor(struct s_game *game);
  void  close_game_menu(struct s_game *game);
  void  close_sdl(void);
void  play_game(struct s_game *game);
  void  input_handling(struct s_game *game);
  void  event_handling(struct s_game *game);
    void  event_game_menu(struct s_game *game);
      void  event_game_menu_mousemotion(struct s_game *game);
      void  event_game_menu_mousebutton(struct s_game *game);
      void  event_game_menu_key(struct s_game *game);
        void  event_game_menu_key_down(struct s_game *game);
        void  event_game_menu_key_up(struct s_game *game);
    void  event_game_menuopt(struct s_game *game);
    void  event_game_play(struct s_game *game);
  void  render(struct s_game *game);
    void  render_game_menu(struct s_game *game);
      void  render_game_menu_choice(struct s_game *game);
