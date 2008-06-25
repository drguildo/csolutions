#ifndef QUEUE_H
#define QUEUE_H

/* I won't even pretend I had the foresight to add half this shit */

typedef struct {
} *Queue;

Queue queue_init(void);
void insert(Queue, int);
void queue_remove(Queue *);
int queue_first(Queue);
int queue_last(Queue);
int queue_is_empty(Queue);

#endif
