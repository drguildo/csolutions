#include <stdio.h>
#include "stack.h"

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

static int is_full(Stack *);

void make_empty(Stack *s) {
    s->top = 0;
}

int is_empty(Stack *s) {
    return s->top == 0;
}

void push(Stack *s, int n) {
    if (is_full(s)) {
        puts("error: stack full");
    } else {
        s->contents[s->top++] = n;
    }
}

int pop(Stack *s) {
    if (is_empty(s)) {
        puts("error: stack empty");
        return -1;
    } else {
        return s->contents[--s->top];
    }
}

static int is_full(Stack *s) {
    return s->top == STACK_SIZE;
}
