#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[100];

int compare(const void *, const void *);

int main(void) {
    int i;

    srand((unsigned)time(NULL));

    puts("before:");
    for (i = 0; i < 100; i++) {
        a[i] = rand() % 100;
        printf("a[%d] = %d\n", i, a[i]);
    }

    qsort(a + 50, 50, sizeof(int), compare);

    puts("after:");
    for (i = 0; i < 100; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}

int compare(const void *first, const void *second) {
    return *(int *)first - *(int *)second;
}
