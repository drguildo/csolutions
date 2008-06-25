#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

static int first_set = 0; /* Implementing abstract data types in C is
                             like trying to turn a bicycle into a
                             hovercraft. */

Queue queue_init(void) {
    Queue new_queue = malloc(sizeof(struct node));

    assert(new_queue != NULL);

    new_queue->prev = NULL;

    return new_queue;
}

void queue_insert(Queue q, int n) {
    struct node *new_node;

    if (first_set == 0) {
        q->value = n;
        first_set = 1;
        return;
    }

    new_node = malloc(sizeof(struct node));

    assert(new_node != NULL);

    new_node->value = n;
    new_node->prev = NULL;

    while (q->prev != NULL) {
        q = q->prev;
    }

    q->prev = new_node;
}

void queue_remove(Queue *q) {
    struct node *fucked;

    if (queue_is_empty(*q)) {
        puts("error: queue is empty");
        return;
    }

    if (first_set == 1 && (*q)->prev == NULL) {
        first_set = 0;
        return;
    }

    fucked = *q;
    *q = (*q)->prev;
    free(fucked);
}

int queue_first(Queue q) {
    if (queue_is_empty(q)) {
        puts("error: queue is empty");
        return -1;
    }

    return q->value;
}

int queue_last(Queue q) {
    if (queue_is_empty(q)) {
        puts("error: queue is empty");
        return -1;
    }

    while (q->prev != NULL) {
        q = q->prev;
    }

    return q->value;
}

int queue_is_empty(Queue q) {
    return first_set == 0 && q->prev == NULL;
}
