struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

struct point center(struct rectangle);

int main(void) {
    return 0;
}

struct point center(const struct rectangle r) {
    struct point p;

    p.x = r.upper_left.x + ((r.lower_right.x - r.upper_left.x) / 2);
    p.y = r.lower_right.y + ((r.upper_left.y - r.lower_right.y) / 2);

    return p;
}
