struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

int area(struct rectangle);

int main(void) {
    return 0;
}

int area(const struct rectangle r) {
    return (r.upper_left.y - r.lower_right.y) * (r.lower_right.x - r.upper_left.x);
}
