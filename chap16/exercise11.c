#define RECTANGLE 0
#define CIRCLE 1

int main(void) {
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
    } s;

    s.shape_kind = RECTANGLE; /* legal as long as RECTANGLE is an int */
    s.center.x = 10; /* legal */
    s.length = 25; /* illegal - s.u.rectangle.length = 25 */
    s.u.rectangle.width = 8; /* legal */
    s.u.circle = 5; /* illegal - s.u.circle.radius = 5 */
    s.u.radius = 5; /* illegal - s.u.circle.radius = 5 */

    return 0;
}
