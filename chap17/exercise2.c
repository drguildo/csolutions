#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strdup(const char *);

int main(void) {
    char *str = "test string", *new_str;

    new_str = strdup(str);
    if (new_str == NULL) {
        puts("error: malloc() failed.");
        return -1;
    } else {
        printf("%s\n", new_str);
        return 0;
    }
}

char *strdup(const char *str) {
    char *new_str = malloc(strlen(str) + 1); /* don't forget the '\0' */
    strcpy(new_str, str);
    return new_str;
}
