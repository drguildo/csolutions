#include <stdio.h>

int i, j, n;
float x;

/*
 * 10 20 30    n: 3, i: 10, x: 20.0, j: 30
 * 1.0 2.0 3.0 n: 3, i: 1, x: 0.0, j: 2
 * 0.1 0.2 0.3 n: 3, i: 0, x: 0.1, j: 0
 * .1 .2 .3    n: 0, i: ?, x: ?, j: ?
 */
int main(void) {
    n = scanf("%d%f%d", &i, &x, &j);
    printf("i: %d x: %f j: %d\n", i, x, j);
    return 0;
}
