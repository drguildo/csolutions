#include <stdio.h>

#define RECTANGLE 0
#define CIRCLE 1

struct point {
    int x, y;
};

struct shape {
    int shape_kind;
    struct point center;
    union {
        struct {
            int length, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
};

struct point center(struct shape);

int main(void) {
    struct shape s = {RECTANGLE, {0, 0}, {{2, 2}}};
    struct point p = center(s);

    printf("%d %d\n", p.x, p.y);

    return 0;
}

struct point center(struct shape s) {
    struct point p = {0, 0};

    /* how the fuck are you supposed to calculate the center of
     * a circle given only the radius? */

    if (s.shape_kind == RECTANGLE) {
        p.x = s.u.rectangle.length / 2;
        p.y = s.u.rectangle.width / 2;
    } else if (s.shape_kind == CIRCLE) {
        p = s.center;
    }

    return p;
}
