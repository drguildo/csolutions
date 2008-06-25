#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    unsigned short status = 0;

    if (argc < 2) {
        printf("usage: %s file1 [file2 [file3] ..]\n", argv[0]);
        return 2;
    }

    while (argc-- > 1) {
        if ((fp = fopen(argv[argc], "r")) == NULL) {
            printf("%s can't be opened\n", argv[argc]);
            status = 1;
        } else {
            printf("%s can be opened\n", argv[argc]);
            fclose(fp);
        }
    }

    return status;
}
