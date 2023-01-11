CC = gcc
LDFLAGS = -L. -lRust

all: main

main: main.c
	$(CC) $(CFLAGS) -o main main.c $(LDFLAGS)

clean:
	rm -f main
