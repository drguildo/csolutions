#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *filename;
    FILE *in, *out;
    int cur, prev;
    int count = 1;

    if(argc != 3) {
        fprintf(stderr, "usage: %s original-file compressed-file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((in = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if (sscanf(argv[2], "%*[^.]%*[.]") == EOF) {
        filename = malloc(strlen(argv[2]) + 5);
        strcpy(filename, argv[2]);
        strcat(filename, ".rle");
    } else {
        filename = argv[2];
    }

    if ((out = fopen(filename, "w+b")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    free(filename);

    prev = getc(in);

    while ((cur = getc(in)) != EOF) {
        if (cur == prev) {
            count++;
        } else {
            fprintf(out, "%c%c", count, prev);
            prev = cur;
            count = 1;
        }
    }

    fprintf(out, "%c%c", count, prev);

    fclose(in);
    fclose(out);

    return 0;
}
