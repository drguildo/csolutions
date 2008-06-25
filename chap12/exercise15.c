#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_largest(int *, int);

int main() {
	int x, y, i, temperatures[7][24];

	srand((unsigned) time(NULL));

	for(x = 0; x < 7; x++) {
		printf("Day %d:", x + 1);
		for(y = 0; y < 24; y++) {
			temperatures[x][y] = rand() % 34;
			printf("%3d", temperatures[x][y]);
		}
		printf("\n");
	}

	for(i = 0; i < 7; i++) {
		printf("Day %d highest: %d\n", i, find_largest(temperatures[i], 24));
	}

	printf("\n");

	return 0;
}


int find_largest(int *a, int n)
{
	int largest = a[0];

	while(n-- > 0)
		if(a[n] > largest)
			largest = a[n];

	return largest;
}

