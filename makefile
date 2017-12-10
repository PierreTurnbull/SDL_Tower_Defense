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
# CC="D:/Program Files (x86)/CodeBlocks/MinGW/bin/mingw32-gcc.exe"
FLAGS=-Wall -g
I=-I"D:/Program Files (x86)/CodeBlocks/SDL2/x32/include"
L1=-L/d/Program\ Files\ \(x86\)/CodeBlocks/SDL2/x32/lib
L2=-L/d/Program\ Files\ \(x86\)/CodeBlocks/MinGW/lib
l=-lmingw32 -lSDL2main -lSDL2 -lSDL2_image
l1="D:\Program Files (x86)\CodeBlocks\MinGW\lib\libmingw32.a"
l2="D:\Program Files (x86)\CodeBlocks\SDL2\x32\lib\libSDL2main.a"
l3="D:\Program Files (x86)\CodeBlocks\SDL2\x32\lib\libSDL2.dll.a"
l4="D:\Program Files (x86)\CodeBlocks\SDL2\x32\lib\libSDL2_image.dll.a"
CFROM="C:\Users\nounoursnoir\Desktop\dev\C\exercices\SDL Tower Defense\main.c"
OBJTO="obj\Debug\main.o"
EXETO="SDL Tower Defense.exe"

main: main.o
	gcc $(L1) $(L2) -o $(EXETO) $(OBJTO) $(l) $(l1) $(l2) $(l3) $(l4)

main.o: main.c
	gcc $(FLAGS) $(I) -c $(CFROM) -o $(OBJTO)
