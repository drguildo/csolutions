#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

struct node {
    int value;
    struct node *next;
} *top = NULL;

void make_empty(void);
int is_empty(void);
int push(int i);
int pop(void);

int main(void) {
    push(2);
    push(4);
    push(6);
    printf("%d\n", pop());
    make_empty();
    pop();

    return 0;
}

void make_empty(void) {
    struct node *cur = top, *next;

    while (cur != NULL) {
        next = cur->next;
        free(cur);
        cur = next;
    }

    top = NULL;
}

int is_empty(void) {
    return top == NULL;
}

int push(int i) {
    struct node *cur = top, *new_node;

    new_node = malloc(sizeof(struct node));

    if (new_node == NULL) {
        return FALSE;
    }

    new_node->value = i;
    new_node->next = NULL;

    if (is_empty()) {
        top = new_node;
    } else {
        while (cur->next != NULL) {
            cur = cur->next;
        }
        cur->next = new_node;
    }

    return TRUE;
}

int pop(void) {
    int n;
    struct node *cur = top;

    if (is_empty()) {
        puts("error: stack is empty.");
        exit(EXIT_FAILURE);
    }

    if (top->next == NULL) {
        n = top->value;
        free(top);
        top = NULL;
        return n;
    }

    while (cur->next->next != NULL) {
        cur = cur->next;
    }

    n = cur->next->value;
    free(cur->next);
    cur->next = NULL;

    return n;
}
