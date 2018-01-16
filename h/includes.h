#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>

#include "../h/structures/s_main.h"
#include "../h/prototypes.h"
#include "../h/defines.h"

/* GENERIC FUNCTIONS */

#include "../c/_GAME_TIME/get_game_time.c"
#include "../c/_GAME_TIME/wait.c"

#include "../c/_LOAD/LOAD_rect.c"

#include "../c/_MENU/MENU_change_choice.c"

#include "../c/_POS/POS_check_position.c"

/* GAME BODY */

#include "../c/close_game.c"
#include "../c/handle_event/handle_event.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu_key.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu_mousebutton.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu_mousemotion.c"
#include "../c/handle_event/handle_event_main_options/handle_event_main_options.c"
#include "../c/handle_event/handle_event_play/handle_event_play.c"
#include "../c/handle_input.c"
#include "../c/load/load_game.c"
#include "../c/load/load_main_menu/load_main_menu.c"
#include "../c/load/load_play/load_play.c"
#include "../c/play_game.c"
#include "../c/render/render.c"
#include "../c/render/render_main_menu/render_main_menu.c"
#include "../c/render/render_play/render_play.c"
