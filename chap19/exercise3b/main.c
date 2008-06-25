#include <stdio.h>
#include "queue.h"

int main(void) {
    int i;

    for(i = 1; i < 11; i++) {
        qinsert(i);
        printf("%d\n", qfirst());
        printf("%d\n", qlast());
    }

    puts("--");

    while (!is_empty()) {
        printf("%d\n", qfirst());
        printf("%d\n", qlast());
        qremove();
    }

    return 0;
}
