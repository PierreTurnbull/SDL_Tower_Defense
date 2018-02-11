/****************************************************************/
/* Included files are sorted by types, then by loading priority */
/* if there is one, then by names                               */
/****************************************************************/

/* STANDARD LIBRARIES */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OTHER LIBRARIES */

#include "SDL.h"
#include "SDL_image.h"

/* STRUCTURE FILES */

#include "../h/structures/s_path.h"
#include "../h/structures/s_target.h"
#include "../h/structures/s_play.h"
#include "../h/structures/s_main_menu.h"
#include "../h/structures/s_main.h"

/* MACRO DEFINITIONS */

#include "../h/defines.h"

/* PROTOTYPES */

#include "../h/prototypes.h"

/* GENERIC C FILES */

#include "../c/_LOAD/LOAD_rect.c"
#include "../c/_MENU/MENU_change_choice.c"
#include "../c/_POS/POS_check_position.c"
#include "../c/_RENDER/RENDER_btwn_2_tex.c"
#include "../c/_TIME/TIME_get_time.c"
#include "../c/_TIME/TIME_wait.c"

/* C FILES */

#include "../c/close/close_game.c"
#include "../c/close/close_main_menu/close_main_menu.c"
#include "../c/close/close_path/close_path.c"
#include "../c/close/close_play/close_play.c"
#include "../c/close/close_target/close_target_all.c"
#include "../c/handle_event/create/create_target.c"
#include "../c/handle_event/handle_event.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu_keydown.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu_keyup.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu_mousebutton.c"
#include "../c/handle_event/handle_event_main_menu/handle_event_main_menu_mousemotion.c"
#include "../c/handle_event/handle_event_main_options/handle_event_main_options.c"
#include "../c/handle_event/handle_event_play/handle_event_play.c"
#include "../c/handle_event/handle_event_play/handle_event_play_keydown.c"
#include "../c/handle_event/handle_event_play/handle_event_play_keyup.c"
#include "../c/handle_event/handle_event_play/handle_event_play_mousebutton.c"
#include "../c/handle_event/handle_event_play/handle_event_play_mousemotion.c"
#include "../c/handle_input.c"
#include "../c/load/load_game.c"
#include "../c/load/load_main_menu/load_main_menu.c"
#include "../c/load/load_path/load_path.c"
#include "../c/load/load_play/load_play.c"
#include "../c/load/load_target/load_target.c"
#include "../c/move_items/move_items.c"
#include "../c/move_items/move_targets/move_targets.c"
#include "../c/play_game.c"
#include "../c/render/render_game.c"
#include "../c/render/render_main_menu/render_main_menu.c"
#include "../c/render/render_play/render_play.c"
#include "../c/render/render_play/render_play_gui/render_play_gui.c"
#include "../c/render/render_play/render_play_warzone/render_play_warzone.c"
