#include <stdio.h>

int main() {
	int i, j, k;

	/* 0 2 */
	i = 1;
	printf("%d ", i++ - 1);
	printf("%d\n", i);

	/* 4 11 6 */
	i = 10;
	j = 5;
	printf("%d ", i++ - ++j);
	printf("%d %d\n", i, j);

	/* 0 8 7 */
	i = 7;
	j = 8;
	printf("%d ", i++ - --j);
	printf("%d %d\n", i, j);

	/* 3 4 5 4 */
	i = 3;
	j = 4;
	k = 5;
	printf("%d ", i++ - j++ + --k);
	printf("%d %d %d\n", i, j, k);

	/* woot! right first time! */
	return 0;
}

