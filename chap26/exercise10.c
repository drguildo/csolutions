#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100

int compar(const void *, const void *);

int main(void) {
	clock_t start_clock = clock();
	int a[ARRAY_SIZE], i, n = ARRAY_SIZE-1;

	for (i = 0; i < ARRAY_SIZE; i++)
		a[i] = n--;

	qsort(a, ARRAY_SIZE, sizeof(a[0]), compar);

	printf("Processor time used: %g sec\n",
	    (clock() - start_clock) / (double)CLOCKS_PER_SEC);

	return 0;
}

int compar(const void *i1, const void *i2) {
	return *(int *)i1 - *(int *)i2;
}
