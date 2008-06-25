CC=gcc -Wall -ansi -pedantic

stack: main.o stack.o
	$(CC) -o stack main.o stack.o

main.o: main.c stack.h
	$(CC) -c main.c

stack.o: stack.c stack.h
	$(CC) -c stack.c

