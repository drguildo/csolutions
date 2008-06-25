#include <stdio.h>

unsigned int rotate_left(unsigned int, int);
unsigned int rotate_right(unsigned int, int);

int main(void) {
    unsigned int i = 0x12341234;

    printf("0x%.8X\n", ~0 << 8);
    printf("0x%.8X\n", ~0 >> 8);
    printf("0x%.8X\n", 256 >> 8);

    printf("before: 0x%.8X\n", i);

    i = rotate_left(i, 8);
    printf("after rotate_left(): 0x%.8X\n", i);

    i = rotate_right(i, 8);
    printf("after rotate_right(): 0x%.8X\n", i);

    return 0;
}

unsigned int rotate_left(unsigned int i, int n) {
    unsigned int num_bits = (sizeof(unsigned int) * 8) - n;
    unsigned int mask = ~0 << num_bits;
    mask = (mask & i) >> num_bits;
    i = (i << n) | mask;
    return i;
}

unsigned int rotate_right(unsigned int i, int n) {
    unsigned int num_bits = (sizeof(unsigned int) * 8) - n;
    unsigned int mask = ~(~0 << n);
    mask = (mask & i) << num_bits;
    i = (i >> n) | mask;
    return i;
}
