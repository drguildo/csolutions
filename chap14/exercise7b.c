#include <stdio.h>
#include <math.h>

#define DISP(f,x,y) printf(#f "(%g, %g) = %g\n", x, y, f(x))

int main() {
	DISP(sqrt, 3.0);
	return 0;
}

