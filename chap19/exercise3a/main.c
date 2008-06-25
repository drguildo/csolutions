#include <stdio.h>
#include "queue.h"

int main(void) {
    int i;

    for(i = 0; i < 12; i++) {
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
