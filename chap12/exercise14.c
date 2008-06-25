#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int x, y, i, temperatures[7][24];
	int *p;

	srand((unsigned) time(NULL));

	for(x = 0; x < 7; x++) {
		printf("Day %d:", x + 1);
		for(y = 0; y < 24; y++) {
			temperatures[x][y] = rand() % 34;
			printf("%3d", temperatures[x][y]);
		}
		printf("\n");
	}

	printf("Day i = %d + 1:", i = 3);
	for(p = temperatures[i]; p < temperatures[i] + 24; p++) {
		printf("%3d", *p);
	}

	printf("\n");

	return 0;
}

