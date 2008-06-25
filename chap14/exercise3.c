#include <stdio.h>

#define DOUBLE(x) (2*(x))

/*
 * (a) DOUBLE(1+2) = 2*1+2 = 2+2 = 4 - * has a higher presedence than +
 * (b) 4/DOUBLE(2) = 4/2*2 = 2*2 = 4 - * and / are left associative
 */

int main() {
	printf("%d\n", DOUBLE(1+2));
	printf("%d\n", 4/DOUBLE(2));
	return 0;
}

