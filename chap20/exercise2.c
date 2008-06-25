#include <stdio.h>

#define TOGGLE 8

int main(void) {
    unsigned int i = 0;

    i ^= TOGGLE;
    printf("%d\n", i);
    i ^= TOGGLE;
    printf("%d\n", i);
    i ^= TOGGLE;
    printf("%d\n", i);

    return 0;
}
