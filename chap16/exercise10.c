#include <stdio.h>

int main(void) {
    struct {
        float a;
        union {
            char b[4];
            float c;
            int d;
        } e;
        char f[4];
    } s;

    printf("%d\n", sizeof s); /* 12 */

    return 0;
}
