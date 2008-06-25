#include <stdio.h>

char *mfgets(char *, int, FILE *);

int main(void) {
    char buf[6];

    mfgets(buf, 6, stdin);
    printf("%s", buf);

    return 0;
}

char *mfgets(char *s, int size, FILE *stream) {
    int ch, i = 0;

    while (i < size-1 && (ch = getc(stream)) != EOF) {
        s[i++] = ch;
        if (ch == '\n') {
            break;
        }
    }

    s[i] = '\0';

    if (ch == EOF) {
        return NULL;
    }

    return s;
}
