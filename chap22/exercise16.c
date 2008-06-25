#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int ch, count = 0;

    if(argc != 2) {
        fprintf(stderr, "usage: %s input_file output_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF) {
        if (count < 20) {
            printf("%.2x ", ch);
            count++;
        } else {
            printf("%.2x\n", ch);
            count = 0;
        }
    }

    puts("");

    return 0;
}
