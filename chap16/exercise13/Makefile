catalog: catalog.o readline.o
	cc -o catalog catalog.o readline.o

catalog.o: catalog.c readline.h
	cc -c catalog.c

readline.o: readline.c readline.h
	cc -c readline.c
