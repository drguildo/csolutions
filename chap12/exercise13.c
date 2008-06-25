#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

Bool search(int *, int, int);

int main() {
	int x, y, temperatures[7][24];
	Bool result;

	srand((unsigned) time(NULL));

	for(x = 0; x < 7; x++) {
		printf("Day %d:", x + 1);
		for(y = 0; y < 24; y++) {
			temperatures[x][y] = rand() % 34;
			printf("%3d", temperatures[x][y]);
		}
		printf("\n");
	}

	result = search(temperatures[0], 6 * 23, 32);

	if(result) {
		printf("Found\n");
	} else {
		printf("Not found\n");
	}

	return 0;
}

Bool search(int *a, int n, int key) {
	int *p;

	for(p = a; p < a + n; p++) {
		if(*p == key) {
			return TRUE;
		}
	}

	return FALSE;
}

