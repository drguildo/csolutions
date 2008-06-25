#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 100

typedef struct {
    int contents[STACK_SIZE];
    int top;
} Stack;

void make_empty(Stack *);
int is_empty(Stack *);
void push(Stack *, int);
int pop(Stack *);

#endif
