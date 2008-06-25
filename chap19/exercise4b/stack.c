#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

/*
 * I know this sucks and leaks memory. I can't think of a better way of doing
 * this within the confines of the interface and the C language. Blame the
 * author.
 */

void make_empty(Stack *s) {
    *s = NULL;
}

int is_empty(Stack *s) {
    return *s == NULL;
}

void push(Stack *s, int n) {
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        puts("error: malloc() failed");
        return;
    }

    new_node->value = n;
    new_node->next = *s;
    *s = new_node;
}

int pop(Stack *s) {
    struct node *fucked = *s;
    int n = (*s)->value;

    *s = (*s)->next;

    free(fucked);

    return n;
}
