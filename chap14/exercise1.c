#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER(x) ((x) % 4)
#define PROD(x) ((x) < 100 ? 1 : 0)

int main() {
	printf("CUBE(3) = %d\n", CUBE(3));
	printf("REMAINDER(13) = %d\n", REMAINDER(13));
	printf("PROD(113) = %d\n", PROD(113));

	return 0;
}

