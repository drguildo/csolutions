#include <stdio.h>

int main() {
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];

	printf("%d\n", *(p+3));  /* 14 */
	printf("%d\n", *(q-3));  /* 34 */
	printf("%d\n", q - p);   /* 4 */
	printf("%d\n", p < q);   /* 1 */
	printf("%d\n", *p < *q); /* 0 */

	return 0;
}

