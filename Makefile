CC=g++
CFLAGS=-c -Wall
all:
	$(CC) main.c -o packgrade
clean:
	rm -rf packgrade
