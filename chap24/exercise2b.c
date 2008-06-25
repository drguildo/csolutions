#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define TRY_MATH_FCN(f, x) try_math_fcn(f, x, "Error in call of " #f)

double try_math_fcn(double (*)(double), double, char *);

int main(void) {
	double x, y;

	x = 10.0;
	y = TRY_MATH_FCN(sqrt, x);
	printf("sqrt(%f) = %f\n", x, y);

	x = -3.0;
	y = TRY_MATH_FCN(sqrt, x);
	printf("sqrt(%f) = %f\n", x, y);

	return 0;
}

double try_math_fcn(double (*f)(double), double x, char *s) {
	double y;

	errno = 0;
	y = f(x);

	if (errno != 0) {
		perror(s);
		exit(EXIT_FAILURE);
	}

	return y;
}
