CC=gcc -Wall -ansi -pedantic

invent: invent.o readline.o
	$(CC) -o invent invent.o readline.o

invent.o: invent.c readline.o
	$(CC) -c invent.c

readline.o: readline.c readline.h
	$(CC) -c readline.c
