CC = gcc
CFLAGS = -Wall -Iinclude

all:
	$(CC) src/*c -o bin/app $(CFLAGS)
	
run:
	./bin/app
	
clean:
	rm -f bin/app
