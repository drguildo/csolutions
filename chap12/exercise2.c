#include <stdio.h>

int main() {
	int a[] = {5, 15, 34, 54, 14, 9};
	int *low = &a[0], *middle, *high = &a[5];

	/*
	 * pointer arithmetic only supports:
	 *   pointer + integer
	 *   pointer - integer
	 *   pointer - pointer
	 */

	while(high > low) {
		high--;
		low++;
	}

	middle = low; /* favour highest numbered element as in
									 previous exercises */

	printf("%d\n", *middle);

	return 0;
}

