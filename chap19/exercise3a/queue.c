#include <stdio.h>
#include "queue.h"

#define QUEUE_SIZE 10

static int is_full(void);

static int queue[QUEUE_SIZE];
static int back = 0;

void qinsert(int n) {
    if (!is_full()) {
        queue[back++] = n;
    } else {
        puts("error: stack full");
    }
}

void qremove(void) {
    int i;

    if (back == 1) {
        back = 0;
        return;
    }

    if (!is_empty()) {
        for (i = 0; i < back-1; i++) {
            queue[i] = queue[i+1];
        }
        back--;
    } else {
        puts("error: stack empty");
    }
}

int qfirst(void) {
    if (!is_empty()) {
        return queue[0];
    } else {
        puts("error: stack empty");
        return 0;
    }
}

int qlast(void) {
    if (!is_empty()) {
        return queue[back-1];
    } else {
        puts("error: stack empty");
        return 0;
    }
}

int is_empty(void) {
    return back <= 0;
}

static int is_full(void) {
    return back >= QUEUE_SIZE;
}
