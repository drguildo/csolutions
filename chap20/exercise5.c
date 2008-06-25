#include <stdio.h>

#define MK_COLOR(r, g, b) (((((0L | r) << 8) | g) << 8) | b)

#define GET_RED(rgb) ((rgb & 0x00FF0000L) >> 16)
#define GET_GREEN(rgb) ((rgb & 0x0000FF00L) >> 8)
#define GET_BLUE(rgb) (rgb & 0x000000FFL)

int main(void) {
    unsigned long colour = MK_COLOR(2, 4, 6);
    printf("%ld\n", GET_RED(colour));
    printf("%ld\n", GET_GREEN(colour));
    printf("%ld\n", GET_BLUE(colour));
    return 0;
}
