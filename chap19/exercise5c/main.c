#include <stdio.h>
#include "queue.h"

int main(void) {
    int i;
    Queue q = queue_init();

    for (i = 0; i < 20; i++) {
        queue_insert(q, i);
        printf("%d - %d\n", queue_first(q), queue_last(q));
    }

    puts("--");

    for (i = 0; i < 20; i++) {
        printf("%d - %d\n", queue_first(q), queue_last(q));
        queue_remove(&q);
    }

    return 0;
}
