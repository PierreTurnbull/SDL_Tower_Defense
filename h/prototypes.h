/************************************************************/
/* Prototypes are sorted by order of appearance in the code */
/************************************************************/

/* GENERIC FUNCTIONS */

void  LOAD_rect(SDL_Rect *rect, int x, int y, int w, int h);

void  MENU_change_choice(int *index, int direction, int size);
  void  MENU_next_choice(int *index, int size);
  void  MENU_previous_choice(int *index, int size);

int   POS_mouse_in_rect(SDL_Rect rect, SDL_Rect mouse);
int   POS_rect_in_rect(SDL_Rect r1, SDL_Rect r2);
int   POS_rect_in_rect_fully(SDL_Rect r1, SDL_Rect r2);

void  RENDER_btwn_2_tex(SDL_Texture *tex1, SDL_Texture *tex2, SDL_Rect *pos, int is_true);

char  *TIME_get_time(void);
void  TIME_wait(int *time, int ms);

int     VEL_get_distance(int x1, int x2, int y1, int y2);
double  VEL_get_vel(int x1, int x2, int y1, int y2, float speed, char axis);

/* GAME BODY */

// LOAD GAME
void  load_game(void);
  void  load_sdl(void);
  void  load_window(void);
  void  load_cursor(void);
  void  load_input(void);
  void  load_main_menu(void);
  void  load_play(void);
    void  load_play_gui(void);
    void  load_play_warzone(void);
      void  load_path(char *which);
        int   load_path_file(FILE **stream, char *which);
        void  load_path_coordinates(FILE *stream, float coordinates[256]);
        void  load_path_blocks(FILE *stream, float coordinates[256]);
        void  load_path_block(int x, int y);
      void  load_target_list(void);
      void  load_tower_list(void);
// PLAY GAME
void  play_game(void);
  // HANDLE INPUT
  void  handle_input(void);
  // HANDLE EVENT
  void  handle_event(void);
    void  handle_event_main_menu(void);
      void  handle_event_main_menu_mousemotion(void);
      void  handle_event_main_menu_mousebutton(void);
      void  handle_event_main_menu_keydown(void);
        void  handle_event_main_menu_keydown_down(void);
        void  handle_event_main_menu_keydown_up(void);
        void  handle_event_main_menu_keydown_return(void);
        void  handle_event_main_menu_keydown_escape(void);
      void  handle_event_main_menu_keyup(void);
        void  handle_event_main_menu_keyup_down(void);
        void  handle_event_main_menu_keyup_up(void);
        void  handle_event_main_menu_keyup_return(void);
        void  handle_event_main_menu_keyup_escape(void);
    void  handle_event_play(void);
      void  handle_event_play_mousemotion(void);
      void  handle_event_play_mousebutton(void);
      void  handle_event_play_keydown(void);
        void  handle_event_play_keydown_down(void);
        void  handle_event_play_keydown_up(void);
        void  handle_event_play_keydown_return(void);
        void  handle_event_play_keydown_escape(void);
      void  handle_event_play_keyup(void);
        void  handle_event_play_keyup_down(void);
        void  handle_event_play_keyup_up(void);
        void  handle_event_play_keyup_return(void);
        void  handle_event_play_keyup_escape(void);
    void  handle_event_main_options(void);
    // TOWERS SHOOT
    void  tower_shoot_all(void);
      void  check_tower_shoot(struct s_tower *tower_ptr);
        void  tower_shoot(struct s_tower *tower_ptr, struct s_target *target_ptr, int x, int y);
    // CREATE
    void  create_target(int type);
      void  append_target(struct s_target *new_target);
        void  fill_target(struct s_target *new_target, int type);
    struct s_tower  *create_tower(int type);
      void  append_tower(struct s_tower *new_tower);
        void  fill_tower(struct s_tower *new_tower, int type);
    void  create_proj(struct s_tower *tower_ptr, int destx, int desty);
      void  append_proj(struct s_tower *tower_ptr, struct s_proj *new_proj);
        void  fill_proj(struct s_tower *tower_ptr, struct s_proj *new_proj, int destx, int desty);
  // MOVE
  void  move_items(void);
    void  move_target_list(void);
      void  update_target_vel(struct s_target *ptr);
        int   compare_sign(float f1, float f2);
      void  move_target(struct s_target *ptr);
    void  move_tower_list(void);
    void  move_proj_all(void);
      void  move_proj_list(struct s_tower *tower_ptr);
  // CHECK HITBOXES
  void  check_hitboxes(void);
    void  check_hitboxes_proj_target(void);
    void  check_hitboxes_proj_wall(void);
    void  check_hitboxes_target_base(void);
    int   check_hitboxes_tower_tower(struct s_tower *ptr);
    int   check_hitboxes_tower_path(struct s_tower *ptr);
  // RENDER
  void  render_game(void);
    void  render_main_menu(void);
      void  render_main_menu_choice(void);
    void  render_play(void);
      void  render_play_warzone(void);
        void  render_play_warzone_path(void);
          void  fill_path_block_simulation(struct s_target *pbs, int size);
      void  render_play_gui(void);
      void  render_play_targets(void);
      void  render_play_towers(void);
      void  render_play_proj_all(void);
        void  render_play_proj(struct s_tower *tower_ptr);
// CLOSE GAME
void  close_game(void);
  void  close_cursor(void);
  void  close_main_menu(void);
  void  close_play(void);
    void  close_play_target_all(void);
      void  close_play_target_list(void);
        struct s_target *close_play_target(struct s_target *ptr);
          void  reindex_target(void);
    void  close_play_tower_all(void);
      void  close_play_tower_list(void);
        struct s_tower  *close_play_tower(struct s_tower *ptr, int mouse_grab_reset);
          void  reindex_tower(void);
    void  close_play_proj_all(void);
      void  close_play_proj_list(struct s_tower *tower_ptr);
        struct s_proj *close_play_proj(struct s_tower *tower_ptr, struct s_proj *ptr);
          void  reindex_proj(struct s_tower *tower_ptr);
    void  close_play_gui(void);
    void  close_play_warzone(void);
      void  close_path(void);
  void  close_sdl(void);
