cmake_minimum_required(VERSION 3.9)
project(SDL_Tower_Defense)

set(CMAKE_CXX_STANDARD 11)

add_executable(SDL_Tower_Defense
    main.c)

INCLUDE_DIRECTORIES(/d/SDL2/x32/include)
LINK_DIRECTORIES(/d/SDL2/x32/lib)