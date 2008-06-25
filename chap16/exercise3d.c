struct complex {
    double re, im;
};

struct complex add_complex(struct complex, struct complex);

int main(void) {
    return 0;
}

struct complex add_complex(struct complex c1, struct complex c2) {
    struct complex c;

    c.re = c1.re + c2.re;
    c.im = c1.im + c2.im;

    return c;
}
