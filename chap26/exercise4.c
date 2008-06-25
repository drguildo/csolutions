#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int a[] = {7, 11, 15, 19}, n;

	srand(time(NULL));
	n = a[rand() % 4];
	printf("%d\n", n);

	return 0;
}
