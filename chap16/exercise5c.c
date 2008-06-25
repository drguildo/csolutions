struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

struct rectangle move(struct rectangle, int, int);

int main(void) {
    return 0;
}

struct rectangle move(struct rectangle r, int x, int y) {
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y += y;
    return r;
}
