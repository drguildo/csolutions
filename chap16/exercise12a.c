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

int area(struct shape);

int main(void) {
    struct shape s = {RECTANGLE, {0, 0}, {{2, 2}}};

    printf("%d\n", area(s));

    return 0;
}

int area(struct shape s) {
    if (s.shape_kind == RECTANGLE) {
        return s.u.rectangle.length * s.u.rectangle.width;
    } else if (s.shape_kind == CIRCLE) {
        return 3.14159265358979323846 * (s.u.circle.radius * s.u.circle.radius);
    } else {
        return -1;
    }
}
