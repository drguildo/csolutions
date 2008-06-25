#include <stdio.h>

unsigned short int swap_bytes(unsigned short int);

int main(void) {
    unsigned short i;

    printf("Enter a hexadecimal number: ");
    scanf("%hx", &i);
    i = swap_bytes(i);
    printf("Number with bytes swapped: %hx\n", i);

    return 0;
}

/* my initial version was a single statement so i'm
 * fucked if i'm going to go back and rewrite it */
unsigned short int swap_bytes(unsigned short int i) {
    return ((i << 8) | (i >> 8));
}
