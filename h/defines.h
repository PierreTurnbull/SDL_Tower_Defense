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

#define TOWER_1_DAMAGE                  3
#define TOWER_2_DAMAGE                  6
#define TOWER_3_DAMAGE                  8

#define TOWER_1_SHOOT_SPEED             3
#define TOWER_2_SHOOT_SPEED             6
#define TOWER_3_SHOOT_SPEED             8

#define TOWER_1_SHOOT_RELOAD            3
#define TOWER_2_SHOOT_RELOAD            6
#define TOWER_3_SHOOT_RELOAD            8

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
#define CLICK_ON_WARZONE_WITH_GRAB      game.mouse_grab->pos.x >= 25 &&\
                                        game.mouse_grab->pos.x + game.play.tower_list.tower_size[game.mouse_grab->type] <= 25 + WARZONE_W &&\
                                        game.mouse_grab->pos.y >= 25 &&\
                                        game.mouse_grab->pos.y + game.play.tower_list.tower_size[game.mouse_grab->type] <= 25 + WARZONE_H

// HITBOXES

#define HITBOX_TOWER_HIT_TOWER          (HITBOX_TOWER_HIT_TOWER_CORNER_1 ||\
                                        HITBOX_TOWER_HIT_TOWER_CORNER_2 ||\
                                        HITBOX_TOWER_HIT_TOWER_CORNER_3 ||\
                                        HITBOX_TOWER_HIT_TOWER_CORNER_4)

#define HITBOX_TOWER_HIT_TOWER_CORNER_1 (ptr->pos.x >= ptr2->pos.x &&\
                                        ptr->pos.x <= ptr2->pos.x + game.play.tower_list.tower_size[ptr2->type] &&\
                                        ptr->pos.y >= ptr2->pos.y &&\
                                        ptr->pos.y <= ptr2->pos.y + game.play.tower_list.tower_size[ptr2->type])
#define HITBOX_TOWER_HIT_TOWER_CORNER_2 (ptr->pos.x + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.x &&\
                                        ptr->pos.x + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.x + game.play.tower_list.tower_size[ptr2->type] &&\
                                        ptr->pos.y >= ptr2->pos.y &&\
                                        ptr->pos.y <= ptr2->pos.y + game.play.tower_list.tower_size[ptr2->type])
#define HITBOX_TOWER_HIT_TOWER_CORNER_3 (ptr->pos.x >= ptr2->pos.x &&\
                                        ptr->pos.x <= ptr2->pos.x + game.play.tower_list.tower_size[ptr2->type] &&\
                                        ptr->pos.y + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.y &&\
                                        ptr->pos.y + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.y + game.play.tower_list.tower_size[ptr2->type])
#define HITBOX_TOWER_HIT_TOWER_CORNER_4 (ptr->pos.x + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.x &&\
                                        ptr->pos.x + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.x + game.play.tower_list.tower_size[ptr2->type] &&\
                                        ptr->pos.y + game.play.tower_list.tower_size[ptr->type] >= ptr2->pos.y &&\
                                        ptr->pos.y + game.play.tower_list.tower_size[ptr->type] <= ptr2->pos.y + game.play.tower_list.tower_size[ptr2->type])

// PLAY GUI BUTTONS

#define BTN_SELECTED_NONE               -1
#define BTN_SELECTED_CAT1               0
#define BTN_SELECTED_CAT2               1
#define BTN_SELECTED_CAT3               2
#define BTN_SELECTED_WAVE               3
#define BTN_SELECTED_PAUSE              4
#define BTN_SELECTED_OPTIONS            5
#define BTN_SELECTED_MENU               6
