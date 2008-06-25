#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 100

typedef struct node {
    int value;
    struct node *next;
} *Stack;

void make_empty(Stack *);
int is_empty(Stack *);
void push(Stack *, int);
int pop(Stack *);

#endif
