#include <stdio.h>

int mfputs(const char *, FILE *);

int main(void) {
    char *str = "hello, world!\n";

    mfputs(str, stdout);

    return 0;
}

int mfputs(const char *s, FILE *stream) {
    while (*s) {
        if(putc(*s, stream) != EOF) {
            s++;
        } else {
            return EOF;
        }
    }
    return 0;
}
