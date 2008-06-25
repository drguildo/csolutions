#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

struct node {
    int value;
    struct node *next;
};

static struct node *front = NULL, *back = NULL;

void qinsert(int n) {
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        puts("error: malloc() failed");
        return;
    }

    new_node->value = n;
    new_node->next = NULL;

    if (is_empty()) {
        front = new_node;
        back = front;
    } else {
        back->next = new_node;
        back = new_node;
    }
}

void qremove(void) {
    struct node *fucked;

    if (is_empty()) {
        puts("error: stack is empty");
    } else {
        fucked = front;
        front = front->next;
        free(fucked);
        if (is_empty()) {
            back = NULL;
        }
    }
}

int qfirst(void) {
    if (is_empty()) {
        puts("error: stack is empty");
        return 0;
    } else {
        return front->value;
    }
}

int qlast(void) {
    if (is_empty()) {
        puts("error: stack is empty");
        return 0;
    } else {
        return back->value;
    }
}

int is_empty(void) {
    return front == NULL;
}

