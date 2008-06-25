#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define QUEUE_SIZE 10 /* initital size of queue */

static int grow(Queue);

Queue queue_init(void) {
    Queue new_queue;

    new_queue = malloc(sizeof(struct queue));
    if (new_queue == NULL) {
        puts("error: malloc() failed to create new queue");
        exit(EXIT_FAILURE);
    }

    new_queue->contents = malloc(QUEUE_SIZE * sizeof(int));
    if (new_queue->contents == NULL) {
        puts("error: malloc() failed to create new queue contents");
        exit(EXIT_FAILURE);
    }

    new_queue->size = QUEUE_SIZE;
    new_queue->back = 0;

    return new_queue;
}

void queue_insert(Queue q, int n) {
    if (q->back == q->size && !grow(q)) {
        puts("error: queue is full and grow() failed");
        return;
    }
    q->contents[q->back++] = n;
}

void queue_remove(Queue *q) {
    int i;

    if (queue_is_empty(*q)) {
        puts("error: queue is empty");
        return;
    }

    if ((*q)->back == 1) {
        (*q)->back = 0;
        return;
    }

    for (i = 0; i < (*q)->back-1; i++) {
        (*q)->contents[i] = (*q)->contents[i+1];
    }

    (*q)->back--;
}

int queue_first(Queue q) {
    if (queue_is_empty(q)) {
        puts("error: queue is empty");
        return -1;
    }

    return q->contents[0];
}

int queue_last(Queue q) {
    if (queue_is_empty(q)) {
        puts("error: queue is empty");
        return -1;
    }

    return q->contents[q->back-1];
}

int queue_is_empty(Queue q) {
    return q->back == 0;
}

static int grow(Queue q) {
    int *new_array;

    new_array = realloc(q->contents, (q->size + QUEUE_SIZE) * sizeof(int));

    if (new_array == NULL) {
        puts("error: failed to grow() queue");
        return 0;
    } else {
        q->contents = new_array;
        q->size += QUEUE_SIZE;
        return 1;
    }
}
