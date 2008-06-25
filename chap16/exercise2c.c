int main(void) {
    struct {
        double re, im;
    } c1 = {0.0, 0.1}, c2 = {0.0, 0.1}, c3;

    c1 = c2;

    return 0;
}
