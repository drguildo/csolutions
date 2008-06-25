#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char ch;
    FILE *fp;
    int count = 0;

    if (argc != 2) {
        fprintf(stderr, "usage: %s source\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF) {
        if (isalnum(ch)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
