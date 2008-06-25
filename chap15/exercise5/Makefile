fmt: fmt.o word.o line.o
	cc -lm -o fmt fmt.o word.o line.o

fmt.o: fmt.c word.h line.h
	cc -c fmt.c

word.o: word.c word.h
	cc -c word.c

line.o: line.c line.h
	cc -c line.c

