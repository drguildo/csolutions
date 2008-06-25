#include <stdlib.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };
struct rectangle *p;

int main(void) {
    p = malloc(sizeof(struct point));
    p->upper_left.x = 0;
    p->upper_left.y = 1;
    p->lower_right.x = 1;
    p->lower_right.y = 0;

    return 0;
}
