CC=gcc -Wall -ansi -pedantic -g

queue: main.o queue.o
	$(CC) -o queue main.o queue.o

main.o: main.c queue.h
	$(CC) -c main.c

queue.o: queue.c queue.h
	$(CC) -c queue.c
