#include <stdio.h>
#include <stdlib.h>

void *my_malloc(int);

int main(void) {
    return 0;
}

void *my_malloc(int n) {
    void *p = malloc(n);
    if (p == NULL) {
        puts("error: malloc() failed.");
        exit(EXIT_FAILURE);
    } else {
        return p;
    }
}
