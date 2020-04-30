g = g++
CFLAGS = -Wall -Werror -MP -MMD

.PHONY: clean run all

all: ./bin/chess.exe

-include build/*.d

./bin/chess.exe: ./build/main.o ./build/printChess.o ./build/moveP.o
	$(g) $(CFLAGS) -o ./bin/chess.exe ./build/main.o ./build/moveP.o ./build/printChess.o -lm

./build/main.o: ./src/main.c ./src/head.h
	$(g) $(CFLAGS) -o build/main.o -c src/main.c -lm

./build/printChess.o: ./src/printChess.c ./src/head.h
	$(g) $(CFLAGS) -o ./build/printChess.o -c ./src/printChess.c -lm

./build/moveP.o: ./src/moveP.c ./src/head.h
	$(g) $(CFLAGS) -o ./build/moveP.o -c ./src/moveP.c -lm

clean:
	rm -rf build/*.o build/*.d

run:
	./bin/chess.exe
