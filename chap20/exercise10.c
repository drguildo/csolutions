#include <stdio.h>

union f {
    struct {
        unsigned int fraction: 23;
        unsigned int exponent: 8;
        unsigned int sign: 1;
    } f1;
    float f2;
};

int main(void) {
    union f x;
    x.f1.sign = 1;
    x.f1.exponent = 128;
    x.f1.fraction = 0;
    printf("0x%X 0x%X 0x%X\n", x.f1.sign, x.f1.exponent, x.f1.fraction);
    printf("%f\n", x.f2);
    return 0;
}
