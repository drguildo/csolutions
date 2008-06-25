#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[]) {
    FILE *in, *out;
    int ch;

    if(argc != 3) {
        fprintf(stderr, "usage: %s input_file output_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((in = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((out = fopen(argv[2], "w")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(in)) != EOF) {
        putc(ch ^ KEY, out);
    }

    return 0;
}
