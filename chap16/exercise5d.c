#include <stdio.h>

#define FALSE 0
#define TRUE 1

typedef int Bool;

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

Bool lies_between(struct rectangle, struct point);

int main(void) {
    const struct rectangle r = {{2, 6}, {6, 2}};
    const struct point p = {3, 3};

    if (lies_between(r, p)) printf("p lies within r\n");
    else printf("p does not lie within r\n");

    return 0;
}

Bool lies_between(const struct rectangle r, const struct point p) {
    if (p.x >= r.upper_left.x && p.x <= r.lower_right.x && p.y >= r.lower_right.y && p.y <= r.upper_left.y) return TRUE;
    else return FALSE;
}
