typedef struct {
    double re, im;
} Complex;

Complex add_complex(Complex, Complex);

int main(void) {
    return 0;
}

Complex add_complex(Complex c1, Complex c2) {
    Complex c;

    c.re = c1.re + c2.re;
    c.im = c1.im + c2.im;

    return c;
}
