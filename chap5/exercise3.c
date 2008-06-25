#include <stdio.h>

int main() {
	int i, j, k;

	i = 3;
	j = 4;
	k = 5;
	printf("%d ", i < j || ++j < k); /* 1 */
	printf("%d %d %d\n", i, j, k); /* 3 4 5 */

	i = 7;
	j = 8;
	k = 9;
	printf("%d ", i - 7 && j++ < k); /* 0 */
	printf("%d %d %d\n", i, j, k); /* 7 8 9 */

	i = 7;
	j = 8;
	k = 9;
	printf("%d ", (i = j) || (j = k)); /* 1 */
	printf("%d %d %d\n", i, j, k); /* 8 8 9 */

	i = 1;
	j = 1;
	k = 1;
	printf("%d ", ++i || ++j && ++k); /* 1 */
	printf("%d %d %d\n", i, j, k); /* 2 1 1 */

	return 0;
}

