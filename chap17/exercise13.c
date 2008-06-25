#include <stdio.h>

int sum(int (*)(int), int, int);
int foo(int);

int main(void) {
    printf("%d\n", sum(foo, 1, 5));
    return 0;
}

int sum(int (*f)(int), int start, int end) {
    int sum = 0;

    while (start <= end) {
        sum += (*f)(start++);
    }

    return sum;
}

int foo(int n) {
    return n;
}
