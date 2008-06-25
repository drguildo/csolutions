#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double a, b, c, x;
	double blah;

	printf("a: ");
	if (scanf("%lf", &a) != 1) {
		fprintf(stderr, "*die*\n");
		exit(EXIT_FAILURE);
	}

	printf("b: ");
	if (scanf("%lf", &b) != 1) {
		fprintf(stderr, "*die*\n");
		exit(EXIT_FAILURE);
	}

	printf("c: ");
	if (scanf("%lf", &c) != 1) {
		fprintf(stderr, "*die*\n");
		exit(EXIT_FAILURE);
	}

	printf("a: %f b: %f c: %f\n", a, b, c);

	x = pow(b, 2.0) - 4 * a * c;

	if (x < 0) {
		fprintf(stderr, "TEH ROOTZ R IMAGINARY!!1\n");
		exit(EXIT_FAILURE);
	}

	x = sqrt(x);

	x = -b + x;

	x = x / (2 * a);

	printf("x: %f\n", x);

	blah = a * pow(x, 2.0);
	blah += b * x;
	blah += c;

	printf("%f = 0(?)\n", blah);

	return 0;
}
