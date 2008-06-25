#include <stdio.h>

int main() {
	int i, j, k;

	i = 2;
	j = 3;
	k = i * j == 6;
	printf("(a) %d\n", k); /* 1 */

	i = 5;
	j = 10;
	k = 1;
	printf("(b) %d\n", k > i < j); /* 1 */

	i = 3;
	j = 2;
	k = 1;
	printf("(c) %d\n", i < j == j < k); /* 1 */

	i = 3;
	j = 4;
	k = 5;
	printf("(d) %d\n", i % j + i < k); /* 0 */

	return 0;
}

