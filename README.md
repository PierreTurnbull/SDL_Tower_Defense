# SDL2 Tower Defense

_(On progress)_

## Run program:

``./SDL_Tower_Defense``

Error outputs in ``stderr``

## Tech

- C
- SDL 2.0.7
- SDL_Image 2.0.2

## Features

- input
  - input stored in a custom data structure
  - input translated into ingame events
- game loading
  - libraries loading
  - game's elements, values and textures loading
  - custom cursor
  - path loaded from a .txt file
  - unique static loading for static elements
  - dynamic loading for dynamic elements (malloc)
- game playing
  - main menu
    - buttons for accessing different parts of the program
  - play part
    - main loop with SDL_PollEvent (+ event queue cleaning at the beginning)
    - rendering
      - 2 different zones: warzone and GUI. GUI is above warzone
      - non unique elements such as targets, towers and projectiles dynamically rendered with a template
    - moving
      - elements move at each frame, depending on movement-related data they hold
      - use of maths to calculate velocity on X and Y axis
    - shooting
      - target detection with a system of tower range
      - target movement prediction for towers to shoot where they will be when the projectile arrives, not where they are when the projectile is shot
    - hitboxes handling
      - any object that goes out of the screen is destroyed
      - projectiles hit targets and reduce their HP or kill them if their HP is under 1
      - towers cannot be placed on the path, other towers or the GUI
    - time
      - time control currently set at 60fps
      - time displaying on stderr messages
- game closing
  - unique static closing for static elements
  - dynamic closing for dynamic elements
- game informations
  - use of fprintf and stderr in order to print informations about various elements of the game, customizable via defines.h

**/!\ No responsive availabe yet! Nevertheless, game screen size can be changed at line 47 of `c/load/load_game.c` /!\\**

## File organisation

**Unique files** are stored in the directory `c`. Example: `./c/main.c`

**Category-specific files** are stored in a directory which name corresponds to a category. Example: `./c/render/render.c`.

**Generic files** are stored in a directory which name is written in uppercase with a leading underscore. Their name starts with the category name in uppercase. Example: `./c/_LOAD/LOAD_rect.c`

## Hey!

- If you found a bug, have a suggestion, or if you feel the need for any reason, please write an [issue!](https://github.com/PierreTurnbull/SDL_Tower_Defense/issues)
- If you want to contribute, feel free to fork the project!
