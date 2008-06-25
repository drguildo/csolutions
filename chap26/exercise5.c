#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double randd(void);

int main(void) {
	printf("%.1f\n", randd());
	return 0;
}

double randd(void) {
	srand(time(NULL));
	/* not sure which he means. */
	/* return 1.0 / rand(); */
	return (rand() % 11) / 10.0;
}
