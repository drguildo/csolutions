#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *filename = NULL;
    FILE *in, *out;
    int count, ch;

    if(argc != 2) {
        fprintf(stderr, "usage: %s compressed-file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (sscanf(argv[1], "%*[^.]%*[.]") == EOF) {
        filename = malloc(strlen(argv[1]) + 5);
        strcpy(filename, argv[1]);
        strcat(filename, ".rle");
    } else {
        filename = argv[1];
    }

    if ((in = fopen(filename, "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    sscanf(filename, "%[^.]%*[.]", filename);

    if ((out = fopen(filename, "w+b")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    free(filename);

    while ((count = getc(in)) != EOF && (ch = getc(in)) != EOF) {
        while (count--) {
            putc(ch, out);
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}
