/************************************************************/
/* Prototypes are sorted by order of appearance in the code */
/************************************************************/

/* GENERIC FUNCTIONS */

void  LOAD_rect(SDL_Rect *rect, int x, int y, int w, int h);

void  MENU_change_choice(int *index, int direction, int size);
  void  MENU_next_choice(int *index, int size);
  void  MENU_previous_choice(int *index, int size);

int   POS_check_mouse_in_rect(SDL_Rect rect, SDL_Rect mouse);

void  RENDER_btwn_2_tex(struct s_game *game, SDL_Texture *tex1, SDL_Texture *tex2, SDL_Rect *pos, int is_true);

char  *TIME_get_time(void);
void  TIME_wait(int *time, int ms);

/* GAME BODY */

void  load_game(struct s_game *game);
  void  load_sdl(void);
  void  load_window(struct s_game *game);
  void  load_cursor(struct s_game *game);
  void  load_input(struct s_game *game);
  void  load_main_menu(struct s_game *game);
  void  load_play(struct s_game *game);
    void  load_play_gui(struct s_game *game);
    void  load_play_warzone(struct s_game *game);
      void  load_path(struct s_game *game, char *which);
        int   load_path_file(FILE **stream, char *which);
        void  load_path_coordinates(struct s_game *game, FILE *stream, float coordinates[256]);
        void  load_path_blocks(struct s_game *game, FILE *stream, float coordinates[256]);
        void  load_path_block(struct s_game *game, int x, int y);
      void  load_target_list(struct s_game *game);
void  play_game(struct s_game *game);
  void  handle_input(struct s_game *game);
  void  handle_event(struct s_game *game);
    void  handle_event_main_menu(struct s_game *game);
      void  handle_event_main_menu_mousemotion(struct s_game *game);
      void  handle_event_main_menu_mousebutton(struct s_game *game);
      void  handle_event_main_menu_keydown(struct s_game *game);
        void  handle_event_main_menu_keydown_down(struct s_game *game);
        void  handle_event_main_menu_keydown_up(struct s_game *game);
        void  handle_event_main_menu_keydown_return(struct s_game *game);
        void  handle_event_main_menu_keydown_escape(struct s_game *game);
      void  handle_event_main_menu_keyup(struct s_game *game);
        void  handle_event_main_menu_keyup_down(struct s_game *game);
        void  handle_event_main_menu_keyup_up(struct s_game *game);
        void  handle_event_main_menu_keyup_return(struct s_game *game);
        void  handle_event_main_menu_keyup_escape(struct s_game *game);
    void  handle_event_play(struct s_game *game);
      void  handle_event_play_mousemotion(struct s_game *game);
      void  handle_event_play_mousebutton(struct s_game *game);
      void  handle_event_play_keydown(struct s_game *game);
        void  handle_event_play_keydown_down(struct s_game *game);
        void  handle_event_play_keydown_up(struct s_game *game);
        void  handle_event_play_keydown_return(struct s_game *game);
        void  handle_event_play_keydown_escape(struct s_game *game);
      void  handle_event_play_keyup(struct s_game *game);
        void  handle_event_play_keyup_down(struct s_game *game);
        void  handle_event_play_keyup_up(struct s_game *game);
        void  handle_event_play_keyup_return(struct s_game *game);
        void  handle_event_play_keyup_escape(struct s_game *game);
    void  handle_event_main_options(struct s_game *game);
    void  create_target(struct s_game *game, int type);
  void  move_items(struct s_game *game);
  void  move_targets(struct s_game *game);
    void  update_target_vel(struct s_game *game, struct s_target *ptr);
      int   compare_sign(float f1, float f2);
    void  move_target(struct s_target *ptr);
  void  render_game(struct s_game *game);
    void  render_main_menu(struct s_game *game);
      void  render_main_menu_choice(struct s_game *game);
    void  render_play(struct s_game *game);
      void  render_play_gui(struct s_game *game);
      void  render_play_warzone(struct s_game *game);
void  close_game(struct s_game *game);
  void  close_cursor(struct s_game *game);
  void  close_main_menu(struct s_game *game);
  void  close_play(struct s_game *game);
    void close_play_gui(struct s_game *game);
    void close_play_warzone(struct s_game *game);
      void  close_path(struct s_game *game);
  void  close_target_all(struct s_game *game);
  void  close_sdl(void);
