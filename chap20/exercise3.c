#include <stdio.h>

#define M(x,y) ((x)^=(y),(y)^=(x),(x)^=(y))

int main(void) {
    unsigned int x = 2, y = 4;

    /* swaps the two values around */
    printf("before: %d %d\n", x, y);
    M(x, y);
    printf("after: %d %d\n", x, y);

    return 0;
}
