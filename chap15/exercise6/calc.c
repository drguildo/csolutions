#include <stdio.h>
#include "stack.h"
#include "token.h"

int main(void) {
    int token, total = 0;
    char type = 'x';

    while ((token = read_token(&type)) != EOF) {
        if (type == 'c' && !is_empty()) {
            total = pop();
            while (!is_empty()) {
                switch(token) {
                    case '+':
                        total = pop() + total;
                        break;
                    case '-':
                        total = pop() - total;
                        break;
                    case '*':
                        total = pop() * total;
                        break;
                    case '/':
                        total = pop() / total;
                        break;
                    }
            }
            push(total);
        } else if (type == 'n') {
            push(token);
        }
    }

    printf("%d\n", pop());

    return 0;
}
