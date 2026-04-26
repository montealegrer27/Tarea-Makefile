CC = gcc
CFLAGS = -Wall -Wextra -O2 -Iinclude
TARGET = calculadora
SRC = src/main.c src/operaciones.c
OBJ = $(SRC:.c=.o)

.PHONY: all run clean rebuild

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean all