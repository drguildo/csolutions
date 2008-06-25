#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue {
    int *contents;
    int size;
    int back;
} *Queue;

Queue queue_init(void);
void queue_insert(Queue, int);
void queue_remove(Queue *);
int queue_first(Queue);
int queue_last(Queue);
int queue_is_empty(Queue);

#endif
