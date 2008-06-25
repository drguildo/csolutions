#include <stdio.h>

#define MK_COLOR(r, g, b) (((((0L | r) << 8) | g) << 8) | b)

int main(void) {
    unsigned long i;
    i = MK_COLOR(1, 2, 4);
    return 0;
}
