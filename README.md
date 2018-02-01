# SDL2 Tower Defense

## Run program:

``./*.exe``

Error outputs in ``stderr``

## Technologies

- C
- SDL 2.0.7
- SDL_Image 2.0.2

## File organisation

**Generic functions** are stored in a directory which name is written in uppercase with a leading underscore. Their name starts with the category name in uppercase
Example: `./c/_LOAD/LOAD_rect.c`
**Specific themed functions** are stored in a directory which name corresponds to a category.
Example: `./c/render/render.c`.
**Specific unique functions** are stored in the directory `c`
Example: `./c/main.c`
