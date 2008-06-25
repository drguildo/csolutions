struct complex {
    double re, im;
};

struct complex make_complex(double, double);

int main(void) {
    return 0;
}

struct complex make_complex(double real, double imaginary) {
    struct complex c;

    c.re = real;
    c.im = imaginary;

    return c;
}
