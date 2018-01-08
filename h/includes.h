#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <SDL_image.h>

#include "../h/structures.h"
#include "../h/prototypes.h"
#include "../h/defines.h"

#include "../c/close_game.c"
#include "../c/event_handling.c"
#include "../c/event_game_menu.c"
#include "../c/event_game_menu_key.c"
#include "../c/event_game_menu_mousebutton.c"
#include "../c/event_game_menu_mousemotion.c"
#include "../c/event_game_menuopt.c"
#include "../c/event_game_play.c"
#include "../c/game_time.c"
#include "../c/input_handling.c"
#include "../c/load_game.c"
#include "../c/play_game.c"
#include "../c/render.c"
#include "../c/render_game_menu.c"

#include "../c/LOAD/LOAD_rect.c"

#include "../c/MENU/MENU_change_choice.c"

#include "../c/POSCHECK/POSCHECK.c"
