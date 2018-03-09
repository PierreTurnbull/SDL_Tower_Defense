### V1
#COMP=gcc
#FLAGS=-Wall -g
#I=-I/d/Program\ Files\ \(x86\)/CodeBlocks/SDL2/x32/include
#L=-L/d/Program\ Files\ \(x86\)/CodeBlocks/SDL2/x32/lib\
	-L/d/Program\ Files\ \(x86\)/CodeBlocks/MinGW/lib
#l=-lmingw32 -lSDL2main -lSDL2 -lSDL2_image

#main: main.c
#	$(COMP) $(FLAGS) main.c $(I) $(L) $(l)


### V2
# IF USING MINGW
# CC="D:/Program Files (x86)/CodeBlocks/MinGW/bin/gcc.exe"
CC=/usr/bin/gcc.exe
FLAGS=-Wall -g
I=-I"D:\SDL2\x32\include"
L1=-L/d/SDL2/x32/lib
L2=-LD:/MinGW/lib
l=-lmingw32 -lSDL2 -lSDL2main -lSDL2_image
l1="D:\MinGW\lib\libmingw32.a"
l2="D:\SDL2\x32\lib\libSDL2main.a"
l3="D:\SDL2\x32\lib\libSDL2.dll.a"
l4="D:\SDL2\x32\lib\libSDL2_image.dll.a"
CFROM="c\main.c"
OBJTO="obj\main.o"
EXETO="SDL Tower Defense.exe"

main: main.o
	$(CC) $(L1) $(L2) -o $(EXETO) $(OBJTO) $(l) $(l1) $(l2) $(l3) $(l4); echo ""; echo "      - BUILD DONE -"; echo ""

main.o: c/main.c
	$(CC) $(FLAGS) $(I) -c $(CFROM) -o $(OBJTO)
