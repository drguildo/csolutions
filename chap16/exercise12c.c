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

enum Bool {TRUE, FALSE};

enum Bool lieswithin(struct point, struct shape);

int main(void) {
    struct shape s = {RECTANGLE, {200, 100}, {{20, 10}}};
    struct point p = {200, 100};

    printf("%d\n", lieswithin(p, s));

    return 0;
}

enum Bool lieswithin(struct point p, struct shape s) {
    if (s.shape_kind == RECTANGLE) {
        struct point upper_left;
        struct point lower_right;

        upper_left.x = s.center.x - (s.u.rectangle.length / 2);
        upper_left.y = s.center.y + (s.u.rectangle.width / 2);
        lower_right.x = s.center.x + (s.u.rectangle.length / 2);
        lower_right.y = s.center.y - (s.u.rectangle.width / 2);

        if (p.x >= upper_left.x && p.x <= lower_right.x &&
                p.y >= lower_right.y && p.y <= upper_left.y) {
            return TRUE;
        } else {
            return FALSE;
        }
    } else if (s.shape_kind == CIRCLE) {
        printf("This exercise is retarded\n");
        return FALSE;
    } else {
        return FALSE;
    }
}
