/* GENERIC FUNCTIONS */

char  *get_game_time(void);

void  LOAD_rect(SDL_Rect *rect, int x, int y, int w, int h);

void  MENU_change_choice(int *index, int direction, int size);
  void  MENU_next_choice(int *index, int size);
  void  MENU_previous_choice(int *index, int size);

int   POS_check_mouse_in_rect(SDL_Rect rect, SDL_Rect mouse);

void  RENDER_btwn_2_tex(struct s_game *game, SDL_Texture *tex1, SDL_Texture *tex2, SDL_Rect *pos, int is_true);

/* GAME BODY */

void  load_game(struct s_game *game);
  void  load_sdl(void);
  void  load_cursor(struct s_game *game);
  void  load_input(struct s_game *game);
  void  load_main_menu(struct s_game *game);
  void  load_play(struct s_game *game);
    void  load_play_gui(struct s_game *game);
void  play_game(struct s_game *game);
  void  handle_input(struct s_game *game);
  void  handle_event(struct s_game *game);
    void  handle_event_main_menu(struct s_game *game);
      void  handle_event_main_menu_mousemotion(struct s_game *game);
      void  handle_event_main_menu_mousebutton(struct s_game *game);
      void  handle_event_main_menu_key(struct s_game *game);
        void  handle_event_main_menu_key_down(struct s_game *game);
        void  handle_event_main_menu_key_up(struct s_game *game);
    void  handle_event_play(struct s_game *game);
      void  handle_event_play_mousemotion(struct s_game *game);
      void  handle_event_play_mousebutton(struct s_game *game);
      void  handle_event_play_key(struct s_game *game);
    void  handle_event_main_options(struct s_game *game);
    void  handle_event_play(struct s_game *game);
  void  render(struct s_game *game);
    void  render_main_menu(struct s_game *game);
      void  render_main_menu_choice(struct s_game *game);
    void  render_play(struct s_game *game);
  void  wait(struct s_game *game, int ms);
void  close_game(struct s_game *game);
  void  close_cursor(struct s_game *game);
  void  close_main_menu(struct s_game *game);
  void  close_play(struct s_game *game);
    void close_play_gui(struct s_game *game);
  void  close_sdl(void);
