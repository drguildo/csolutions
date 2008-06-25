typedef struct {
    double re, im;
} Complex;

Complex make_complex(double, double);

int main(void) {
    return 0;
}

Complex make_complex(double real, double imaginary) {
    Complex c;

    c.re = real;
    c.im = imaginary;

    return c;
}
