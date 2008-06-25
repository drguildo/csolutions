#include <stdio.h>
#include "stack.h"

int main(void) {
    int i;
    Stack s;

    make_empty(&s);

    for (i = 1; i < 102; i++) {
        push(&s, i);
    }

    while (!is_empty(&s)) {
        printf("%d\n", pop(&s));
    }

    return 0;
}
