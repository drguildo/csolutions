#include <stddef.h>
#include <stdio.h>

struct s {
    char a;
    int b[2];
    float c;
};

int main(void) {
    struct s x;
    puts("Object\tSize\tOffset");
    printf("x\t%d\n", sizeof(x));
    printf("x.a\t%d\t%d\n", sizeof(x.a), offsetof(struct s, a));
    printf("x.b\t%d\t%d\n", sizeof(x.b), offsetof(struct s, b));
    printf("x.c\t%d\t%d\n", sizeof(x.c), offsetof(struct s, c));
    return 0;
}
