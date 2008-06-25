#include <stdio.h>

int read_token(char *type) {
    int token, next_token;

    while ((token = getchar()) != EOF) {
        if (token == '+' || token == '-' || token == '*' || token == '/') {
            *type = 'c';
            break;
        }
        if (isdigit(token)) {
            *type = 'n';
            token -= 48;
            while (isdigit(next_token = getchar())) {
                token *= 10;
                token += next_token - 48;
            }
            break;
        }
    }

    return token;
}
