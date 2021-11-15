SRC_PATH=./src/
CC=gcc
CFLAGS = -g -c -I. -I./src/
LDFLAGS = -lm -lGL -lGLU -lGLEW -L/usr/lib -L.
EXE=cadzinho

ifeq ($(OS),Windows_NT)
CFLAGS += -I/usr/include/SDL2
LDFLAGS += `sdl2-config --cflags --libs` -llua
else
CFLAGS += `pkg-config --cflags lua sdl2`
LDFLAGS += `pkg-config --libs lua sdl2`
endif

SRC=$(wildcard $(SRC_PATH)*.c)
OBJ=$(subst ./src, ./obj, $(SRC:.c=.o))

all: $(SRC) $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $@

./obj/%.o: ./src/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -rf run $(OBJ) $(EXE)
