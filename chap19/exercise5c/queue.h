#ifndef QUEUE_H
#define QUEUE_H

typedef struct node {
    int value;
    struct node *prev;
} *Queue;

Queue queue_init(void);
void queue_insert(Queue, int);
void queue_remove(Queue *);
int queue_first(Queue);
int queue_last(Queue);
int queue_is_empty(Queue);

#endif
