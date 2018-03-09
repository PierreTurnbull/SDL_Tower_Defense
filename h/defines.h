// SCREEN

#define WARZONE_W                       1545
#define WARZONE_H                       1030

#define SCREEN_MAIN_MENU                0
#define SCREEN_MAIN_OPTIONS             1
#define SCREEN_PLAY                     10

// MENU

#define MENU_DOWN                       0
#define MENU_UP                         1

#define MAIN_MENU_BTN_PLAY              0
#define MAIN_MENU_BTN_OPTIONS           1
#define MAIN_MENU_BTN_QUIT              2

// PATH

#define PATH_BLOCK_SIZE                 112
#define PATH_BLOCK_SPEED                24

// PLAY GUI BUTTONS

#define BTN_SELECTED_NONE               -1
#define BTN_SELECTED_CAT1               0
#define BTN_SELECTED_CAT2               1
#define BTN_SELECTED_CAT3               2
#define BTN_SELECTED_WAVE               3
#define BTN_SELECTED_PAUSE              4
#define BTN_SELECTED_OPTIONS            5
#define BTN_SELECTED_MENU               6

// TARGET

#define TARGET_TYPES                    3

#define TARGET_TYPE_1                   0
#define TARGET_TYPE_2                   1
#define TARGET_TYPE_3                   2

#define TARGET_1_SIZE                   76
#define TARGET_2_SIZE                   76
#define TARGET_3_SIZE                   76

#define TARGET_1_MOVE_SPEED             3
#define TARGET_2_MOVE_SPEED             6
#define TARGET_3_MOVE_SPEED             8

// TOWER

#define TOWER_TYPES                     3

#define TOWER_STATES                    1

#define TOWER_STATE_GRAB                0
#define TOWER_STATE_FIX                 1

#define TOWER_STATE_NOT_GRABBED         0
#define TOWER_STATE_GRABBED             1
#define TOWER_STATE_NOT_FIXED           0
#define TOWER_STATE_FIXED               1

#define TOWER_TYPE_1                    0
#define TOWER_TYPE_2                    1
#define TOWER_TYPE_3                    2

#define TOWER_1_SIZE                    100
#define TOWER_2_SIZE                    100
#define TOWER_3_SIZE                    100

#define TOWER_1_RANGE                   200
#define TOWER_2_RANGE                   250
#define TOWER_3_RANGE                   350

#define TOWER_1_DAMAGE                  3
#define TOWER_2_DAMAGE                  6
#define TOWER_3_DAMAGE                  8

#define TOWER_1_PROJ_SIZE               10
#define TOWER_2_PROJ_SIZE               20
#define TOWER_3_PROJ_SIZE               30

#define TOWER_1_PROJ_SPEED              30
#define TOWER_2_PROJ_SPEED              25
#define TOWER_3_PROJ_SPEED              20

#define TOWER_1_RELOAD_TIME             30
#define TOWER_2_RELOAD_TIME             50
#define TOWER_3_RELOAD_TIME             75

// POSITIONS

#define TARGET_X                        (target_ptr->pos.x + game.play.target_list.target_size[target_ptr->type] / 2)
#define TOWER_X                         (tower_ptr->pos.x  + game.play.tower_list.tower_size[tower_ptr->type] / 2)
#define TARGET_SIMULATION_X             (target_simulation.pos.x + game.play.target_list.target_size[target_simulation.type] / 2)

#define TARGET_Y                        (target_ptr->pos.y + game.play.target_list.target_size[target_ptr->type] / 2)
#define TOWER_Y                         (tower_ptr->pos.y  + game.play.tower_list.tower_size[tower_ptr->type] / 2)
#define TARGET_SIMULATION_Y             (target_simulation.pos.y + game.play.target_list.target_size[target_simulation.type] / 2)

// CURSOR

#define CURSOR_NORMAL                   0
#define CURSOR_POINTER                  1
#define CURSOR_DRAG                     2

// MOUSE POSITION

#define CLICK_ON_ITEM_TOWER_1           game.input.mouse_pos.x >= game.play.gui.item_tower_pos[0].x &&\
                                        game.input.mouse_pos.x <= game.play.gui.item_tower_pos[0].x + game.play.gui.item_tower_pos[0].w &&\
                                        game.input.mouse_pos.y >= game.play.gui.item_tower_pos[0].y &&\
                                        game.input.mouse_pos.y <= game.play.gui.item_tower_pos[0].y + game.play.gui.item_tower_pos[0].h
#define CLICK_ON_ITEM_TOWER_2           game.input.mouse_pos.x >= game.play.gui.item_tower_pos[1].x &&\
                                        game.input.mouse_pos.x <= game.play.gui.item_tower_pos[1].x + game.play.gui.item_tower_pos[1].w &&\
                                        game.input.mouse_pos.y >= game.play.gui.item_tower_pos[1].y &&\
                                        game.input.mouse_pos.y <= game.play.gui.item_tower_pos[1].y + game.play.gui.item_tower_pos[1].h
#define CLICK_ON_ITEM_TOWER_3           game.input.mouse_pos.x >= game.play.gui.item_tower_pos[2].x &&\
                                        game.input.mouse_pos.x <= game.play.gui.item_tower_pos[2].x + game.play.gui.item_tower_pos[2].w &&\
                                        game.input.mouse_pos.y >= game.play.gui.item_tower_pos[2].y &&\
                                        game.input.mouse_pos.y <= game.play.gui.item_tower_pos[2].y + game.play.gui.item_tower_pos[2].h
