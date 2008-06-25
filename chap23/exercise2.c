#include <math.h>
#include <stdio.h>

double myround(double, double);

int main(void) {
	double x = 3.14159;
	printf("before: %f after: %f\n", x, myround(x, 3));
	return 0;
}

double myround(double x, double n) {
	double f;

	x *= pow(10, n);

	f = modf(x, &f);

	if (f < 0.5)
		x = floor(x);
	else
		x = ceil(x);

	x *= pow(10, -n);

	return x;
}
