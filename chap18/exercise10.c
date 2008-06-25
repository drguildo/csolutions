#define PI 3.14159

char c = 65;
static int i = 5, j = i * i; /* illegal. i must be constant. */
float f = 2 * PI;
double angles[] = {0, PI/2, PI, 3*PI/2};

int main(void) {
    return 0;
}
